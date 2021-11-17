#include "settings.h"
#include "profiles.h"

/*
 * Active profiles
 * Add profiles from source/profiles.h in the profile array
 */
profile profiles[] = {
    /* {colorBleed, {0, 0, 0, 0}, NULL, NULL}, */
    {reactiveFade, {4, 3, 2, 1}, reactiveFadeKeypress, reactiveFadeInit},
    {blue, {0, 0, 0, 0}, NULL, NULL},
    {animatedRainbowFlow, {7, 5, 2, 1}, NULL, NULL},
    {white, {0, 0, 0, 0}, NULL, NULL},
    {rainbowVertical, {0, 0, 0, 0}, NULL, NULL},
    {miamiNights, {0, 0, 0, 0}, NULL, NULL},
    {reactiveTerm, {1, 2, 3, 4}, reactiveTermKeypress, reactiveTermInit}};

/* Set your defaults here */
uint8_t currentProfile = 0;
const uint8_t amountOfProfiles = sizeof(profiles) / sizeof(profile);
volatile uint8_t currentSpeed = 0;
uint8_t ledIntensity = 4;
led_t color_correction = (led_t){.rgb = 0x80FF99};
led_t color_temperature = (led_t){.rgb = 0xFFFFFF};
