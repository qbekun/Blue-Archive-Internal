#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace MX::Campaign { class SkillCardHand; }
namespace MX::Logic::Battles::Summary { class TacticSkipSummary; }
namespace Assets::_MX::Program::Scripts::Network { class SessionTask; }
namespace MX::NetworkProtocol { class Protocol; }

#define EVENTCONTENTTACTICRESULTNETWORKTASK_TOSESSIONTASK_OFFSET UNITYSDK_OFFSET(0x1F75B50)
#define EVENTCONTENTTACTICRESULTNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F75B60)
#define EVENTCONTENTTACTICRESULTNETWORKTASK_GET_SUMMARY_OFFSET UNITYSDK_OFFSET(0x1F75B70)
#define EVENTCONTENTTACTICRESULTNETWORKTASK__PROCESSSESSION_B__16_0_OFFSET UNITYSDK_OFFSET(0x1F75B80)
#define EVENTCONTENTTACTICRESULTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F75B90)
#define EVENTCONTENTTACTICRESULTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F75C20)
#define EVENTCONTENTTACTICRESULTNETWORKTASK_SET_SKIPSUMMARY_OFFSET UNITYSDK_OFFSET(0x1F75C30)
#define EVENTCONTENTTACTICRESULTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F75C40)
#define EVENTCONTENTTACTICRESULTNETWORKTASK_SET_SUMMARY_OFFSET UNITYSDK_OFFSET(0x1F75C50)
#define EVENTCONTENTTACTICRESULTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F75C60)
#define EVENTCONTENTTACTICRESULTNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F763D0)
#define EVENTCONTENTTACTICRESULTNETWORKTASK_GET_HAND_OFFSET UNITYSDK_OFFSET(0x1F763E0)
#define EVENTCONTENTTACTICRESULTNETWORKTASK_SET_HAND_OFFSET UNITYSDK_OFFSET(0x1F763F0)
#define EVENTCONTENTTACTICRESULTNETWORKTASK_GET_SKIPSUMMARY_OFFSET UNITYSDK_OFFSET(0x1F76400)

	inline static constexpr unsigned int EventContentTacticResultNetworkTask_TypeDefinitionIndex = 2542;

	class EventContentTacticResultNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::MX::Logic::Battles::Summary::BattleSummary* _Summary_k__BackingField; // 0x48
		::MX::Campaign::SkillCardHand* _Hand_k__BackingField; // 0x50
		::MX::Logic::Battles::Summary::TacticSkipSummary* _SkipSummary_k__BackingField; // 0x58

		::Assets::_MX::Program::Scripts::Network::SessionTask* ToSessionTask()
		{
			return ((::Assets::_MX::Program::Scripts::Network::SessionTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTACTICRESULTNETWORKTASK_TOSESSIONTASK_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTACTICRESULTNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::Summary::BattleSummary* get_Summary()
		{
			return ((::MX::Logic::Battles::Summary::BattleSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTACTICRESULTNETWORKTASK_GET_SUMMARY_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__16_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTACTICRESULTNETWORKTASK__PROCESSSESSION_B__16_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTACTICRESULTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTACTICRESULTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SkipSummary(::MX::Logic::Battles::Summary::TacticSkipSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::TacticSkipSummary*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTACTICRESULTNETWORKTASK_SET_SKIPSUMMARY_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTACTICRESULTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_Summary(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTACTICRESULTNETWORKTASK_SET_SUMMARY_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTACTICRESULTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTACTICRESULTNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::SkillCardHand* get_Hand()
		{
			return ((::MX::Campaign::SkillCardHand*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTACTICRESULTNETWORKTASK_GET_HAND_OFFSET))(nullptr);
		}

		::System::Void set_Hand(::MX::Campaign::SkillCardHand* arg)
		{
			((::System::Void(*)(::MX::Campaign::SkillCardHand*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTACTICRESULTNETWORKTASK_SET_HAND_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Summary::TacticSkipSummary* get_SkipSummary()
		{
			return ((::MX::Logic::Battles::Summary::TacticSkipSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTACTICRESULTNETWORKTASK_GET_SKIPSUMMARY_OFFSET))(nullptr);
		}

	};

