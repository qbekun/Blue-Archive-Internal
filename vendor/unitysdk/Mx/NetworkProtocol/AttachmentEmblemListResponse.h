#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF114C0)
#define MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF114D0)
#define MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMLISTRESPONSE_GET_EMBLEMDBS_OFFSET UNITYSDK_OFFSET(0xF114E0)
#define MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMLISTRESPONSE_SET_EMBLEMDBS_OFFSET UNITYSDK_OFFSET(0xF114F0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AttachmentEmblemListResponse_TypeDefinitionIndex = 11310;

	class AttachmentEmblemListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _EmblemDBs_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_EmblemDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMLISTRESPONSE_GET_EMBLEMDBS_OFFSET))(nullptr);
		}

		::System::Void set_EmblemDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMLISTRESPONSE_SET_EMBLEMDBS_OFFSET))(arg, nullptr);
		}

	};
}

