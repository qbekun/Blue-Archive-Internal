#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CHARACTERGEARTIERUPREQUEST_GET_REPLACEINFOS_OFFSET UNITYSDK_OFFSET(0xF15880)
#define MX_NETWORKPROTOCOL_CHARACTERGEARTIERUPREQUEST_SET_REPLACEINFOS_OFFSET UNITYSDK_OFFSET(0xF15890)
#define MX_NETWORKPROTOCOL_CHARACTERGEARTIERUPREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF158A0)
#define MX_NETWORKPROTOCOL_CHARACTERGEARTIERUPREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF158B0)
#define MX_NETWORKPROTOCOL_CHARACTERGEARTIERUPREQUEST_GET_GEARSERVERID_OFFSET UNITYSDK_OFFSET(0xF158C0)
#define MX_NETWORKPROTOCOL_CHARACTERGEARTIERUPREQUEST_SET_GEARSERVERID_OFFSET UNITYSDK_OFFSET(0xF158D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CharacterGearTierUpRequest_TypeDefinitionIndex = 11458;

	class CharacterGearTierUpRequest : public Il2CppObject
	{
	public:
		::System::Int64 _GearServerId_k__BackingField; // 0x40
		Il2CppObject* _ReplaceInfos_k__BackingField; // 0x48

		Il2CppObject* get_ReplaceInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERGEARTIERUPREQUEST_GET_REPLACEINFOS_OFFSET))(nullptr);
		}

		::System::Void set_ReplaceInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERGEARTIERUPREQUEST_SET_REPLACEINFOS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERGEARTIERUPREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERGEARTIERUPREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_GearServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERGEARTIERUPREQUEST_GET_GEARSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_GearServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERGEARTIERUPREQUEST_SET_GEARSERVERID_OFFSET))(arg, nullptr);
		}

	};
}

