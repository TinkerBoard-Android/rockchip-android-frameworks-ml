// clang-format off
// Generated file (from: bidirectional_sequence_lstm_float16_batch_major_merge_outputs.mod.py). Do not edit
std::vector<MixedTypedExample>& get_examples_blackbox() {
static std::vector<MixedTypedExample> examples_blackbox = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 3, 2}}, {1, {4, 2}}, {2, {4, 2}}, {3, {4, 2}}, {4, {4, 2}}, {5, {4, 4}}, {6, {4, 4}}, {7, {4, 4}}, {8, {4, 4}}, {9, {4}}, {10, {4}}, {11, {4}}, {12, {4}}, {13, {4}}, {14, {4}}, {15, {4}}, {16, {4, 4}}, {17, {4}}, {18, {4, 2}}, {19, {4, 2}}, {20, {4, 2}}, {21, {4, 2}}, {22, {4, 4}}, {23, {4, 4}}, {24, {4, 4}}, {25, {4, 4}}, {26, {4}}, {27, {4}}, {28, {4}}, {29, {4}}, {30, {4}}, {31, {4}}, {32, {4}}, {33, {4, 4}}, {34, {4}}, {35, {1, 4}}, {36, {1, 4}}, {37, {1, 4}}, {38, {1, 4}}, {39, {1, 3, 2}}, {40, {4, 2}}, {41, {4, 2}}, {42, {4, 2}}, {43, {4, 2}}, {44, {4, 2}}, {45, {4, 2}}, {46, {4, 2}}, {47, {4, 2}}, {48, {4}}, {49, {4}}, {50, {4}}, {51, {4}}, {52, {4}}, {53, {4}}, {54, {4}}, {55, {4}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {2.0f, 3.0f, 3.0f, 4.0f, 1.0f, 1.0f}}, {1, {-0.45018822f, -0.02338299f, -0.0870589f, -0.34550029f, 0.04266912f, -0.15680569f, -0.34856534f, 0.43890524f}}, {2, {0.09701663f, 0.20334584f, -0.50592935f, -0.31343272f, -0.40032279f, 0.44781327f, 0.01387155f, -0.35593212f}}, {3, {-0.50013041f, 0.1370284f, 0.11810488f, 0.2013163f, -0.20583314f, 0.44344562f, 0.22077113f, -0.29909778f}}, {4, {-0.25065863f, -0.28290087f, 0.04613829f, 0.40525138f, 0.44272184f, 0.03897077f, -0.1556896f, 0.19487578f}}, {5, {-0.0063535f, -0.2042388f, 0.31454784f, -0.35746509f, 0.28902304f, 0.08183324f, -0.16555229f, 0.02286911f, -0.13566875f, 0.03034258f, 0.48091322f, -0.12528998f, 0.24077177f, -0.51332325f, -0.33502164f, 0.10629296f}}, {6, {-0.48684245f, -0.06655136f, 0.42224967f, 0.2112639f, 0.27654213f, 0.20864892f, -0.07646349f, 0.45877004f, 0.00141793f, -0.14609534f, 0.36447752f, 0.09196436f, 0.28053468f, 0.01560611f, -0.20127171f, -0.01140004f}}, {7, {-0.3407414f, 0.24443203f, -0.2078532f, 0.26320225f, 0.05695659f, -0.00123841f, -0.4744786f, -0.35869038f, -0.06418842f, -0.13502428f, -0.501764f, 0.22830659f, -0.46367589f, 0.26016325f, -0.03894562f, -0.16368064f}}, {8, {0.43385774f, -0.17194885f, 0.2718237f, 0.09215671f, 0.24107647f, -0.39835793f, 0.18212086f, 0.01301402f, 0.48572797f, -0.50656658f, 0.20047462f, -0.20607421f, -0.51818722f, -0.15390486f, 0.0468148f, 0.39922136f}}, {9, {}}, {10, {}}, {11, {}}, {12, {0.0f, 0.0f, 0.0f, 0.0f}}, {13, {1.0f, 1.0f, 1.0f, 1.0f}}, {14, {0.0f, 0.0f, 0.0f, 0.0f}}, {15, {0.0f, 0.0f, 0.0f, 0.0f}}, {16, {}}, {17, {}}, {18, {-0.45018822f, -0.02338299f, -0.0870589f, -0.34550029f, 0.04266912f, -0.15680569f, -0.34856534f, 0.43890524f}}, {19, {0.09701663f, 0.20334584f, -0.50592935f, -0.31343272f, -0.40032279f, 0.44781327f, 0.01387155f, -0.35593212f}}, {20, {-0.50013041f, 0.1370284f, 0.11810488f, 0.2013163f, -0.20583314f, 0.44344562f, 0.22077113f, -0.29909778f}}, {21, {-0.25065863f, -0.28290087f, 0.04613829f, 0.40525138f, 0.44272184f, 0.03897077f, -0.1556896f, 0.19487578f}}, {22, {-0.0063535f, -0.2042388f, 0.31454784f, -0.35746509f, 0.28902304f, 0.08183324f, -0.16555229f, 0.02286911f, -0.13566875f, 0.03034258f, 0.48091322f, -0.12528998f, 0.24077177f, -0.51332325f, -0.33502164f, 0.10629296f}}, {23, {-0.48684245f, -0.06655136f, 0.42224967f, 0.2112639f, 0.27654213f, 0.20864892f, -0.07646349f, 0.45877004f, 0.00141793f, -0.14609534f, 0.36447752f, 0.09196436f, 0.28053468f, 0.01560611f, -0.20127171f, -0.01140004f}}, {24, {-0.3407414f, 0.24443203f, -0.2078532f, 0.26320225f, 0.05695659f, -0.00123841f, -0.4744786f, -0.35869038f, -0.06418842f, -0.13502428f, -0.501764f, 0.22830659f, -0.46367589f, 0.26016325f, -0.03894562f, -0.16368064f}}, {25, {0.43385774f, -0.17194885f, 0.2718237f, 0.09215671f, 0.24107647f, -0.39835793f, 0.18212086f, 0.01301402f, 0.48572797f, -0.50656658f, 0.20047462f, -0.20607421f, -0.51818722f, -0.15390486f, 0.0468148f, 0.39922136f}}, {26, {}}, {27, {}}, {28, {}}, {29, {0.0f, 0.0f, 0.0f, 0.0f}}, {30, {1.0f, 1.0f, 1.0f, 1.0f}}, {31, {0.0f, 0.0f, 0.0f, 0.0f}}, {32, {0.0f, 0.0f, 0.0f, 0.0f}}, {33, {}}, {34, {}}, {35, {0.0f, 0.0f, 0.0f, 0.0f}}, {36, {0.0f, 0.0f, 0.0f, 0.0f}}, {37, {0.0f, 0.0f, 0.0f, 0.0f}}, {38, {0.0f, 0.0f, 0.0f, 0.0f}}, {39, {}}, {40, {}}, {41, {}}, {42, {}}, {43, {}}, {44, {}}, {45, {}}, {46, {}}, {47, {}}, {48, {}}, {49, {}}, {50, {}}, {51, {}}, {52, {}}, {53, {}}, {54, {}}, {55, {}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 3, 8}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {-0.02973187f, 0.1229473f, 0.20885126f, -0.15358765f, -0.0806187f, 0.139077f, 0.400476f, -0.197842f, -0.03716109f, 0.12507336f, 0.41193449f, -0.20860538f, -0.0332076f, 0.123838f, 0.309777f, -0.17621f, -0.15053082f, 0.09120187f, 0.24278517f, -0.12222792f, -0.0490733f, 0.0739237f, 0.067706f, -0.0208124f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
}
},
}, // End of an example
};
return examples_blackbox;
};

std::vector<MixedTypedExample>& get_examples_blackbox_dynamic_output_shape() {
static std::vector<MixedTypedExample> examples_blackbox_dynamic_output_shape = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 3, 2}}, {1, {4, 2}}, {2, {4, 2}}, {3, {4, 2}}, {4, {4, 2}}, {5, {4, 4}}, {6, {4, 4}}, {7, {4, 4}}, {8, {4, 4}}, {9, {4}}, {10, {4}}, {11, {4}}, {12, {4}}, {13, {4}}, {14, {4}}, {15, {4}}, {16, {4, 4}}, {17, {4}}, {18, {4, 2}}, {19, {4, 2}}, {20, {4, 2}}, {21, {4, 2}}, {22, {4, 4}}, {23, {4, 4}}, {24, {4, 4}}, {25, {4, 4}}, {26, {4}}, {27, {4}}, {28, {4}}, {29, {4}}, {30, {4}}, {31, {4}}, {32, {4}}, {33, {4, 4}}, {34, {4}}, {35, {1, 4}}, {36, {1, 4}}, {37, {1, 4}}, {38, {1, 4}}, {39, {1, 3, 2}}, {40, {4, 2}}, {41, {4, 2}}, {42, {4, 2}}, {43, {4, 2}}, {44, {4, 2}}, {45, {4, 2}}, {46, {4, 2}}, {47, {4, 2}}, {48, {4}}, {49, {4}}, {50, {4}}, {51, {4}}, {52, {4}}, {53, {4}}, {54, {4}}, {55, {4}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {2.0f, 3.0f, 3.0f, 4.0f, 1.0f, 1.0f}}, {1, {-0.45018822f, -0.02338299f, -0.0870589f, -0.34550029f, 0.04266912f, -0.15680569f, -0.34856534f, 0.43890524f}}, {2, {0.09701663f, 0.20334584f, -0.50592935f, -0.31343272f, -0.40032279f, 0.44781327f, 0.01387155f, -0.35593212f}}, {3, {-0.50013041f, 0.1370284f, 0.11810488f, 0.2013163f, -0.20583314f, 0.44344562f, 0.22077113f, -0.29909778f}}, {4, {-0.25065863f, -0.28290087f, 0.04613829f, 0.40525138f, 0.44272184f, 0.03897077f, -0.1556896f, 0.19487578f}}, {5, {-0.0063535f, -0.2042388f, 0.31454784f, -0.35746509f, 0.28902304f, 0.08183324f, -0.16555229f, 0.02286911f, -0.13566875f, 0.03034258f, 0.48091322f, -0.12528998f, 0.24077177f, -0.51332325f, -0.33502164f, 0.10629296f}}, {6, {-0.48684245f, -0.06655136f, 0.42224967f, 0.2112639f, 0.27654213f, 0.20864892f, -0.07646349f, 0.45877004f, 0.00141793f, -0.14609534f, 0.36447752f, 0.09196436f, 0.28053468f, 0.01560611f, -0.20127171f, -0.01140004f}}, {7, {-0.3407414f, 0.24443203f, -0.2078532f, 0.26320225f, 0.05695659f, -0.00123841f, -0.4744786f, -0.35869038f, -0.06418842f, -0.13502428f, -0.501764f, 0.22830659f, -0.46367589f, 0.26016325f, -0.03894562f, -0.16368064f}}, {8, {0.43385774f, -0.17194885f, 0.2718237f, 0.09215671f, 0.24107647f, -0.39835793f, 0.18212086f, 0.01301402f, 0.48572797f, -0.50656658f, 0.20047462f, -0.20607421f, -0.51818722f, -0.15390486f, 0.0468148f, 0.39922136f}}, {9, {}}, {10, {}}, {11, {}}, {12, {0.0f, 0.0f, 0.0f, 0.0f}}, {13, {1.0f, 1.0f, 1.0f, 1.0f}}, {14, {0.0f, 0.0f, 0.0f, 0.0f}}, {15, {0.0f, 0.0f, 0.0f, 0.0f}}, {16, {}}, {17, {}}, {18, {-0.45018822f, -0.02338299f, -0.0870589f, -0.34550029f, 0.04266912f, -0.15680569f, -0.34856534f, 0.43890524f}}, {19, {0.09701663f, 0.20334584f, -0.50592935f, -0.31343272f, -0.40032279f, 0.44781327f, 0.01387155f, -0.35593212f}}, {20, {-0.50013041f, 0.1370284f, 0.11810488f, 0.2013163f, -0.20583314f, 0.44344562f, 0.22077113f, -0.29909778f}}, {21, {-0.25065863f, -0.28290087f, 0.04613829f, 0.40525138f, 0.44272184f, 0.03897077f, -0.1556896f, 0.19487578f}}, {22, {-0.0063535f, -0.2042388f, 0.31454784f, -0.35746509f, 0.28902304f, 0.08183324f, -0.16555229f, 0.02286911f, -0.13566875f, 0.03034258f, 0.48091322f, -0.12528998f, 0.24077177f, -0.51332325f, -0.33502164f, 0.10629296f}}, {23, {-0.48684245f, -0.06655136f, 0.42224967f, 0.2112639f, 0.27654213f, 0.20864892f, -0.07646349f, 0.45877004f, 0.00141793f, -0.14609534f, 0.36447752f, 0.09196436f, 0.28053468f, 0.01560611f, -0.20127171f, -0.01140004f}}, {24, {-0.3407414f, 0.24443203f, -0.2078532f, 0.26320225f, 0.05695659f, -0.00123841f, -0.4744786f, -0.35869038f, -0.06418842f, -0.13502428f, -0.501764f, 0.22830659f, -0.46367589f, 0.26016325f, -0.03894562f, -0.16368064f}}, {25, {0.43385774f, -0.17194885f, 0.2718237f, 0.09215671f, 0.24107647f, -0.39835793f, 0.18212086f, 0.01301402f, 0.48572797f, -0.50656658f, 0.20047462f, -0.20607421f, -0.51818722f, -0.15390486f, 0.0468148f, 0.39922136f}}, {26, {}}, {27, {}}, {28, {}}, {29, {0.0f, 0.0f, 0.0f, 0.0f}}, {30, {1.0f, 1.0f, 1.0f, 1.0f}}, {31, {0.0f, 0.0f, 0.0f, 0.0f}}, {32, {0.0f, 0.0f, 0.0f, 0.0f}}, {33, {}}, {34, {}}, {35, {0.0f, 0.0f, 0.0f, 0.0f}}, {36, {0.0f, 0.0f, 0.0f, 0.0f}}, {37, {0.0f, 0.0f, 0.0f, 0.0f}}, {38, {0.0f, 0.0f, 0.0f, 0.0f}}, {39, {}}, {40, {}}, {41, {}}, {42, {}}, {43, {}}, {44, {}}, {45, {}}, {46, {}}, {47, {}}, {48, {}}, {49, {}}, {50, {}}, {51, {}}, {52, {}}, {53, {}}, {54, {}}, {55, {}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {1, 3, 8}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {{0, {-0.02973187f, 0.1229473f, 0.20885126f, -0.15358765f, -0.0806187f, 0.139077f, 0.400476f, -0.197842f, -0.03716109f, 0.12507336f, 0.41193449f, -0.20860538f, -0.0332076f, 0.123838f, 0.309777f, -0.17621f, -0.15053082f, 0.09120187f, 0.24278517f, -0.12222792f, -0.0490733f, 0.0739237f, 0.067706f, -0.0208124f}}},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
}
},
}, // End of an example
};
return examples_blackbox_dynamic_output_shape;
};

