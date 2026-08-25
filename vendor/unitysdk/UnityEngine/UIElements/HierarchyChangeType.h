#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class HierarchyChangeType; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int HierarchyChangeType_TypeDefinitionIndex = 30263;

	class HierarchyChangeType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::UIElements::HierarchyChangeType* Add; // 0x0
		::UnityEngine::UIElements::HierarchyChangeType* Remove; // 0x0
		::UnityEngine::UIElements::HierarchyChangeType* Move; // 0x0

	};
}

