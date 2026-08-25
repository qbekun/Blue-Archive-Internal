#pragma once
#include "unitysdk.h"

namespace MX::Data { class CampaignStageInfo; }
namespace MX::NetworkProtocol { class Protocol; }

#define CAMPAIGNCONFIRMTUTORIALNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F16860)
#define CAMPAIGNCONFIRMTUTORIALNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F16870)
#define CAMPAIGNCONFIRMTUTORIALNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F16900)
#define CAMPAIGNCONFIRMTUTORIALNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F16BD0)
#define CAMPAIGNCONFIRMTUTORIALNETWORKTASK_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1F16BE0)
#define CAMPAIGNCONFIRMTUTORIALNETWORKTASK_SET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1F16BF0)
#define CAMPAIGNCONFIRMTUTORIALNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F16C00)

	inline static constexpr unsigned int CampaignConfirmTutorialNetworkTask_TypeDefinitionIndex = 2065;

	class CampaignConfirmTutorialNetworkTask : public Il2CppObject
	{
	public:
		::MX::Data::CampaignStageInfo* _StageInfo_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNCONFIRMTUTORIALNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNCONFIRMTUTORIALNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNCONFIRMTUTORIALNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNCONFIRMTUTORIALNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::MX::Data::CampaignStageInfo* get_StageInfo()
		{
			return ((::MX::Data::CampaignStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNCONFIRMTUTORIALNETWORKTASK_GET_STAGEINFO_OFFSET))(nullptr);
		}

		::System::Void set_StageInfo(::MX::Data::CampaignStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNCONFIRMTUTORIALNETWORKTASK_SET_STAGEINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNCONFIRMTUTORIALNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

	};

