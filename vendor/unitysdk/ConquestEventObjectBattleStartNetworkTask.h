#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }
namespace MX::NetworkProtocol { class Protocol; }

#define CONQUESTEVENTOBJECTBATTLESTARTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F2DC40)
#define CONQUESTEVENTOBJECTBATTLESTARTNETWORKTASK__PROCESSSESSION_B__16_0_OFFSET UNITYSDK_OFFSET(0x1F2DCD0)
#define CONQUESTEVENTOBJECTBATTLESTARTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F2DCE0)
#define CONQUESTEVENTOBJECTBATTLESTARTNETWORKTASK_GET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F2DCF0)
#define CONQUESTEVENTOBJECTBATTLESTARTNETWORKTASK_SET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F2DD00)
#define CONQUESTEVENTOBJECTBATTLESTARTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F2DD10)
#define CONQUESTEVENTOBJECTBATTLESTARTNETWORKTASK_GET_CLANASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0x1F2DD20)
#define CONQUESTEVENTOBJECTBATTLESTARTNETWORKTASK_SET_CONQUESTOBJECTDBID_OFFSET UNITYSDK_OFFSET(0x1F2DD30)
#define CONQUESTEVENTOBJECTBATTLESTARTNETWORKTASK_SET_CLANASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0x1F2DD40)
#define CONQUESTEVENTOBJECTBATTLESTARTNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F2DD50)
#define CONQUESTEVENTOBJECTBATTLESTARTNETWORKTASK_GET_CONQUESTOBJECTDBID_OFFSET UNITYSDK_OFFSET(0x1F2DD60)
#define CONQUESTEVENTOBJECTBATTLESTARTNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F2DD70)
#define CONQUESTEVENTOBJECTBATTLESTARTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F2DD80)

	inline static constexpr unsigned int ConquestEventObjectBattleStartNetworkTask_TypeDefinitionIndex = 2225;

	class ConquestEventObjectBattleStartNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int64 _ConquestObjectDBId_k__BackingField; // 0x48
		::System::Int64 _EchelonNumber_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::ClanAssistUseInfo* _ClanAssistUseInfo_k__BackingField; // 0x58

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTOBJECTBATTLESTARTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__16_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTOBJECTBATTLESTARTNETWORKTASK__PROCESSSESSION_B__16_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTOBJECTBATTLESTARTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EchelonNumber()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTOBJECTBATTLESTARTNETWORKTASK_GET_ECHELONNUMBER_OFFSET))(nullptr);
		}

		::System::Void set_EchelonNumber(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTOBJECTBATTLESTARTNETWORKTASK_SET_ECHELONNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTOBJECTBATTLESTARTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ClanAssistUseInfo* get_ClanAssistUseInfo()
		{
			return ((::MX::GameLogic::DBModel::ClanAssistUseInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTOBJECTBATTLESTARTNETWORKTASK_GET_CLANASSISTUSEINFO_OFFSET))(nullptr);
		}

		::System::Void set_ConquestObjectDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTOBJECTBATTLESTARTNETWORKTASK_SET_CONQUESTOBJECTDBID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ClanAssistUseInfo(::MX::GameLogic::DBModel::ClanAssistUseInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTOBJECTBATTLESTARTNETWORKTASK_SET_CLANASSISTUSEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTOBJECTBATTLESTARTNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ConquestObjectDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTOBJECTBATTLESTARTNETWORKTASK_GET_CONQUESTOBJECTDBID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTOBJECTBATTLESTARTNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEVENTOBJECTBATTLESTARTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

