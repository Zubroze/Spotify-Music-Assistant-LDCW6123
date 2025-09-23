#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to display the main menu
void displayMainMenu() {
    cout << "\n=================================" << endl;
    cout << "   SPOTIFY MUSIC ASSISTANT" << endl;
    cout << "=================================" << endl;
    cout << "1. Music Recommendations" << endl;
    cout << "2. Subscription Plans" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
}

// Function to get music recommendation based on genre
void getMusicRecommendation() {
    cout << "\n--- MUSIC RECOMMENDATION ---" << endl;
    cout << "Choose your favorite genre:" << endl;
    cout << "1. Country Music" << endl;
    cout << "2. Rock and Roll" << endl;
    cout << "3. Reggae" << endl;
    cout << "4. Popular Music" << endl;
    cout << "5. Indie Rock" << endl;
    cout << "6. Latina" << endl;
    cout << "7. Pop Rock" << endl;
    cout << "8. Alternative R&B" << endl;
    cout << "9. Alternative Rock" << endl;
    cout << "Enter genre choice (1-9): ";
    
    int genreChoice;
    cin >> genreChoice;
