#pragma once
#include "unitysdk.h"

namespace MX::Data { class CampaignStageInfo; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTCONFIRMMAINSTAGERESPONSEMESSAGE_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1F67AA0)
#define EVENTCONTENTCONFIRMMAINSTAGERESPONSEMESSAGE_SET_MISSIONSTART_OFFSET UNITYSDK_OFFSET(0x1F67AB0)
#define EVENTCONTENTCONFIRMMAINSTAGERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F67AC0)
#define EVENTCONTENTCONFIRMMAINSTAGERESPONSEMESSAGE_SET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1F67B00)
#define EVENTCONTENTCONFIRMMAINSTAGERESPONSEMESSAGE_GET_MISSIONSTART_OFFSET UNITYSDK_OFFSET(0x1F67B10)

	inline static constexpr unsigned int EventContentConfirmMainStageResponseMessage_TypeDefinitionIndex = 2450;

	class EventContentConfirmMainStageResponseMessage : public Il2CppObject
	{
	public:
		::MX::Data::CampaignStageInfo* _StageInfo_k__BackingField; // 0x20
		::System::Boolean _MissionStart_k__BackingField; // 0x28

		::MX::Data::CampaignStageInfo* get_StageInfo()
		{
			return ((::MX::Data::CampaignStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCONFIRMMAINSTAGERESPONSEMESSAGE_GET_STAGEINFO_OFFSET))(nullptr);
		}

		::System::Void set_MissionStart(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCONFIRMMAINSTAGERESPONSEMESSAGE_SET_MISSIONSTART_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::Data::CampaignStageInfo* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::Data::CampaignStageInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCONFIRMMAINSTAGERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_StageInfo(::MX::Data::CampaignStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCONFIRMMAINSTAGERESPONSEMESSAGE_SET_STAGEINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_MissionStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCONFIRMMAINSTAGERESPONSEMESSAGE_GET_MISSIONSTART_OFFSET))(nullptr);
		}

	};

