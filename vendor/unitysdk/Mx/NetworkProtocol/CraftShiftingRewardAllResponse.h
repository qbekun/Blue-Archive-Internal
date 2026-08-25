#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDALLRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF422E0)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDALLRESPONSE_GET_CRAFTINFODBS_OFFSET UNITYSDK_OFFSET(0xF422F0)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDALLRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF42300)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDALLRESPONSE_SET_CRAFTINFODBS_OFFSET UNITYSDK_OFFSET(0xF42310)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDALLRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF42320)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDALLRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF42330)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CraftShiftingRewardAllResponse_TypeDefinitionIndex = 11622;

	class CraftShiftingRewardAllResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		Il2CppObject* _CraftInfoDBs_k__BackingField; // 0x58

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDALLRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CraftInfoDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDALLRESPONSE_GET_CRAFTINFODBS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDALLRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CraftInfoDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDALLRESPONSE_SET_CRAFTINFODBS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDALLRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDALLRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

	};
}

