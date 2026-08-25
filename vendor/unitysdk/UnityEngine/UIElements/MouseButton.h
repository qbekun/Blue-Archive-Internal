#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class MouseButton; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseButton_TypeDefinitionIndex = 30122;

	class MouseButton : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::UIElements::MouseButton* LeftMouse; // 0x0
		::UnityEngine::UIElements::MouseButton* RightMouse; // 0x0
		::UnityEngine::UIElements::MouseButton* MiddleMouse; // 0x0

	};
}

