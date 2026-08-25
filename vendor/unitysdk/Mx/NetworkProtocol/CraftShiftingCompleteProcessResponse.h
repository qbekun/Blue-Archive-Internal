#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ShiftingCraftInfoDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSRESPONSE_SET_CRAFTINFODB_OFFSET UNITYSDK_OFFSET(0xF41F80)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF41F90)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF41FA0)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF41FB0)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF41FC0)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSRESPONSE_GET_CRAFTINFODB_OFFSET UNITYSDK_OFFSET(0xF41FD0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CraftShiftingCompleteProcessResponse_TypeDefinitionIndex = 11610;

	class CraftShiftingCompleteProcessResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ShiftingCraftInfoDB* _CraftInfoDB_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58

		::System::Void set_CraftInfoDB(::MX::GameLogic::DBModel::ShiftingCraftInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ShiftingCraftInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSRESPONSE_SET_CRAFTINFODB_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ShiftingCraftInfoDB* get_CraftInfoDB()
		{
			return ((::MX::GameLogic::DBModel::ShiftingCraftInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSRESPONSE_GET_CRAFTINFODB_OFFSET))(nullptr);
		}

	};
}

