#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class EventContentTreasureRoundExcel; }

#define MX_DATA_EVENTCONTENTTREASUREROUNDINFO_GET_BOARDSIZEX_OFFSET UNITYSDK_OFFSET(0x1846E30)
#define MX_DATA_EVENTCONTENTTREASUREROUNDINFO_GET_BOARDSIZEY_OFFSET UNITYSDK_OFFSET(0x1846E40)
#define MX_DATA_EVENTCONTENTTREASUREROUNDINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1846E50)
#define MX_DATA_EVENTCONTENTTREASUREROUNDINFO_GET_COSTGOODSID_OFFSET UNITYSDK_OFFSET(0x1846E60)
#define MX_DATA_EVENTCONTENTTREASUREROUNDINFO_GET_ROUND_OFFSET UNITYSDK_OFFSET(0x1846E70)
#define MX_DATA_EVENTCONTENTTREASUREROUNDINFO_TREASUREITEMAMOUNT_OFFSET UNITYSDK_OFFSET(0x1846E80)
#define MX_DATA_EVENTCONTENTTREASUREROUNDINFO_GET_TREASURETOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x1846FB0)
#define MX_DATA_EVENTCONTENTTREASUREROUNDINFO_GET_ISVISUALSORTUNSTRUCTED_OFFSET UNITYSDK_OFFSET(0x18471A0)
#define MX_DATA_EVENTCONTENTTREASUREROUNDINFO_GET_CELLREWARDS_OFFSET UNITYSDK_OFFSET(0x18471B0)
#define MX_DATA_EVENTCONTENTTREASUREROUNDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x18471C0)
#define MX_DATA_EVENTCONTENTTREASUREROUNDINFO_GET_CELLCOSTS_OFFSET UNITYSDK_OFFSET(0x1847290)
#define MX_DATA_EVENTCONTENTTREASUREROUNDINFO_SET_ISVISUALSORTUNSTRUCTED_OFFSET UNITYSDK_OFFSET(0x18472A0)
#define MX_DATA_EVENTCONTENTTREASUREROUNDINFO_GET_TREASURES_OFFSET UNITYSDK_OFFSET(0x18472B0)
#define MX_DATA_EVENTCONTENTTREASUREROUNDINFO_GET_CELLREWARDID_OFFSET UNITYSDK_OFFSET(0x18472C0)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentTreasureRoundInfo_TypeDefinitionIndex = 15818;

	class EventContentTreasureRoundInfo : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Int32 _Round_k__BackingField; // 0x18
		::System::Int64 _CostGoodsId_k__BackingField; // 0x20
		::System::Int64 _CellRewardId_k__BackingField; // 0x28
		::System::Int32 _BoardSizeX_k__BackingField; // 0x30
		::System::Int32 _BoardSizeY_k__BackingField; // 0x34
		Il2CppObject* _Treasures_k__BackingField; // 0x38
		Il2CppObject* _CellRewards_k__BackingField; // 0x40
		Il2CppObject* _CellCosts_k__BackingField; // 0x48
		::System::Boolean _IsVisualSortUnstructed_k__BackingField; // 0x50

		::System::Int32 get_BoardSizeX()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREROUNDINFO_GET_BOARDSIZEX_OFFSET))(nullptr);
		}

		::System::Int32 get_BoardSizeY()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREROUNDINFO_GET_BOARDSIZEY_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREROUNDINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_CostGoodsId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREROUNDINFO_GET_COSTGOODSID_OFFSET))(nullptr);
		}

		::System::Int32 get_Round()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREROUNDINFO_GET_ROUND_OFFSET))(nullptr);
		}

		::System::Int32 TreasureItemAmount(::System::Int64 arg)
		{
			return (return (::System::Int32(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREROUNDINFO_TREASUREITEMAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TreasureTotalCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREROUNDINFO_GET_TREASURETOTALCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsVisualSortUnstructed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREROUNDINFO_GET_ISVISUALSORTUNSTRUCTED_OFFSET))(nullptr);
		}

		Il2CppObject* get_CellRewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREROUNDINFO_GET_CELLREWARDS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentTreasureRoundExcel* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentTreasureRoundExcel*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREROUNDINFO_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* get_CellCosts()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREROUNDINFO_GET_CELLCOSTS_OFFSET))(nullptr);
		}

		::System::Void set_IsVisualSortUnstructed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREROUNDINFO_SET_ISVISUALSORTUNSTRUCTED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Treasures()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREROUNDINFO_GET_TREASURES_OFFSET))(nullptr);
		}

		::System::Int64 get_CellRewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTTREASUREROUNDINFO_GET_CELLREWARDID_OFFSET))(nullptr);
		}

	};
}

