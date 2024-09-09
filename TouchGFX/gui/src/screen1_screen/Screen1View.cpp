#include <gui/screen1_screen/Screen1View.hpp>

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}


void Screen1View::updateGauges(int voltage, int current)
{

    gauge1.setValue(voltage);
    gauge2.setValue(current);
}

/*
void Screen1View::handleTickEvent()
{
    static int counter = 0;
    if (counter++ % 60 == 0)
    {
        int simulatedVoltage = rand() % 150;
        int simulatedCurrent = rand() % 20;
        updateGauges(simulatedVoltage, simulatedCurrent);
    }
}
*/
