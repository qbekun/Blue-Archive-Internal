#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace MX::NetworkProtocol { class Protocol; }

#define CONQUESTEROSIONBATTLERESULTNETWORKTASK_SET_CONQUESTOBJECTDBID_OFFSET UNITYSDK_OFFSET(0x1F2F160)
#define CONQUESTEROSIONBATTLERESULTNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F2F170)
#define CONQUESTEROSIONBATTLERESULTNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F2F180)
#define CONQUESTEROSIONBATTLERESULTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F2F190)
#define CONQUESTEROSIONBATTLERESULTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F2F1A0)
#define CONQUESTEROSIONBATTLERESULTNETWORKTASK_GET_BATTLESUMMARY_OFFSET UNITYSDK_OFFSET(0x1F2F230)
#define CONQUESTEROSIONBATTLERESULTNETWORKTASK_GET_CONQUESTOBJECTDBID_OFFSET UNITYSDK_OFFSET(0x1F2F240)
#define CONQUESTEROSIONBATTLERESULTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F2F250)
#define CONQUESTEROSIONBATTLERESULTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F2F6F0)
#define CONQUESTEROSIONBATTLERESULTNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F2F700)
#define CONQUESTEROSIONBATTLERESULTNETWORKTASK_SET_BATTLESUMMARY_OFFSET UNITYSDK_OFFSET(0x1F2F710)

	inline static constexpr unsigned int ConquestErosionBattleResultNetworkTask_TypeDefinitionIndex = 2231;

	class ConquestErosionBattleResultNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int64 _ConquestObjectDBId_k__BackingField; // 0x48
		::MX::Logic::Battles::Summary::BattleSummary* _BattleSummary_k__BackingField; // 0x50

		::System::Void set_ConquestObjectDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEROSIONBATTLERESULTNETWORKTASK_SET_CONQUESTOBJECTDBID_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEROSIONBATTLERESULTNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEROSIONBATTLERESULTNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEROSIONBATTLERESULTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEROSIONBATTLERESULTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::Summary::BattleSummary* get_BattleSummary()
		{
			return ((::MX::Logic::Battles::Summary::BattleSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEROSIONBATTLERESULTNETWORKTASK_GET_BATTLESUMMARY_OFFSET))(nullptr);
		}

		::System::Int64 get_ConquestObjectDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEROSIONBATTLERESULTNETWORKTASK_GET_CONQUESTOBJECTDBID_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEROSIONBATTLERESULTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEROSIONBATTLERESULTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEROSIONBATTLERESULTNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_BattleSummary(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEROSIONBATTLERESULTNETWORKTASK_SET_BATTLESUMMARY_OFFSET))(arg, nullptr);
		}

	};

