#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Color; }

#define UNITYENGINE_GRADIENTCOLORKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2205D0)

namespace UnityEngine
{
	inline static constexpr unsigned int GradientColorKey_TypeDefinitionIndex = 31093;

	class GradientColorKey : public Il2CppObject
	{
	public:
		::UnityEngine::Color* color; // 0x10
		::System::Single time; // 0x20

		::System::Void .ctor(::UnityEngine::Color* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENTCOLORKEY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

