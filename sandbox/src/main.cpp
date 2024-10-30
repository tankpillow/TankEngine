#include <TankEngine/core/GameWindow.hpp>
#include <TankEngine/utils/Logger.hpp>

int main(int argc, char** argv)
{
    TankEngine::GameWindow window;
    window.setTitle("SandboxApp");
    window.setSize(800, 600);
    window.createWindow();

    

    return 0;
}
