// DO NOT EDIT;
// Generated by ml/nn/runtime/test/specs/generate_test.sh
#include "../../TestGenerated.h"

namespace space_to_depth_float_3 {
std::vector<MixedTypedExample> examples = {
// Generated space_to_depth_float_3 test
#include "generated/examples/space_to_depth_float_3.example.cpp"
};
// Generated model constructor
#include "generated/models/space_to_depth_float_3.model.cpp"
} // namespace space_to_depth_float_3
TEST_F(GeneratedTests, space_to_depth_float_3) {
    execute(space_to_depth_float_3::CreateModel,
            space_to_depth_float_3::is_ignored,
            space_to_depth_float_3::examples);
}
