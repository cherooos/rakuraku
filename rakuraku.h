#ifndef RAKURAKU_H
#define RAKURAKU_H

class rakuraku
{
public:
    bool OneTrigger(bool input);
    int flipSwitch(int input1, int input2);

private:
    bool before_trigger = false;
    bool before_state = false;

};

#endif