#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_WEEKDUNGEONLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF50380)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF50390)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int WeekDungeonListRequest_TypeDefinitionIndex = 12177;

	class WeekDungeonListRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

