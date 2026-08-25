#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Color; }

#define UNITYENGINE_RENDERING_COLORPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE4320)
#define UNITYENGINE_RENDERING_COLORPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE4380)
#define UNITYENGINE_RENDERING_COLORPARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x9FE4420)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ColorParameter_TypeDefinitionIndex = 34114;

	class ColorParameter : public ::System::Net::NetworkInformation::Win32LengthFlagsUnion
	{
	public:
		::System::Boolean hdr; // 0x28
		::System::Boolean showAlpha; // 0x29
		::System::Boolean showEyeDropper; // 0x2A

		::System::Void .ctor(::UnityEngine::Color* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORPARAMETER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Color* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORPARAMETER_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Interp(::UnityEngine::Color* arg, ::UnityEngine::Color* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::UnityEngine::Color*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COLORPARAMETER_INTERP_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

