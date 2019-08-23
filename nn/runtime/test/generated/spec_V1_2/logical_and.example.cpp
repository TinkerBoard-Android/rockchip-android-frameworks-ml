// Generated from logical_and.mod.py
// DO NOT EDIT
// clang-format off
#include "TestHarness.h"
using namespace test_helper;

namespace generated_tests::logical_and {

const TestModel& get_test_model_simple() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .minSupportedVersion = TestHalVersion::V1_2,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<bool8>({true, false, false, true}),
                .dimensions = {1, 1, 1, 4},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_BOOL8,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<bool8>({true, false, true, false}),
                .dimensions = {1, 1, 1, 4},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_BOOL8,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<bool8>({true, false, false, false}),
                .dimensions = {1, 1, 1, 4},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_BOOL8,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::LOGICAL_AND
            }},
        .outputIndexes = {2}
    };
    return model;
}

const auto dummy_test_model_simple = TestModelManager::get().add("logical_and_simple", get_test_model_simple());

}  // namespace generated_tests::logical_and

namespace generated_tests::logical_and {

const TestModel& get_test_model_broadcast() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .minSupportedVersion = TestHalVersion::V1_2,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<bool8>({true, false, false, true}),
                .dimensions = {1, 1, 1, 4},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_BOOL8,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<bool8>({true}),
                .dimensions = {1, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_BOOL8,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<bool8>({true, false, false, true}),
                .dimensions = {1, 1, 1, 4},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_BOOL8,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::LOGICAL_AND
            }},
        .outputIndexes = {2}
    };
    return model;
}

const auto dummy_test_model_broadcast = TestModelManager::get().add("logical_and_broadcast", get_test_model_broadcast());

}  // namespace generated_tests::logical_and

