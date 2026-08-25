#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UI { class CanvasUpdate; }

namespace UnityEngine::UI
{
	inline static constexpr unsigned int CanvasUpdate_TypeDefinitionIndex = 34745;

	class CanvasUpdate : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::UI::CanvasUpdate* Prelayout; // 0x0
		::UnityEngine::UI::CanvasUpdate* Layout; // 0x0
		::UnityEngine::UI::CanvasUpdate* PostLayout; // 0x0
		::UnityEngine::UI::CanvasUpdate* PreRender; // 0x0
		::UnityEngine::UI::CanvasUpdate* LatePreRender; // 0x0
		::UnityEngine::UI::CanvasUpdate* MaxUpdateValue; // 0x0

	};
}

