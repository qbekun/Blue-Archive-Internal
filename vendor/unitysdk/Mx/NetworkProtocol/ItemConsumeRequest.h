#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ITEMCONSUMEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF47680)
#define MX_NETWORKPROTOCOL_ITEMCONSUMEREQUEST_GET_CONSUMECOUNT_OFFSET UNITYSDK_OFFSET(0xF47690)
#define MX_NETWORKPROTOCOL_ITEMCONSUMEREQUEST_SET_TARGETITEMSERVERID_OFFSET UNITYSDK_OFFSET(0xF476A0)
#define MX_NETWORKPROTOCOL_ITEMCONSUMEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF476B0)
#define MX_NETWORKPROTOCOL_ITEMCONSUMEREQUEST_GET_TARGETITEMSERVERID_OFFSET UNITYSDK_OFFSET(0xF476C0)
#define MX_NETWORKPROTOCOL_ITEMCONSUMEREQUEST_SET_CONSUMECOUNT_OFFSET UNITYSDK_OFFSET(0xF476D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ItemConsumeRequest_TypeDefinitionIndex = 11827;

	class ItemConsumeRequest : public Il2CppObject
	{
	public:
		::System::Int64 _TargetItemServerId_k__BackingField; // 0x40
		::System::Int32 _ConsumeCount_k__BackingField; // 0x48

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMCONSUMEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int32 get_ConsumeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMCONSUMEREQUEST_GET_CONSUMECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_TargetItemServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMCONSUMEREQUEST_SET_TARGETITEMSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMCONSUMEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetItemServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMCONSUMEREQUEST_GET_TARGETITEMSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_ConsumeCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMCONSUMEREQUEST_SET_CONSUMECOUNT_OFFSET))(arg, nullptr);
		}

	};
}

