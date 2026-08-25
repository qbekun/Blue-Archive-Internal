#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ARENALOGINREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF10BE0)
#define MX_NETWORKPROTOCOL_ARENALOGINREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF10BF0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ArenaLoginRequest_TypeDefinitionIndex = 11279;

	class ArenaLoginRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENALOGINREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENALOGINREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

