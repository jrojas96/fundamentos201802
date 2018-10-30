#include "Player.h"
#include <SDL\SDL.h>


void Player::init(float speed, glm::vec2 position, InputManager* inputManager) {
	_speed = speed;
	_position = position;
	_inputManager = inputManager;
	color.set(0, 0, 185, 255);
}
void Player::update() {
	if (_inputManager->isKeyPressed(SDLK_w)) {
		_position.y += _speed;
	}
	if (_inputManager->isKeyPressed(SDLK_s)) {
		_position.y -= _speed;
	}
	if (_inputManager->isKeyPressed(SDLK_a)) {
		_position.x -= _speed;
	}
	if (_inputManager->isKeyPressed(SDLK_d)) {
		_position.x += _speed;
	}
}


Player::Player()
{
}


Player::~Player()
{
}