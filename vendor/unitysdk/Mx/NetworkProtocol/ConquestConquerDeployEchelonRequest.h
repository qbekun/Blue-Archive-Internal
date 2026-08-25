#pragma once
#include "../../unitysdk.h"

namespace FlatData { class StageDifficulty; }
namespace MX::GameLogic::DBModel { class EchelonDB; }
namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONREQUEST_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xF40340)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONREQUEST_SET_ECHELONDB_OFFSET UNITYSDK_OFFSET(0xF40350)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONREQUEST_SET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF40360)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONREQUEST_GET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF40370)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF40380)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF40390)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF403A0)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONREQUEST_GET_ECHELONDB_OFFSET UNITYSDK_OFFSET(0xF403B0)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONREQUEST_SET_CLANASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0xF403C0)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONREQUEST_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xF403D0)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONREQUEST_GET_CLANASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0xF403E0)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF403F0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ConquestConquerDeployEchelonRequest_TypeDefinitionIndex = 11549;

	class ConquestConquerDeployEchelonRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::FlatData::StageDifficulty* _Difficulty_k__BackingField; // 0x48
		::System::Int64 _TileUniqueId_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::EchelonDB* _EchelonDB_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::ClanAssistUseInfo* _ClanAssistUseInfo_k__BackingField; // 0x60

		::System::Void set_Difficulty(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONREQUEST_SET_DIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Void set_EchelonDB(::MX::GameLogic::DBModel::EchelonDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EchelonDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONREQUEST_SET_ECHELONDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_TileUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONREQUEST_SET_TILEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TileUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONREQUEST_GET_TILEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::EchelonDB* get_EchelonDB()
		{
			return ((::MX::GameLogic::DBModel::EchelonDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONREQUEST_GET_ECHELONDB_OFFSET))(nullptr);
		}

		::System::Void set_ClanAssistUseInfo(::MX::GameLogic::DBModel::ClanAssistUseInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONREQUEST_SET_CLANASSISTUSEINFO_OFFSET))(arg, nullptr);
		}

		::FlatData::StageDifficulty* get_Difficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONREQUEST_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ClanAssistUseInfo* get_ClanAssistUseInfo()
		{
			return ((::MX::GameLogic::DBModel::ClanAssistUseInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONREQUEST_GET_CLANASSISTUSEINFO_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

