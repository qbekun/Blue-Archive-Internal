#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MiniGameCCGSaveDB; }
namespace MX::GameLogic::DBModel { class MiniGameCCGCharacterDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMECCGREPLACECHARACTERRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4A0A0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGREPLACECHARACTERRESPONSE_SET_CCGCHARACTERDB_OFFSET UNITYSDK_OFFSET(0xF4A0B0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGREPLACECHARACTERRESPONSE_SET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF4A0C0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGREPLACECHARACTERRESPONSE_GET_CCGCHARACTERDB_OFFSET UNITYSDK_OFFSET(0xF4A0D0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGREPLACECHARACTERRESPONSE_GET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF4A0E0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGREPLACECHARACTERRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4A0F0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameCCGReplaceCharacterResponse_TypeDefinitionIndex = 11936;

	class MiniGameCCGReplaceCharacterResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::MiniGameCCGSaveDB* _SaveDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::MiniGameCCGCharacterDB* _CCGCharacterDB_k__BackingField; // 0x58

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGREPLACECHARACTERRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_CCGCharacterDB(::MX::GameLogic::DBModel::MiniGameCCGCharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGREPLACECHARACTERRESPONSE_SET_CCGCHARACTERDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_SaveDB(::MX::GameLogic::DBModel::MiniGameCCGSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGREPLACECHARACTERRESPONSE_SET_SAVEDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameCCGCharacterDB* get_CCGCharacterDB()
		{
			return ((::MX::GameLogic::DBModel::MiniGameCCGCharacterDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGREPLACECHARACTERRESPONSE_GET_CCGCHARACTERDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameCCGSaveDB* get_SaveDB()
		{
			return ((::MX::GameLogic::DBModel::MiniGameCCGSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGREPLACECHARACTERRESPONSE_GET_SAVEDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGREPLACECHARACTERRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

