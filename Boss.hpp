nclude "enemy.hpp"

class Boss : public Character
{
private:
    /* data */
public:
    Boss();
    Boss(int,int,int,int);
    ~Boss();
};

Boss::Boss(/* args */) : Character(100,50,50,200)
{
}

// Boss::Boss(int ad,int sad,int heal,int health) 
// // : Character( ad , sad, heal, health)
// // {
// // }
//
// Boss::~Boss()
// {
// }
