// clang-format off
// Generated file (from: gather.mod.py). Do not edit
void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto param1 = model->addOperand(&type2);
  auto output0 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1, 0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input0, param, param1}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  assert(model->isValid());
}

inline bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input0 = model->addOperand(&type0);
  auto param = model->addOperand(&type1);
  auto param1 = model->addOperand(&type2);
  auto output0 = model->addOperand(&type0);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1, 0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input0, param, param1}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input0 = model->addOperand(&type13);
  auto param = model->addOperand(&type1);
  auto param1 = model->addOperand(&type2);
  auto output0 = model->addOperand(&type13);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1, 0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input0, param, param1}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  assert(model->isValid());
}

inline bool is_ignored_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_int32(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type14(Type::TENSOR_INT32, {2, 2});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input0 = model->addOperand(&type14);
  auto param = model->addOperand(&type1);
  auto param1 = model->addOperand(&type2);
  auto output0 = model->addOperand(&type14);
  // Phase 2, operations
  static int32_t param_init[] = {0};
  model->setOperandValue(param, param_init, sizeof(int32_t) * 1);
  static int32_t param1_init[] = {1, 0};
  model->setOperandValue(param1, param1_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input0, param, param1}, {output0});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input0},
    {output0});
  assert(model->isValid());
}

inline bool is_ignored_int32(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type14(Type::TENSOR_INT32, {2, 2});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input01 = model->addOperand(&type0);
  auto param2 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type4);
  auto output01 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_GATHER, {input01, param2, param3}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output01});
  assert(model->isValid());
}

inline bool is_ignored_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type14(Type::TENSOR_INT32, {2, 2});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input01 = model->addOperand(&type0);
  auto param2 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type4);
  auto output01 = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_GATHER, {input01, param2, param3}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output01});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type14(Type::TENSOR_INT32, {2, 2});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.5f, 127);
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input01 = model->addOperand(&type13);
  auto param2 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type4);
  auto output01 = model->addOperand(&type15);
  // Phase 2, operations
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_GATHER, {input01, param2, param3}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output01});
  assert(model->isValid());
}

inline bool is_ignored_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_int32_2(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type14(Type::TENSOR_INT32, {2, 2});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.5f, 127);
  OperandType type16(Type::TENSOR_INT32, {1, 2});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input01 = model->addOperand(&type14);
  auto param2 = model->addOperand(&type1);
  auto param3 = model->addOperand(&type4);
  auto output01 = model->addOperand(&type16);
  // Phase 2, operations
  static int32_t param2_init[] = {0};
  model->setOperandValue(param2, param2_init, sizeof(int32_t) * 1);
  static int32_t param3_init[] = {1};
  model->setOperandValue(param3, param3_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_GATHER, {input01, param2, param3}, {output01});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input01},
    {output01});
  assert(model->isValid());
}

inline bool is_ignored_int32_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type14(Type::TENSOR_INT32, {2, 2});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.5f, 127);
  OperandType type16(Type::TENSOR_INT32, {1, 2});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input02 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type1);
  auto param5 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_GATHER, {input02, param4, param5}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output02});
  assert(model->isValid());
}

inline bool is_ignored_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type14(Type::TENSOR_INT32, {2, 2});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.5f, 127);
  OperandType type16(Type::TENSOR_INT32, {1, 2});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input02 = model->addOperand(&type5);
  auto param4 = model->addOperand(&type1);
  auto param5 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type6);
  // Phase 2, operations
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_GATHER, {input02, param4, param5}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output02});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type14(Type::TENSOR_INT32, {2, 2});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.5f, 127);
  OperandType type16(Type::TENSOR_INT32, {1, 2});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input02 = model->addOperand(&type17);
  auto param4 = model->addOperand(&type1);
  auto param5 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type18);
  // Phase 2, operations
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_GATHER, {input02, param4, param5}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output02});
  assert(model->isValid());
}

inline bool is_ignored_quant8_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_int32_3(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type14(Type::TENSOR_INT32, {2, 2});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.5f, 127);
  OperandType type16(Type::TENSOR_INT32, {1, 2});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type19(Type::TENSOR_INT32, {3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input02 = model->addOperand(&type19);
  auto param4 = model->addOperand(&type1);
  auto param5 = model->addOperand(&type4);
  auto output02 = model->addOperand(&type4);
  // Phase 2, operations
  static int32_t param4_init[] = {0};
  model->setOperandValue(param4, param4_init, sizeof(int32_t) * 1);
  static int32_t param5_init[] = {1};
  model->setOperandValue(param5, param5_init, sizeof(int32_t) * 1);
  model->addOperation(ANEURALNETWORKS_GATHER, {input02, param4, param5}, {output02});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input02},
    {output02});
  assert(model->isValid());
}

inline bool is_ignored_int32_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type14(Type::TENSOR_INT32, {2, 2});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.5f, 127);
  OperandType type16(Type::TENSOR_INT32, {1, 2});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type19(Type::TENSOR_INT32, {3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input03 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type1);
  auto param7 = model->addOperand(&type2);
  auto output03 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1, 0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input03, param6, param7}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output03});
  assert(model->isValid());
}

inline bool is_ignored_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type14(Type::TENSOR_INT32, {2, 2});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.5f, 127);
  OperandType type16(Type::TENSOR_INT32, {1, 2});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type19(Type::TENSOR_INT32, {3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input03 = model->addOperand(&type5);
  auto param6 = model->addOperand(&type1);
  auto param7 = model->addOperand(&type2);
  auto output03 = model->addOperand(&type7);
  // Phase 2, operations
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1, 0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input03, param6, param7}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output03});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type14(Type::TENSOR_INT32, {2, 2});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.5f, 127);
  OperandType type16(Type::TENSOR_INT32, {1, 2});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type19(Type::TENSOR_INT32, {3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {2}, 0.5f, 127);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input03 = model->addOperand(&type17);
  auto param6 = model->addOperand(&type1);
  auto param7 = model->addOperand(&type2);
  auto output03 = model->addOperand(&type20);
  // Phase 2, operations
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1, 0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input03, param6, param7}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output03});
  assert(model->isValid());
}

inline bool is_ignored_quant8_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_int32_4(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type14(Type::TENSOR_INT32, {2, 2});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.5f, 127);
  OperandType type16(Type::TENSOR_INT32, {1, 2});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type19(Type::TENSOR_INT32, {3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {2}, 0.5f, 127);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input03 = model->addOperand(&type19);
  auto param6 = model->addOperand(&type1);
  auto param7 = model->addOperand(&type2);
  auto output03 = model->addOperand(&type2);
  // Phase 2, operations
  static int32_t param6_init[] = {0};
  model->setOperandValue(param6, param6_init, sizeof(int32_t) * 1);
  static int32_t param7_init[] = {1, 0};
  model->setOperandValue(param7, param7_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input03, param6, param7}, {output03});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input03},
    {output03});
  assert(model->isValid());
}

inline bool is_ignored_int32_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_5(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type14(Type::TENSOR_INT32, {2, 2});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.5f, 127);
  OperandType type16(Type::TENSOR_INT32, {1, 2});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type19(Type::TENSOR_INT32, {3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {2}, 0.5f, 127);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input04 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type1);
  auto param9 = model->addOperand(&type2);
  auto output04 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0, 0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input04, param8, param9}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04},
    {output04});
  assert(model->isValid());
}

inline bool is_ignored_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_5(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type14(Type::TENSOR_INT32, {2, 2});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.5f, 127);
  OperandType type16(Type::TENSOR_INT32, {1, 2});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type19(Type::TENSOR_INT32, {3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {2}, 0.5f, 127);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input04 = model->addOperand(&type8);
  auto param8 = model->addOperand(&type1);
  auto param9 = model->addOperand(&type2);
  auto output04 = model->addOperand(&type9);
  // Phase 2, operations
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0, 0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input04, param8, param9}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04},
    {output04});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_5(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type14(Type::TENSOR_INT32, {2, 2});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.5f, 127);
  OperandType type16(Type::TENSOR_INT32, {1, 2});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type19(Type::TENSOR_INT32, {3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {2}, 0.5f, 127);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2}, 0.5f, 127);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2}, 0.5f, 127);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input04 = model->addOperand(&type21);
  auto param8 = model->addOperand(&type1);
  auto param9 = model->addOperand(&type2);
  auto output04 = model->addOperand(&type22);
  // Phase 2, operations
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0, 0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input04, param8, param9}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04},
    {output04});
  assert(model->isValid());
}

inline bool is_ignored_quant8_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_int32_5(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type14(Type::TENSOR_INT32, {2, 2});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.5f, 127);
  OperandType type16(Type::TENSOR_INT32, {1, 2});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type19(Type::TENSOR_INT32, {3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {2}, 0.5f, 127);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2}, 0.5f, 127);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2}, 0.5f, 127);
  OperandType type23(Type::TENSOR_INT32, {1, 2, 2});
  OperandType type24(Type::TENSOR_INT32, {2, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input04 = model->addOperand(&type23);
  auto param8 = model->addOperand(&type1);
  auto param9 = model->addOperand(&type2);
  auto output04 = model->addOperand(&type24);
  // Phase 2, operations
  static int32_t param8_init[] = {0};
  model->setOperandValue(param8, param8_init, sizeof(int32_t) * 1);
  static int32_t param9_init[] = {0, 0};
  model->setOperandValue(param9, param9_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input04, param8, param9}, {output04});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input04},
    {output04});
  assert(model->isValid());
}

inline bool is_ignored_int32_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_6(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type14(Type::TENSOR_INT32, {2, 2});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.5f, 127);
  OperandType type16(Type::TENSOR_INT32, {1, 2});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type19(Type::TENSOR_INT32, {3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {2}, 0.5f, 127);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2}, 0.5f, 127);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2}, 0.5f, 127);
  OperandType type23(Type::TENSOR_INT32, {1, 2, 2});
  OperandType type24(Type::TENSOR_INT32, {2, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input05 = model->addOperand(&type10);
  auto param10 = model->addOperand(&type1);
  auto param11 = model->addOperand(&type2);
  auto output05 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1, 3};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input05, param10, param11}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05},
    {output05});
  assert(model->isValid());
}

inline bool is_ignored_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_6(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type14(Type::TENSOR_INT32, {2, 2});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.5f, 127);
  OperandType type16(Type::TENSOR_INT32, {1, 2});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type19(Type::TENSOR_INT32, {3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {2}, 0.5f, 127);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2}, 0.5f, 127);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2}, 0.5f, 127);
  OperandType type23(Type::TENSOR_INT32, {1, 2, 2});
  OperandType type24(Type::TENSOR_INT32, {2, 2, 2});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input05 = model->addOperand(&type10);
  auto param10 = model->addOperand(&type1);
  auto param11 = model->addOperand(&type2);
  auto output05 = model->addOperand(&type11);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1, 3};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input05, param10, param11}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05},
    {output05});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_6(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type14(Type::TENSOR_INT32, {2, 2});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.5f, 127);
  OperandType type16(Type::TENSOR_INT32, {1, 2});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type19(Type::TENSOR_INT32, {3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {2}, 0.5f, 127);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2}, 0.5f, 127);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2}, 0.5f, 127);
  OperandType type23(Type::TENSOR_INT32, {1, 2, 2});
  OperandType type24(Type::TENSOR_INT32, {2, 2, 2});
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {4, 1}, 0.5f, 127);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {2, 1}, 0.5f, 127);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input05 = model->addOperand(&type25);
  auto param10 = model->addOperand(&type1);
  auto param11 = model->addOperand(&type2);
  auto output05 = model->addOperand(&type26);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1, 3};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input05, param10, param11}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05},
    {output05});
  assert(model->isValid());
}

inline bool is_ignored_quant8_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_int32_6(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type14(Type::TENSOR_INT32, {2, 2});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.5f, 127);
  OperandType type16(Type::TENSOR_INT32, {1, 2});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type19(Type::TENSOR_INT32, {3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {2}, 0.5f, 127);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2}, 0.5f, 127);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2}, 0.5f, 127);
  OperandType type23(Type::TENSOR_INT32, {1, 2, 2});
  OperandType type24(Type::TENSOR_INT32, {2, 2, 2});
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {4, 1}, 0.5f, 127);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {2, 1}, 0.5f, 127);
  OperandType type27(Type::TENSOR_INT32, {4, 1});
  OperandType type28(Type::TENSOR_INT32, {2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input05 = model->addOperand(&type27);
  auto param10 = model->addOperand(&type1);
  auto param11 = model->addOperand(&type2);
  auto output05 = model->addOperand(&type28);
  // Phase 2, operations
  static int32_t param10_init[] = {0};
  model->setOperandValue(param10, param10_init, sizeof(int32_t) * 1);
  static int32_t param11_init[] = {1, 3};
  model->setOperandValue(param11, param11_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input05, param10, param11}, {output05});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input05},
    {output05});
  assert(model->isValid());
}

inline bool is_ignored_int32_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_7(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type14(Type::TENSOR_INT32, {2, 2});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.5f, 127);
  OperandType type16(Type::TENSOR_INT32, {1, 2});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type19(Type::TENSOR_INT32, {3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {2}, 0.5f, 127);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2}, 0.5f, 127);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2}, 0.5f, 127);
  OperandType type23(Type::TENSOR_INT32, {1, 2, 2});
  OperandType type24(Type::TENSOR_INT32, {2, 2, 2});
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {4, 1}, 0.5f, 127);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {2, 1}, 0.5f, 127);
  OperandType type27(Type::TENSOR_INT32, {4, 1});
  OperandType type28(Type::TENSOR_INT32, {2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input06 = model->addOperand(&type12);
  auto param12 = model->addOperand(&type1);
  auto param13 = model->addOperand(&type2);
  auto output06 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1, 0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input06, param12, param13}, {output06});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input06},
    {output06});
  assert(model->isValid());
}

inline bool is_ignored_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_7(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type14(Type::TENSOR_INT32, {2, 2});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.5f, 127);
  OperandType type16(Type::TENSOR_INT32, {1, 2});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type19(Type::TENSOR_INT32, {3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {2}, 0.5f, 127);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2}, 0.5f, 127);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2}, 0.5f, 127);
  OperandType type23(Type::TENSOR_INT32, {1, 2, 2});
  OperandType type24(Type::TENSOR_INT32, {2, 2, 2});
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {4, 1}, 0.5f, 127);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {2, 1}, 0.5f, 127);
  OperandType type27(Type::TENSOR_INT32, {4, 1});
  OperandType type28(Type::TENSOR_INT32, {2, 1});
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input06 = model->addOperand(&type12);
  auto param12 = model->addOperand(&type1);
  auto param13 = model->addOperand(&type2);
  auto output06 = model->addOperand(&type12);
  // Phase 2, operations
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1, 0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input06, param12, param13}, {output06});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input06},
    {output06});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_7(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type14(Type::TENSOR_INT32, {2, 2});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.5f, 127);
  OperandType type16(Type::TENSOR_INT32, {1, 2});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type19(Type::TENSOR_INT32, {3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {2}, 0.5f, 127);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2}, 0.5f, 127);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2}, 0.5f, 127);
  OperandType type23(Type::TENSOR_INT32, {1, 2, 2});
  OperandType type24(Type::TENSOR_INT32, {2, 2, 2});
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {4, 1}, 0.5f, 127);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {2, 1}, 0.5f, 127);
  OperandType type27(Type::TENSOR_INT32, {4, 1});
  OperandType type28(Type::TENSOR_INT32, {2, 1});
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3}, 0.5f, 127);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input06 = model->addOperand(&type29);
  auto param12 = model->addOperand(&type1);
  auto param13 = model->addOperand(&type2);
  auto output06 = model->addOperand(&type29);
  // Phase 2, operations
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1, 0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input06, param12, param13}, {output06});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input06},
    {output06});
  assert(model->isValid());
}

inline bool is_ignored_quant8_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_int32_7(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type14(Type::TENSOR_INT32, {2, 2});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.5f, 127);
  OperandType type16(Type::TENSOR_INT32, {1, 2});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type19(Type::TENSOR_INT32, {3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {2}, 0.5f, 127);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2}, 0.5f, 127);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2}, 0.5f, 127);
  OperandType type23(Type::TENSOR_INT32, {1, 2, 2});
  OperandType type24(Type::TENSOR_INT32, {2, 2, 2});
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {4, 1}, 0.5f, 127);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {2, 1}, 0.5f, 127);
  OperandType type27(Type::TENSOR_INT32, {4, 1});
  OperandType type28(Type::TENSOR_INT32, {2, 1});
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3}, 0.5f, 127);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type30(Type::TENSOR_INT32, {1, 2, 3});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input06 = model->addOperand(&type30);
  auto param12 = model->addOperand(&type1);
  auto param13 = model->addOperand(&type2);
  auto output06 = model->addOperand(&type30);
  // Phase 2, operations
  static int32_t param12_init[] = {1};
  model->setOperandValue(param12, param12_init, sizeof(int32_t) * 1);
  static int32_t param13_init[] = {1, 0};
  model->setOperandValue(param13, param13_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input06, param12, param13}, {output06});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input06},
    {output06});
  assert(model->isValid());
}

inline bool is_ignored_int32_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_8(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type14(Type::TENSOR_INT32, {2, 2});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.5f, 127);
  OperandType type16(Type::TENSOR_INT32, {1, 2});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type19(Type::TENSOR_INT32, {3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {2}, 0.5f, 127);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2}, 0.5f, 127);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2}, 0.5f, 127);
  OperandType type23(Type::TENSOR_INT32, {1, 2, 2});
  OperandType type24(Type::TENSOR_INT32, {2, 2, 2});
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {4, 1}, 0.5f, 127);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {2, 1}, 0.5f, 127);
  OperandType type27(Type::TENSOR_INT32, {4, 1});
  OperandType type28(Type::TENSOR_INT32, {2, 1});
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3}, 0.5f, 127);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type30(Type::TENSOR_INT32, {1, 2, 3});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input07 = model->addOperand(&type12);
  auto param14 = model->addOperand(&type1);
  auto param15 = model->addOperand(&type2);
  auto output07 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param14_init[] = {2};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {2, 0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input07, param14, param15}, {output07});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input07},
    {output07});
  assert(model->isValid());
}

inline bool is_ignored_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_relaxed_8(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type14(Type::TENSOR_INT32, {2, 2});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.5f, 127);
  OperandType type16(Type::TENSOR_INT32, {1, 2});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type19(Type::TENSOR_INT32, {3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {2}, 0.5f, 127);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2}, 0.5f, 127);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2}, 0.5f, 127);
  OperandType type23(Type::TENSOR_INT32, {1, 2, 2});
  OperandType type24(Type::TENSOR_INT32, {2, 2, 2});
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {4, 1}, 0.5f, 127);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {2, 1}, 0.5f, 127);
  OperandType type27(Type::TENSOR_INT32, {4, 1});
  OperandType type28(Type::TENSOR_INT32, {2, 1});
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3}, 0.5f, 127);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type30(Type::TENSOR_INT32, {1, 2, 3});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input07 = model->addOperand(&type12);
  auto param14 = model->addOperand(&type1);
  auto param15 = model->addOperand(&type2);
  auto output07 = model->addOperand(&type8);
  // Phase 2, operations
  static int32_t param14_init[] = {2};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {2, 0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input07, param14, param15}, {output07});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input07},
    {output07});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_relaxed_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_quant8_8(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type14(Type::TENSOR_INT32, {2, 2});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.5f, 127);
  OperandType type16(Type::TENSOR_INT32, {1, 2});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type19(Type::TENSOR_INT32, {3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {2}, 0.5f, 127);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2}, 0.5f, 127);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2}, 0.5f, 127);
  OperandType type23(Type::TENSOR_INT32, {1, 2, 2});
  OperandType type24(Type::TENSOR_INT32, {2, 2, 2});
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {4, 1}, 0.5f, 127);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {2, 1}, 0.5f, 127);
  OperandType type27(Type::TENSOR_INT32, {4, 1});
  OperandType type28(Type::TENSOR_INT32, {2, 1});
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3}, 0.5f, 127);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type30(Type::TENSOR_INT32, {1, 2, 3});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input07 = model->addOperand(&type29);
  auto param14 = model->addOperand(&type1);
  auto param15 = model->addOperand(&type2);
  auto output07 = model->addOperand(&type21);
  // Phase 2, operations
  static int32_t param14_init[] = {2};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {2, 0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input07, param14, param15}, {output07});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input07},
    {output07});
  assert(model->isValid());
}

inline bool is_ignored_quant8_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_int32_8(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 2});
  OperandType type1(Type::INT32, {});
  OperandType type10(Type::TENSOR_FLOAT32, {4, 1});
  OperandType type11(Type::TENSOR_FLOAT32, {2, 1});
  OperandType type12(Type::TENSOR_FLOAT32, {1, 2, 3});
  OperandType type13(Type::TENSOR_QUANT8_ASYMM, {2, 2}, 0.5f, 127);
  OperandType type14(Type::TENSOR_INT32, {2, 2});
  OperandType type15(Type::TENSOR_QUANT8_ASYMM, {1, 2}, 0.5f, 127);
  OperandType type16(Type::TENSOR_INT32, {1, 2});
  OperandType type17(Type::TENSOR_QUANT8_ASYMM, {3}, 0.5f, 127);
  OperandType type18(Type::TENSOR_QUANT8_ASYMM, {1}, 0.5f, 127);
  OperandType type19(Type::TENSOR_INT32, {3});
  OperandType type2(Type::TENSOR_INT32, {2});
  OperandType type20(Type::TENSOR_QUANT8_ASYMM, {2}, 0.5f, 127);
  OperandType type21(Type::TENSOR_QUANT8_ASYMM, {1, 2, 2}, 0.5f, 127);
  OperandType type22(Type::TENSOR_QUANT8_ASYMM, {2, 2, 2}, 0.5f, 127);
  OperandType type23(Type::TENSOR_INT32, {1, 2, 2});
  OperandType type24(Type::TENSOR_INT32, {2, 2, 2});
  OperandType type25(Type::TENSOR_QUANT8_ASYMM, {4, 1}, 0.5f, 127);
  OperandType type26(Type::TENSOR_QUANT8_ASYMM, {2, 1}, 0.5f, 127);
  OperandType type27(Type::TENSOR_INT32, {4, 1});
  OperandType type28(Type::TENSOR_INT32, {2, 1});
  OperandType type29(Type::TENSOR_QUANT8_ASYMM, {1, 2, 3}, 0.5f, 127);
  OperandType type3(Type::TENSOR_FLOAT32, {1, 2});
  OperandType type30(Type::TENSOR_INT32, {1, 2, 3});
  OperandType type4(Type::TENSOR_INT32, {1});
  OperandType type5(Type::TENSOR_FLOAT32, {3});
  OperandType type6(Type::TENSOR_FLOAT32, {1});
  OperandType type7(Type::TENSOR_FLOAT32, {2});
  OperandType type8(Type::TENSOR_FLOAT32, {1, 2, 2});
  OperandType type9(Type::TENSOR_FLOAT32, {2, 2, 2});
  // Phase 1, operands
  auto input07 = model->addOperand(&type30);
  auto param14 = model->addOperand(&type1);
  auto param15 = model->addOperand(&type2);
  auto output07 = model->addOperand(&type23);
  // Phase 2, operations
  static int32_t param14_init[] = {2};
  model->setOperandValue(param14, param14_init, sizeof(int32_t) * 1);
  static int32_t param15_init[] = {2, 0};
  model->setOperandValue(param15, param15_init, sizeof(int32_t) * 2);
  model->addOperation(ANEURALNETWORKS_GATHER, {input07, param14, param15}, {output07});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input07},
    {output07});
  assert(model->isValid());
}

inline bool is_ignored_int32_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

