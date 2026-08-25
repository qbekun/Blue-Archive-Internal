#pragma once
#include "../unitysdk.h"

namespace FlatData { class ClanRewardType; }

namespace FlatData
{
	inline static constexpr unsigned int ClanRewardType_TypeDefinitionIndex = 9440;

	class ClanRewardType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ClanRewardType* None; // 0x0
		::FlatData::ClanRewardType* AssistTerm; // 0x0
		::FlatData::ClanRewardType* AssistRent; // 0x0
		::FlatData::ClanRewardType* Attendance; // 0x0

	};
}

