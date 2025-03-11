#include"cricket_scorecard.h"

void display_player(const Player& p) {
    std::cout << "Player Name: " << p.name << std::endl;
    std::cout << "Role: " << p.role << std::endl;
}

void display_squad( const Squad& s) {
    std::cout << "Team Name: " << s.teamName << std::endl;
    std::cout << "Players: " << std::endl;
    for (const auto& player : s.players) {
        std::cout << "- " << player << std::endl;
    }
}

void display_scorecard(const  Scorecard& s) {
    std::cout << "Team 1: " << s.team1Name << " - " << s.team1Score << std::endl;
    std::cout << "Team 2: " << s.team2Name << " - " << s.team2Score << std::endl;
    std::cout << "Result: " << s.result << std::endl;
}

void display_Batsman(const Batsman& b) {
    std::cout << std::left << std::setw(20) << "Batsman Name" << std::setw(10) << "Runs"
        << std::setw(15) << "Balls Faced" << std::setw(10) << "4s"
        << std::setw(10) << "6s" << std::setw(15) << "Strike Rate"
        << std::setw(15) << "100/50" << std::setw(10) << "Out/Not Out" << std::endl;

    std::cout << std::left << std::setw(20) << b.batsman_name << std::setw(10) << b.runs
        << std::setw(15) << b.balls_faced << std::setw(10) << b.fours
        << std::setw(10) << b.sixes << std::setw(15) << std::fixed << std::setprecision(2) << b.strike_rate
        << std::setw(15) << b.hundred_halfhundred << std::setw(10) << b.out_notout << std::endl;
}

void display_Bowlers(const  Bowlers& bb) {
    std::cout << std::left << std::setw(20) << "Bowler Name" << std::setw(10) << "Overs"
        << std::setw(15) << "Runs Given" << std::setw(10) << "Wickets"
        << std::setw(10) << "Maidens" << std::setw(15) << "Economy Rate" << std::endl;

    std::cout << std::left << std::setw(20) << bb.bowlers_name << std::setw(10) << bb.overs
        << std::setw(15) << bb.runs_given << std::setw(10) << bb.wickets
        << std::setw(10) << bb.maidens << std::setw(15) << std::fixed << std::setprecision(2) << bb.economy_rate << std::endl;
}

void display_Match( const Match& m) {
    std::cout << "Match Type: " << m.match_type << std::endl;
    std::cout << "Series: " << m.series << std::endl;
    std::cout << "Date: " << m.date << std::endl;
    std::cout << "Time: " << m.time << std::endl;
    std::cout << "Team A: " << m.team_A << std::endl;
    std::cout << "Team B: " << m.team_B << std::endl;
    std::cout << "Toss Winner: " << m.toss_winner << std::endl;
    std::cout << "Toss Decision: " << m.toss_decision << std::endl;
    std::cout << "Umpires: " << m.umpires << std::endl;
    std::cout << "Total Runs: " << m.total_runs << std::endl;
    std::cout << "Total Wickets: " << m.total_wickets << std::endl;
}

void display_Venue_guide(const Venue_guide& vg) {
    std::cout << "Stadium: " << vg.stadium << std::endl;
    std::cout << "City: " << vg.city << std::endl;
    std::cout << "Capacity: " << vg.capacity << std::endl;
    std::cout << "Ends: " << vg.ends << std::endl;
    std::cout << "Hosts To: " << vg.hosts_to << std::endl;
}

void display_Tv_guide_in( const Tv_guide_in& tg) {
    std::cout << "Channel Type: " << tg.channel_type << std::endl;
    std::cout << "TV Channel: " << tg.tv << std::endl;
}

void display_batsman_squad(std::vector<Batsman>& batsmen, const std::string& teamName, int totalScore) {
    std::cout << "\n--- Batting Scorecard - " << teamName << " (" << totalScore << ") ---" << std::endl;
    std::cout << std::left << std::setw(20) << "Batsman Name" << std::setw(10) << "Runs"
        << std::setw(15) << "Balls Faced" << std::setw(10) << "4s"
        << std::setw(10) << "6s" << std::setw(15) << "Strike Rate"
        << std::setw(15) << "100/50" << std::setw(10) << "Out/Not Out" << std::endl;

    for (const auto& b : batsmen) 
    {
        std::cout << std::left << std::setw(20) << b.batsman_name << std::setw(10) << b.runs
            << std::setw(15) << b.balls_faced << std::setw(10) << b.fours
            << std::setw(10) << b.sixes << std::setw(15) << std::fixed << std::setprecision(2) << b.strike_rate
            << std::setw(15) << b.hundred_halfhundred << std::setw(10) << b.out_notout << std::endl;
    }
}
void display_bowler_squad(std::vector<Bowlers>& bowlers, const std::string& teamName) {
    std::cout << "\n--- Bowling Scorecard - " << teamName << " ---" << std::endl;
    std::cout << std::left << std::setw(20) << "Bowler Name" << std::setw(10) << "Overs"
        << std::setw(15) << "Runs Given" << std::setw(10) << "Wickets"
        << std::setw(10) << "Maidens" << std::setw(15) << "Economy Rate" << std::endl;

    for (const auto& bb : bowlers) {
        std::cout << std::left << std::setw(20) << bb.bowlers_name << std::setw(10) << bb.overs
            << std::setw(15) << bb.runs_given << std::setw(10) << bb.wickets
            << std::setw(10) << bb.maidens << std::setw(15) << std::fixed << std::setprecision(2) << bb.economy_rate << std::endl;
    }
}


        void full_scorecard(const std::vector<Batsman>& team1Batsmen, const std::vector<Bowlers>& team1Bowlers,
            const std::vector<Batsman>& team2Batsmen, const std::vector<Bowlers>& team2Bowlers,
            const Match& m, const Venue_guide& vg, const Tv_guide_in& tg, const std::string& winner, int team1Score, int team2Score, const Squad& team1Squad, const Squad& team2Squad) {

            std::cout << "---------------------------------------------------------" << std::endl;
            std::cout << "                     Match Scorecard                     " << std::endl;
            std::cout << "---------------------------------------------------------" << std::endl;

            std::cout << "Match: " << m.team_A << " vs " << m.team_B << std::endl;
            std::cout << "Venue: " << vg.stadium << std::endl;
            std::cout << "TV Channel: " << tg.channel_type<< std::endl;

            std::cout << "\nTeam 1 Batting:" << std::endl;
            std::cout << "Name\t\tRuns\tBalls\t4s\t6s\tDismissal" << std::endl;
            for (const auto& batsman : team1Batsmen) {
                std::cout << batsman.batsman_name << "\t" << batsman.runs << "\t" << batsman.balls_faced << "\t"
                    << batsman.fours << "\t" << batsman.sixes << "\t" << batsman.out_notout << std::endl;
            }
            std::cout << "Total: " << team1Score << std::endl;

            std::cout << "\nTeam 1 Bowling:" << std::endl;
            std::cout << "Name\t\tOvers\tRuns\tWickets\tMaidens" << std::endl;
            for (const auto& bowler : team1Bowlers) {
                std::cout << bowler.bowlers_name<< "\t" << bowler.overs << "\t" << bowler.runs_given << "\t"
                    << bowler.wickets << "\t" << bowler.maidens << std::endl;
            }

            std::cout << "\nTeam 2 Batting:" << std::endl;
            std::cout << "Name\t\tRuns\tBalls\t4s\t6s\tDismissal" << std::endl;
            for (const auto& batsman : team2Batsmen) {
                std::cout << batsman.batsman_name << "\t" << batsman.runs << "\t" << batsman.balls_faced << "\t"
                    << batsman.fours << "\t" << batsman.sixes << "\t" << batsman.out_notout << std::endl;
            }
            std::cout << "Total: " << team2Score << std::endl;

            std::cout << "\nTeam 2 Bowling:" << std::endl;
            std::cout << "Name\t\tOvers\tRuns\tWickets\tMaidens" << std::endl;
            for (const auto& bowler : team2Bowlers) {
                std::cout << bowler.bowlers_name << "\t" << bowler.overs << "\t" << bowler.runs_given << "\t"
                    << bowler.wickets << "\t" << bowler.maidens << std::endl;
            }

            std::cout << "\nWinner: " << winner << std::endl;

            std::cout << "\nTeam 1 Squad:" << std::endl;
            for (const auto& player : team1Squad.players) {
                std::cout << player << std::endl;
            }

            std::cout << "\nTeam 2 Squad:" << std::endl;
            for (const auto& player : team2Squad.players) {
                std::cout << player << std::endl;
            }

            std::cout << "---------------------------------------------------------" << std::endl;
        }
    

