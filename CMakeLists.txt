cmake_minimum_required(VERSION 3.23)
project(GenerateurPhrases C)

set(CMAKE_C_STANDARD 11)

add_executable(GenerateurPhrases
        main.c fonctions.c fonctions.h)
