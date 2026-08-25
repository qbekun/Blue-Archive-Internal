#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFELISTPRESETREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF13A50)
#define MX_NETWORKPROTOCOL_CAFELISTPRESETREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF13A60)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeListPresetRequest_TypeDefinitionIndex = 11376;

	class CafeListPresetRequest : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFELISTPRESETREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFELISTPRESETREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

