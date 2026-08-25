#pragma once
#include "../../unitysdk.h"

namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }
namespace MX::NetworkProtocol { class Protocol; }
namespace MX::Logic::Data { class RaidBossResultCollection; }

#define MX_NETWORKPROTOCOL_RAIDENDBATTLEREQUEST_GET_ECHELONID_OFFSET UNITYSDK_OFFSET(0xF4CDA0)
#define MX_NETWORKPROTOCOL_RAIDENDBATTLEREQUEST_GET_SUMMARY_OFFSET UNITYSDK_OFFSET(0xF4CDB0)
#define MX_NETWORKPROTOCOL_RAIDENDBATTLEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4CDC0)
#define MX_NETWORKPROTOCOL_RAIDENDBATTLEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4CDD0)
#define MX_NETWORKPROTOCOL_RAIDENDBATTLEREQUEST_GET_RAIDSERVERID_OFFSET UNITYSDK_OFFSET(0xF4CDE0)
#define MX_NETWORKPROTOCOL_RAIDENDBATTLEREQUEST_GET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0xF4CDF0)
#define MX_NETWORKPROTOCOL_RAIDENDBATTLEREQUEST_SET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0xF4CE00)
#define MX_NETWORKPROTOCOL_RAIDENDBATTLEREQUEST_SET_ECHELONID_OFFSET UNITYSDK_OFFSET(0xF4CE10)
#define MX_NETWORKPROTOCOL_RAIDENDBATTLEREQUEST_SET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0xF4CE20)
#define MX_NETWORKPROTOCOL_RAIDENDBATTLEREQUEST_GET_RAIDBOSSRESULTS_OFFSET UNITYSDK_OFFSET(0xF4CE30)
#define MX_NETWORKPROTOCOL_RAIDENDBATTLEREQUEST_SET_RAIDSERVERID_OFFSET UNITYSDK_OFFSET(0xF4CE50)
#define MX_NETWORKPROTOCOL_RAIDENDBATTLEREQUEST_GET_LASTBOSSINDEX_OFFSET UNITYSDK_OFFSET(0xF4CE60)
#define MX_NETWORKPROTOCOL_RAIDENDBATTLEREQUEST_GET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0xF4CE90)
#define MX_NETWORKPROTOCOL_RAIDENDBATTLEREQUEST_GET_RAIDBOSSDAMAGES_OFFSET UNITYSDK_OFFSET(0xF4CEA0)
#define MX_NETWORKPROTOCOL_RAIDENDBATTLEREQUEST_SET_SUMMARY_OFFSET UNITYSDK_OFFSET(0xF4CED0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RaidEndBattleRequest_TypeDefinitionIndex = 12031;

	class RaidEndBattleRequest : public Il2CppObject
	{
	public:
		::System::Int32 _EchelonId_k__BackingField; // 0x40
		::System::Int64 _RaidServerId_k__BackingField; // 0x48
		::System::Boolean _IsPractice_k__BackingField; // 0x50
		::MX::Logic::Battles::Summary::BattleSummary* _Summary_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::ClanAssistUseInfo* _AssistUseInfo_k__BackingField; // 0x60

		::System::Int32 get_EchelonId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDENDBATTLEREQUEST_GET_ECHELONID_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::Summary::BattleSummary* get_Summary()
		{
			return ((::MX::Logic::Battles::Summary::BattleSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDENDBATTLEREQUEST_GET_SUMMARY_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDENDBATTLEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDENDBATTLEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_RaidServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDENDBATTLEREQUEST_GET_RAIDSERVERID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPractice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDENDBATTLEREQUEST_GET_ISPRACTICE_OFFSET))(nullptr);
		}

		::System::Void set_AssistUseInfo(::MX::GameLogic::DBModel::ClanAssistUseInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDENDBATTLEREQUEST_SET_ASSISTUSEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_EchelonId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDENDBATTLEREQUEST_SET_ECHELONID_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsPractice(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDENDBATTLEREQUEST_SET_ISPRACTICE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::RaidBossResultCollection* get_RaidBossResults()
		{
			return ((::MX::Logic::Data::RaidBossResultCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDENDBATTLEREQUEST_GET_RAIDBOSSRESULTS_OFFSET))(nullptr);
		}

		::System::Void set_RaidServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDENDBATTLEREQUEST_SET_RAIDSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LastBossIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDENDBATTLEREQUEST_GET_LASTBOSSINDEX_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ClanAssistUseInfo* get_AssistUseInfo()
		{
			return ((::MX::GameLogic::DBModel::ClanAssistUseInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDENDBATTLEREQUEST_GET_ASSISTUSEINFO_OFFSET))(nullptr);
		}

		Il2CppObject* get_RaidBossDamages()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDENDBATTLEREQUEST_GET_RAIDBOSSDAMAGES_OFFSET))(nullptr);
		}

		::System::Void set_Summary(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDENDBATTLEREQUEST_SET_SUMMARY_OFFSET))(arg, nullptr);
		}

	};
}

