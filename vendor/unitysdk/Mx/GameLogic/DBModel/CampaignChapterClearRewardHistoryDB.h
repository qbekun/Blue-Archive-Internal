#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StageDifficulty; }

#define MX_GAMELOGIC_DBMODEL_CAMPAIGNCHAPTERCLEARREWARDHISTORYDB_GET_CHAPTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFE5C00)
#define MX_GAMELOGIC_DBMODEL_CAMPAIGNCHAPTERCLEARREWARDHISTORYDB_GET_RECEIVEDATE_OFFSET UNITYSDK_OFFSET(0xFE5C10)
#define MX_GAMELOGIC_DBMODEL_CAMPAIGNCHAPTERCLEARREWARDHISTORYDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE5C20)
#define MX_GAMELOGIC_DBMODEL_CAMPAIGNCHAPTERCLEARREWARDHISTORYDB_SET_RECEIVEDATE_OFFSET UNITYSDK_OFFSET(0xFE5C30)
#define MX_GAMELOGIC_DBMODEL_CAMPAIGNCHAPTERCLEARREWARDHISTORYDB_GET_REWARDTYPE_OFFSET UNITYSDK_OFFSET(0xFE5C40)
#define MX_GAMELOGIC_DBMODEL_CAMPAIGNCHAPTERCLEARREWARDHISTORYDB_SET_CHAPTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFE5C50)
#define MX_GAMELOGIC_DBMODEL_CAMPAIGNCHAPTERCLEARREWARDHISTORYDB_SET_REWARDTYPE_OFFSET UNITYSDK_OFFSET(0xFE5C60)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int CampaignChapterClearRewardHistoryDB_TypeDefinitionIndex = 12502;

	class CampaignChapterClearRewardHistoryDB : public Il2CppObject
	{
	public:
		::System::Int64 _ChapterUniqueId_k__BackingField; // 0x10
		::FlatData::StageDifficulty* _RewardType_k__BackingField; // 0x18
		::System::DateTime* _ReceiveDate_k__BackingField; // 0x20

		::System::Int64 get_ChapterUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAMPAIGNCHAPTERCLEARREWARDHISTORYDB_GET_CHAPTERUNIQUEID_OFFSET))(nullptr);
		}

		::System::DateTime* get_ReceiveDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAMPAIGNCHAPTERCLEARREWARDHISTORYDB_GET_RECEIVEDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAMPAIGNCHAPTERCLEARREWARDHISTORYDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ReceiveDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAMPAIGNCHAPTERCLEARREWARDHISTORYDB_SET_RECEIVEDATE_OFFSET))(arg, nullptr);
		}

		::FlatData::StageDifficulty* get_RewardType()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAMPAIGNCHAPTERCLEARREWARDHISTORYDB_GET_REWARDTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ChapterUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAMPAIGNCHAPTERCLEARREWARDHISTORYDB_SET_CHAPTERUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_RewardType(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAMPAIGNCHAPTERCLEARREWARDHISTORYDB_SET_REWARDTYPE_OFFSET))(arg, nullptr);
		}

	};
}

