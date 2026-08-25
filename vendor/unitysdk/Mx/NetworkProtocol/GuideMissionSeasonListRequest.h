#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_GUIDEMISSIONSEASONLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4A720)
#define MX_NETWORKPROTOCOL_GUIDEMISSIONSEASONLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4A730)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int GuideMissionSeasonListRequest_TypeDefinitionIndex = 11953;

	class GuideMissionSeasonListRequest : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_GUIDEMISSIONSEASONLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_GUIDEMISSIONSEASONLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

