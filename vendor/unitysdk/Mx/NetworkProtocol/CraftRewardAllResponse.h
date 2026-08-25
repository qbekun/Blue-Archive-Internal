#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CRAFTREWARDALLRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF421E0)
#define MX_NETWORKPROTOCOL_CRAFTREWARDALLRESPONSE_GET_CRAFTINFOS_OFFSET UNITYSDK_OFFSET(0xF421F0)
#define MX_NETWORKPROTOCOL_CRAFTREWARDALLRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF42200)
#define MX_NETWORKPROTOCOL_CRAFTREWARDALLRESPONSE_SET_CRAFTINFOS_OFFSET UNITYSDK_OFFSET(0xF42210)
#define MX_NETWORKPROTOCOL_CRAFTREWARDALLRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF42220)
#define MX_NETWORKPROTOCOL_CRAFTREWARDALLRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF42230)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CraftRewardAllResponse_TypeDefinitionIndex = 11618;

	class CraftRewardAllResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		Il2CppObject* _CraftInfos_k__BackingField; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTREWARDALLRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_CraftInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTREWARDALLRESPONSE_GET_CRAFTINFOS_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTREWARDALLRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_CraftInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTREWARDALLRESPONSE_SET_CRAFTINFOS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTREWARDALLRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTREWARDALLRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

	};
}

