#include<iostream>
using namespace std;
// int main() {
//     cout<<"Namaste Bharat";
//     return 0;
// }
class hero{
    // properties

private:
    int health;
    public:
    char level;
    
 
    // void tarit(){
    //     cout<<zero<<endl;

    // }
    int getHealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level=ch;
    }
};
int main(){
    //creating object of class hero
    hero ramesh;
    cout<<"ramesh health is"<<ramesh.getHealth()<<endl;
    // ramesh.health=60;
    ramesh.level='l';
    cout<<"Health name"<<ramesh.health<<endl;
    cout<<"level is "<<ramesh.level<<endl;
    // cout<<"size "<<sizeof(h1)<<endl;

    return 0;
    }