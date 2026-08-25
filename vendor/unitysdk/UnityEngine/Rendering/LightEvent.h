#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class LightEvent; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int LightEvent_TypeDefinitionIndex = 31499;

	class LightEvent : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::LightEvent* BeforeShadowMap; // 0x0
		::UnityEngine::Rendering::LightEvent* AfterShadowMap; // 0x0
		::UnityEngine::Rendering::LightEvent* BeforeScreenspaceMask; // 0x0
		::UnityEngine::Rendering::LightEvent* AfterScreenspaceMask; // 0x0
		::UnityEngine::Rendering::LightEvent* BeforeShadowMapPass; // 0x0
		::UnityEngine::Rendering::LightEvent* AfterShadowMapPass; // 0x0

	};
}

