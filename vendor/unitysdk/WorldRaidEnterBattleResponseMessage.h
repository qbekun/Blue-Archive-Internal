#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WorldRaidEnterBattleResponse; }
namespace MX::GameLogic::DBModel { class WorldRaidLocalBossDB; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define WORLDRAIDENTERBATTLERESPONSEMESSAGE_GET_LOCALBOSSDB_OFFSET UNITYSDK_OFFSET(0x1FB1270)
#define WORLDRAIDENTERBATTLERESPONSEMESSAGE_GET_ASSISTUSEINFOS_OFFSET UNITYSDK_OFFSET(0x1FB1280)
#define WORLDRAIDENTERBATTLERESPONSEMESSAGE_SET_ASSISTUSEINFOS_OFFSET UNITYSDK_OFFSET(0x1FB1290)
#define WORLDRAIDENTERBATTLERESPONSEMESSAGE_SET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0x1FB12A0)
#define WORLDRAIDENTERBATTLERESPONSEMESSAGE_SET_PHASEID_OFFSET UNITYSDK_OFFSET(0x1FB12B0)
#define WORLDRAIDENTERBATTLERESPONSEMESSAGE_GET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1FB12C0)
#define WORLDRAIDENTERBATTLERESPONSEMESSAGE_SET_ISTICKET_OFFSET UNITYSDK_OFFSET(0x1FB12D0)
#define WORLDRAIDENTERBATTLERESPONSEMESSAGE_GET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0x1FB12E0)
#define WORLDRAIDENTERBATTLERESPONSEMESSAGE_GET_ISTICKET_OFFSET UNITYSDK_OFFSET(0x1FB12F0)
#define WORLDRAIDENTERBATTLERESPONSEMESSAGE_GET_ISRETRY_OFFSET UNITYSDK_OFFSET(0x1FB1300)
#define WORLDRAIDENTERBATTLERESPONSEMESSAGE_SET_ISRETRY_OFFSET UNITYSDK_OFFSET(0x1FB1310)
#define WORLDRAIDENTERBATTLERESPONSEMESSAGE_GET_PHASEID_OFFSET UNITYSDK_OFFSET(0x1FB1320)
#define WORLDRAIDENTERBATTLERESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1FB1330)
#define WORLDRAIDENTERBATTLERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FB0E10)
#define WORLDRAIDENTERBATTLERESPONSEMESSAGE_SET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1FB1340)

	inline static constexpr unsigned int WorldRaidEnterBattleResponseMessage_TypeDefinitionIndex = 2896;

	class WorldRaidEnterBattleResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::WorldRaidEnterBattleResponse* _Response_k__BackingField; // 0x20
		::MX::GameLogic::DBModel::WorldRaidLocalBossDB* _LocalBossDB_k__BackingField; // 0x28
		::System::Int64 _PhaseId_k__BackingField; // 0x30
		::System::Boolean _IsPractice_k__BackingField; // 0x38
		::System::Boolean _IsTicket_k__BackingField; // 0x39
		::System::Boolean _IsRetry_k__BackingField; // 0x3A
		::System::Int32 _EchelonNumber_k__BackingField; // 0x3C
		Il2CppObject* _AssistUseInfos_k__BackingField; // 0x40

		::MX::GameLogic::DBModel::WorldRaidLocalBossDB* get_LocalBossDB()
		{
			return ((::MX::GameLogic::DBModel::WorldRaidLocalBossDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDENTERBATTLERESPONSEMESSAGE_GET_LOCALBOSSDB_OFFSET))(nullptr);
		}

		Il2CppObject* get_AssistUseInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDENTERBATTLERESPONSEMESSAGE_GET_ASSISTUSEINFOS_OFFSET))(nullptr);
		}

		::System::Void set_AssistUseInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDENTERBATTLERESPONSEMESSAGE_SET_ASSISTUSEINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsPractice(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDENTERBATTLERESPONSEMESSAGE_SET_ISPRACTICE_OFFSET))(arg, nullptr);
		}

		::System::Void set_PhaseId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDENTERBATTLERESPONSEMESSAGE_SET_PHASEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EchelonNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDENTERBATTLERESPONSEMESSAGE_GET_ECHELONNUMBER_OFFSET))(nullptr);
		}

		::System::Void set_IsTicket(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDENTERBATTLERESPONSEMESSAGE_SET_ISTICKET_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPractice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDENTERBATTLERESPONSEMESSAGE_GET_ISPRACTICE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsTicket()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDENTERBATTLERESPONSEMESSAGE_GET_ISTICKET_OFFSET))(nullptr);
		}

		::System::Boolean get_IsRetry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDENTERBATTLERESPONSEMESSAGE_GET_ISRETRY_OFFSET))(nullptr);
		}

		::System::Void set_IsRetry(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDENTERBATTLERESPONSEMESSAGE_SET_ISRETRY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PhaseId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDENTERBATTLERESPONSEMESSAGE_GET_PHASEID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::WorldRaidEnterBattleResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::WorldRaidEnterBattleResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDENTERBATTLERESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::WorldRaidEnterBattleResponse* arg2, ::MX::GameLogic::DBModel::WorldRaidLocalBossDB* arg3, ::System::Int64 arg4, ::System::Boolean arg5, ::System::Boolean arg6, ::System::Int32 arg7, Il2CppObject* arg8, ::System::Boolean arg9)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::WorldRaidEnterBattleResponse*, ::MX::GameLogic::DBModel::WorldRaidLocalBossDB*, ::System::Int64, ::System::Boolean, ::System::Boolean, ::System::Int32, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDENTERBATTLERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::System::Void set_EchelonNumber(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDENTERBATTLERESPONSEMESSAGE_SET_ECHELONNUMBER_OFFSET))(arg, nullptr);
		}

	};

