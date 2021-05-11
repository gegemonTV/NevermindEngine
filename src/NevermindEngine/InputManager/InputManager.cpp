#include <NevermindEngine/InputManager/InputManager.hpp>

using ne::InputManager;

InputManager::InputManager(){
    eventThread = new std::thread(eventHandler);
}

void InputManager::eventHandler(){
    SDL_Event e;
    
}