#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CONTENTSAVEGETREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF41480)
#define MX_NETWORKPROTOCOL_CONTENTSAVEGETREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF41490)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ContentSaveGetRequest_TypeDefinitionIndex = 11581;

	class ContentSaveGetRequest : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSAVEGETREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSAVEGETREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

