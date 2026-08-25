#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace MX::NetworkProtocol { class Protocol; }

#define CAMPAIGNSUBSTAGERESULTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F1C8D0)
#define CAMPAIGNSUBSTAGERESULTNETWORKTASK_SET_SUMMARY_OFFSET UNITYSDK_OFFSET(0x1F1C8E0)
#define CAMPAIGNSUBSTAGERESULTNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F1C8F0)
#define CAMPAIGNSUBSTAGERESULTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F1C900)
#define CAMPAIGNSUBSTAGERESULTNETWORKTASK_GET_SUMMARY_OFFSET UNITYSDK_OFFSET(0x1F1C990)
#define CAMPAIGNSUBSTAGERESULTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F1C9A0)
#define CAMPAIGNSUBSTAGERESULTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F1C9B0)

	inline static constexpr unsigned int CampaignSubStageResultNetworkTask_TypeDefinitionIndex = 2107;

	class CampaignSubStageResultNetworkTask : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::Summary::BattleSummary* _Summary_k__BackingField; // 0x40

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNSUBSTAGERESULTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_Summary(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNSUBSTAGERESULTNETWORKTASK_SET_SUMMARY_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNSUBSTAGERESULTNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNSUBSTAGERESULTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::Summary::BattleSummary* get_Summary()
		{
			return ((::MX::Logic::Battles::Summary::BattleSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNSUBSTAGERESULTNETWORKTASK_GET_SUMMARY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNSUBSTAGERESULTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNSUBSTAGERESULTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

