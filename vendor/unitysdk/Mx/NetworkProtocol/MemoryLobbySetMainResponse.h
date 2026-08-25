#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class AccountDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MEMORYLOBBYSETMAINRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF48100)
#define MX_NETWORKPROTOCOL_MEMORYLOBBYSETMAINRESPONSE_SET_ACCOUNTDB_OFFSET UNITYSDK_OFFSET(0xF48110)
#define MX_NETWORKPROTOCOL_MEMORYLOBBYSETMAINRESPONSE_GET_ACCOUNTDB_OFFSET UNITYSDK_OFFSET(0xF48120)
#define MX_NETWORKPROTOCOL_MEMORYLOBBYSETMAINRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF48130)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MemoryLobbySetMainResponse_TypeDefinitionIndex = 11854;

	class MemoryLobbySetMainResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::AccountDB* _AccountDB_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MEMORYLOBBYSETMAINRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_AccountDB(::MX::GameLogic::DBModel::AccountDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MEMORYLOBBYSETMAINRESPONSE_SET_ACCOUNTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::AccountDB* get_AccountDB()
		{
			return ((::MX::GameLogic::DBModel::AccountDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MEMORYLOBBYSETMAINRESPONSE_GET_ACCOUNTDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MEMORYLOBBYSETMAINRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

