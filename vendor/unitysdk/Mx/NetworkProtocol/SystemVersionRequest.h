#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SYSTEMVERSIONREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4FB10)
#define MX_NETWORKPROTOCOL_SYSTEMVERSIONREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4FB20)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int SystemVersionRequest_TypeDefinitionIndex = 12154;

	class SystemVersionRequest : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SYSTEMVERSIONREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SYSTEMVERSIONREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

