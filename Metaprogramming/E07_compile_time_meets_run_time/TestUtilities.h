#pragma once

#include <iostream>

namespace bits_of_q
{
    struct CopyStats
    {
        int n_default_constructs = 0;
        int n_copies             = 0;
        int n_moves              = 0;

        bool operator==(const CopyStats &other) const = default;
    };

    // print CopyStats
    inline std::ostream &
    operator<<(std::ostream &os, const CopyStats &stats)
    {
        os << "{ default_constructs: " << stats.n_default_constructs //
           << ", copies: " << stats.n_copies                         //
           << ", moves: " << stats.n_moves << " }";                  //
        return os;
    }

    struct CopyCounter
    {
        inline static CopyStats stats;

        CopyCounter()
        {
            stats.n_default_constructs++;
        }

        // copy constructor
        CopyCounter(const CopyCounter &)
        {
            stats.n_copies++;
        }

        // copy assignment
        CopyCounter &
        operator=(const CopyCounter &)
        {
            stats.n_copies++;
            return *this;
        }

        // move constructor
        CopyCounter(CopyCounter &&) noexcept
        {
            stats.n_moves++;
        };

        // move assignment
        CopyCounter &
        operator=(CopyCounter &&) noexcept
        {
            stats.n_moves++;
            return *this;
        }

        // reset statistics and return old statistics
        static CopyStats
        reset()
        {
            CopyStats old_stats        = stats;
            stats.n_copies             = 0;
            stats.n_moves              = 0;
            stats.n_default_constructs = 0;
            return old_stats;
        }
    };
} // namespace bits_of_q
