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

    // Arrays to store song recommendations for each genre
    vector<string> countrySongs = {
        "Tennessee Whiskey by Chris Stapleton",
        "The Good Ones by Gabby Barrett",
        "Heartbreak Highway by Luke Combs"
    };
    
    vector<string> rockAndRollSongs = {
        "Johnny B. Goode by Chuck Berry",
        "Rock Around the Clock by Bill Haley",
        "Great Balls of Fire by Jerry Lee Lewis"
    };
    
    vector<string> reggaeSongs = {
        "No Woman No Cry by Bob Marley",
        "Three Little Birds by Bob Marley",
        "Red Red Wine by UB40"
    };
    
    vector<string> popularSongs = {
        "Shape of You by Ed Sheeran",
        "Bad Habits by Ed Sheeran",
        "Flowers by Miley Cyrus"
    };
    
    vector<string> indieRockSongs = {
        "Mr. Brightside by The Killers",
        "Somebody Told Me by The Killers",
        "Take Me Out by Franz Ferdinand"
    };
    
    vector<string> latinaSongs = {
        "Despacito by Luis Fonsi ft. Daddy Yankee",
        "Macarena by Los del Rio",
        "Bamboléo by Gipsy Kings"
    };
    
    vector<string> popRockSongs = {
        "Don't Stop Me Now by Queen",
        "Livin' on a Prayer by Bon Jovi",
        "We Will Rock You by Queen"
    };
    
    vector<string> altRnbSongs = {
        "Blinding Lights by The Weeknd",
        "Good 4 U by Olivia Rodrigo",
        "Peaches by Justin Bieber"
    };
    
    vector<string> altRockSongs = {
        "Smells Like Teen Spirit by Nirvana",
        "Creep by Radiohead",
        "Gorillaz"
    };
