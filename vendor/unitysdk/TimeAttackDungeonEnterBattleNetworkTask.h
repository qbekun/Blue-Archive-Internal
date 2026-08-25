#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }
namespace MX::NetworkProtocol { class Protocol; }

#define TIMEATTACKDUNGEONENTERBATTLENETWORKTASK_GET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1FABDC0)
#define TIMEATTACKDUNGEONENTERBATTLENETWORKTASK__PROCESSSESSION_B__20_0_OFFSET UNITYSDK_OFFSET(0x1FABDD0)
#define TIMEATTACKDUNGEONENTERBATTLENETWORKTASK_GET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0x1FABDE0)
#define TIMEATTACKDUNGEONENTERBATTLENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FABDF0)
#define TIMEATTACKDUNGEONENTERBATTLENETWORKTASK_SET_GEASID_OFFSET UNITYSDK_OFFSET(0x1FAC100)
#define TIMEATTACKDUNGEONENTERBATTLENETWORKTASK_SET_ROOMID_OFFSET UNITYSDK_OFFSET(0x1FAC110)
#define TIMEATTACKDUNGEONENTERBATTLENETWORKTASK_SET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0x1FAC120)
#define TIMEATTACKDUNGEONENTERBATTLENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1FAC130)
#define TIMEATTACKDUNGEONENTERBATTLENETWORKTASK_GET_GEASID_OFFSET UNITYSDK_OFFSET(0x1FAC1C0)
#define TIMEATTACKDUNGEONENTERBATTLENETWORKTASK_GET_ROOMID_OFFSET UNITYSDK_OFFSET(0x1FAC1D0)
#define TIMEATTACKDUNGEONENTERBATTLENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1FAC1E0)
#define TIMEATTACKDUNGEONENTERBATTLENETWORKTASK_GET_DUNGEONID_OFFSET UNITYSDK_OFFSET(0x1FAC1F0)
#define TIMEATTACKDUNGEONENTERBATTLENETWORKTASK_SET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1FAC200)
#define TIMEATTACKDUNGEONENTERBATTLENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FAC210)
#define TIMEATTACKDUNGEONENTERBATTLENETWORKTASK_SET_DUNGEONID_OFFSET UNITYSDK_OFFSET(0x1FAC220)

	inline static constexpr unsigned int TimeAttackDungeonEnterBattleNetworkTask_TypeDefinitionIndex = 2866;

	class TimeAttackDungeonEnterBattleNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _RoomId_k__BackingField; // 0x40
		::System::Int64 _GeasId_k__BackingField; // 0x48
		::System::Int64 _DungeonId_k__BackingField; // 0x50
		::System::Int32 _EchelonNumber_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::ClanAssistUseInfo* _AssistUseInfo_k__BackingField; // 0x60

		::System::Int32 get_EchelonNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONENTERBATTLENETWORKTASK_GET_ECHELONNUMBER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__20_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONENTERBATTLENETWORKTASK__PROCESSSESSION_B__20_0_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ClanAssistUseInfo* get_AssistUseInfo()
		{
			return ((::MX::GameLogic::DBModel::ClanAssistUseInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONENTERBATTLENETWORKTASK_GET_ASSISTUSEINFO_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONENTERBATTLENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_GeasId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONENTERBATTLENETWORKTASK_SET_GEASID_OFFSET))(arg, nullptr);
		}

		::System::Void set_RoomId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONENTERBATTLENETWORKTASK_SET_ROOMID_OFFSET))(arg, nullptr);
		}

		::System::Void set_AssistUseInfo(::MX::GameLogic::DBModel::ClanAssistUseInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONENTERBATTLENETWORKTASK_SET_ASSISTUSEINFO_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONENTERBATTLENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_GeasId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONENTERBATTLENETWORKTASK_GET_GEASID_OFFSET))(nullptr);
		}

		::System::Int64 get_RoomId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONENTERBATTLENETWORKTASK_GET_ROOMID_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONENTERBATTLENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Int64 get_DungeonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONENTERBATTLENETWORKTASK_GET_DUNGEONID_OFFSET))(nullptr);
		}

		::System::Void set_EchelonNumber(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONENTERBATTLENETWORKTASK_SET_ECHELONNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONENTERBATTLENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_DungeonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONENTERBATTLENETWORKTASK_SET_DUNGEONID_OFFSET))(arg, nullptr);
		}

	};

