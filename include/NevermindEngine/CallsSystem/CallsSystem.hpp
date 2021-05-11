#pragma once

#include <SDL2/SDL.h>

namespace ne{
    class CallsSystem{
    public:
        /**
         * @brief Variable that points on program state 
         */
        bool isQuit = false;
        /**
         * @brief Engine call to quit the game
         */
        static void quit();
    };
}