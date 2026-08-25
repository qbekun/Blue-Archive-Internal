#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }
namespace MX::NetworkProtocol { class Protocol; }

#define CONQUESTEROSIONBATTLESTARTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F2EA90)
#define CONQUESTEROSIONBATTLESTARTNETWORKTASK_GET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F2EAA0)
#define CONQUESTEROSIONBATTLESTARTNETWORKTASK_GET_USEMANAGEECHELON_OFFSET UNITYSDK_OFFSET(0x1F2EAB0)
#define CONQUESTEROSIONBATTLESTARTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F2EAC0)
#define CONQUESTEROSIONBATTLESTARTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F2EB50)
#define CONQUESTEROSIONBATTLESTARTNETWORKTASK_SET_CONQUESTOBJECTDBID_OFFSET UNITYSDK_OFFSET(0x1F2EE20)
#define CONQUESTEROSIONBATTLESTARTNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F2EE30)
#define CONQUESTEROSIONBATTLESTARTNETWORKTASK_GET_CLANASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0x1F2EE40)
#define CONQUESTEROSIONBATTLESTARTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F2EE50)
#define CONQUESTEROSIONBATTLESTARTNETWORKTASK_GET_CONQUESTOBJECTDBID_OFFSET UNITYSDK_OFFSET(0x1F2EE60)
#define CONQUESTEROSIONBATTLESTARTNETWORKTASK__PROCESSSESSION_B__20_0_OFFSET UNITYSDK_OFFSET(0x1F2EE70)
#define CONQUESTEROSIONBATTLESTARTNETWORKTASK_SET_CLANASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0x1F2EE80)
#define CONQUESTEROSIONBATTLESTARTNETWORKTASK_SET_USEMANAGEECHELON_OFFSET UNITYSDK_OFFSET(0x1F2EE90)
#define CONQUESTEROSIONBATTLESTARTNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F2EEA0)
#define CONQUESTEROSIONBATTLESTARTNETWORKTASK_SET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F2EEB0)

	inline static constexpr unsigned int ConquestErosionBattleStartNetworkTask_TypeDefinitionIndex = 2229;

	class ConquestErosionBattleStartNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int64 _ConquestObjectDBId_k__BackingField; // 0x48
		::System::Boolean _UseManageEchelon_k__BackingField; // 0x50
		::System::Int64 _EchelonNumber_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::ClanAssistUseInfo* _ClanAssistUseInfo_k__BackingField; // 0x60

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEROSIONBATTLESTARTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Int64 get_EchelonNumber()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEROSIONBATTLESTARTNETWORKTASK_GET_ECHELONNUMBER_OFFSET))(nullptr);
		}

		::System::Boolean get_UseManageEchelon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEROSIONBATTLESTARTNETWORKTASK_GET_USEMANAGEECHELON_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEROSIONBATTLESTARTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEROSIONBATTLESTARTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_ConquestObjectDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEROSIONBATTLESTARTNETWORKTASK_SET_CONQUESTOBJECTDBID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEROSIONBATTLESTARTNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ClanAssistUseInfo* get_ClanAssistUseInfo()
		{
			return ((::MX::GameLogic::DBModel::ClanAssistUseInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEROSIONBATTLESTARTNETWORKTASK_GET_CLANASSISTUSEINFO_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEROSIONBATTLESTARTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_ConquestObjectDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEROSIONBATTLESTARTNETWORKTASK_GET_CONQUESTOBJECTDBID_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__20_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEROSIONBATTLESTARTNETWORKTASK__PROCESSSESSION_B__20_0_OFFSET))(nullptr);
		}

		::System::Void set_ClanAssistUseInfo(::MX::GameLogic::DBModel::ClanAssistUseInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEROSIONBATTLESTARTNETWORKTASK_SET_CLANASSISTUSEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_UseManageEchelon(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEROSIONBATTLESTARTNETWORKTASK_SET_USEMANAGEECHELON_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEROSIONBATTLESTARTNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_EchelonNumber(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTEROSIONBATTLESTARTNETWORKTASK_SET_ECHELONNUMBER_OFFSET))(arg, nullptr);
		}

	};

