#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector4; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int PunctualLightData_TypeDefinitionIndex = 32804;

	class PunctualLightData : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* wsPos; // 0x10
		::System::Single radius; // 0x1C
		::UnityEngine::Vector4* color; // 0x20
		::UnityEngine::Vector4* attenuation; // 0x30
		::UnityEngine::Vector3* spotDirection; // 0x40
		::System::Int32 flags; // 0x4C
		::UnityEngine::Vector4* occlusionProbeInfo; // 0x50
		::System::UInt32 layerMask; // 0x60

	};
}

