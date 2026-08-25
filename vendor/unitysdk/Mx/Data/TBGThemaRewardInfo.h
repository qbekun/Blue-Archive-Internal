#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class MiniGameTBGThemaRewardExcel; }
namespace FlatData { class MiniGameTBGThemaRewardType; }

#define MX_DATA_TBGTHEMAREWARDINFO_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x190C560)
#define MX_DATA_TBGTHEMAREWARDINFO_GET_EXCEL_OFFSET UNITYSDK_OFFSET(0x190C570)
#define MX_DATA_TBGTHEMAREWARDINFO_GET_REWARDTYPE_OFFSET UNITYSDK_OFFSET(0x190C580)
#define MX_DATA_TBGTHEMAREWARDINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x190C5A0)
#define MX_DATA_TBGTHEMAREWARDINFO_GET_THEMAUNIQUEID_OFFSET UNITYSDK_OFFSET(0x190C5C0)
#define MX_DATA_TBGTHEMAREWARDINFO_GET_ISLOOP_OFFSET UNITYSDK_OFFSET(0x190C5E0)
#define MX_DATA_TBGTHEMAREWARDINFO_GET_THEMAROUND_OFFSET UNITYSDK_OFFSET(0x190C600)
#define MX_DATA_TBGTHEMAREWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x190C620)

namespace MX::Data
{
	inline static constexpr unsigned int TBGThemaRewardInfo_TypeDefinitionIndex = 16245;

	class TBGThemaRewardInfo : public Il2CppObject
	{
	public:
		Il2CppObject* _Rewards_k__BackingField; // 0x10
		::MX::Data::Excel::MiniGameTBGThemaRewardExcel* _Excel_k__BackingField; // 0x18

		Il2CppObject* get_Rewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGTHEMAREWARDINFO_GET_REWARDS_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameTBGThemaRewardExcel* get_Excel()
		{
			return (return (::MX::Data::Excel::MiniGameTBGThemaRewardExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGTHEMAREWARDINFO_GET_EXCEL_OFFSET))(nullptr);
		}

		::FlatData::MiniGameTBGThemaRewardType* get_RewardType()
		{
			return (return (::FlatData::MiniGameTBGThemaRewardType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGTHEMAREWARDINFO_GET_REWARDTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGTHEMAREWARDINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_ThemaUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGTHEMAREWARDINFO_GET_THEMAUNIQUEID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLoop()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGTHEMAREWARDINFO_GET_ISLOOP_OFFSET))(nullptr);
		}

		::System::Int32 get_ThemaRound()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGTHEMAREWARDINFO_GET_THEMAROUND_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::MiniGameTBGThemaRewardExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MiniGameTBGThemaRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TBGTHEMAREWARDINFO_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

