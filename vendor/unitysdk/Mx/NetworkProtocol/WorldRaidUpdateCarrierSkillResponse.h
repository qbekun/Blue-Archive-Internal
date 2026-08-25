#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_WORLDRAIDUPDATECARRIERSKILLRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF510A0)
#define MX_NETWORKPROTOCOL_WORLDRAIDUPDATECARRIERSKILLRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF510B0)
#define MX_NETWORKPROTOCOL_WORLDRAIDUPDATECARRIERSKILLRESPONSE_GET_CARRIERSKILLS_OFFSET UNITYSDK_OFFSET(0xF510C0)
#define MX_NETWORKPROTOCOL_WORLDRAIDUPDATECARRIERSKILLRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF510D0)
#define MX_NETWORKPROTOCOL_WORLDRAIDUPDATECARRIERSKILLRESPONSE_SET_CARRIERSKILLS_OFFSET UNITYSDK_OFFSET(0xF510E0)
#define MX_NETWORKPROTOCOL_WORLDRAIDUPDATECARRIERSKILLRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF510F0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int WorldRaidUpdateCarrierSkillResponse_TypeDefinitionIndex = 12210;

	class WorldRaidUpdateCarrierSkillResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		Il2CppObject* _CarrierSkills_k__BackingField; // 0x58

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDUPDATECARRIERSKILLRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDUPDATECARRIERSKILLRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CarrierSkills()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDUPDATECARRIERSKILLRESPONSE_GET_CARRIERSKILLS_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDUPDATECARRIERSKILLRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_CarrierSkills(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDUPDATECARRIERSKILLRESPONSE_SET_CARRIERSKILLS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDUPDATECARRIERSKILLRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

