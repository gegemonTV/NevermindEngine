#include <NevermindEngine/InputManager/InputManager.hpp>

using ne::InputManager;

InputManager::InputManager(const bool &quitState){
    isQuit = quitState;
    eventThread = new std::thread(eventHandler);
}

void InputManager::eventHandler(){
    SDL_Event e;
    while (isQuit){
        while (SDL_PollEvent(&e)){
            switch (e.type)
            {
            case SDL_QUIT:
                
                break;
            
            default:
                break;
            }
        }
    }
}