#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ItemDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSALLRESPONSE_GET_CRAFTINFODBS_OFFSET UNITYSDK_OFFSET(0xF42160)
#define MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSALLRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF42170)
#define MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSALLRESPONSE_SET_TICKETITEMDB_OFFSET UNITYSDK_OFFSET(0xF42180)
#define MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSALLRESPONSE_SET_CRAFTINFODBS_OFFSET UNITYSDK_OFFSET(0xF42190)
#define MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSALLRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF421A0)
#define MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSALLRESPONSE_GET_TICKETITEMDB_OFFSET UNITYSDK_OFFSET(0xF421B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CraftCompleteProcessAllResponse_TypeDefinitionIndex = 11616;

	class CraftCompleteProcessAllResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _CraftInfoDBs_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::ItemDB* _TicketItemDB_k__BackingField; // 0x58

		Il2CppObject* get_CraftInfoDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSALLRESPONSE_GET_CRAFTINFODBS_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSALLRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_TicketItemDB(::MX::GameLogic::DBModel::ItemDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ItemDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSALLRESPONSE_SET_TICKETITEMDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_CraftInfoDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSALLRESPONSE_SET_CRAFTINFODBS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSALLRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ItemDB* get_TicketItemDB()
		{
			return ((::MX::GameLogic::DBModel::ItemDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSALLRESPONSE_GET_TICKETITEMDB_OFFSET))(nullptr);
		}

	};
}

