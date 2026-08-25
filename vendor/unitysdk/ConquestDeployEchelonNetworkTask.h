#pragma once
#include "unitysdk.h"

namespace FlatData { class StageDifficulty; }
namespace MX::GameLogic::DBModel { class EchelonDB; }
namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }
namespace MX::NetworkProtocol { class Protocol; }

#define CONQUESTDEPLOYECHELONNETWORKTASK_SET_ECHELONDB_OFFSET UNITYSDK_OFFSET(0x1F34B00)
#define CONQUESTDEPLOYECHELONNETWORKTASK_GET_CLANASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0x1F34B10)
#define CONQUESTDEPLOYECHELONNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F34B20)
#define CONQUESTDEPLOYECHELONNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F34B30)
#define CONQUESTDEPLOYECHELONNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F34D70)
#define CONQUESTDEPLOYECHELONNETWORKTASK_SET_CLANASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0x1F34D80)
#define CONQUESTDEPLOYECHELONNETWORKTASK_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1F34D90)
#define CONQUESTDEPLOYECHELONNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F34DA0)
#define CONQUESTDEPLOYECHELONNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F34DB0)
#define CONQUESTDEPLOYECHELONNETWORKTASK_GET_ECHELONDB_OFFSET UNITYSDK_OFFSET(0x1F34DC0)
#define CONQUESTDEPLOYECHELONNETWORKTASK_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1F34DD0)
#define CONQUESTDEPLOYECHELONNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F34DE0)
#define CONQUESTDEPLOYECHELONNETWORKTASK_SET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F34E70)
#define CONQUESTDEPLOYECHELONNETWORKTASK_GET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F34E80)
#define CONQUESTDEPLOYECHELONNETWORKTASK__PROCESSSESSION_B__20_0_OFFSET UNITYSDK_OFFSET(0x1F34E90)

	inline static constexpr unsigned int ConquestDeployEchelonNetworkTask_TypeDefinitionIndex = 2260;

	class ConquestDeployEchelonNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::FlatData::StageDifficulty* _Difficulty_k__BackingField; // 0x48
		::System::Int64 _TileUniqueId_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::EchelonDB* _EchelonDB_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::ClanAssistUseInfo* _ClanAssistUseInfo_k__BackingField; // 0x60

		::System::Void set_EchelonDB(::MX::GameLogic::DBModel::EchelonDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EchelonDB*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTDEPLOYECHELONNETWORKTASK_SET_ECHELONDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ClanAssistUseInfo* get_ClanAssistUseInfo()
		{
			return ((::MX::GameLogic::DBModel::ClanAssistUseInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTDEPLOYECHELONNETWORKTASK_GET_CLANASSISTUSEINFO_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTDEPLOYECHELONNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTDEPLOYECHELONNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTDEPLOYECHELONNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_ClanAssistUseInfo(::MX::GameLogic::DBModel::ClanAssistUseInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTDEPLOYECHELONNETWORKTASK_SET_CLANASSISTUSEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_Difficulty(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTDEPLOYECHELONNETWORKTASK_SET_DIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTDEPLOYECHELONNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTDEPLOYECHELONNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EchelonDB* get_EchelonDB()
		{
			return ((::MX::GameLogic::DBModel::EchelonDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTDEPLOYECHELONNETWORKTASK_GET_ECHELONDB_OFFSET))(nullptr);
		}

		::FlatData::StageDifficulty* get_Difficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTDEPLOYECHELONNETWORKTASK_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTDEPLOYECHELONNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_TileUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTDEPLOYECHELONNETWORKTASK_SET_TILEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TileUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTDEPLOYECHELONNETWORKTASK_GET_TILEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__20_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTDEPLOYECHELONNETWORKTASK__PROCESSSESSION_B__20_0_OFFSET))(nullptr);
		}

	};

