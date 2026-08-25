#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ARENASETTINGANONYMOUSRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11420)
#define MX_NETWORKPROTOCOL_ARENASETTINGANONYMOUSRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11430)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ArenaSettingAnonymousResponse_TypeDefinitionIndex = 11306;

	class ArenaSettingAnonymousResponse : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENASETTINGANONYMOUSRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENASETTINGANONYMOUSRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

