#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class DragAndDropPosition; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DragAndDropPosition_TypeDefinitionIndex = 30433;

	class DragAndDropPosition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::UIElements::DragAndDropPosition* OverItem; // 0x0
		::UnityEngine::UIElements::DragAndDropPosition* BetweenItems; // 0x0
		::UnityEngine::UIElements::DragAndDropPosition* OutsideItems; // 0x0

	};
}

