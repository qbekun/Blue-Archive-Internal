#pragma once
#include "../../unitysdk.h"

namespace FlatData { class Rarity; }
namespace MX::Data::Excel { class EventContentCardShopExcel; }

#define MX_DATA_EVENTCONTENTCARDSHOPINFO_GET_CARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1843180)
#define MX_DATA_EVENTCONTENTCARDSHOPINFO_GET_ISLEGACY_OFFSET UNITYSDK_OFFSET(0x1843190)
#define MX_DATA_EVENTCONTENTCARDSHOPINFO_SET_CARDGROUPID_OFFSET UNITYSDK_OFFSET(0x18431A0)
#define MX_DATA_EVENTCONTENTCARDSHOPINFO_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x18431B0)
#define MX_DATA_EVENTCONTENTCARDSHOPINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x18431C0)
#define MX_DATA_EVENTCONTENTCARDSHOPINFO_GET_PROBWEIGHT_1_OFFSET UNITYSDK_OFFSET(0x18433E0)
#define MX_DATA_EVENTCONTENTCARDSHOPINFO_GET_REWARDPARCELINFOS_OFFSET UNITYSDK_OFFSET(0x18433F0)
#define MX_DATA_EVENTCONTENTCARDSHOPINFO_GET_REFRESHGROUP_OFFSET UNITYSDK_OFFSET(0x1843400)
#define MX_DATA_EVENTCONTENTCARDSHOPINFO_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1843410)
#define MX_DATA_EVENTCONTENTCARDSHOPINFO_SET_PROB_OFFSET UNITYSDK_OFFSET(0x1843420)
#define MX_DATA_EVENTCONTENTCARDSHOPINFO_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1843430)
#define MX_DATA_EVENTCONTENTCARDSHOPINFO_SET_REWARDPARCELINFOS_OFFSET UNITYSDK_OFFSET(0x1843440)
#define MX_DATA_EVENTCONTENTCARDSHOPINFO_SET_ISLEGACY_OFFSET UNITYSDK_OFFSET(0x1843450)
#define MX_DATA_EVENTCONTENTCARDSHOPINFO_GET_PROB_OFFSET UNITYSDK_OFFSET(0x1843460)
#define MX_DATA_EVENTCONTENTCARDSHOPINFO_SET_RARITY_OFFSET UNITYSDK_OFFSET(0x1843470)
#define MX_DATA_EVENTCONTENTCARDSHOPINFO_SET_COSTGOODSID_OFFSET UNITYSDK_OFFSET(0x1843480)
#define MX_DATA_EVENTCONTENTCARDSHOPINFO_GET_COSTGOODSID_OFFSET UNITYSDK_OFFSET(0x1843490)
#define MX_DATA_EVENTCONTENTCARDSHOPINFO_SET_PROBWEIGHT_1_OFFSET UNITYSDK_OFFSET(0x18434A0)
#define MX_DATA_EVENTCONTENTCARDSHOPINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x18434B0)
#define MX_DATA_EVENTCONTENTCARDSHOPINFO_SET_REFRESHGROUP_OFFSET UNITYSDK_OFFSET(0x18434C0)
#define MX_DATA_EVENTCONTENTCARDSHOPINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x18434D0)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentCardShopInfo_TypeDefinitionIndex = 15794;

	class EventContentCardShopInfo : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Int64 _UniqueId_k__BackingField; // 0x18
		::System::Boolean _IsLegacy_k__BackingField; // 0x20
		::System::Int64 _CostGoodsId_k__BackingField; // 0x28
		::System::Int64 _CardGroupId_k__BackingField; // 0x30
		::FlatData::Rarity* _Rarity_k__BackingField; // 0x38
		::System::Int32 _RefreshGroup_k__BackingField; // 0x3C
		::System::Int32 _Prob_k__BackingField; // 0x40
		::System::Int32 _ProbWeight_1_k__BackingField; // 0x44
		Il2CppObject* _RewardParcelInfos_k__BackingField; // 0x48

		::System::Int64 get_CardGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDSHOPINFO_GET_CARDGROUPID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLegacy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDSHOPINFO_GET_ISLEGACY_OFFSET))(nullptr);
		}

		::System::Void set_CardGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDSHOPINFO_SET_CARDGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDSHOPINFO_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentCardShopExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentCardShopExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDSHOPINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ProbWeight_1()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDSHOPINFO_GET_PROBWEIGHT_1_OFFSET))(nullptr);
		}

		Il2CppObject* get_RewardParcelInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDSHOPINFO_GET_REWARDPARCELINFOS_OFFSET))(nullptr);
		}

		::System::Int32 get_RefreshGroup()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDSHOPINFO_GET_REFRESHGROUP_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDSHOPINFO_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Prob(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDSHOPINFO_SET_PROB_OFFSET))(arg, nullptr);
		}

		::FlatData::Rarity* get_Rarity()
		{
			return (return (::FlatData::Rarity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDSHOPINFO_GET_RARITY_OFFSET))(nullptr);
		}

		::System::Void set_RewardParcelInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDSHOPINFO_SET_REWARDPARCELINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsLegacy(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDSHOPINFO_SET_ISLEGACY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Prob()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDSHOPINFO_GET_PROB_OFFSET))(nullptr);
		}

		::System::Void set_Rarity(::FlatData::Rarity* arg)
		{
			((::System::Void(*)(::FlatData::Rarity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDSHOPINFO_SET_RARITY_OFFSET))(arg, nullptr);
		}

		::System::Void set_CostGoodsId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDSHOPINFO_SET_COSTGOODSID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CostGoodsId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDSHOPINFO_GET_COSTGOODSID_OFFSET))(nullptr);
		}

		::System::Void set_ProbWeight_1(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDSHOPINFO_SET_PROBWEIGHT_1_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDSHOPINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_RefreshGroup(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDSHOPINFO_SET_REFRESHGROUP_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTCARDSHOPINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

	};
}

