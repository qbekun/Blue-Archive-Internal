#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ConquestEchelonDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CONQUESTNORMALIZEECHELONRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF404E0)
#define MX_NETWORKPROTOCOL_CONQUESTNORMALIZEECHELONRESPONSE_GET_CONQUESTECHELONDB_OFFSET UNITYSDK_OFFSET(0xF404F0)
#define MX_NETWORKPROTOCOL_CONQUESTNORMALIZEECHELONRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF40500)
#define MX_NETWORKPROTOCOL_CONQUESTNORMALIZEECHELONRESPONSE_SET_CONQUESTECHELONDB_OFFSET UNITYSDK_OFFSET(0xF40510)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ConquestNormalizeEchelonResponse_TypeDefinitionIndex = 11552;

	class ConquestNormalizeEchelonResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ConquestEchelonDB* _ConquestEchelonDB_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTNORMALIZEECHELONRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ConquestEchelonDB* get_ConquestEchelonDB()
		{
			return ((::MX::GameLogic::DBModel::ConquestEchelonDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTNORMALIZEECHELONRESPONSE_GET_CONQUESTECHELONDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTNORMALIZEECHELONRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ConquestEchelonDB(::MX::GameLogic::DBModel::ConquestEchelonDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConquestEchelonDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTNORMALIZEECHELONRESPONSE_SET_CONQUESTECHELONDB_OFFSET))(arg, nullptr);
		}

	};
}

