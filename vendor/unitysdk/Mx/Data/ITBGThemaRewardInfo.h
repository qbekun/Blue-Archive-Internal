#pragma once
#include "../../unitysdk.h"

namespace FlatData { class MiniGameTBGThemaRewardType; }

#define MX_DATA_ITBGTHEMAREWARDINFO_GET_ISLOOP_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGTHEMAREWARDINFO_GET_REWARDTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGTHEMAREWARDINFO_GET_THEMAUNIQUEID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGTHEMAREWARDINFO_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGTHEMAREWARDINFO_GET_THEMAROUND_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_ITBGTHEMAREWARDINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Data
{
	inline static constexpr unsigned int ITBGThemaRewardInfo_TypeDefinitionIndex = 16236;

	class ITBGThemaRewardInfo : public Il2CppObject
	{
	public:
		::System::Boolean get_IsLoop()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGTHEMAREWARDINFO_GET_ISLOOP_OFFSET))(nullptr);
		}

		::FlatData::MiniGameTBGThemaRewardType* get_RewardType()
		{
			return (return (::FlatData::MiniGameTBGThemaRewardType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGTHEMAREWARDINFO_GET_REWARDTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ThemaUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGTHEMAREWARDINFO_GET_THEMAUNIQUEID_OFFSET))(nullptr);
		}

		Il2CppObject* get_Rewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGTHEMAREWARDINFO_GET_REWARDS_OFFSET))(nullptr);
		}

		::System::Int32 get_ThemaRound()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGTHEMAREWARDINFO_GET_THEMAROUND_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITBGTHEMAREWARDINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

	};
}

