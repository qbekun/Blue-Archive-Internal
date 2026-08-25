#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RAIDREWARDREQUEST_SET_RAIDSERVERID_OFFSET UNITYSDK_OFFSET(0xF4D0A0)
#define MX_NETWORKPROTOCOL_RAIDREWARDREQUEST_GET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0xF4D0B0)
#define MX_NETWORKPROTOCOL_RAIDREWARDREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4D0C0)
#define MX_NETWORKPROTOCOL_RAIDREWARDREQUEST_GET_RAIDSERVERID_OFFSET UNITYSDK_OFFSET(0xF4D0D0)
#define MX_NETWORKPROTOCOL_RAIDREWARDREQUEST_SET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0xF4D0E0)
#define MX_NETWORKPROTOCOL_RAIDREWARDREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4D0F0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RaidRewardRequest_TypeDefinitionIndex = 12035;

	class RaidRewardRequest : public Il2CppObject
	{
	public:
		::System::Int64 _RaidServerId_k__BackingField; // 0x40
		::System::Boolean _IsPractice_k__BackingField; // 0x48

		::System::Void set_RaidServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDREWARDREQUEST_SET_RAIDSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPractice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDREWARDREQUEST_GET_ISPRACTICE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDREWARDREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_RaidServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDREWARDREQUEST_GET_RAIDSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_IsPractice(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDREWARDREQUEST_SET_ISPRACTICE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDREWARDREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

