# MyHunter - Naruto Runner Game

A dynamic 2D game built with CSFML (Simple and Fast Multimedia Library for C) featuring Naruto-themed gameplay. The game combines classic runner mechanics with unique Naruto-style animations and effects.

## Project Overview

MyHunter is an engaging game that features:
- Naruto-themed character and animations
- Dynamic gameplay mechanics
- Score tracking system
- Interactive menus and UI
- Custom sound effects and music
- Pause functionality

## Project Structure

```
MyHunter/
├── src/
│   ├── main.c                 # Program entry point
│   ├── my_hunter.c           # Core game logic
│   ├── my_sprites.c          # Sprite management
│   ├── my_setup.c            # Game initialization
│   ├── my_scores.c           # Score handling
│   ├── my_menu.c             # Menu system
│   ├── my_events.c           # Event handling
│   ├── my_endgame.c          # Game over logic
│   └── my_char_setup.c       # Character initialization
├── my_png/                   # Game assets
│   ├── Naruto.png           # Character sprites
│   ├── back.png             # Background images
│   ├── menu_txt.png         # Menu assets
│   └── [Other game assets]
├── Sounds/                   # Audio files
│   ├── music.ogg            # Background music
│   └── die.ogg              # Sound effects
├── include/                  # Header files
└── Makefile                 # Build configuration
```

## Dependencies

- CSFML Library (Simple and Fast Multimedia Library for C)
- C compiler (gcc recommended)
- Make build system

## Building the Project

To compile the game:

```bash
make
```

This will generate the `my_hunter` executable.

## Playing the Game

### Starting the Game

```bash
./my_hunter
```

### Controls

- **Left Click**: Interact with menus
- **Space**: Jump/Action
- **Escape**: Pause game
- **P**: Alternative pause

### Game Features

1. **Main Menu**
   - Play button
   - Quit option
   - Interactive UI elements

2. **Gameplay**
   - Dynamic character movement
   - Score tracking
   - Progressive difficulty
   - Custom animations

3. **Pause Menu**
   - Resume game
   - Return to main menu
   - Quit game

4. **Score System**
   - Points tracking
   - High score saving
   - Score display

## Implementation Details

The game is built with:
- Custom sprite animation system
- Collision detection
- Event-driven input handling
- Sound management
- Resource management
- State machine for game flow

## Building and Cleaning

Available make targets:
- `make`: Build the game
- `make clean`: Remove object files
- `make fclean`: Remove object files and executable
- `make re`: Rebuild the project

## Assets

The game includes:
- Custom Naruto character sprites
- Background images
- Menu elements
- Sound effects
- Background music
- Custom font (njnaruto.ttf)

## License

This project is licensed under the terms provided in the LICENSE file.

## Contributing

Contributions are welcome! Feel free to submit issues and pull requests.

## Credits

- Character designs inspired by Naruto
- CSFML Library for graphics and audio
- Custom artwork and animations 