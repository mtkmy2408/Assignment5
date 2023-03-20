#include <string>
using namespace std;

class Question {
private:
    string question;
    string answer1;
    string answer2;
    string answer3;
    string answer4;
    int correctAnswer;
public:
    Question(string q, string a1, string a2, string a3, string a4, int ca) {
        question = q;
        answer1 = a1;
        answer2 = a2;
        answer3 = a3;
        answer4 = a4;
        correctAnswer = ca;
    }
    string getQuestion() const {
        return question;
    }
    string getAnswer1() const {
        return answer1;
    }
    string getAnswer2() const {
        return answer2;
    }
    string getAnswer3() const {
        return answer3;
    }
    string getAnswer4() const {
        return answer4;
    }
    int getCorrectAnswer() const {
        return correctAnswer;
    }
    void setQuestion(string q) {
        question = q;
    }
    void setAnswer1(string a1) {
        answer1 = a1;
    }
    void setAnswer2(string a2) {
        answer2 = a2;
    }
    void setAnswer3(string a3) {
        answer3 = a3;
    }
    void setAnswer4(string a4) {
        answer4 = a4;
    }
    void setCorrectAnswer(int ca) {
        correctAnswer = ca;
    }
};