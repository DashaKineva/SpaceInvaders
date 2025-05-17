#pragma once
#include <SFML/Graphics.hpp>
#include "Entity_class.h"
#include <iostream>
#include <sstream>

sf::Clock game_clock;
float deltaTime;

//размеры окна
int width = 600;
int height = 400;

int timer = 0; //игровой таймер

//отвечают за смерть
bool death_m = 0;
int global_score = 0;
int round_count = 1;

//очки за мобов
int score_added_by_spike = 150;
int score_added_by_tank = 100;
int score_added_by_deffault_enemy = 33;

//текст
sf::Font font;
sf::Text scoreText;
sf::Text healthText;

//пуля
Entity bullet;
sf::Sprite bullet_sprite;
sf::Texture bullet_texture;
bool bullet_active = false;
float bullet_speed = 200.0f;
sf::Vector2f bullet_start_position;

//персонаж
Entity character(3);
sf::Sprite character_sprite;
sf::Texture character_texture;

//текстуры врагов
sf::Texture enemy_tank_texture;
sf::Texture enemy_spike_texture;
sf::Texture enemy_deffault_texture;
