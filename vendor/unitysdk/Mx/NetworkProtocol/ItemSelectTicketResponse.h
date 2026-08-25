#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ItemDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ITEMSELECTTICKETRESPONSE_SET_USEDITEMDB_OFFSET UNITYSDK_OFFSET(0xF47900)
#define MX_NETWORKPROTOCOL_ITEMSELECTTICKETRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF47910)
#define MX_NETWORKPROTOCOL_ITEMSELECTTICKETRESPONSE_GET_USEDITEMDB_OFFSET UNITYSDK_OFFSET(0xF47920)
#define MX_NETWORKPROTOCOL_ITEMSELECTTICKETRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF47930)
#define MX_NETWORKPROTOCOL_ITEMSELECTTICKETRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF47940)
#define MX_NETWORKPROTOCOL_ITEMSELECTTICKETRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF47950)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ItemSelectTicketResponse_TypeDefinitionIndex = 11834;

	class ItemSelectTicketResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ItemDB* _UsedItemDB_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58

		::System::Void set_UsedItemDB(::MX::GameLogic::DBModel::ItemDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ItemDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMSELECTTICKETRESPONSE_SET_USEDITEMDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMSELECTTICKETRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ItemDB* get_UsedItemDB()
		{
			return ((::MX::GameLogic::DBModel::ItemDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMSELECTTICKETRESPONSE_GET_USEDITEMDB_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMSELECTTICKETRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMSELECTTICKETRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMSELECTTICKETRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

	};
}

