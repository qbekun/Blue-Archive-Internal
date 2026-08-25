#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class FlexDirection; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int FlexDirection_TypeDefinitionIndex = 30156;

	class FlexDirection : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::UIElements::FlexDirection* Column; // 0x0
		::UnityEngine::UIElements::FlexDirection* ColumnReverse; // 0x0
		::UnityEngine::UIElements::FlexDirection* Row; // 0x0
		::UnityEngine::UIElements::FlexDirection* RowReverse; // 0x0

	};
}

