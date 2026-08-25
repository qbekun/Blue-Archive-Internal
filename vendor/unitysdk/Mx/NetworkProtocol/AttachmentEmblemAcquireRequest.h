#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMACQUIREREQUEST_GET_UNIQUEIDS_OFFSET UNITYSDK_OFFSET(0xF11500)
#define MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMACQUIREREQUEST_SET_UNIQUEIDS_OFFSET UNITYSDK_OFFSET(0xF11510)
#define MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMACQUIREREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11520)
#define MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMACQUIREREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11530)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AttachmentEmblemAcquireRequest_TypeDefinitionIndex = 11311;

	class AttachmentEmblemAcquireRequest : public Il2CppObject
	{
	public:
		Il2CppObject* _UniqueIds_k__BackingField; // 0x40

		Il2CppObject* get_UniqueIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMACQUIREREQUEST_GET_UNIQUEIDS_OFFSET))(nullptr);
		}

		::System::Void set_UniqueIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMACQUIREREQUEST_SET_UNIQUEIDS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMACQUIREREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMACQUIREREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

