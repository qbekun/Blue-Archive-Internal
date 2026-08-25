#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ARENASETTINGCHANGERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF10C80)
#define MX_NETWORKPROTOCOL_ARENASETTINGCHANGERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF10C90)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ArenaSettingChangeResponse_TypeDefinitionIndex = 11282;

	class ArenaSettingChangeResponse : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENASETTINGCHANGERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENASETTINGCHANGERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

