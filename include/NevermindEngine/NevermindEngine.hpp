#pragma once

#include <InputManager/InputManager.hpp>

namespace ne{
    class NevermindEngine{
    private:
        /**
         * @brief Variable that points on current state of game
         */
        bool isQuit = false;
    public:
        /**
         * @brief Construtor of main NevermindEngine class 
         */
        NevermindEngine();
        /**
         * @brief Destructor of NevermindEngine class
         */
        ~NevermindEngine();
    };
}