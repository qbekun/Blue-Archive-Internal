#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ITEMBULKCONSUMEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF477C0)
#define MX_NETWORKPROTOCOL_ITEMBULKCONSUMEREQUEST_GET_TARGETITEMSERVERID_OFFSET UNITYSDK_OFFSET(0xF477D0)
#define MX_NETWORKPROTOCOL_ITEMBULKCONSUMEREQUEST_GET_CONSUMECOUNT_OFFSET UNITYSDK_OFFSET(0xF477E0)
#define MX_NETWORKPROTOCOL_ITEMBULKCONSUMEREQUEST_SET_CONSUMECOUNT_OFFSET UNITYSDK_OFFSET(0xF477F0)
#define MX_NETWORKPROTOCOL_ITEMBULKCONSUMEREQUEST_SET_TARGETITEMSERVERID_OFFSET UNITYSDK_OFFSET(0xF47800)
#define MX_NETWORKPROTOCOL_ITEMBULKCONSUMEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF47810)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ItemBulkConsumeRequest_TypeDefinitionIndex = 11831;

	class ItemBulkConsumeRequest : public Il2CppObject
	{
	public:
		::System::Int64 _TargetItemServerId_k__BackingField; // 0x40
		::System::Int32 _ConsumeCount_k__BackingField; // 0x48

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMBULKCONSUMEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetItemServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMBULKCONSUMEREQUEST_GET_TARGETITEMSERVERID_OFFSET))(nullptr);
		}

		::System::Int32 get_ConsumeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMBULKCONSUMEREQUEST_GET_CONSUMECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_ConsumeCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMBULKCONSUMEREQUEST_SET_CONSUMECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_TargetItemServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMBULKCONSUMEREQUEST_SET_TARGETITEMSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMBULKCONSUMEREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

