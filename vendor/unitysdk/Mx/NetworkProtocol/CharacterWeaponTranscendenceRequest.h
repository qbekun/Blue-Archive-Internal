#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CHARACTERWEAPONTRANSCENDENCEREQUEST_SET_TARGETCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0xF15EA0)
#define MX_NETWORKPROTOCOL_CHARACTERWEAPONTRANSCENDENCEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF15EB0)
#define MX_NETWORKPROTOCOL_CHARACTERWEAPONTRANSCENDENCEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF15EC0)
#define MX_NETWORKPROTOCOL_CHARACTERWEAPONTRANSCENDENCEREQUEST_GET_TARGETCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0xF15ED0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CharacterWeaponTranscendenceRequest_TypeDefinitionIndex = 11474;

	class CharacterWeaponTranscendenceRequest : public Il2CppObject
	{
	public:
		::System::Int64 _TargetCharacterServerId_k__BackingField; // 0x40

		::System::Void set_TargetCharacterServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERWEAPONTRANSCENDENCEREQUEST_SET_TARGETCHARACTERSERVERID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERWEAPONTRANSCENDENCEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERWEAPONTRANSCENDENCEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetCharacterServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERWEAPONTRANSCENDENCEREQUEST_GET_TARGETCHARACTERSERVERID_OFFSET))(nullptr);
		}

	};
}

