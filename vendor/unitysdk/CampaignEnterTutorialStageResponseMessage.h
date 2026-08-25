#pragma once
#include "unitysdk.h"

namespace MX::Data { class CampaignStageInfo; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CAMPAIGNENTERTUTORIALSTAGERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F19360)
#define CAMPAIGNENTERTUTORIALSTAGERESPONSEMESSAGE_SET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1F193A0)
#define CAMPAIGNENTERTUTORIALSTAGERESPONSEMESSAGE_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1F193B0)

	inline static constexpr unsigned int CampaignEnterTutorialStageResponseMessage_TypeDefinitionIndex = 2082;

	class CampaignEnterTutorialStageResponseMessage : public Il2CppObject
	{
	public:
		::MX::Data::CampaignStageInfo* _StageInfo_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::Data::CampaignStageInfo* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERTUTORIALSTAGERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_StageInfo(::MX::Data::CampaignStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERTUTORIALSTAGERESPONSEMESSAGE_SET_STAGEINFO_OFFSET))(arg, nullptr);
		}

		::MX::Data::CampaignStageInfo* get_StageInfo()
		{
			return ((::MX::Data::CampaignStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERTUTORIALSTAGERESPONSEMESSAGE_GET_STAGEINFO_OFFSET))(nullptr);
		}

	};

