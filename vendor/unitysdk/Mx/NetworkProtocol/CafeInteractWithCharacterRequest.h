#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFEINTERACTWITHCHARACTERREQUEST_SET_CAFEDBID_OFFSET UNITYSDK_OFFSET(0xF13970)
#define MX_NETWORKPROTOCOL_CAFEINTERACTWITHCHARACTERREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF13980)
#define MX_NETWORKPROTOCOL_CAFEINTERACTWITHCHARACTERREQUEST_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0xF13990)
#define MX_NETWORKPROTOCOL_CAFEINTERACTWITHCHARACTERREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF139A0)
#define MX_NETWORKPROTOCOL_CAFEINTERACTWITHCHARACTERREQUEST_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0xF139B0)
#define MX_NETWORKPROTOCOL_CAFEINTERACTWITHCHARACTERREQUEST_GET_CAFEDBID_OFFSET UNITYSDK_OFFSET(0xF139C0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeInteractWithCharacterRequest_TypeDefinitionIndex = 11374;

	class CafeInteractWithCharacterRequest : public Il2CppObject
	{
	public:
		::System::Int64 _CafeDBId_k__BackingField; // 0x40
		::System::Int64 _CharacterId_k__BackingField; // 0x48

		::System::Void set_CafeDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEINTERACTWITHCHARACTERREQUEST_SET_CAFEDBID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEINTERACTWITHCHARACTERREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEINTERACTWITHCHARACTERREQUEST_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEINTERACTWITHCHARACTERREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEINTERACTWITHCHARACTERREQUEST_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Int64 get_CafeDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEINTERACTWITHCHARACTERREQUEST_GET_CAFEDBID_OFFSET))(nullptr);
		}

	};
}

