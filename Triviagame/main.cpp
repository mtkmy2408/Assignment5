#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int askQuestion(const question & q);

int main() {
    srand(time(0)); // seed the random number generator

        Question questions[10] = {
        Question("What is the capital of France?", "Paris", "Madrid", "Rome", "Berlin", 1),
        Question("Who wrote the Harry Potter books?", "J.K. Rowling", "Stephen King", "Dan Brown", "George R.R. Martin", 1),
        Question("What is the largest planet in our solar system?", "Jupiter", "Mars", "Venus", "Mercury", 1),
        Question("Which country is home to the kangaroo?", "Australia", "Brazil", "China", "Russia", 1),
        Question("Who painted the Mona Lisa?", "Leonardo da Vinci", "Pablo Picasso", "Vincent van Gogh", "Claude Monet", 1),
        Question("What is the name of the highest mountain in Africa?", "Mount Kilimanjaro", "Mount Everest", "Mount Fuji", "Mount McKinley", 1),
        Question("Which river runs through Egypt?", "Nile", "Amazon", "Mississippi", "Yangtze", 1),
        Question("What is the smallest country in the world?", "Vatican City", "Monaco", "San Marino", "Liechtenstein", 1),
        Question("Who invented the telephone?", "Alexander Graham Bell", "Thomas Edison", "Benjamin Franklin", "Nikola Tesla", 1),
        Question("What is the largest mammal in the world?", "Blue Whale", "Elephant", "Hippopotamus", "Giraffe", 1)
    };

    int scores[2] = {0}; // initialize both scores to zero

    for (int i = 0; i < 10; i++) {
        int player = i % 2; // determine which


    }
}
