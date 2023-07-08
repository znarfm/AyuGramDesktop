// This is the source code of AyuGram for Desktop.
//
// We do not and cannot prevent the use of our code,
// but be respectful and credit the original author.
//
// Copyright @Radolyn, 2023

#pragma once

#include "ayu/libs/json.hpp"
#include "ayu/libs/pipe.hpp"
#include "ayu/sync/models.h"

using json = nlohmann::json;

class ayu_pipe_wrapper {
public:
    template<class T>
    void send(T obj);

    std::optional<json> receive();

private:
    nes::pipe_istream is{"AyuSync"};
};