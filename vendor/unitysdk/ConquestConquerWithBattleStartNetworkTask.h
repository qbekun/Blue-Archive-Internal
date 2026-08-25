#pragma once
#include "unitysdk.h"

namespace FlatData { class StageDifficulty; }
namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }
namespace MX::NetworkProtocol { class Protocol; }

#define CONQUESTCONQUERWITHBATTLESTARTNETWORKTASK_SET_CLANASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0x1F2BFA0)
#define CONQUESTCONQUERWITHBATTLESTARTNETWORKTASK_GET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F2BFB0)
#define CONQUESTCONQUERWITHBATTLESTARTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F2BFC0)
#define CONQUESTCONQUERWITHBATTLESTARTNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F2BFD0)
#define CONQUESTCONQUERWITHBATTLESTARTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F2BFE0)
#define CONQUESTCONQUERWITHBATTLESTARTNETWORKTASK__PROCESSSESSION_B__20_0_OFFSET UNITYSDK_OFFSET(0x1F2C070)
#define CONQUESTCONQUERWITHBATTLESTARTNETWORKTASK_SET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F2C080)
#define CONQUESTCONQUERWITHBATTLESTARTNETWORKTASK_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1F2C090)
#define CONQUESTCONQUERWITHBATTLESTARTNETWORKTASK_GET_CLANASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0x1F2C0A0)
#define CONQUESTCONQUERWITHBATTLESTARTNETWORKTASK_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1F2C0B0)
#define CONQUESTCONQUERWITHBATTLESTARTNETWORKTASK_GET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F2C0C0)
#define CONQUESTCONQUERWITHBATTLESTARTNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F2C0D0)
#define CONQUESTCONQUERWITHBATTLESTARTNETWORKTASK_SET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F2C0E0)
#define CONQUESTCONQUERWITHBATTLESTARTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F2C0F0)
#define CONQUESTCONQUERWITHBATTLESTARTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F2C100)

	inline static constexpr unsigned int ConquestConquerWithBattleStartNetworkTask_TypeDefinitionIndex = 2217;

	class ConquestConquerWithBattleStartNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::FlatData::StageDifficulty* _Difficulty_k__BackingField; // 0x48
		::System::Int64 _TileUniqueId_k__BackingField; // 0x50
		::System::Int64 _EchelonNumber_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::ClanAssistUseInfo* _ClanAssistUseInfo_k__BackingField; // 0x60

		::System::Void set_ClanAssistUseInfo(::MX::GameLogic::DBModel::ClanAssistUseInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLESTARTNETWORKTASK_SET_CLANASSISTUSEINFO_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EchelonNumber()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLESTARTNETWORKTASK_GET_ECHELONNUMBER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLESTARTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLESTARTNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLESTARTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__20_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLESTARTNETWORKTASK__PROCESSSESSION_B__20_0_OFFSET))(nullptr);
		}

		::System::Void set_TileUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLESTARTNETWORKTASK_SET_TILEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Difficulty(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLESTARTNETWORKTASK_SET_DIFFICULTY_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ClanAssistUseInfo* get_ClanAssistUseInfo()
		{
			return ((::MX::GameLogic::DBModel::ClanAssistUseInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLESTARTNETWORKTASK_GET_CLANASSISTUSEINFO_OFFSET))(nullptr);
		}

		::FlatData::StageDifficulty* get_Difficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLESTARTNETWORKTASK_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Int64 get_TileUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLESTARTNETWORKTASK_GET_TILEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLESTARTNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_EchelonNumber(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLESTARTNETWORKTASK_SET_ECHELONNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLESTARTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLESTARTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

