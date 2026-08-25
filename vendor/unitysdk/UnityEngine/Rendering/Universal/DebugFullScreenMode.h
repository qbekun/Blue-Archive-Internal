#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DebugFullScreenMode; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DebugFullScreenMode_TypeDefinitionIndex = 38084;

	class DebugFullScreenMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::DebugFullScreenMode* None; // 0x0
		::UnityEngine::Rendering::Universal::DebugFullScreenMode* Depth; // 0x0
		::UnityEngine::Rendering::Universal::DebugFullScreenMode* AdditionalLightsShadowMap; // 0x0
		::UnityEngine::Rendering::Universal::DebugFullScreenMode* MainLightShadowMap; // 0x0

	};
}

