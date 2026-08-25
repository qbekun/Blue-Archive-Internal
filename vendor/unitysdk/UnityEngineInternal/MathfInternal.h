#pragma once
#include "../unitysdk.h"

#define UNITYENGINEINTERNAL_MATHFINTERNAL_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA1DF920)

namespace UnityEngineInternal
{
	inline static constexpr unsigned int MathfInternal_TypeDefinitionIndex = 30845;

	class MathfInternal : public Il2CppObject
	{
	public:
		::System::Single FloatMinNormal; // 0x0
		::System::Single FloatMinDenormal; // 0x4
		::System::Boolean IsFlushToZeroEnabled; // 0x8

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_MATHFINTERNAL_.CCTOR_OFFSET))(nullptr);
		}

	};
}

