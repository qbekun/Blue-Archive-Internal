#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MiniGameCCGSaveDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMECCGCREATEGAMERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF49C00)
#define MX_NETWORKPROTOCOL_MINIGAMECCGCREATEGAMERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF49C10)
#define MX_NETWORKPROTOCOL_MINIGAMECCGCREATEGAMERESPONSE_GET_CCGSAVEDB_OFFSET UNITYSDK_OFFSET(0xF49C20)
#define MX_NETWORKPROTOCOL_MINIGAMECCGCREATEGAMERESPONSE_SET_CCGSAVEDB_OFFSET UNITYSDK_OFFSET(0xF49C30)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameCCGCreateGameResponse_TypeDefinitionIndex = 11924;

	class MiniGameCCGCreateGameResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::MiniGameCCGSaveDB* _CCGSaveDB_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGCREATEGAMERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGCREATEGAMERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameCCGSaveDB* get_CCGSaveDB()
		{
			return ((::MX::GameLogic::DBModel::MiniGameCCGSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGCREATEGAMERESPONSE_GET_CCGSAVEDB_OFFSET))(nullptr);
		}

		::System::Void set_CCGSaveDB(::MX::GameLogic::DBModel::MiniGameCCGSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGCREATEGAMERESPONSE_SET_CCGSAVEDB_OFFSET))(arg, nullptr);
		}

	};
}

