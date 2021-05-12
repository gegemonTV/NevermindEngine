#include <NevermindEngine/InputManager/InputManager.hpp>

using ne::InputManager;

InputManager::InputManager(const bool &quitState){
    isQuit = quitState;
    eventThread = new std::thread(eventHandler);
    eventThread->join();
}

void InputManager::onKeyboardEvent(KeyboardEvent event, const std::function<void()> &function){
    if (keyboardEventFunctions.find(event) != keyboardEventFunctions.end()){
        delete keyboardEventFunctions.find(event)->second;
        keyboardEventFunctions.erase(keyboardEventFunctions.find(event));
    }

    keyboardEventFunctions.insert(std::make_pair(event, new std::function<void()>(function)));
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