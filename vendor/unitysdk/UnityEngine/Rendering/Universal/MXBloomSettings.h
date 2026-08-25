#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Shader; }
namespace UnityEngine { class Color; }

#define UNITYENGINE_RENDERING_UNIVERSAL_MXBLOOMSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA05D970)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MXBloomSettings_TypeDefinitionIndex = 32658;

	class MXBloomSettings : public Il2CppObject
	{
	public:
		::UnityEngine::Shader* BloomShader; // 0x18
		::System::Boolean Enable; // 0x20
		::System::Single Intensity; // 0x24
		::System::Single Threshold; // 0x28
		::System::Single SoftKnee; // 0x2C
		::System::Single Clamp; // 0x30
		::System::Int32 Diffusion; // 0x34
		::System::Single AnamorphicRatio; // 0x38
		::UnityEngine::Color* Color; // 0x3C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MXBLOOMSETTINGS_.CTOR_OFFSET))(nullptr);
		}

	};
}

