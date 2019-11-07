//
// Created by Jeronimo on 2019-11-07.
//

#ifndef SOCCER_FOOTBALL_H
#define SOCCER_FOOTBALL_H

#include <string>
struct Team{
    int points, win, tie, lose, goals_scored, goals_against;
    std::string name;
    Team(std::string name){
        points = win = tie = lose = goals_scored = goals_against = 0 ;
        this->name = name;
    };
    void update(int s, int a){
        if(s > a){
            win++;
            points+=3;
        }
        else if (s == a){
            tie++;
            points++;
        }
        else{
            lose++;
        }
        goals_scored += s;
        goals_against += a;
    }
};

bool foot_comp(Team&a, Team&b){
    if(a.points!=b.points){
        return a.points>b.points;
    }
    if(a.win != b.win)
        return a.win>b.win;
    if((a.goals_scored-a.goals_against)!= (b.goals_scored-b.goals_against))
        return (a.goals_scored-a.goals_against)>(b.goals_scored-b.goals_against);
    if(a.goals_scored != b.goals_scored)
        return a.goals_scored>b.goals_scored;
    if((a.win+a.tie+a.lose)!=(b.win +b.tie+b.lose))
        return (a.win+a.tie+a.lose)>(b.win +b.tie+b.lose);


    std::string name_loc, name_vis;
    for(auto&i:name_loc)
        i = tolower(i);
    for(auto&i:name_vis)
        i = tolower(i);

    return name_loc<name_vis;
}

#endif //SOCCER_FOOTBALL_H
