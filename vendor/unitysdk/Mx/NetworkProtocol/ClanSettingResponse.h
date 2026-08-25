#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ClanDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANSETTINGRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF16AA0)
#define MX_NETWORKPROTOCOL_CLANSETTINGRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF16AB0)
#define MX_NETWORKPROTOCOL_CLANSETTINGRESPONSE_GET_CLANDB_OFFSET UNITYSDK_OFFSET(0xF16AC0)
#define MX_NETWORKPROTOCOL_CLANSETTINGRESPONSE_SET_CLANDB_OFFSET UNITYSDK_OFFSET(0xF16AD0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanSettingResponse_TypeDefinitionIndex = 11511;

	class ClanSettingResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ClanDB* _ClanDB_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSETTINGRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSETTINGRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ClanDB* get_ClanDB()
		{
			return ((::MX::GameLogic::DBModel::ClanDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSETTINGRESPONSE_GET_CLANDB_OFFSET))(nullptr);
		}

		::System::Void set_ClanDB(::MX::GameLogic::DBModel::ClanDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSETTINGRESPONSE_SET_CLANDB_OFFSET))(arg, nullptr);
		}

	};
}

