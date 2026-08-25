#pragma once
#include "../../unitysdk.h"

namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }
namespace MX::Logic::Data { class RaidBossResultCollection; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ELIMINATERAIDENDBATTLEREQUEST_GET_RAIDBOSSDAMAGES_OFFSET UNITYSDK_OFFSET(0xF42C40)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDENDBATTLEREQUEST_GET_RAIDBOSSRESULTS_OFFSET UNITYSDK_OFFSET(0xF42C70)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDENDBATTLEREQUEST_GET_LASTBOSSINDEX_OFFSET UNITYSDK_OFFSET(0xF42C90)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDENDBATTLEREQUEST_GET_ECHELONID_OFFSET UNITYSDK_OFFSET(0xF42CC0)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDENDBATTLEREQUEST_GET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0xF42CD0)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDENDBATTLEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF42CE0)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDENDBATTLEREQUEST_SET_SUMMARY_OFFSET UNITYSDK_OFFSET(0xF42CF0)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDENDBATTLEREQUEST_SET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0xF42D00)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDENDBATTLEREQUEST_SET_RAIDSERVERID_OFFSET UNITYSDK_OFFSET(0xF42D10)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDENDBATTLEREQUEST_GET_SUMMARY_OFFSET UNITYSDK_OFFSET(0xF42D20)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDENDBATTLEREQUEST_SET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0xF42D30)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDENDBATTLEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF42D40)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDENDBATTLEREQUEST_GET_RAIDSERVERID_OFFSET UNITYSDK_OFFSET(0xF42D50)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDENDBATTLEREQUEST_GET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0xF42D60)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDENDBATTLEREQUEST_SET_ECHELONID_OFFSET UNITYSDK_OFFSET(0xF42D70)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EliminateRaidEndBattleRequest_TypeDefinitionIndex = 11647;

	class EliminateRaidEndBattleRequest : public Il2CppObject
	{
	public:
		::System::Int32 _EchelonId_k__BackingField; // 0x40
		::System::Int64 _RaidServerId_k__BackingField; // 0x48
		::System::Boolean _IsPractice_k__BackingField; // 0x50
		::MX::Logic::Battles::Summary::BattleSummary* _Summary_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::ClanAssistUseInfo* _AssistUseInfo_k__BackingField; // 0x60

		Il2CppObject* get_RaidBossDamages()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDENDBATTLEREQUEST_GET_RAIDBOSSDAMAGES_OFFSET))(nullptr);
		}

		::MX::Logic::Data::RaidBossResultCollection* get_RaidBossResults()
		{
			return ((::MX::Logic::Data::RaidBossResultCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDENDBATTLEREQUEST_GET_RAIDBOSSRESULTS_OFFSET))(nullptr);
		}

		::System::Int32 get_LastBossIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDENDBATTLEREQUEST_GET_LASTBOSSINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_EchelonId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDENDBATTLEREQUEST_GET_ECHELONID_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ClanAssistUseInfo* get_AssistUseInfo()
		{
			return ((::MX::GameLogic::DBModel::ClanAssistUseInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDENDBATTLEREQUEST_GET_ASSISTUSEINFO_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDENDBATTLEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Summary(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDENDBATTLEREQUEST_SET_SUMMARY_OFFSET))(arg, nullptr);
		}

		::System::Void set_AssistUseInfo(::MX::GameLogic::DBModel::ClanAssistUseInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDENDBATTLEREQUEST_SET_ASSISTUSEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_RaidServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDENDBATTLEREQUEST_SET_RAIDSERVERID_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Summary::BattleSummary* get_Summary()
		{
			return ((::MX::Logic::Battles::Summary::BattleSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDENDBATTLEREQUEST_GET_SUMMARY_OFFSET))(nullptr);
		}

		::System::Void set_IsPractice(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDENDBATTLEREQUEST_SET_ISPRACTICE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDENDBATTLEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_RaidServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDENDBATTLEREQUEST_GET_RAIDSERVERID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPractice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDENDBATTLEREQUEST_GET_ISPRACTICE_OFFSET))(nullptr);
		}

		::System::Void set_EchelonId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDENDBATTLEREQUEST_SET_ECHELONID_OFFSET))(arg, nullptr);
		}

	};
}

