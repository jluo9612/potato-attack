#ifndef _PLAYER_H_
#define _PLAYER_H_
#include<iostream>

class Player {
    public:
        virtual void attack();
        virtual void receive_damage();
        virtual void get_hp_curr();
        virtual void set_hp_curr();
        virtual void get_hp_max();
        virtual void get_hp_max();
    private:
        float hp_curr;
        float hp_max;
}


class MEAT_SHIELD : public Player {
    private:
        float defense = 200.0;
        float attack = 50.0;
}

class KILL_MACHINE : public Player {
    private:
        float defense = 40.0;
        float attack = 200.0;
}
#endif
