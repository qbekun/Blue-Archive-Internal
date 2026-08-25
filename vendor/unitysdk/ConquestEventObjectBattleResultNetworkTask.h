#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace MX::NetworkProtocol { class Protocol; }

#define CONQUESTEVENTOBJECTBATTLERESULTNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F2E2E0)
#define CONQUESTEVENTOBJECTBATTLERESULTNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F2E2F0)
#define CONQUESTEVENTOBJECTBATTLERESULTNETWORKTASK_SET_BATTLESUMMARY_OFFSET UNITYSDK_OFFSET(0x1F2E300)
#define CONQUESTEVENTOBJECTBATTLERESULTNETWORKTASK_SET_CONQUESTOBJECTDBID_OFFSET UNITYSDK_OFFSET(0x1F2E310)
#define CONQUESTEVENTOBJECTBATTLERESULTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F2E320)
#define CONQUESTEVENTOBJECTBATTLERESULTNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F2E3B0)
#define CONQUESTEVENTOBJECTBATTLERESULTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F2E3C0)
#define CONQUESTEVENTOBJECTBATTLERESULTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F2E3D0)
#define CONQUESTEVENTOBJECTBATTLERESULTNETWORKTASK_GET_CONQUESTOBJECTDBID_OFFSET UNITYSDK_OFFSET(0x1F2E3E0)
#define CONQUESTEVENTOBJECTBATTLERESULTNETWORKTASK_GET_BATTLESUMMARY_OFFSET UNITYSDK_OFFSET(0x1F2E3F0)
#define CONQUESTEVENTOBJECTBATTLERESULTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F2E400)

	inline static constexpr unsigned int ConquestEventObjectBattleResultNetworkTask_TypeDefinitionIndex = 2227;

	class ConquestEventObjectBattleResultNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int64 _ConquestObjectDBId_k__BackingField; // 0x48
		::MX::Logic::Battles::Summary::BattleSummary* _BattleSummary_k__BackingField; // 0x50

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTOBJECTBATTLERESULTNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTOBJECTBATTLERESULTNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

		::System::Void set_BattleSummary(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTOBJECTBATTLERESULTNETWORKTASK_SET_BATTLESUMMARY_OFFSET))(arg, nullptr);
		}

		::System::Void set_ConquestObjectDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTOBJECTBATTLERESULTNETWORKTASK_SET_CONQUESTOBJECTDBID_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTOBJECTBATTLERESULTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTOBJECTBATTLERESULTNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTOBJECTBATTLERESULTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTOBJECTBATTLERESULTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_ConquestObjectDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTOBJECTBATTLERESULTNETWORKTASK_GET_CONQUESTOBJECTDBID_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::Summary::BattleSummary* get_BattleSummary()
		{
			return ((::MX::Logic::Battles::Summary::BattleSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTOBJECTBATTLERESULTNETWORKTASK_GET_BATTLESUMMARY_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTOBJECTBATTLERESULTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

