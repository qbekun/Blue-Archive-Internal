#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::Text { class VertexSortingOrder; }

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int VertexSortingOrder_TypeDefinitionIndex = 35576;

	class VertexSortingOrder : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::TextCore::Text::VertexSortingOrder* Normal; // 0x0
		::UnityEngine::TextCore::Text::VertexSortingOrder* Reverse; // 0x0

	};
}

