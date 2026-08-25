#pragma once
#include "../../unitysdk.h"

namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_PERMANENTRAIDENDBATTLEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4B3A0)
#define MX_NETWORKPROTOCOL_PERMANENTRAIDENDBATTLEREQUEST_SET_ECHELONID_OFFSET UNITYSDK_OFFSET(0xF4B3B0)
#define MX_NETWORKPROTOCOL_PERMANENTRAIDENDBATTLEREQUEST_GET_SUMMARY_OFFSET UNITYSDK_OFFSET(0xF4B3C0)
#define MX_NETWORKPROTOCOL_PERMANENTRAIDENDBATTLEREQUEST_GET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0xF4B3D0)
#define MX_NETWORKPROTOCOL_PERMANENTRAIDENDBATTLEREQUEST_GET_ECHELONID_OFFSET UNITYSDK_OFFSET(0xF4B3E0)
#define MX_NETWORKPROTOCOL_PERMANENTRAIDENDBATTLEREQUEST_SET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0xF4B3F0)
#define MX_NETWORKPROTOCOL_PERMANENTRAIDENDBATTLEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4B400)
#define MX_NETWORKPROTOCOL_PERMANENTRAIDENDBATTLEREQUEST_SET_SUMMARY_OFFSET UNITYSDK_OFFSET(0xF4B410)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int PermanentRaidEndBattleRequest_TypeDefinitionIndex = 11995;

	class PermanentRaidEndBattleRequest : public Il2CppObject
	{
	public:
		::System::Int32 _EchelonId_k__BackingField; // 0x40
		::MX::Logic::Battles::Summary::BattleSummary* _Summary_k__BackingField; // 0x48
		::MX::GameLogic::DBModel::ClanAssistUseInfo* _AssistUseInfo_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDENDBATTLEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EchelonId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDENDBATTLEREQUEST_SET_ECHELONID_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Summary::BattleSummary* get_Summary()
		{
			return ((::MX::Logic::Battles::Summary::BattleSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDENDBATTLEREQUEST_GET_SUMMARY_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ClanAssistUseInfo* get_AssistUseInfo()
		{
			return ((::MX::GameLogic::DBModel::ClanAssistUseInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDENDBATTLEREQUEST_GET_ASSISTUSEINFO_OFFSET))(nullptr);
		}

		::System::Int32 get_EchelonId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDENDBATTLEREQUEST_GET_ECHELONID_OFFSET))(nullptr);
		}

		::System::Void set_AssistUseInfo(::MX::GameLogic::DBModel::ClanAssistUseInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDENDBATTLEREQUEST_SET_ASSISTUSEINFO_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDENDBATTLEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_Summary(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_PERMANENTRAIDENDBATTLEREQUEST_SET_SUMMARY_OFFSET))(arg, nullptr);
		}

	};
}

