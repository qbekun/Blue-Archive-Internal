#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ArenaBattleDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ARENABATTLERESULTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF10E80)
#define MX_NETWORKPROTOCOL_ARENABATTLERESULTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF10E90)
#define MX_NETWORKPROTOCOL_ARENABATTLERESULTREQUEST_GET_ARENABATTLEDB_OFFSET UNITYSDK_OFFSET(0xF10EA0)
#define MX_NETWORKPROTOCOL_ARENABATTLERESULTREQUEST_SET_ARENABATTLEDB_OFFSET UNITYSDK_OFFSET(0xF10EB0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ArenaBattleResultRequest_TypeDefinitionIndex = 11287;

	class ArenaBattleResultRequest : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ArenaBattleDB* _ArenaBattleDB_k__BackingField; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENABATTLERESULTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENABATTLERESULTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ArenaBattleDB* get_ArenaBattleDB()
		{
			return ((::MX::GameLogic::DBModel::ArenaBattleDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENABATTLERESULTREQUEST_GET_ARENABATTLEDB_OFFSET))(nullptr);
		}

		::System::Void set_ArenaBattleDB(::MX::GameLogic::DBModel::ArenaBattleDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaBattleDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENABATTLERESULTREQUEST_SET_ARENABATTLEDB_OFFSET))(arg, nullptr);
		}

	};
}

