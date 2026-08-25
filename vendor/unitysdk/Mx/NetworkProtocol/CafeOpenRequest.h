#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFEOPENREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF14230)
#define MX_NETWORKPROTOCOL_CAFEOPENREQUEST_GET_CAFEID_OFFSET UNITYSDK_OFFSET(0xF14240)
#define MX_NETWORKPROTOCOL_CAFEOPENREQUEST_SET_CAFEID_OFFSET UNITYSDK_OFFSET(0xF14250)
#define MX_NETWORKPROTOCOL_CAFEOPENREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF14260)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeOpenRequest_TypeDefinitionIndex = 11398;

	class CafeOpenRequest : public Il2CppObject
	{
	public:
		::System::Int64 _CafeId_k__BackingField; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEOPENREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_CafeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEOPENREQUEST_GET_CAFEID_OFFSET))(nullptr);
		}

		::System::Void set_CafeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEOPENREQUEST_SET_CAFEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEOPENREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

