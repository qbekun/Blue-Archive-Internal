#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Color; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PanelClearSettings_TypeDefinitionIndex = 30130;

	class PanelClearSettings : public Il2CppObject
	{
	public:
		::System::Boolean clearDepthStencil; // 0x10
		::System::Boolean clearColor; // 0x11
		::UnityEngine::Color* color; // 0x14

	};
}

