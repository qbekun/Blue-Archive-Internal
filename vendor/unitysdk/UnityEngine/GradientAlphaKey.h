#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_GRADIENTALPHAKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2205E0)

namespace UnityEngine
{
	inline static constexpr unsigned int GradientAlphaKey_TypeDefinitionIndex = 31094;

	class GradientAlphaKey : public Il2CppObject
	{
	public:
		::System::Single alpha; // 0x10
		::System::Single time; // 0x14

		::System::Void .ctor(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENTALPHAKEY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

