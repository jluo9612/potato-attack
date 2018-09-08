#ifndef _MONSTERS_H_
#define _MONSTERS_H_
#include <iostream>

class monster {
    public:
        virtual void attack_hero();
        virtual void receive_damage();
        float get_hp_max();
        float get_current_hp();

    protected:
        virtual inline ~monster() = 0;
        float defense = 1.0;
        float attack = 1.0;
        float hp_max = 1.0;
}


class BEET : public monster
{
    private:
        float hp_cur = 1.0;
        float defense = 0.00001;
        float attack   = 0.0000000001;
    public:
        void attack_hero() override;
        void receive_damage() override;
}

class POTATO : public monster
{
    private:
        float defense = 10000000000000;
        float attack  = 10000000000000;
        float hp_max  = 10000000000000;
    public:
        void attack_hero() override {
            std::cout << "POTATO POWAAA" << endl;
        }
        void receive_damage() override {
            std::cout << "STRONG POTATOOO" << endl;
        } 
}
#endif
