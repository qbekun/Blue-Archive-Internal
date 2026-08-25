#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHAGETRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4F5F0)
#define MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHAGETRESPONSE_GET_PICKUPCHARACTERSELECTION_OFFSET UNITYSDK_OFFSET(0xF4F600)
#define MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHAGETRESPONSE_SET_PICKUPCHARACTERSELECTION_OFFSET UNITYSDK_OFFSET(0xF4F610)
#define MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHAGETRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4F620)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ShopPickupSelectionGachaGetResponse_TypeDefinitionIndex = 12137;

	class ShopPickupSelectionGachaGetResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _PickupCharacterSelection_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHAGETRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_PickupCharacterSelection()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHAGETRESPONSE_GET_PICKUPCHARACTERSELECTION_OFFSET))(nullptr);
		}

		::System::Void set_PickupCharacterSelection(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHAGETRESPONSE_SET_PICKUPCHARACTERSELECTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHAGETRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

