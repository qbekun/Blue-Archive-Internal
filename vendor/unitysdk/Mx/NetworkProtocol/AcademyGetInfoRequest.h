#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACADEMYGETINFOREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0EA70)
#define MX_NETWORKPROTOCOL_ACADEMYGETINFOREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0EA90)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AcademyGetInfoRequest_TypeDefinitionIndex = 11223;

	class AcademyGetInfoRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACADEMYGETINFOREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACADEMYGETINFOREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

