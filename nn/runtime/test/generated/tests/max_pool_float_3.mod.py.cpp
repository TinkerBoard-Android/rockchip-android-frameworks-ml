// clang-format off
// Generated file (from: max_pool_float_3.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace max_pool_float_3 {
// Generated max_pool_float_3 test
#include "generated/examples/max_pool_float_3.example.cpp"
// Generated model constructor
#include "generated/models/max_pool_float_3.model.cpp"
} // namespace max_pool_float_3

TEST_F(GeneratedTests, max_pool_float_3) {
    execute(max_pool_float_3::CreateModel,
            max_pool_float_3::is_ignored,
            max_pool_float_3::get_examples());
}

