#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CraftInfoDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CRAFTBEGINPROCESSRESPONSE_SET_CRAFTINFODB_OFFSET UNITYSDK_OFFSET(0xF41CC0)
#define MX_NETWORKPROTOCOL_CRAFTBEGINPROCESSRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF41CD0)
#define MX_NETWORKPROTOCOL_CRAFTBEGINPROCESSRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF41CE0)
#define MX_NETWORKPROTOCOL_CRAFTBEGINPROCESSRESPONSE_GET_CRAFTINFODB_OFFSET UNITYSDK_OFFSET(0xF41CF0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CraftBeginProcessResponse_TypeDefinitionIndex = 11602;

	class CraftBeginProcessResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CraftInfoDB* _CraftInfoDB_k__BackingField; // 0x50

		::System::Void set_CraftInfoDB(::MX::GameLogic::DBModel::CraftInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CraftInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTBEGINPROCESSRESPONSE_SET_CRAFTINFODB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTBEGINPROCESSRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTBEGINPROCESSRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CraftInfoDB* get_CraftInfoDB()
		{
			return ((::MX::GameLogic::DBModel::CraftInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTBEGINPROCESSRESPONSE_GET_CRAFTINFODB_OFFSET))(nullptr);
		}

	};
}

