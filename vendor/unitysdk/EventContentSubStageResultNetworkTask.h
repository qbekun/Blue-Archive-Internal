#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace MX::NetworkProtocol { class Protocol; }

#define EVENTCONTENTSUBSTAGERESULTNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F750C0)
#define EVENTCONTENTSUBSTAGERESULTNETWORKTASK_GET_SUMMARY_OFFSET UNITYSDK_OFFSET(0x1F750D0)
#define EVENTCONTENTSUBSTAGERESULTNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F750E0)
#define EVENTCONTENTSUBSTAGERESULTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F750F0)
#define EVENTCONTENTSUBSTAGERESULTNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F75100)
#define EVENTCONTENTSUBSTAGERESULTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F75110)
#define EVENTCONTENTSUBSTAGERESULTNETWORKTASK_SET_SUMMARY_OFFSET UNITYSDK_OFFSET(0x1F75760)
#define EVENTCONTENTSUBSTAGERESULTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F75770)
#define EVENTCONTENTSUBSTAGERESULTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F75800)

	inline static constexpr unsigned int EventContentSubStageResultNetworkTask_TypeDefinitionIndex = 2539;

	class EventContentSubStageResultNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::MX::Logic::Battles::Summary::BattleSummary* _Summary_k__BackingField; // 0x48

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSUBSTAGERESULTNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Summary::BattleSummary* get_Summary()
		{
			return ((::MX::Logic::Battles::Summary::BattleSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSUBSTAGERESULTNETWORKTASK_GET_SUMMARY_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSUBSTAGERESULTNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSUBSTAGERESULTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSUBSTAGERESULTNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSUBSTAGERESULTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_Summary(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSUBSTAGERESULTNETWORKTASK_SET_SUMMARY_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSUBSTAGERESULTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSUBSTAGERESULTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

	};

