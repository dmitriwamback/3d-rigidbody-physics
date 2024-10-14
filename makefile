APP_NAME = rigidbody-physics
BUILD = ./bin

APP_INCLUDES_OSX := -I./vendor/GLFW -I ./vendor/glew/include -framework IOKit -framework Cocoa -I ./vendor/glm
APP_LINKERS_OSX  := -L ./vendor/glew/lib -lGLEW -L./vendor/GLFW/lib -lglfw3

main:
	g++ -framework OpenGL --std=c++17 main.cpp $(APP_INCLUDES_OSX) $(APP_LINKERS_OSX) -o $(BUILD)/$(APP_NAME) && $(BUILD)/$(APP_NAME)