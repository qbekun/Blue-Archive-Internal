#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class WeekDungeonType; }
namespace MX::Logic::Battles::Summary { class WeekDungeonSummary; }

#define MX_LOGIC_BATTLES_SUMMARY_WEEKDUNGEONSUMMARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x13A5160)
#define MX_LOGIC_BATTLES_SUMMARY_WEEKDUNGEONSUMMARY_GET_DUNGEONTYPE_OFFSET UNITYSDK_OFFSET(0x13B3060)
#define MX_LOGIC_BATTLES_SUMMARY_WEEKDUNGEONSUMMARY_GET_FINDGIFTS_OFFSET UNITYSDK_OFFSET(0x13B3070)
#define MX_LOGIC_BATTLES_SUMMARY_WEEKDUNGEONSUMMARY_GET_TOTALFINDGIFTCLEARCOUNT_OFFSET UNITYSDK_OFFSET(0x13B3080)
#define MX_LOGIC_BATTLES_SUMMARY_WEEKDUNGEONSUMMARY_EQUALS_OFFSET UNITYSDK_OFFSET(0x13B31B0)
#define MX_LOGIC_BATTLES_SUMMARY_WEEKDUNGEONSUMMARY_SET_DUNGEONTYPE_OFFSET UNITYSDK_OFFSET(0x13B31D0)
#define MX_LOGIC_BATTLES_SUMMARY_WEEKDUNGEONSUMMARY_SET_FINDGIFTS_OFFSET UNITYSDK_OFFSET(0x13B31E0)

namespace MX::Logic::Battles::Summary
{
	inline static constexpr unsigned int WeekDungeonSummary_TypeDefinitionIndex = 14490;

	class WeekDungeonSummary : public Il2CppObject
	{
	public:
		::FlatData::WeekDungeonType* _DungeonType_k__BackingField; // 0x10
		Il2CppObject* _FindGifts_k__BackingField; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_WEEKDUNGEONSUMMARY_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::WeekDungeonType* get_DungeonType()
		{
			return ((::FlatData::WeekDungeonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_WEEKDUNGEONSUMMARY_GET_DUNGEONTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* get_FindGifts()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_WEEKDUNGEONSUMMARY_GET_FINDGIFTS_OFFSET))(nullptr);
		}

		::System::Int32 get_TotalFindGiftClearCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_WEEKDUNGEONSUMMARY_GET_TOTALFINDGIFTCLEARCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Battles::Summary::WeekDungeonSummary* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Summary::WeekDungeonSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_WEEKDUNGEONSUMMARY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void set_DungeonType(::FlatData::WeekDungeonType* arg)
		{
			((::System::Void(*)(::FlatData::WeekDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_WEEKDUNGEONSUMMARY_SET_DUNGEONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_FindGifts(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_WEEKDUNGEONSUMMARY_SET_FINDGIFTS_OFFSET))(arg, nullptr);
		}

	};
}

