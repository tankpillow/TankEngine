#ifndef GAMEWINDOW_HPP_
#define GAMEWINDOW_HPP_

#include <string>

namespace TankEngine
{
    class GameWindow
    {
        private:
            int width;
            int height;
            std::string title;
        public:
            GameWindow();
        public:
            void createWindow();
        public:
            void setSize(int width, int height);
            void setTitle(const std::string& title);

    };
}

#endif
