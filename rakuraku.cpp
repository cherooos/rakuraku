#include "rakuraku.h"

bool rakuraku::OneTrigger(bool input)
{
    if (input == true) {
        if (before_trigger == false) {
            before_trigger = true;
            return true;
        }
    } else {
        before_trigger = false;
        return false;
    }
    return 0;
}

bool rakuraku::CheatTrigger()
{
    before_trigger = true;
    return 0;
}

int rakuraku::flipSwitch(int input1, int input2)
{
    if (before_state == true) {
        before_state = false;
        return input1;
    }
    else {
        before_state = true;
        return input2;
    }
    return 0;
}