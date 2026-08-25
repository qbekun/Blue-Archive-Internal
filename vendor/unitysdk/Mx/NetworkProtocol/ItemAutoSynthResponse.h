#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ITEMAUTOSYNTHRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF479A0)
#define MX_NETWORKPROTOCOL_ITEMAUTOSYNTHRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF479B0)
#define MX_NETWORKPROTOCOL_ITEMAUTOSYNTHRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF479C0)
#define MX_NETWORKPROTOCOL_ITEMAUTOSYNTHRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF479D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ItemAutoSynthResponse_TypeDefinitionIndex = 11836;

	class ItemAutoSynthResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMAUTOSYNTHRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMAUTOSYNTHRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMAUTOSYNTHRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMAUTOSYNTHRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

	};
}

