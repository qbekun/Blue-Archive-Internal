#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_COLORUSAGEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22CB40)
#define UNITYENGINE_COLORUSAGEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22CB70)

namespace UnityEngine
{
	inline static constexpr unsigned int ColorUsageAttribute_TypeDefinitionIndex = 31119;

	class ColorUsageAttribute : public Il2CppObject
	{
	public:
		::System::Boolean showAlpha; // 0x18
		::System::Boolean hdr; // 0x19
		::System::Single minBrightness; // 0x1C
		::System::Single maxBrightness; // 0x20
		::System::Single minExposureValue; // 0x24
		::System::Single maxExposureValue; // 0x28

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLORUSAGEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLORUSAGEATTRIBUTE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

