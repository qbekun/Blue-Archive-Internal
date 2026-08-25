#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ItemDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ITEMCONSUMERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF476E0)
#define MX_NETWORKPROTOCOL_ITEMCONSUMERESPONSE_GET_NEWPARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF476F0)
#define MX_NETWORKPROTOCOL_ITEMCONSUMERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF47700)
#define MX_NETWORKPROTOCOL_ITEMCONSUMERESPONSE_GET_USEDITEMDB_OFFSET UNITYSDK_OFFSET(0xF47710)
#define MX_NETWORKPROTOCOL_ITEMCONSUMERESPONSE_SET_NEWPARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF47720)
#define MX_NETWORKPROTOCOL_ITEMCONSUMERESPONSE_SET_USEDITEMDB_OFFSET UNITYSDK_OFFSET(0xF47730)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ItemConsumeResponse_TypeDefinitionIndex = 11828;

	class ItemConsumeResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ItemDB* _UsedItemDB_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _NewParcelResultDB_k__BackingField; // 0x58

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMCONSUMERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_NewParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMCONSUMERESPONSE_GET_NEWPARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMCONSUMERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ItemDB* get_UsedItemDB()
		{
			return ((::MX::GameLogic::DBModel::ItemDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMCONSUMERESPONSE_GET_USEDITEMDB_OFFSET))(nullptr);
		}

		::System::Void set_NewParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMCONSUMERESPONSE_SET_NEWPARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_UsedItemDB(::MX::GameLogic::DBModel::ItemDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ItemDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMCONSUMERESPONSE_SET_USEDITEMDB_OFFSET))(arg, nullptr);
		}

	};
}

