#include <iostream>
#include <vector>
#include <map>
#include "football.h"
int main() {

    int n;
    std::cin>>n;
    std::cin.ignore();
    for(int i=0;i<n;++i){
        std::string tournament_name;
        std::getline(std::cin, tournament_name);
        int n_teams;
        std::cin>>n_teams;
        std::cin.ignore();
        std::map<std::string, int> table;
        std::vector<Team> teams;

        for(int i=0;i<n_teams;++i){
            std::string team_name;
            std::getline(std::cin,team_name,'\n');
            Team team(team_name);
            teams.push_back(team);
            table[team_name] = i;
        }

        int n_matches;
        std::cin>>n_matches;

        for(int i=0;i<n_matches;++i){
            std::string team1, team2, local, vis;
            std::getline(std::cin,team1,'#');
            std::getline(std::cin,local,'@');
            std::getline(std::cin,vis,'#');
            std::getline(std::cin,team2);

            teams[table[team1]].update(stoi(local),stoi(vis));
            teams[table[team2]].update(stoi(vis),stoi(local));
        }

        std::sort(teams.begin(), teams.end(), foot_comp);

        int j = 0;

        std::cout<<tournament_name<<'\n';
        for(auto&i:teams){
            std::cout<<++j<<") "<<i.name<<' '<<i.points<<"p, "<<i.lose+i.win+i.tie<<"g, "<<'('
                     <<i.win<<'-'<<i.tie<<'-'<<i.lose<<"), "<<i.goals_scored-i.goals_against<<"gd ("
                     <<i.goals_scored<<'-'<<i.goals_against<<")\n";
        }
        std::cout<<'\n';
    }

    return 0;
}