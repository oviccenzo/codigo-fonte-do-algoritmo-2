cmake_minimum_required(VERSION 3.26)
project(EscalaDeTemperatura)

set(CMAKE_CXX_STANDARD 17)

add_executable(EscalaDeTemperatura main.cpp
        FormulaKelvin/ReaumurConvertidoParaKelvin.cc
        FormulaKelvin/NewtonConvertidoParaKelvin.cpp
        FormulaKelvin/NewtonConvertidoParaKelvin.cpp
        FormulaKelvin/RømerConvertidoParaKelvin.cpp
        FormulaKelvin/DelisleConvertidoParaKelvin.cpp
        FormulaFahrenheit/CelsiusConvertidoParaFahrenheit.cpp
        FormulaRankine/KelvinConvertidoParaRankine.cpp
        FormulaDelisle/CelsiusConvertidoParaDelisle.cpp
        FormulaRomer/RankineConvertidoParaRomer.cpp
        FormulaDelisle/NewtonConvertidoParaDelisle.cpp
        FormulaKelvin/RankineConvertidoParaKelvin.cpp)
