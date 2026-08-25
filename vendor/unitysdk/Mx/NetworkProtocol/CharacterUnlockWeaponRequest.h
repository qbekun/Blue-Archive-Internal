#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CHARACTERUNLOCKWEAPONREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF15D80)
#define MX_NETWORKPROTOCOL_CHARACTERUNLOCKWEAPONREQUEST_GET_TARGETCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0xF15D90)
#define MX_NETWORKPROTOCOL_CHARACTERUNLOCKWEAPONREQUEST_SET_TARGETCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0xF15DA0)
#define MX_NETWORKPROTOCOL_CHARACTERUNLOCKWEAPONREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF15DB0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CharacterUnlockWeaponRequest_TypeDefinitionIndex = 11470;

	class CharacterUnlockWeaponRequest : public Il2CppObject
	{
	public:
		::System::Int64 _TargetCharacterServerId_k__BackingField; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERUNLOCKWEAPONREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetCharacterServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERUNLOCKWEAPONREQUEST_GET_TARGETCHARACTERSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_TargetCharacterServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERUNLOCKWEAPONREQUEST_SET_TARGETCHARACTERSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERUNLOCKWEAPONREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

