#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHAGETREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4F5B0)
#define MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHAGETREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4F5C0)
#define MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHAGETREQUEST_SET_SHOPRECRUITID_OFFSET UNITYSDK_OFFSET(0xF4F5D0)
#define MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHAGETREQUEST_GET_SHOPRECRUITID_OFFSET UNITYSDK_OFFSET(0xF4F5E0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ShopPickupSelectionGachaGetRequest_TypeDefinitionIndex = 12136;

	class ShopPickupSelectionGachaGetRequest : public Il2CppObject
	{
	public:
		::System::Int64 _ShopRecruitId_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHAGETREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHAGETREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ShopRecruitId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHAGETREQUEST_SET_SHOPRECRUITID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ShopRecruitId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHAGETREQUEST_GET_SHOPRECRUITID_OFFSET))(nullptr);
		}

	};
}

