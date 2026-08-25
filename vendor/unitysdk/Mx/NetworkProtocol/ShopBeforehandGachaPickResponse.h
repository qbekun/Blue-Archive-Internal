#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHAPICKRESPONSE_SET_GACHARESULTS_OFFSET UNITYSDK_OFFSET(0xF4F4E0)
#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHAPICKRESPONSE_SET_ACQUIREDITEMS_OFFSET UNITYSDK_OFFSET(0xF4F4F0)
#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHAPICKRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4F500)
#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHAPICKRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4F510)
#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHAPICKRESPONSE_GET_GACHARESULTS_OFFSET UNITYSDK_OFFSET(0xF4F590)
#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHAPICKRESPONSE_GET_ACQUIREDITEMS_OFFSET UNITYSDK_OFFSET(0xF4F5A0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ShopBeforehandGachaPickResponse_TypeDefinitionIndex = 12135;

	class ShopBeforehandGachaPickResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _GachaResults_k__BackingField; // 0x50
		Il2CppObject* _AcquiredItems_k__BackingField; // 0x58

		::System::Void set_GachaResults(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHAPICKRESPONSE_SET_GACHARESULTS_OFFSET))(arg, nullptr);
		}

		::System::Void set_AcquiredItems(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHAPICKRESPONSE_SET_ACQUIREDITEMS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHAPICKRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHAPICKRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_GachaResults()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHAPICKRESPONSE_GET_GACHARESULTS_OFFSET))(nullptr);
		}

		Il2CppObject* get_AcquiredItems()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHAPICKRESPONSE_GET_ACQUIREDITEMS_OFFSET))(nullptr);
		}

	};
}

