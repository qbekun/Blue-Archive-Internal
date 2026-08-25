#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int StereoRenderingMode_TypeDefinitionIndex = 38024;

	class StereoRenderingMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		StereoRenderingMode* MultiPass; // 0x0
		StereoRenderingMode* SinglePass; // 0x0
		StereoRenderingMode* SinglePassInstanced; // 0x0
		StereoRenderingMode* SinglePassMultiview; // 0x0

	};

