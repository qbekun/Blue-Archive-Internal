#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace FlatData { class EndCondition; }

#define MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F44B0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int StatChangeByFavorRankEffectData_TypeDefinitionIndex = 13637;

	class StatChangeByFavorRankEffectData : public Il2CppObject
	{
	public:
		::FlatData::StatType* StatType; // 0x58
		::FlatData::EndCondition* EndCondition; // 0x5C
		::System::String* EndConditionArgumentFirst; // 0x60
		::System::String* EndConditionArgumentSecond; // 0x68
		::FlatData::EndCondition* RemoveCondition; // 0x70
		::System::String* RemoveConditionArgumentFirst; // 0x78
		::System::String* RemoveConditionArgumentSecond; // 0x80
		::System::Int64 BaseAmount; // 0x88
		::System::Int64 CasterCoefficientAmount; // 0x90
		::FlatData::StatType* CasterStatType; // 0x98
		::System::Int64 TargetCoefficientAmount; // 0xA0
		::System::Boolean Dispellable; // 0xA8
		::System::Boolean StackSameEffectApplied; // 0xA9
		::System::Int32 StackSameEffectCount; // 0xAC
		::System::Boolean ExpireOldIfStackCountOver; // 0xB0
		::System::Int64 RatePerFavorRank; // 0xB8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATCHANGEBYFAVORRANKEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

