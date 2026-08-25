#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::Procedures { class CCGCollectionSelectRule; }

namespace MX::MinigameCCG::Procedures
{
	inline static constexpr unsigned int CCGCollectionSelectRule_TypeDefinitionIndex = 20984;

	class CCGCollectionSelectRule : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::MinigameCCG::Procedures::CCGCollectionSelectRule* First; // 0x0
		::MX::MinigameCCG::Procedures::CCGCollectionSelectRule* Random; // 0x0
		::MX::MinigameCCG::Procedures::CCGCollectionSelectRule* Last; // 0x0

	};
}

