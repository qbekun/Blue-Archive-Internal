#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF114A0)
#define MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF114B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AttachmentEmblemListRequest_TypeDefinitionIndex = 11309;

	class AttachmentEmblemListRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

