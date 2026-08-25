#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class CampaignConfirmTutorialStageResponse; }
namespace MX::Data { class CampaignStageInfo; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CAMPAIGNCONFIRMTUTORIALRESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F16E90)
#define CAMPAIGNCONFIRMTUTORIALRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F16EA0)
#define CAMPAIGNCONFIRMTUTORIALRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F16B80)
#define CAMPAIGNCONFIRMTUTORIALRESPONSEMESSAGE_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1F16EB0)
#define CAMPAIGNCONFIRMTUTORIALRESPONSEMESSAGE_SET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1F16EC0)

	inline static constexpr unsigned int CampaignConfirmTutorialResponseMessage_TypeDefinitionIndex = 2066;

	class CampaignConfirmTutorialResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::CampaignConfirmTutorialStageResponse* _Response_k__BackingField; // 0x20
		::MX::Data::CampaignStageInfo* _StageInfo_k__BackingField; // 0x28

		::System::Void set_Response(::MX::NetworkProtocol::CampaignConfirmTutorialStageResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CampaignConfirmTutorialStageResponse*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNCONFIRMTUTORIALRESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::CampaignConfirmTutorialStageResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::CampaignConfirmTutorialStageResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNCONFIRMTUTORIALRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::CampaignConfirmTutorialStageResponse* arg2, ::MX::Data::CampaignStageInfo* arg3)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::CampaignConfirmTutorialStageResponse*, ::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNCONFIRMTUTORIALRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Data::CampaignStageInfo* get_StageInfo()
		{
			return ((::MX::Data::CampaignStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNCONFIRMTUTORIALRESPONSEMESSAGE_GET_STAGEINFO_OFFSET))(nullptr);
		}

		::System::Void set_StageInfo(::MX::Data::CampaignStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNCONFIRMTUTORIALRESPONSEMESSAGE_SET_STAGEINFO_OFFSET))(arg, nullptr);
		}

	};

