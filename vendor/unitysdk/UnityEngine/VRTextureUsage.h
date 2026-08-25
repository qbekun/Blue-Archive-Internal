#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class VRTextureUsage; }

namespace UnityEngine
{
	inline static constexpr unsigned int VRTextureUsage_TypeDefinitionIndex = 31050;

	class VRTextureUsage : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::VRTextureUsage* None; // 0x0
		::UnityEngine::VRTextureUsage* OneEye; // 0x0
		::UnityEngine::VRTextureUsage* TwoEyes; // 0x0
		::UnityEngine::VRTextureUsage* DeviceSpecific; // 0x0

	};
}

