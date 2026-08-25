#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ConsumeRequestDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFEGIVEGIFTREQUEST_SET_CONSUMEREQUESTDB_OFFSET UNITYSDK_OFFSET(0xF13F50)
#define MX_NETWORKPROTOCOL_CAFEGIVEGIFTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF13F60)
#define MX_NETWORKPROTOCOL_CAFEGIVEGIFTREQUEST_SET_CAFEDBID_OFFSET UNITYSDK_OFFSET(0xF13F70)
#define MX_NETWORKPROTOCOL_CAFEGIVEGIFTREQUEST_GET_CONSUMEREQUESTDB_OFFSET UNITYSDK_OFFSET(0xF13F80)
#define MX_NETWORKPROTOCOL_CAFEGIVEGIFTREQUEST_GET_CHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF13F90)
#define MX_NETWORKPROTOCOL_CAFEGIVEGIFTREQUEST_SET_CHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF13FA0)
#define MX_NETWORKPROTOCOL_CAFEGIVEGIFTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF13FB0)
#define MX_NETWORKPROTOCOL_CAFEGIVEGIFTREQUEST_GET_CAFEDBID_OFFSET UNITYSDK_OFFSET(0xF13FC0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeGiveGiftRequest_TypeDefinitionIndex = 11390;

	class CafeGiveGiftRequest : public Il2CppObject
	{
	public:
		::System::Int64 _CafeDBId_k__BackingField; // 0x40
		::System::Int64 _CharacterUniqueId_k__BackingField; // 0x48
		::MX::GameLogic::DBModel::ConsumeRequestDB* _ConsumeRequestDB_k__BackingField; // 0x50

		::System::Void set_ConsumeRequestDB(::MX::GameLogic::DBModel::ConsumeRequestDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConsumeRequestDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEGIVEGIFTREQUEST_SET_CONSUMEREQUESTDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEGIVEGIFTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CafeDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEGIVEGIFTREQUEST_SET_CAFEDBID_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeRequestDB* get_ConsumeRequestDB()
		{
			return ((::MX::GameLogic::DBModel::ConsumeRequestDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEGIVEGIFTREQUEST_GET_CONSUMEREQUESTDB_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEGIVEGIFTREQUEST_GET_CHARACTERUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_CharacterUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEGIVEGIFTREQUEST_SET_CHARACTERUNIQUEID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEGIVEGIFTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_CafeDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEGIVEGIFTREQUEST_GET_CAFEDBID_OFFSET))(nullptr);
		}

	};
}

