#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDLOGINRESPONSE_SET_LASTCLEAREDDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xF4AE40)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDLOGINRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4AE50)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDLOGINRESPONSE_GET_LASTCLEAREDDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xF4AE60)
#define MX_NETWORKPROTOCOL_MULTIFLOORRAIDLOGINRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4AE70)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MultiFloorRaidLoginResponse_TypeDefinitionIndex = 11976;

	class MultiFloorRaidLoginResponse : public Il2CppObject
	{
	public:
		::System::Int64 _LastClearedDifficulty_k__BackingField; // 0x50

		::System::Void set_LastClearedDifficulty(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDLOGINRESPONSE_SET_LASTCLEAREDDIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDLOGINRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_LastClearedDifficulty()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDLOGINRESPONSE_GET_LASTCLEAREDDIFFICULTY_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MULTIFLOORRAIDLOGINRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

