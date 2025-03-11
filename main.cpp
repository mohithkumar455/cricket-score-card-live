#include"cricket_scorecard.h"

int main() {
    
    std::vector<Batsman> india_batsmen = {
        {"Rohit Sharma", 80, 84, 6, 2, 95.24, 0, "Out"},
        {"Shubman Gill", 20, 25, 2, 0, 80.00, 0, "Out"},
        {"Virat Kohli", 113, 91, 12, 1, 124.18, 1, "Not Out"},
        {"KL Rahul", 97, 115, 8, 2, 84.35, 0, "Not Out"},
        {"Shreyas Iyer", 0, 2, 0, 0, 0.00, 0, "Out"},
        {"Hardik Pandya", 8, 9, 1, 0, 88.89, 0, "Out"},
        {"Ravindra Jadeja", 35, 28, 3, 1, 125.00, 0, "Out"}
    };

    std::vector<Bowlers> india_bowlers = {
        {"Jasprit Bumrah", 10, 35, 3, 1, 3.50},
        {"Mohammed Siraj", 9, 50, 1, 0, 5.55},
        {"Kuldeep Yadav", 10, 48, 2, 0, 4.80},
        {"Ravindra Jadeja", 10, 43, 1, 0, 4.30},
        {"Hardik Pandya", 5, 34, 0, 0, 6.80}
    };

    std::vector<Batsman> australia_batsmen = {
        {"David Warner", 41, 52, 6, 0, 78.85, 0, "Out"},
        {"Mitchell Marsh", 0, 1, 0, 0, 0.00, 0, "Out"},
        {"Steve Smith", 46, 71, 5, 0, 64.79, 0, "Out"},
        {"Marnus Labuschagne", 27, 41, 2, 0, 65.85, 0, "Out"},
        {"Alex Carey", 0, 5, 0, 0, 0.00, 0, "Out"},
        {"Glenn Maxwell", 15, 18, 1, 1, 83.33, 0, "Out"},
        {"Cameron Green", 8, 10, 0, 0, 80.00, 0, "Out"},
        {"Pat Cummins", 0, 0, 0, 0, 0.00, 0, "Out"},
        {"Mitchell Starc", 6, 11, 1, 0, 54.55, 0, "Out"},
        {"Adam Zampa", 8, 22, 0, 0, 36.36, 0, "Out"},
        {"Josh Hazlewood", 0, 0, 0, 0, 0.00, 0, "Out"}
    };

    std::vector<Bowlers> australia_bowlers = {
        {"Mitchell Starc", 10, 55, 1, 0, 5.50},
        {"Josh Hazlewood", 10, 48, 1, 1, 4.80},
        {"Pat Cummins", 10, 68, 0, 0, 6.80},
        {"Glenn Maxwell", 10, 49, 0, 0, 4.90},
        {"Adam Zampa", 10, 53, 3, 0, 5.30},
        {"Cameron Green", 6, 45, 2, 0, 7.30}
    };

    Match match1 = { "ODI", "India vs Australia", "2023-10-08", "2:00 PM", "India", "Australia", "India", "Bat", "Umpire A, Umpire B", 352, 7 };
    Venue_guide venue1 = { "MA Chidambaram Stadium", "Chennai", 50000, "Anna End, Pavilion End", "International Cricket Matches" };
    Tv_guide_in tv1 = { "Sports", "Star Sports 1" };

    Squad indiaSquad = { "India", {"Rohit Sharma", "Shubman Gill", "Virat Kohli", "KL Rahul", "Shreyas Iyer", "Hardik Pandya", "Ravindra Jadeja", "Jasprit Bumrah", "Mohammed Siraj", "Kuldeep Yadav", "Mohammed Shami"} };
    Squad australiaSquad = { "Australia", {"David Warner", "Mitchell Marsh", "Steve Smith", "Marnus Labuschagne", "Alex Carey", "Glenn Maxwell", "Cameron Green", "Pat Cummins", "Mitchell Starc", "Adam Zampa", "Josh Hazlewood"} };

    full_scorecard(india_batsmen, india_bowlers, australia_batsmen, australia_bowlers, match1, venue1, tv1, "India", 352, 199, indiaSquad, australiaSquad);

    return 0;
}