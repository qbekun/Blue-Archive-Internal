#pragma once
#include "../unitysdk.h"

namespace FlatData { class RankingSearchType; }

namespace FlatData
{
	inline static constexpr unsigned int RankingSearchType_TypeDefinitionIndex = 9482;

	class RankingSearchType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::RankingSearchType* None; // 0x0
		::FlatData::RankingSearchType* Rank; // 0x0
		::FlatData::RankingSearchType* Score; // 0x0

	};
}

