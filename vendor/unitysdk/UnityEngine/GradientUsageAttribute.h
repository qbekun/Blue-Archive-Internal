#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class ColorSpace; }

#define UNITYENGINE_GRADIENTUSAGEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22CBB0)

namespace UnityEngine
{
	inline static constexpr unsigned int GradientUsageAttribute_TypeDefinitionIndex = 31120;

	class GradientUsageAttribute : public Il2CppObject
	{
	public:
		::System::Boolean hdr; // 0x18
		::UnityEngine::ColorSpace* colorSpace; // 0x1C

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENTUSAGEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

