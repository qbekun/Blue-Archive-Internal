#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class ShopInfoDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SHOPREFRESHRESPONSE_GET_SHOPINFODB_OFFSET UNITYSDK_OFFSET(0xF4EE60)
#define MX_NETWORKPROTOCOL_SHOPREFRESHRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4EE70)
#define MX_NETWORKPROTOCOL_SHOPREFRESHRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4EE80)
#define MX_NETWORKPROTOCOL_SHOPREFRESHRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4EE90)
#define MX_NETWORKPROTOCOL_SHOPREFRESHRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4EEA0)
#define MX_NETWORKPROTOCOL_SHOPREFRESHRESPONSE_SET_SHOPINFODB_OFFSET UNITYSDK_OFFSET(0xF4EEB0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ShopRefreshResponse_TypeDefinitionIndex = 12119;

	class ShopRefreshResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::ShopInfoDB* _ShopInfoDB_k__BackingField; // 0x58

		::MX::GameLogic::DBModel::ShopInfoDB* get_ShopInfoDB()
		{
			return ((::MX::GameLogic::DBModel::ShopInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPREFRESHRESPONSE_GET_SHOPINFODB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPREFRESHRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPREFRESHRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPREFRESHRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPREFRESHRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ShopInfoDB(::MX::GameLogic::DBModel::ShopInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ShopInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPREFRESHRESPONSE_SET_SHOPINFODB_OFFSET))(arg, nullptr);
		}

	};
}

