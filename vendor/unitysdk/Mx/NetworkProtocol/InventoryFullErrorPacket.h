#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define MX_NETWORKPROTOCOL_INVENTORYFULLERRORPACKET_GET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0xF11AD0)
#define MX_NETWORKPROTOCOL_INVENTORYFULLERRORPACKET_SET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0xF11AE0)
#define MX_NETWORKPROTOCOL_INVENTORYFULLERRORPACKET_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11AF0)
#define MX_NETWORKPROTOCOL_INVENTORYFULLERRORPACKET_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11B00)
#define MX_NETWORKPROTOCOL_INVENTORYFULLERRORPACKET_GET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0xF11B10)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int InventoryFullErrorPacket_TypeDefinitionIndex = 11327;

	class InventoryFullErrorPacket : public Il2CppObject
	{
	public:
		Il2CppObject* _ParcelInfos_k__BackingField; // 0x50

		Il2CppObject* get_ParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_INVENTORYFULLERRORPACKET_GET_PARCELINFOS_OFFSET))(nullptr);
		}

		::System::Void set_ParcelInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_INVENTORYFULLERRORPACKET_SET_PARCELINFOS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_INVENTORYFULLERRORPACKET_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_INVENTORYFULLERRORPACKET_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::WebAPIErrorCode* get_ErrorCode()
		{
			return ((::MX::NetworkProtocol::WebAPIErrorCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_INVENTORYFULLERRORPACKET_GET_ERRORCODE_OFFSET))(nullptr);
		}

	};
}

