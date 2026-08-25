#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSALLRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF42260)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSALLRESPONSE_SET_CRAFTINFODBS_OFFSET UNITYSDK_OFFSET(0xF42270)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSALLRESPONSE_GET_CRAFTINFODBS_OFFSET UNITYSDK_OFFSET(0xF42280)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSALLRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF42290)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSALLRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF422A0)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSALLRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF422B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CraftShiftingCompleteProcessAllResponse_TypeDefinitionIndex = 11620;

	class CraftShiftingCompleteProcessAllResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _CraftInfoDBs_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSALLRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_CraftInfoDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSALLRESPONSE_SET_CRAFTINFODBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CraftInfoDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSALLRESPONSE_GET_CRAFTINFODBS_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSALLRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSALLRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSALLRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

