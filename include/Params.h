#pragma once

#define CCM_WIDTH 3
#define CCM_HEIGHT 3
#define LSC_LUT_WIDTH 17
#define LSC_LUT_HEIGHT 13
#define GAMMA_LUT_SIZE 1024

struct BLC_PARAM {
	uint32_t bitNum;
	uint16_t BLCDefaultValue;
};

struct LSC_PARAM {
	float rGain[LSC_LUT_HEIGHT][LSC_LUT_WIDTH];
	float grGain[LSC_LUT_HEIGHT][LSC_LUT_WIDTH];
	float gbGain[LSC_LUT_HEIGHT][LSC_LUT_WIDTH];
	float bGain[LSC_LUT_HEIGHT][LSC_LUT_WIDTH];
};

struct GCC_PARAM {
	double weight;
};

struct WB_GAIN {
	float rGain;
	float gGain;
	float bGain;
};

struct WB_PARM {
	bool WB1stGAMMA2rd;
	WB_GAIN gainType1;
	WB_GAIN gainType2;
};

struct CC_PARAM {
	float CCM[CCM_HEIGHT][CCM_WIDTH];
};

struct GAMMA_PARAM {
	uint16_t lut[GAMMA_LUT_SIZE];
};

struct WNR_PARAM {
	int32_t L1_threshold;
	int32_t L2_threshold;
	int32_t L3_threshold;
};

struct EE_PARAM {
	double alpha;
	int32_t coreSize;
	int32_t delta;
};