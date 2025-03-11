#include <iostream>
#include <string>
#include <vector>
#include <iomanip>


struct Player
{
    std::string name;
    std::string role;
};

struct Squad 
{
    std::string teamName;
    std::vector<std::string> players; 
};

struct Scorecard
{
    std::string team1Name;
    std::string team2Name;
    int team1Score;
    int team2Score;
    std::string result;
};

struct Batsman
{
    std::string batsman_name;
    int runs;
    int balls_faced;
    int fours;
    int sixes;
    double strike_rate;
    int hundred_halfhundred;
    std::string out_notout;
};

struct Bowlers 
{
    std::string bowlers_name;
    int overs;
    int runs_given;
    int wickets;
    int maidens;
    double economy_rate;
};

struct Match 
{
    std::string match_type;
    std::string series;
    std::string date;
    std::string time;
   std::string team_A;
  std::string team_B;
  std::string toss_winner;
  std::string toss_decision;
 std::string umpires;
int total_runs;
int total_wickets;
};

struct Venue_guide 
{
    std::string stadium;
    std::string city;
    int capacity;
    std::string ends;
    std::string hosts_to;
};

struct Tv_guide_in 
{
    std::string channel_type;
    std::string tv;
};

void display_player(const Player& p);
void display_squad(const Squad& s);
void display_scorecard(const Scorecard& s);
void display_Batsman(const Batsman& b);
void display_Bowlers(const Bowlers& bb);
void display_Match(const Match& m);
void display_Venue_guide(const Venue_guide& vg);
void display_Tv_guide_in(const Tv_guide_in& tg);
void display_batsman_squad(const std::vector<Batsman>& batsmen, const std::string& teamName, int totalScore);
void display_bowler_squad(const std::vector<Bowlers>& bowlers, const std::string& teamName);
void full_scorecard(const std::vector<Batsman>& team1Batsmen, const std::vector<Bowlers>& team1Bowlers,
    const std::vector<Batsman>& team2Batsmen, const std::vector<Bowlers>& team2Bowlers,
    const Match& m, const Venue_guide& vg, const Tv_guide_in& tg, const std::string& winner, int team1Score, int team2Score, const Squad& team1Squad, const Squad& team2Squad);

