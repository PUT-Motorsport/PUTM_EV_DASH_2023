#include <gui/main_screen/MainView.hpp>

MainView::MainView()
{

}

void MainView::setupScreen()
{
	MainViewBase::setupScreen();
}

void MainView::tearDownScreen()
{
	MainViewBase::tearDownScreen();
}

void MainView::tickElapsed()
{
	if(speed < 150) {
		speed++;
	}
	Unicode::snprintf(speedValueBuffer, SPEEDVALUE_SIZE, "%d", speed);
	// Invalidate text area
	speedValue.invalidate();
}
