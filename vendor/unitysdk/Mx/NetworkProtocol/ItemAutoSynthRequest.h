#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ITEMAUTOSYNTHREQUEST_SET_TARGETPARCELS_OFFSET UNITYSDK_OFFSET(0xF47960)
#define MX_NETWORKPROTOCOL_ITEMAUTOSYNTHREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF47970)
#define MX_NETWORKPROTOCOL_ITEMAUTOSYNTHREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF47980)
#define MX_NETWORKPROTOCOL_ITEMAUTOSYNTHREQUEST_GET_TARGETPARCELS_OFFSET UNITYSDK_OFFSET(0xF47990)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ItemAutoSynthRequest_TypeDefinitionIndex = 11835;

	class ItemAutoSynthRequest : public Il2CppObject
	{
	public:
		Il2CppObject* _TargetParcels_k__BackingField; // 0x40

		::System::Void set_TargetParcels(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMAUTOSYNTHREQUEST_SET_TARGETPARCELS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMAUTOSYNTHREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMAUTOSYNTHREQUEST_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_TargetParcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMAUTOSYNTHREQUEST_GET_TARGETPARCELS_OFFSET))(nullptr);
		}

	};
}

