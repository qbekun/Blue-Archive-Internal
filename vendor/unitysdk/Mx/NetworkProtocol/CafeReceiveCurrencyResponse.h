#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CafeDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFERECEIVECURRENCYRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF13ED0)
#define MX_NETWORKPROTOCOL_CAFERECEIVECURRENCYRESPONSE_GET_CAFEDB_OFFSET UNITYSDK_OFFSET(0xF13EE0)
#define MX_NETWORKPROTOCOL_CAFERECEIVECURRENCYRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF13EF0)
#define MX_NETWORKPROTOCOL_CAFERECEIVECURRENCYRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF13F00)
#define MX_NETWORKPROTOCOL_CAFERECEIVECURRENCYRESPONSE_SET_CAFEDBS_OFFSET UNITYSDK_OFFSET(0xF13F10)
#define MX_NETWORKPROTOCOL_CAFERECEIVECURRENCYRESPONSE_GET_CAFEDBS_OFFSET UNITYSDK_OFFSET(0xF13F20)
#define MX_NETWORKPROTOCOL_CAFERECEIVECURRENCYRESPONSE_SET_CAFEDB_OFFSET UNITYSDK_OFFSET(0xF13F30)
#define MX_NETWORKPROTOCOL_CAFERECEIVECURRENCYRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF13F40)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeReceiveCurrencyResponse_TypeDefinitionIndex = 11389;

	class CafeReceiveCurrencyResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CafeDB* _CafeDB_k__BackingField; // 0x50
		Il2CppObject* _CafeDBs_k__BackingField; // 0x58
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x60

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERECEIVECURRENCYRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CafeDB* get_CafeDB()
		{
			return ((::MX::GameLogic::DBModel::CafeDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERECEIVECURRENCYRESPONSE_GET_CAFEDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERECEIVECURRENCYRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERECEIVECURRENCYRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_CafeDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERECEIVECURRENCYRESPONSE_SET_CAFEDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CafeDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERECEIVECURRENCYRESPONSE_GET_CAFEDBS_OFFSET))(nullptr);
		}

		::System::Void set_CafeDB(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERECEIVECURRENCYRESPONSE_SET_CAFEDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFERECEIVECURRENCYRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

