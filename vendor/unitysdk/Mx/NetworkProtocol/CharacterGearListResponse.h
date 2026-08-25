#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CHARACTERGEARLISTRESPONSE_GET_GEARDBS_OFFSET UNITYSDK_OFFSET(0xF15780)
#define MX_NETWORKPROTOCOL_CHARACTERGEARLISTRESPONSE_SET_GEARDBS_OFFSET UNITYSDK_OFFSET(0xF15790)
#define MX_NETWORKPROTOCOL_CHARACTERGEARLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF157A0)
#define MX_NETWORKPROTOCOL_CHARACTERGEARLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF157B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CharacterGearListResponse_TypeDefinitionIndex = 11455;

	class CharacterGearListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _GearDBs_k__BackingField; // 0x50

		Il2CppObject* get_GearDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERGEARLISTRESPONSE_GET_GEARDBS_OFFSET))(nullptr);
		}

		::System::Void set_GearDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERGEARLISTRESPONSE_SET_GEARDBS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERGEARLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERGEARLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

