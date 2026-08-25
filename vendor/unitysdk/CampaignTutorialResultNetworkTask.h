#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace MX::NetworkProtocol { class Protocol; }

#define CAMPAIGNTUTORIALRESULTNETWORKTASK_SET_SUMMARY_OFFSET UNITYSDK_OFFSET(0x1F1D9B0)
#define CAMPAIGNTUTORIALRESULTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F1D9C0)
#define CAMPAIGNTUTORIALRESULTNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F1D9D0)
#define CAMPAIGNTUTORIALRESULTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F1D9E0)
#define CAMPAIGNTUTORIALRESULTNETWORKTASK_GET_SUMMARY_OFFSET UNITYSDK_OFFSET(0x1F1D9F0)
#define CAMPAIGNTUTORIALRESULTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F1DA00)
#define CAMPAIGNTUTORIALRESULTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F1DA90)

	inline static constexpr unsigned int CampaignTutorialResultNetworkTask_TypeDefinitionIndex = 2114;

	class CampaignTutorialResultNetworkTask : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::Summary::BattleSummary* _Summary_k__BackingField; // 0x40

		::System::Void set_Summary(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTUTORIALRESULTNETWORKTASK_SET_SUMMARY_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTUTORIALRESULTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTUTORIALRESULTNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTUTORIALRESULTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::Summary::BattleSummary* get_Summary()
		{
			return ((::MX::Logic::Battles::Summary::BattleSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTUTORIALRESULTNETWORKTASK_GET_SUMMARY_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTUTORIALRESULTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTUTORIALRESULTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

