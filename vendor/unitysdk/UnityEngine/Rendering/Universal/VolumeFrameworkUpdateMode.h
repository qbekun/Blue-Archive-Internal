#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class VolumeFrameworkUpdateMode; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VolumeFrameworkUpdateMode_TypeDefinitionIndex = 32521;

	class VolumeFrameworkUpdateMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode* EveryFrame; // 0x0
		::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode* ViaScripting; // 0x0
		::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode* UsePipelineSettings; // 0x0

	};
}

