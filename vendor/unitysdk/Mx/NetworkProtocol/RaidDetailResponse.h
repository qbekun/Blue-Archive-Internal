#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class RaidDetailDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RAIDDETAILRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4C810)
#define MX_NETWORKPROTOCOL_RAIDDETAILRESPONSE_SET_PARTICIPATECHARACTERSERVERIDS_OFFSET UNITYSDK_OFFSET(0xF4C820)
#define MX_NETWORKPROTOCOL_RAIDDETAILRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4C830)
#define MX_NETWORKPROTOCOL_RAIDDETAILRESPONSE_GET_RAIDDETAILDB_OFFSET UNITYSDK_OFFSET(0xF4C840)
#define MX_NETWORKPROTOCOL_RAIDDETAILRESPONSE_GET_PARTICIPATECHARACTERSERVERIDS_OFFSET UNITYSDK_OFFSET(0xF4C850)
#define MX_NETWORKPROTOCOL_RAIDDETAILRESPONSE_SET_RAIDDETAILDB_OFFSET UNITYSDK_OFFSET(0xF4C860)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RaidDetailResponse_TypeDefinitionIndex = 12022;

	class RaidDetailResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::RaidDetailDB* _RaidDetailDB_k__BackingField; // 0x50
		Il2CppObject* _ParticipateCharacterServerIds_k__BackingField; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDDETAILRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ParticipateCharacterServerIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDDETAILRESPONSE_SET_PARTICIPATECHARACTERSERVERIDS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDDETAILRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::RaidDetailDB* get_RaidDetailDB()
		{
			return ((::MX::GameLogic::DBModel::RaidDetailDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDDETAILRESPONSE_GET_RAIDDETAILDB_OFFSET))(nullptr);
		}

		Il2CppObject* get_ParticipateCharacterServerIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDDETAILRESPONSE_GET_PARTICIPATECHARACTERSERVERIDS_OFFSET))(nullptr);
		}

		::System::Void set_RaidDetailDB(::MX::GameLogic::DBModel::RaidDetailDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidDetailDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDDETAILRESPONSE_SET_RAIDDETAILDB_OFFSET))(arg, nullptr);
		}

	};
}

