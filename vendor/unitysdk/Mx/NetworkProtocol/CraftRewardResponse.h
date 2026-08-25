#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CRAFTREWARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF41E00)
#define MX_NETWORKPROTOCOL_CRAFTREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF41E10)
#define MX_NETWORKPROTOCOL_CRAFTREWARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF41E20)
#define MX_NETWORKPROTOCOL_CRAFTREWARDRESPONSE_SET_CRAFTINFOS_OFFSET UNITYSDK_OFFSET(0xF41E30)
#define MX_NETWORKPROTOCOL_CRAFTREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF41E40)
#define MX_NETWORKPROTOCOL_CRAFTREWARDRESPONSE_GET_CRAFTINFOS_OFFSET UNITYSDK_OFFSET(0xF41E50)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CraftRewardResponse_TypeDefinitionIndex = 11606;

	class CraftRewardResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		Il2CppObject* _CraftInfos_k__BackingField; // 0x58

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTREWARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTREWARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CraftInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTREWARDRESPONSE_SET_CRAFTINFOS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		Il2CppObject* get_CraftInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTREWARDRESPONSE_GET_CRAFTINFOS_OFFSET))(nullptr);
		}

	};
}

