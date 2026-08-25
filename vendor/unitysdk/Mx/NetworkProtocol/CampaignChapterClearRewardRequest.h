#pragma once
#include "../../unitysdk.h"

namespace FlatData { class StageDifficulty; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNCHAPTERCLEARREWARDREQUEST_SET_STAGEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xF14EA0)
#define MX_NETWORKPROTOCOL_CAMPAIGNCHAPTERCLEARREWARDREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF14EB0)
#define MX_NETWORKPROTOCOL_CAMPAIGNCHAPTERCLEARREWARDREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF14EC0)
#define MX_NETWORKPROTOCOL_CAMPAIGNCHAPTERCLEARREWARDREQUEST_GET_CAMPAIGNCHAPTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF14ED0)
#define MX_NETWORKPROTOCOL_CAMPAIGNCHAPTERCLEARREWARDREQUEST_SET_CAMPAIGNCHAPTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF14EE0)
#define MX_NETWORKPROTOCOL_CAMPAIGNCHAPTERCLEARREWARDREQUEST_GET_STAGEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xF14EF0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignChapterClearRewardRequest_TypeDefinitionIndex = 11432;

	class CampaignChapterClearRewardRequest : public Il2CppObject
	{
	public:
		::System::Int64 _CampaignChapterUniqueId_k__BackingField; // 0x40
		::FlatData::StageDifficulty* _StageDifficulty_k__BackingField; // 0x48

		::System::Void set_StageDifficulty(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNCHAPTERCLEARREWARDREQUEST_SET_STAGEDIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNCHAPTERCLEARREWARDREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNCHAPTERCLEARREWARDREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_CampaignChapterUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNCHAPTERCLEARREWARDREQUEST_GET_CAMPAIGNCHAPTERUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_CampaignChapterUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNCHAPTERCLEARREWARDREQUEST_SET_CAMPAIGNCHAPTERUNIQUEID_OFFSET))(arg, nullptr);
		}

		::FlatData::StageDifficulty* get_StageDifficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNCHAPTERCLEARREWARDREQUEST_GET_STAGEDIFFICULTY_OFFSET))(nullptr);
		}

	};
}

