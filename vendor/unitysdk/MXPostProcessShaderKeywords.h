#pragma once
#include "unitysdk.h"

#define MXPOSTPROCESSSHADERKEYWORDS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA0D8B80)
#define MXPOSTPROCESSSHADERKEYWORDS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0D9180)

	inline static constexpr unsigned int MXPostProcessShaderKeywords_TypeDefinitionIndex = 32881;

	class MXPostProcessShaderKeywords : public Il2CppObject
	{
	public:
		::System::Int32 BlurParams; // 0x0
		::System::Int32 BlurJitterParams; // 0x4
		::System::Int32 BlurShakePower; // 0x8
		::System::Int32 BlurMaskTexture; // 0xC
		::System::Int32 GlitchParamsA; // 0x10
		::System::Int32 GlitchParamsB; // 0x14
		::System::Int32 ThresholdParams; // 0x18
		::System::Int32 ThresholColorA; // 0x1C
		::System::Int32 ThresholColorB; // 0x20
		::System::Int32 SpeedlineParamsA; // 0x24
		::System::Int32 SpeedlineParamsB; // 0x28
		::System::Int32 SpeedlineParamsC; // 0x2C
		::System::Int32 SpeedlineColor; // 0x30
		::System::Int32 ChromaticAberrationParams; // 0x34
		::System::Int32 VignetteColor; // 0x38
		::System::Int32 VignetteParamsA; // 0x3C
		::System::Int32 VignetteParamsB; // 0x40
		::System::String* MX_POST_BLUR_DISTORION_ANIM; // 0x48
		::System::String* MX_POST_BLUR_RADIAL_HQ; // 0x50
		::System::String* MX_POST_BLUR_USE_MASKTEX; // 0x58
		::System::String* MX_POST_BLUR_DEBUG; // 0x60
		::System::String* MX_POST_GLITCH_VERTICAL; // 0x68
		::System::String* MX_POST_GLITCH_CHROMATIC_ABERRATION; // 0x70
		::System::String* MX_POST_SPEEDLINE_NOISE_ANIMATION; // 0x78
		::System::String* MX_POST_SPEEDLINE_DEPTH_CUT; // 0x80
		::System::String* MX_USE_CHROMATIC_ABERRATION; // 0x88
		::System::String* MX_CHROMATIC_ABERRATION_DIR; // 0x90
		::System::String* MX_USE_THRESHOLD; // 0x98
		::System::String* MX_USE_INVERSE; // 0xA0
		::System::String* MX_VIGNETTE_ADDTIVE; // 0xA8
		::System::String* MX_VIGNETTE_ALPHABLEND; // 0xB0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPOSTPROCESSSHADERKEYWORDS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPOSTPROCESSSHADERKEYWORDS_.CTOR_OFFSET))(nullptr);
		}

	};

