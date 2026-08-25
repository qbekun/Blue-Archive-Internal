#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTDISMISSREPURCHASABLEPOPUPREQUEST_SET_PRODUCTIDS_OFFSET UNITYSDK_OFFSET(0xF0FBA0)
#define MX_NETWORKPROTOCOL_ACCOUNTDISMISSREPURCHASABLEPOPUPREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0FBB0)
#define MX_NETWORKPROTOCOL_ACCOUNTDISMISSREPURCHASABLEPOPUPREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0FBC0)
#define MX_NETWORKPROTOCOL_ACCOUNTDISMISSREPURCHASABLEPOPUPREQUEST_GET_PRODUCTIDS_OFFSET UNITYSDK_OFFSET(0xF0FBD0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountDismissRepurchasablePopupRequest_TypeDefinitionIndex = 11253;

	class AccountDismissRepurchasablePopupRequest : public Il2CppObject
	{
	public:
		Il2CppObject* _ProductIds_k__BackingField; // 0x40

		::System::Void set_ProductIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTDISMISSREPURCHASABLEPOPUPREQUEST_SET_PRODUCTIDS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTDISMISSREPURCHASABLEPOPUPREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTDISMISSREPURCHASABLEPOPUPREQUEST_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_ProductIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTDISMISSREPURCHASABLEPOPUPREQUEST_GET_PRODUCTIDS_OFFSET))(nullptr);
		}

	};
}

