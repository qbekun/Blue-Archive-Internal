#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class EventContentDiceRaceExcel; }

#define MX_DATA_EVENTCONTENTDICERACEINFO_GET_UIDICERACEEVENTTYPES_OFFSET UNITYSDK_OFFSET(0x1845D30)
#define MX_DATA_EVENTCONTENTDICERACEINFO_GET_COSTGOODSID_OFFSET UNITYSDK_OFFSET(0x1845D40)
#define MX_DATA_EVENTCONTENTDICERACEINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1845D50)
#define MX_DATA_EVENTCONTENTDICERACEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1845D60)
#define MX_DATA_EVENTCONTENTDICERACEINFO_SET_UIDICERACEEVENTTYPES_OFFSET UNITYSDK_OFFSET(0x1845FC0)
#define MX_DATA_EVENTCONTENTDICERACEINFO_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1845FD0)
#define MX_DATA_EVENTCONTENTDICERACEINFO_SET_DICERACEPAWNPREFAB_OFFSET UNITYSDK_OFFSET(0x1845FE0)
#define MX_DATA_EVENTCONTENTDICERACEINFO_GET_DICERACEPAWNPREFAB_OFFSET UNITYSDK_OFFSET(0x1845FF0)
#define MX_DATA_EVENTCONTENTDICERACEINFO_SET_ISUSINGFIXEDDICE_OFFSET UNITYSDK_OFFSET(0x1846000)
#define MX_DATA_EVENTCONTENTDICERACEINFO_GET_FIXEDDICEICONNAMES_OFFSET UNITYSDK_OFFSET(0x1846010)
#define MX_DATA_EVENTCONTENTDICERACEINFO_SET_COSTGOODSID_OFFSET UNITYSDK_OFFSET(0x1846020)
#define MX_DATA_EVENTCONTENTDICERACEINFO_SET_FIXEDDICEICONNAMES_OFFSET UNITYSDK_OFFSET(0x1846030)
#define MX_DATA_EVENTCONTENTDICERACEINFO_GET_ISUSINGFIXEDDICE_OFFSET UNITYSDK_OFFSET(0x1846040)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentDiceRaceInfo_TypeDefinitionIndex = 15808;

	class EventContentDiceRaceInfo : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Int64 _CostGoodsId_k__BackingField; // 0x18
		::System::String* _DiceRacePawnPrefab_k__BackingField; // 0x20
		::System::Boolean _IsUsingFixedDice_k__BackingField; // 0x28
		Il2CppObject* _UiDiceRaceEventTypes_k__BackingField; // 0x30
		Il2CppObject* _FixedDiceIconNames_k__BackingField; // 0x38

		Il2CppObject* get_UiDiceRaceEventTypes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACEINFO_GET_UIDICERACEEVENTTYPES_OFFSET))(nullptr);
		}

		::System::Int64 get_CostGoodsId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACEINFO_GET_COSTGOODSID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACEINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentDiceRaceExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentDiceRaceExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_UiDiceRaceEventTypes(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACEINFO_SET_UIDICERACEEVENTTYPES_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACEINFO_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_DiceRacePawnPrefab(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACEINFO_SET_DICERACEPAWNPREFAB_OFFSET))(str, nullptr);
		}

		::System::String* get_DiceRacePawnPrefab()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACEINFO_GET_DICERACEPAWNPREFAB_OFFSET))(nullptr);
		}

		::System::Void set_IsUsingFixedDice(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACEINFO_SET_ISUSINGFIXEDDICE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_FixedDiceIconNames()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACEINFO_GET_FIXEDDICEICONNAMES_OFFSET))(nullptr);
		}

		::System::Void set_CostGoodsId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACEINFO_SET_COSTGOODSID_OFFSET))(arg, nullptr);
		}

		::System::Void set_FixedDiceIconNames(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACEINFO_SET_FIXEDDICEICONNAMES_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsUsingFixedDice()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTDICERACEINFO_GET_ISUSINGFIXEDDICE_OFFSET))(nullptr);
		}

	};
}

