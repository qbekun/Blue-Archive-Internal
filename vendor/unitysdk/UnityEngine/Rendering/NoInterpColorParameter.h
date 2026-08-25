#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Color; }

#define UNITYENGINE_RENDERING_NOINTERPCOLORPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE4490)
#define UNITYENGINE_RENDERING_NOINTERPCOLORPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE44F0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpColorParameter_TypeDefinitionIndex = 34115;

	class NoInterpColorParameter : public ::System::Net::NetworkInformation::Win32LengthFlagsUnion
	{
	public:
		::System::Boolean hdr; // 0x28
		::System::Boolean showAlpha; // 0x29
		::System::Boolean showEyeDropper; // 0x2A

		::System::Void .ctor(::UnityEngine::Color* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPCOLORPARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Color* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPCOLORPARAMETER_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

