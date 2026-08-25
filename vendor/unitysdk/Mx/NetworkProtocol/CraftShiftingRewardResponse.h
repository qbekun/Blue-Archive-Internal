#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF42020)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF42030)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDRESPONSE_GET_TARGETCRAFTINFOS_OFFSET UNITYSDK_OFFSET(0xF42040)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF42050)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDRESPONSE_SET_TARGETCRAFTINFOS_OFFSET UNITYSDK_OFFSET(0xF42060)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF42070)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CraftShiftingRewardResponse_TypeDefinitionIndex = 11612;

	class CraftShiftingRewardResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		Il2CppObject* _TargetCraftInfos_k__BackingField; // 0x58

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_TargetCraftInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDRESPONSE_GET_TARGETCRAFTINFOS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_TargetCraftInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDRESPONSE_SET_TARGETCRAFTINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

	};
}

