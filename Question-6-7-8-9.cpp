#include <iostream>
#include <string>
#include <sstream> 
using std::string;
using std::cout;
using std::endl;


class Player {
    private:
        string name;
        int hitPoints;

    public:
        //❓❓ QUESTION 9, add the constructor here:

        Player(string n, int nm){
            name = n; 
            hitPoints = nm;

        string getName(){
            return name;
        }

        int getHitPoints(){
            return hitPoints;
        }

        void damage(int points){
            if ( points > hitPoints )
                hitPoints = 0;
            else
                hitPoints = hitPoints - points;
        }
};

int main(){
    //❓❓ QUESTION 9, add to the main function here:
 Player a+ Player("Player" 44)
     addPlayername(2)
    cout << a.getName() << "and" <<a.getHitPoints();

}
