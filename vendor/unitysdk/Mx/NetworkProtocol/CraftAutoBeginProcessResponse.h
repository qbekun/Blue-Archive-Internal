#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CRAFTAUTOBEGINPROCESSRESPONSE_SET_CRAFTINFODBS_OFFSET UNITYSDK_OFFSET(0xF420E0)
#define MX_NETWORKPROTOCOL_CRAFTAUTOBEGINPROCESSRESPONSE_GET_CRAFTINFODBS_OFFSET UNITYSDK_OFFSET(0xF420F0)
#define MX_NETWORKPROTOCOL_CRAFTAUTOBEGINPROCESSRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF42100)
#define MX_NETWORKPROTOCOL_CRAFTAUTOBEGINPROCESSRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF42110)
#define MX_NETWORKPROTOCOL_CRAFTAUTOBEGINPROCESSRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF42120)
#define MX_NETWORKPROTOCOL_CRAFTAUTOBEGINPROCESSRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF42130)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CraftAutoBeginProcessResponse_TypeDefinitionIndex = 11614;

	class CraftAutoBeginProcessResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _CraftInfoDBs_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58

		::System::Void set_CraftInfoDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTAUTOBEGINPROCESSRESPONSE_SET_CRAFTINFODBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CraftInfoDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTAUTOBEGINPROCESSRESPONSE_GET_CRAFTINFODBS_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTAUTOBEGINPROCESSRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTAUTOBEGINPROCESSRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTAUTOBEGINPROCESSRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTAUTOBEGINPROCESSRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

	};
}

