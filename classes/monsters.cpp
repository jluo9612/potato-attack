#include "monsters.h"

        void attack_hero() override {
            std::cout << "POTATO POWAAA" << endl;
        }
        void receive_damage() override {
            std::cout << "STRONG POTATOOO" << endl;
        } 
   

class monster {
    public:
        virtual void attack_hero();
        virtual void receive_damage();
        virtual float get_hp_max();
        virtual float get_current_hp();

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
        

}

class POTATO : public monster
{
    private:
        float defense = 10000000000000;
        float attack  = 10000000000000;
        float hp_max  = 10000000000000;
    public:
}

#endif
