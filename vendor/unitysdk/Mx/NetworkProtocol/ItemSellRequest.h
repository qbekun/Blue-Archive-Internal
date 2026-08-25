#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ITEMSELLREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF47600)
#define MX_NETWORKPROTOCOL_ITEMSELLREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF47610)
#define MX_NETWORKPROTOCOL_ITEMSELLREQUEST_SET_TARGETSERVERIDS_OFFSET UNITYSDK_OFFSET(0xF47620)
#define MX_NETWORKPROTOCOL_ITEMSELLREQUEST_GET_TARGETSERVERIDS_OFFSET UNITYSDK_OFFSET(0xF47630)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ItemSellRequest_TypeDefinitionIndex = 11825;

	class ItemSellRequest : public Il2CppObject
	{
	public:
		Il2CppObject* _TargetServerIds_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMSELLREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMSELLREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_TargetServerIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMSELLREQUEST_SET_TARGETSERVERIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_TargetServerIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMSELLREQUEST_GET_TARGETSERVERIDS_OFFSET))(nullptr);
		}

	};
}

