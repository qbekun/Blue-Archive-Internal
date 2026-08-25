#pragma once
#include "unitysdk.h"

namespace MX::Data { class CampaignStageInfo; }
namespace MX::NetworkProtocol { class Protocol; }

#define CAMPAIGNCONFIRMMAINSTAGENETWORKTASK_SET_MISSIONSTART_OFFSET UNITYSDK_OFFSET(0x1F161E0)
#define CAMPAIGNCONFIRMMAINSTAGENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F161F0)
#define CAMPAIGNCONFIRMMAINSTAGENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F16200)
#define CAMPAIGNCONFIRMMAINSTAGENETWORKTASK_GET_MISSIONSTART_OFFSET UNITYSDK_OFFSET(0x1F16210)
#define CAMPAIGNCONFIRMMAINSTAGENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F16220)
#define CAMPAIGNCONFIRMMAINSTAGENETWORKTASK_SET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1F16520)
#define CAMPAIGNCONFIRMMAINSTAGENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F16530)
#define CAMPAIGNCONFIRMMAINSTAGENETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F165C0)
#define CAMPAIGNCONFIRMMAINSTAGENETWORKTASK_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1F165D0)

	inline static constexpr unsigned int CampaignConfirmMainStageNetworkTask_TypeDefinitionIndex = 2063;

	class CampaignConfirmMainStageNetworkTask : public Il2CppObject
	{
	public:
		::MX::Data::CampaignStageInfo* _StageInfo_k__BackingField; // 0x40
		::System::Boolean _MissionStart_k__BackingField; // 0x48

		::System::Void set_MissionStart(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNCONFIRMMAINSTAGENETWORKTASK_SET_MISSIONSTART_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNCONFIRMMAINSTAGENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNCONFIRMMAINSTAGENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_MissionStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNCONFIRMMAINSTAGENETWORKTASK_GET_MISSIONSTART_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNCONFIRMMAINSTAGENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_StageInfo(::MX::Data::CampaignStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNCONFIRMMAINSTAGENETWORKTASK_SET_STAGEINFO_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNCONFIRMMAINSTAGENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNCONFIRMMAINSTAGENETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::MX::Data::CampaignStageInfo* get_StageInfo()
		{
			return ((::MX::Data::CampaignStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNCONFIRMMAINSTAGENETWORKTASK_GET_STAGEINFO_OFFSET))(nullptr);
		}

	};

