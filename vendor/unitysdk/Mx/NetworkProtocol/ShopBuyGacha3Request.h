#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelCost; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SHOPBUYGACHA3REQUEST_GET_COST_OFFSET UNITYSDK_OFFSET(0xF4ECB0)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHA3REQUEST_SET_COST_OFFSET UNITYSDK_OFFSET(0xF4ECC0)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHA3REQUEST_GET_FREERECRUITID_OFFSET UNITYSDK_OFFSET(0xF4ECD0)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHA3REQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4ECE0)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHA3REQUEST_SET_FREERECRUITID_OFFSET UNITYSDK_OFFSET(0xF4ECF0)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHA3REQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4ED00)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ShopBuyGacha3Request_TypeDefinitionIndex = 12114;

	class ShopBuyGacha3Request : public Il2CppObject
	{
	public:
		::System::Int64 _FreeRecruitId_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelCost* _Cost_k__BackingField; // 0x58

		::MX::GameLogic::Parcel::ParcelCost* get_Cost()
		{
			return ((::MX::GameLogic::Parcel::ParcelCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHA3REQUEST_GET_COST_OFFSET))(nullptr);
		}

		::System::Void set_Cost(::MX::GameLogic::Parcel::ParcelCost* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelCost*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHA3REQUEST_SET_COST_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_FreeRecruitId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHA3REQUEST_GET_FREERECRUITID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHA3REQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_FreeRecruitId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHA3REQUEST_SET_FREERECRUITID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHA3REQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

