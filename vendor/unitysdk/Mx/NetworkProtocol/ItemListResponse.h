#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ITEMLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF475A0)
#define MX_NETWORKPROTOCOL_ITEMLISTRESPONSE_SET_EXPIRYITEMDBS_OFFSET UNITYSDK_OFFSET(0xF475B0)
#define MX_NETWORKPROTOCOL_ITEMLISTRESPONSE_SET_ITEMDBS_OFFSET UNITYSDK_OFFSET(0xF475C0)
#define MX_NETWORKPROTOCOL_ITEMLISTRESPONSE_GET_EXPIRYITEMDBS_OFFSET UNITYSDK_OFFSET(0xF475D0)
#define MX_NETWORKPROTOCOL_ITEMLISTRESPONSE_GET_ITEMDBS_OFFSET UNITYSDK_OFFSET(0xF475E0)
#define MX_NETWORKPROTOCOL_ITEMLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF475F0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ItemListResponse_TypeDefinitionIndex = 11824;

	class ItemListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _ItemDBs_k__BackingField; // 0x50
		Il2CppObject* _ExpiryItemDBs_k__BackingField; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ExpiryItemDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMLISTRESPONSE_SET_EXPIRYITEMDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_ItemDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMLISTRESPONSE_SET_ITEMDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ExpiryItemDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMLISTRESPONSE_GET_EXPIRYITEMDBS_OFFSET))(nullptr);
		}

		Il2CppObject* get_ItemDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMLISTRESPONSE_GET_ITEMDBS_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

