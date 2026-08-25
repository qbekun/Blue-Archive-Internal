#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelCost; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHABUYREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4F790)
#define MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHABUYREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4F7A0)
#define MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHABUYREQUEST_GET_COST_OFFSET UNITYSDK_OFFSET(0xF4F7B0)
#define MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHABUYREQUEST_GET_FREERECRUITID_OFFSET UNITYSDK_OFFSET(0xF4F7C0)
#define MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHABUYREQUEST_SET_FREERECRUITID_OFFSET UNITYSDK_OFFSET(0xF4F7D0)
#define MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHABUYREQUEST_SET_COST_OFFSET UNITYSDK_OFFSET(0xF4F7E0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ShopPickupSelectionGachaBuyRequest_TypeDefinitionIndex = 12140;

	class ShopPickupSelectionGachaBuyRequest : public Il2CppObject
	{
	public:
		::System::Int64 _FreeRecruitId_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelCost* _Cost_k__BackingField; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHABUYREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHABUYREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelCost* get_Cost()
		{
			return ((::MX::GameLogic::Parcel::ParcelCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHABUYREQUEST_GET_COST_OFFSET))(nullptr);
		}

		::System::Int64 get_FreeRecruitId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHABUYREQUEST_GET_FREERECRUITID_OFFSET))(nullptr);
		}

		::System::Void set_FreeRecruitId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHABUYREQUEST_SET_FREERECRUITID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Cost(::MX::GameLogic::Parcel::ParcelCost* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelCost*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPPICKUPSELECTIONGACHABUYREQUEST_SET_COST_OFFSET))(arg, nullptr);
		}

	};
}

