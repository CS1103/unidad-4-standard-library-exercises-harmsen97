#include <iostream>
#include <vector>
#include <istream>
#include <sstream>

struct Team{
    int team_id;
    int solved=0;
    int penalty_time=0;
    int submissions[10]={0};
    bool isSolved[10];
    Team(){};
};

bool score_comp(Team&a, Team&b){
    if(a.solved != b.solved)
        return a.solved>b.solved;
    return a.penalty_time < b.penalty_time;
}


int main() {
    int n;
    std::cin>>n;

    std::string line;
    std::getline(std::cin,line);
    std::cin.ignore();
    for(int i=0;i<n;++i){

        std::vector<Team> scoreboard(101);

        while(std::getline(std::cin, line), !line.empty()) {
            std::istringstream iss(line);
            int team_id, problem_id, time;
            char status;
            iss>>team_id>>problem_id>>time>>status;

            scoreboard[team_id].team_id = team_id;

            if(!scoreboard[team_id].isSolved[problem_id]){
                if(status == 'I')
                    scoreboard[team_id].submissions[problem_id]++;

                else if(status == 'C'){
                    scoreboard[team_id].solved++;
                    scoreboard[team_id].isSolved[problem_id] = 1;
                    scoreboard[team_id].penalty_time += time + scoreboard[team_id].submissions[problem_id]*20;
                }
            }

        }

        std::sort(scoreboard.begin(), scoreboard.end(), score_comp);

        for(auto&i:scoreboard)
            if(i.solved>0)
                std::cout<<i.team_id<<' '<< i.solved<< ' '<< i.penalty_time<<'\n';

        std::cout<<'\n';
    }

    return 0;
}