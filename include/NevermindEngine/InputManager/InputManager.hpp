#pragma once

#include <SDL2/SDL.h>
#include <functional>
#include <thread>

namespace ne
{
    /**
     * @brief Enumeration of mouse events 
     * @param MOUSE1_CLICKED Left mouse button (LMB) clicked
     * @param MOUSE1_RELEASED Left mouse button (LMB) released
     * @param MOUSE2_CLICKED Right mouse button (RMB) clicked
     * @param MOUSE2_RELEASED Right mouse button (RMB) clicked
     * @param SCROLL_CLICKED Scroll button clicked
     * @param SCROLL_RELEASED Scroll button released
     */
    enum MouseEvent{
        MOUSE1_CLICKED,
        MOUSE1_RELEASED,
        MOUSE2_CLICKED,
        MOUSE2_RELEASED,
        SCROLL_CLICKED,
        SCROLL_RELEASED
    };

    /**
     * @brief Enumeration of keyboard keys
     * @param Unknown Unhandled key.
     * @param A The A key.
     * @param B The B key.
     * @param C The C key.
     * @param D The D key.
     * @param E The E key.
     * @param F The F key.
     * @param G The G key.
     * @param H The H key.
     * @param I The I key.
     * @param J The J key.
     * @param K The K key.
     * @param L The L key.
     * @param M The M key.
     * @param N The N key.
     * @param O The O key.
     * @param P The P key.
     * @param Q The Q key.
     * @param R The R key.
     * @param S The S key.
     * @param T The T key.
     * @param U The U key.
     * @param V The V key.
     * @param W The W key.
     * @param X The X key.
     * @param Y The Y key.
     * @param Z The Z key.
     * @param Num0 The 0 key.
     * @param Num1 The 1 key.
     * @param Num2 The 2 key.
     * @param Num3 The 3 key.
     * @param Num4 The 4 key.
     * @param Num5 The 5 key.
     * @param Num6 The 6 key.
     * @param Num7 The 7 key.
     * @param Num8 The 8 key.
     * @param Num9 The 9 key.
     * @param Escape The Escape key.
     * @param LControl The left Control key.
     * @param LShift The left Shift key.
     * @param LAlt The left Alt key.
     * @param LSystem The left OS specific key: window (Windows and Linux), apple (MacOS X), ...
     * @param RControl The right Control key.
     * @param RShift The right Shift key.
     * @param RAlt The right Alt key.
     * @param RSystem The right OS specific key: window (Windows and Linux), apple (MacOS X), ...
     * @param Menu The Menu key.
     * @param LBracket The [ key.
     * @param RBracket The ] key.
     * @param Semicolon The ; key.
     * @param Comma The , key.
     * @param Period The . key.
     * @param Quote The ' key.
     * @param Slash The / key.
     * @param Backslash The \ key.
     * @param Tilde The ~ key.
     * @param Equal The = key.
     * @param Hyphen The - key (hyphen)
     * @param Space The Space key.
     * @param Enter The Enter/Return keys.
     * @param Backspace The Backspace key.
     * @param Tab The Tabulation key.
     * @param PageUp The Page up key.
     * @param PageDown The Page down key.
     * @param End The End key.
     * @param Home The Home key.
     * @param Insert The Insert key.
     * @param Delete The Delete key.
     * @param Add The + key.
     * @param Subtract The - key (minus, usually from numpad)
     * @param Multiply The * key.
     * @param Divide The / key.
     * @param Left Left arrow.
     * @param Right Right arrow.
     * @param Up Up arrow.
     * @param Down Down arrow.
     * @param Numpad0 The numpad 0 key.
     * @param Numpad1 The numpad 1 key.
     * @param Numpad2 The numpad 2 key.
     * @param Numpad3 The numpad 3 key.
     * @param Numpad4 The numpad 4 key.
     * @param Numpad5 The numpad 5 key.
     * @param Numpad6 The numpad 6 key.
     * @param Numpad7 The numpad 7 key.
     * @param Numpad8 The numpad 8 key.
     * @param Numpad9 The numpad 9 key.
     * @param F1 The F1 key.
     * @param F2 The F2 key.
     * @param F3 The F3 key.
     * @param F4 The F4 key.
     * @param F5 The F5 key.
     * @param F6 The F6 key.
     * @param F7 The F7 key.
     * @param F8 The F8 key.
     * @param F9 The F9 key.
     * @param F10 The F10 key.
     * @param F11 The F11 key.
     * @param F12 The F12 key.
     * @param F13 The F13 key.
     * @param F14 The F14 key.
     * @param F15 The F15 key.
     * @param Pause The Pause key.
     * @param KeyCount Keep last – the total number of keyboard keys. 
     */
    enum KeyboardEvent{
        Unknown = -1, A = 0, B, C,
        D, E, F, G,
        H, I, J, K,
        L, M, N, O,
        P, Q, R, S,
        T, U, V, W,
        X, Y, Z, Num0,
        Num1, Num2, Num3, Num4,
        Num5, Num6, Num7, Num8,
        Num9, Escape, LControl, LShift,
        LAlt, LSystem, RControl, RShift,
        RAlt, RSystem, Menu, LBracket,
        RBracket, Semicolon, Comma, Period,
        Quote, Slash, Backslash, Tilde,
        Equal, Hyphen, Space, Enter,
        Backspace, Tab, PageUp, PageDown,
        End, Home, Insert, Delete,
        Add, Subtract, Multiply, Divide,
        Left, Right, Up, Down,
        Numpad0, Numpad1, Numpad2, Numpad3,
        Numpad4, Numpad5, Numpad6, Numpad7,
        Numpad8, Numpad9, F1, F2,
        F3, F4, F5, F6,
        F7, F8, F9, F10,
        F11, F12, F13, F14,
        F15, Pause, KeyCount, Dash = Hyphen,
        BackSpace = Backspace, BackSlash = Backslash, SemiColon = Semicolon, Return = Enter 
    };

    class InputManager{
    private:
        /**
         * SDL_Thread object for Event Thread
         */
         std::thread *eventThread;
        
        /**
         * Loop for handling events in Event Thread
         */
        void eventHandler();
    public:
        /**
         * @brief InputManager constructor
         */
        InputManager();
        
        /**
         * @brief InputManager destructor
         */
        ~InputManager();

        /**
         * @brief Event setter for mouse buttons
         * @param event MouseEvent enumeration that points on mouse button state
         * @param function Function that could be called on mouse event
         */
        void onMouseEvent(MouseEvent event, const std::function<void()> &function);

        /**
         * @brief Event setter for keyboard buttons
         * @param event KeyboardEvent enumeration that points on mouse button state
         * @param function Function that could be called on keyboard event
         */
        void onKeyboardEvent(KeyboardEvent event, const std::function<void()> &function);

        /**
         * @brief Event setter for quit event
         * @param function Function that could be called on quit event
         */
        void onQuitEvent(const std::function<void()> &function);
    };
} // namespace ne
