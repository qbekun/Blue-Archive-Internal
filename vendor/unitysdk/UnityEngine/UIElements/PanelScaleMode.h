#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class PanelScaleMode; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PanelScaleMode_TypeDefinitionIndex = 30562;

	class PanelScaleMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::UIElements::PanelScaleMode* ConstantPixelSize; // 0x0
		::UnityEngine::UIElements::PanelScaleMode* ConstantPhysicalSize; // 0x0
		::UnityEngine::UIElements::PanelScaleMode* ScaleWithScreenSize; // 0x0

	};
}

