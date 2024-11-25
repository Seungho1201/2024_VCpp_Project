#include "Engine_Data.h"

int EngineData::mapGrid[GRID_ROWS][GRID_COLS] = { 0 };

float EngineData::playerSpeed = BASIC_PLAYER_SPEED;
float EngineData::gravityVelocity = GRAVITY_SPEED;

int EngineData::mapOffset = 50;

RECT EngineData::userBox = { 60, 500, 90, 530 };
HWND EngineData::playButton = nullptr;
bool EngineData::developMode = false;

HBITMAP EngineData::hBackground = nullptr;

int EngineData::playerHeart = 3;

DWORD EngineData::playTimer = 0;
double  EngineData::elapsedTime = 0; // 경과 시간
bool EngineData::isStopwatchRunning = false; // 스톱워치 동작 여부