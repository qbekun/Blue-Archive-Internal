#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMATTACHREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11580)
#define MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMATTACHREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11590)
#define MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMATTACHREQUEST_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xF115A0)
#define MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMATTACHREQUEST_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xF115B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AttachmentEmblemAttachRequest_TypeDefinitionIndex = 11313;

	class AttachmentEmblemAttachRequest : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMATTACHREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMATTACHREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMATTACHREQUEST_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMATTACHREQUEST_GET_UNIQUEID_OFFSET))(nullptr);
		}

	};
}

