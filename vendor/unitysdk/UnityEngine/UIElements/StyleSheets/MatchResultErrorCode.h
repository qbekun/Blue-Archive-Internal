#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements::StyleSheets { class MatchResultErrorCode; }

namespace UnityEngine::UIElements::StyleSheets
{
	inline static constexpr unsigned int MatchResultErrorCode_TypeDefinitionIndex = 30816;

	class MatchResultErrorCode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode* None; // 0x0
		::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode* Syntax; // 0x0
		::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode* EmptyValue; // 0x0
		::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode* ExpectedEndOfValue; // 0x0

	};
}

