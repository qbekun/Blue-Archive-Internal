#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace MX::Campaign { class SkillCardHand; }
namespace MX::Logic::Battles::Summary { class TacticSkipSummary; }
namespace MX::NetworkProtocol { class Protocol; }
namespace Assets::_MX::Program::Scripts::Network { class SessionTask; }

#define CAMPAIGNTACTICRESULTNETWORKTASK_SET_SKIPSUMMARY_OFFSET UNITYSDK_OFFSET(0x1F1CF30)
#define CAMPAIGNTACTICRESULTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F1CF40)
#define CAMPAIGNTACTICRESULTNETWORKTASK_GET_SUMMARY_OFFSET UNITYSDK_OFFSET(0x1F1D560)
#define CAMPAIGNTACTICRESULTNETWORKTASK_GET_HAND_OFFSET UNITYSDK_OFFSET(0x1F1D570)
#define CAMPAIGNTACTICRESULTNETWORKTASK_SET_SUMMARY_OFFSET UNITYSDK_OFFSET(0x1F1D580)
#define CAMPAIGNTACTICRESULTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F1D590)
#define CAMPAIGNTACTICRESULTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F1D5A0)
#define CAMPAIGNTACTICRESULTNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F1D630)
#define CAMPAIGNTACTICRESULTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F1D640)
#define CAMPAIGNTACTICRESULTNETWORKTASK_TOSESSIONTASK_OFFSET UNITYSDK_OFFSET(0x1F1D650)
#define CAMPAIGNTACTICRESULTNETWORKTASK_GET_SKIPSUMMARY_OFFSET UNITYSDK_OFFSET(0x1F1D660)
#define CAMPAIGNTACTICRESULTNETWORKTASK_SET_HAND_OFFSET UNITYSDK_OFFSET(0x1F1D670)

	inline static constexpr unsigned int CampaignTacticResultNetworkTask_TypeDefinitionIndex = 2111;

	class CampaignTacticResultNetworkTask : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::Summary::BattleSummary* _Summary_k__BackingField; // 0x40
		::MX::Campaign::SkillCardHand* _Hand_k__BackingField; // 0x48
		::MX::Logic::Battles::Summary::TacticSkipSummary* _SkipSummary_k__BackingField; // 0x50

		::System::Void set_SkipSummary(::MX::Logic::Battles::Summary::TacticSkipSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::TacticSkipSummary*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTACTICRESULTNETWORKTASK_SET_SKIPSUMMARY_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTACTICRESULTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::MX::Logic::Battles::Summary::BattleSummary* get_Summary()
		{
			return ((::MX::Logic::Battles::Summary::BattleSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTACTICRESULTNETWORKTASK_GET_SUMMARY_OFFSET))(nullptr);
		}

		::MX::Campaign::SkillCardHand* get_Hand()
		{
			return ((::MX::Campaign::SkillCardHand*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTACTICRESULTNETWORKTASK_GET_HAND_OFFSET))(nullptr);
		}

		::System::Void set_Summary(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTACTICRESULTNETWORKTASK_SET_SUMMARY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTACTICRESULTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTACTICRESULTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTACTICRESULTNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTACTICRESULTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::Assets::_MX::Program::Scripts::Network::SessionTask* ToSessionTask()
		{
			return ((::Assets::_MX::Program::Scripts::Network::SessionTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTACTICRESULTNETWORKTASK_TOSESSIONTASK_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::Summary::TacticSkipSummary* get_SkipSummary()
		{
			return ((::MX::Logic::Battles::Summary::TacticSkipSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTACTICRESULTNETWORKTASK_GET_SKIPSUMMARY_OFFSET))(nullptr);
		}

		::System::Void set_Hand(::MX::Campaign::SkillCardHand* arg)
		{
			((::System::Void(*)(::MX::Campaign::SkillCardHand*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNTACTICRESULTNETWORKTASK_SET_HAND_OFFSET))(arg, nullptr);
		}

	};

