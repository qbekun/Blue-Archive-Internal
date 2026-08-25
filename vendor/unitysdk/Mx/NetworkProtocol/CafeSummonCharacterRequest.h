#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFESUMMONCHARACTERREQUEST_GET_CAFEDBID_OFFSET UNITYSDK_OFFSET(0xF14030)
#define MX_NETWORKPROTOCOL_CAFESUMMONCHARACTERREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF14040)
#define MX_NETWORKPROTOCOL_CAFESUMMONCHARACTERREQUEST_SET_CAFEDBID_OFFSET UNITYSDK_OFFSET(0xF14050)
#define MX_NETWORKPROTOCOL_CAFESUMMONCHARACTERREQUEST_GET_CHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0xF14060)
#define MX_NETWORKPROTOCOL_CAFESUMMONCHARACTERREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF14070)
#define MX_NETWORKPROTOCOL_CAFESUMMONCHARACTERREQUEST_SET_CHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0xF14080)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeSummonCharacterRequest_TypeDefinitionIndex = 11392;

	class CafeSummonCharacterRequest : public Il2CppObject
	{
	public:
		::System::Int64 _CafeDBId_k__BackingField; // 0x40
		::System::Int64 _CharacterServerId_k__BackingField; // 0x48

		::System::Int64 get_CafeDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFESUMMONCHARACTERREQUEST_GET_CAFEDBID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFESUMMONCHARACTERREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CafeDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFESUMMONCHARACTERREQUEST_SET_CAFEDBID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFESUMMONCHARACTERREQUEST_GET_CHARACTERSERVERID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFESUMMONCHARACTERREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_CharacterServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFESUMMONCHARACTERREQUEST_SET_CHARACTERSERVERID_OFFSET))(arg, nullptr);
		}

	};
}

