#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SNSPOSTREADREQUEST_SET_SNSID_OFFSET UNITYSDK_OFFSET(0xF4F8F0)
#define MX_NETWORKPROTOCOL_SNSPOSTREADREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4F900)
#define MX_NETWORKPROTOCOL_SNSPOSTREADREQUEST_GET_SNSID_OFFSET UNITYSDK_OFFSET(0xF4F910)
#define MX_NETWORKPROTOCOL_SNSPOSTREADREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4F920)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int SNSPostReadRequest_TypeDefinitionIndex = 12146;

	class SNSPostReadRequest : public Il2CppObject
	{
	public:
		::System::Int64 _SNSId_k__BackingField; // 0x40

		::System::Void set_SNSId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SNSPOSTREADREQUEST_SET_SNSID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SNSPOSTREADREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_SNSId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SNSPOSTREADREQUEST_GET_SNSID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SNSPOSTREADREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

