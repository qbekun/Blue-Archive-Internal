#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMACQUIRERESPONSE_SET_EMBLEMDBS_OFFSET UNITYSDK_OFFSET(0xF11540)
#define MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMACQUIRERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11550)
#define MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMACQUIRERESPONSE_GET_EMBLEMDBS_OFFSET UNITYSDK_OFFSET(0xF11560)
#define MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMACQUIRERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11570)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AttachmentEmblemAcquireResponse_TypeDefinitionIndex = 11312;

	class AttachmentEmblemAcquireResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _EmblemDBs_k__BackingField; // 0x50

		::System::Void set_EmblemDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMACQUIRERESPONSE_SET_EMBLEMDBS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMACQUIRERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_EmblemDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMACQUIRERESPONSE_GET_EMBLEMDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMACQUIRERESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

