# include <iostream>
using namespace std;
# include <string>
# include <vector>
# include <limits>
# include <cmath>
#include <chrono>
#include <thread>
#include <array>
#include <algorithm>


void d(vector<string>& da, vector<int>& age, vector<string>& gender, vector<string>& nationality , vector<string>&super) {
    string name, gend, job_status;
    int a;
    int i;
    this_thread::sleep_for(chrono::microseconds(1000));
    cout << "\nDear Employee : \n\n If you haven’t registered yet, please make sure to do so by pressing 1 Otherwise, you may leave\n";
    int press;
    cin >> press;
    if (press == 1) {
        do
        {
            this_thread::sleep_for(chrono::microseconds(1000));
            cout << "Provide your name: ";
            cin >> name;
            da.push_back(name);

            this_thread::sleep_for(chrono::microseconds(1000));
            cout << "Provide your age: ";
            cin >> a;
            age.push_back(a);

            this_thread::sleep_for(chrono::microseconds(1000));
            cout << "Provide your gender: ";
            cin >> gend;
            gender.push_back(gend);

            this_thread::sleep_for(chrono::microseconds(1000));
            cout << "Provide your job statsu:\n ";
            cin >> job_status;
            nationality.push_back(job_status);

            cout << " confirm the data if ok return 1 else return any\n\n\n";

            cout << "Name :" << da[0] << endl;
            cout << "Age :" << age[0] << endl;
            cout << "Gender :" << gender[0] << endl;
            cout << "job status :" << nationality[0] << endl;

            cout << endl << endl << endl;


            cin >> i;
            if ((i != 1)) {

                da.pop_back();

                age.pop_back();

                gender.pop_back();

                nationality.pop_back();


            }


        } while (i != 1);

    }
    super.push_back("pending");

    

}

void S(array<int, 4> ipq, array<int, 4> inq , int &SUN , int &MOON) {

    for (int i = 0; i < 4; i++) {
        SUN += ipq[i];
    }
    for (int i = 0; i < 4; i++) {
        MOON += inq[i];
    }
}


double Xob(array<int,4> ipq, array<int,4> inq , int SUN , int MOON ) {

    int sumS = 0, suml = 0;
    double all_l = 0, all_m = 0;

    for (int i = 0; i < 4; i++) {

        sumS += ipq[i];
        suml += inq[i];
    }

    for (int i = 0; i < 4; i++) {

        all_l += pow((ipq[i] - (double)sumS / 4), 2);
        all_m += pow((inq[i] -(double)suml / 4), 2);

    }
    all_l = sqrt(all_l / 4);
    all_m = sqrt(all_m / 4);


    double SCORE = (double)(all_l / all_m) * (double)SUN/(double)MOON;

    return SCORE;


    

}


void check(array<string,4> pg, array<int,4> ipq, array<string,4>nq, array<int,4> inq, int SUN, int MOON) {
    int deno[8] = { 1 , 1, 1, 1, 1 , 1, 1, 1 };
    cout << endl << endl;
    this_thread::sleep_for(chrono::microseconds(30000));
    
    cout << "you will be possed with question to each question infer with if yes return 1 or no then return 0";
    
    cout << endl << endl;

    int s;
    do {
        int ans;
        for (int i = 0; i < 4; i++) {
            cin.clear();

            cout << i + 1 << ": " << pg[i] << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> ans;

            if (ans == 0) {
                ipq[i] = 0;
                deno[i] = 0;
            }
        }
        for (int i = 0; i < 4; i++) {

            cout << i + 5 << ": " << nq[i] << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> ans;

            if (ans == 0) {
                inq[i] = 0;
                deno[i + 4] = 0;
            }




        }
        cout << " your data is as follow to continu press 2 else you will be asked for input agin" << endl<<endl;
        for (int i = 0; i < 4; i++) {

            cout << i + 1 << ": " << pg[i] << "[" << deno[i] << "]" << endl;

        }

        for (int i = 0; i < 4; i++) {

            cout << i + 5 << ": " << nq[i] << "[" << deno[i + 4] << "]" << endl;

        }

        cin >> s;
    } while (s != 2);


    Xob(ipq, inq ,SUN,MOON);




}


void Display(vector<string>&nam, vector<int>&age, vector<string>&numb, vector<string>&status, vector<string>&super) {

    for (int i = 0; i < nam.size(); i++) {

        cout << i + 1 << "   "  <<  nam[i] << "   " << age[i] << "   " << numb[i] << "   " << status[i] << "   " << super[i];

    }
}

std::string toLower(const std::string& str) {
    std::string result = str;
    std::transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}



void commit(int &positiveCount , int &negativeCount) {

    std::vector<std::string> positiveWords = {
        "good", "happy", "love", "excellent", "great", "wonderful", "amazing", "like",
        "joy", "joyful", "delight", "delighted", "cheerful", "optimistic", "positive",
        "fantastic", "brilliant", "outstanding", "superb", "incredible", "fabulous",
        "awesome", "marvelous", "splendid", "terrific", "glorious", "successful",
        "accomplished", "peaceful", "calm", "friendly", "kind", "generous", "helpful",
        "supportive", "beautiful", "handsome", "charming", "graceful", "bright",
        "creative", "innovative", "smart", "intelligent", "wise", "strong", "powerful",
        "confident", "motivated", "inspired", "hopeful", "encouraging", "enthusiastic",
        "energetic", "fun", "funny", "playful", "adventurous", "curious", "lovely",
        "sweet", "caring", "compassionate", "affectionate", "romantic", "loyal",
        "trustworthy", "honest", "reliable", "resilient", "determined", "brave",
        "courageous", "fearless", "healthy", "fit", "strong-willed", "hardworking",
        "dedicated", "passionate", "talented", "skilled", "capable", "resourceful",
        "successful", "victorious", "winner", "thriving", "prosperous", "wealthy",
        "fortunate", "blessed", "grateful", "thankful", "appreciative", "positive-minded",
        "uplifting", "radiant", "vibrant", "glowing", "smiling", "laughing", "joyous"
    };
    std::vector<std::string> negativeWords = {
        "bad", "sad", "hate", "terrible", "awful", "horrible", "poor", "don't like",
        "frustrating", "boring", "angry", "upset", "annoyed", "disappointed", "miserable",
        "depressed", "lonely", "unhappy", "unpleasant", "painful", "hurt", "sick", "ill",
        "weak", "failure", "loser", "worthless", "useless", "hopeless", "pathetic",
        "disgusting", "gross", "nasty", "dirty", "messy", "chaotic", "confusing",
        "difficult", "hard", "problem", "issue", "error", "wrong", "fake", "liar",
        "selfish", "greedy", "jealous", "envy", "angst", "fear", "scared", "afraid",
        "anxious", "nervous", "stress", "stressed", "tired", "exhausted", "lazy",
        "ignorant", "stupid", "dumb", "foolish", "arrogant", "rude", "mean", "cruel",
        "violent", "abusive", "toxic", "negative", "unfair", "unjust", "corrupt",
        "evil", "sinful", "shameful", "guilty", "regret", "resentful", "bitter",
        "broken", "damaged", "lost", "confused", "trapped", "stuck", "weakness",
        "unreliable", "fake", "annoying", "disrespectful", "untrustworthy", "manipulative",
        "controlling", "oppressive", "harsh", "cold", "distant", "unfriendly"
    };

    std::string input;
    std::cout << "Enter your text: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    std::getline(std::cin, input);

    input = toLower(input);


    for (const auto& pos : positiveWords) {
        if (input.find(pos) != std::string::npos) {
            positiveCount++;
        }
    }
    for (const auto& neg : negativeWords) {
        if (input.find(neg) != std::string::npos) {
            negativeCount++;
        }
    }

}

void observe(int& positiveCount, int& negativeCount) {

    if (positiveCount > negativeCount) {
        std::cout << "Overall Sentiment: Positive\n";
    }
    else if (negativeCount > positiveCount) {
        std::cout << "Overall Sentiment: Negative\n";
    }
    else {
        std::cout << "Overall Sentiment: Neutral\n";
    }

}




int main() {
  
        
        vector<string>name;
        vector<int>age;
        vector<string>phone_number;
        vector<string>job_status;
        vector<string>super;

        array<string, 4>Positive_Questions = { "Biologically, you are fit — meaning your body is functioning efficiently, your systems are well‑regulated, and you possess the physical and physiological traits that support healthy survival and performance  ","As part of my routine work responsibilities, I travel more than 50 kilometers each day.","The family structure includes over six individuals living together as part of the household.","I am facing financial obligations—including debt, loans, a mortgage, and regular bills—that exceed my current income" };
        array<int, 4>  PositiveV = { 10 ,10 ,10 ,10 };
        array<string, 4> medium_value_questions = { "I maintain excellent harmony and cooperation with my co‑members, ensuring smooth teamwork and communication.","I have consistently given more than my full effort and invested additional time in my job responsibilities.","1","2" };
        array<int, 4> negativeV = { 2 ,2 ,2 ,2 };


        int positiveCount = 0, negativeCount = 0;


        vector<string>pass;
        while (true) {

            string display[6]{ "worker regitration " , " system log" , "validation" , "commit","check","system effection" };
            int num;

            cout << "------------------------------Table of data-------------------" << endl;

            for (int i = 0; i < 5; i++) {

                cout << i + 1 << " :   " << display[i] << endl;
            }
            cin >> num;
            if (num == 1) {

                d(name, age, phone_number, job_status, super);
                system("cls");


            }

            if (num == 5) {
                int sun = 0, moon = 0;
                S(PositiveV, negativeV, sun, moon);
                check(Positive_Questions, PositiveV, medium_value_questions, negativeV, sun, moon);
                system("cls");
            }

            if (num == 2) {
                Display(name, age, phone_number, job_status, super);
                system("cls");
            }
            if (num == 4) {

                commit(positiveCount, negativeCount);

            }
            if (num == 6) {

                observe(positiveCount, negativeCount);

            }


        }
}