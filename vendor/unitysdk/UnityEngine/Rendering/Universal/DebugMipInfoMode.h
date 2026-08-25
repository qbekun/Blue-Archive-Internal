#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DebugMipInfoMode; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DebugMipInfoMode_TypeDefinitionIndex = 38086;

	class DebugMipInfoMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::DebugMipInfoMode* None; // 0x0
		::UnityEngine::Rendering::Universal::DebugMipInfoMode* Level; // 0x0
		::UnityEngine::Rendering::Universal::DebugMipInfoMode* Count; // 0x0
		::UnityEngine::Rendering::Universal::DebugMipInfoMode* Ratio; // 0x0

	};
}

