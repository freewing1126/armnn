﻿//
// Copyright © 2017 Arm Ltd. All rights reserved.
// See LICENSE file in the project root for full license information.
//
#pragma once

#include <vector>

namespace armnn
{

class Graph;
class Optimization;

class Optimizer
{
public:
    static const Optimizer& Get();

    void Optimize(Graph& graph) const;

private:
    ~Optimizer() = default;

    Optimizer(std::initializer_list<Optimization*> optimizations) : m_Optimizations(optimizations) {}

    std::vector<Optimization*> m_Optimizations;
};

} // namespace armnn
