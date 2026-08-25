#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SHOPLISTRESPONSE_GET_SHOPELIGMAHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF4EDC0)
#define MX_NETWORKPROTOCOL_SHOPLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4EDD0)
#define MX_NETWORKPROTOCOL_SHOPLISTRESPONSE_GET_SHOPINFOS_OFFSET UNITYSDK_OFFSET(0xF4EDE0)
#define MX_NETWORKPROTOCOL_SHOPLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4EDF0)
#define MX_NETWORKPROTOCOL_SHOPLISTRESPONSE_SET_SHOPELIGMAHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF4EE00)
#define MX_NETWORKPROTOCOL_SHOPLISTRESPONSE_SET_SHOPINFOS_OFFSET UNITYSDK_OFFSET(0xF4EE10)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ShopListResponse_TypeDefinitionIndex = 12117;

	class ShopListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _ShopInfos_k__BackingField; // 0x50
		Il2CppObject* _ShopEligmaHistoryDBs_k__BackingField; // 0x58

		Il2CppObject* get_ShopEligmaHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPLISTRESPONSE_GET_SHOPELIGMAHISTORYDBS_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_ShopInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPLISTRESPONSE_GET_SHOPINFOS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ShopEligmaHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPLISTRESPONSE_SET_SHOPELIGMAHISTORYDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_ShopInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPLISTRESPONSE_SET_SHOPINFOS_OFFSET))(arg, nullptr);
		}

	};
}

