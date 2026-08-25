#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ATTACHMENTGETREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11440)
#define MX_NETWORKPROTOCOL_ATTACHMENTGETREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11450)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AttachmentGetRequest_TypeDefinitionIndex = 11307;

	class AttachmentGetRequest : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTACHMENTGETREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTACHMENTGETREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

