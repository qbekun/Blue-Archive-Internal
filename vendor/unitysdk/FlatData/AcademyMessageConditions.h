#pragma once
#include "../unitysdk.h"

namespace FlatData { class AcademyMessageConditions; }

namespace FlatData
{
	inline static constexpr unsigned int AcademyMessageConditions_TypeDefinitionIndex = 9356;

	class AcademyMessageConditions : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::AcademyMessageConditions* None; // 0x0
		::FlatData::AcademyMessageConditions* FavorRankUp; // 0x0
		::FlatData::AcademyMessageConditions* AcademySchedule; // 0x0
		::FlatData::AcademyMessageConditions* Answer; // 0x0
		::FlatData::AcademyMessageConditions* Feedback; // 0x0

	};
}

