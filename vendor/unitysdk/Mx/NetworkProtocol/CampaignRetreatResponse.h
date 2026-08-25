#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNRETREATRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF14E40)
#define MX_NETWORKPROTOCOL_CAMPAIGNRETREATRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF14E50)
#define MX_NETWORKPROTOCOL_CAMPAIGNRETREATRESPONSE_GET_RELEASEDECHELONNUMBERS_OFFSET UNITYSDK_OFFSET(0xF14E60)
#define MX_NETWORKPROTOCOL_CAMPAIGNRETREATRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF14E70)
#define MX_NETWORKPROTOCOL_CAMPAIGNRETREATRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF14E80)
#define MX_NETWORKPROTOCOL_CAMPAIGNRETREATRESPONSE_SET_RELEASEDECHELONNUMBERS_OFFSET UNITYSDK_OFFSET(0xF14E90)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignRetreatResponse_TypeDefinitionIndex = 11431;

	class CampaignRetreatResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _ReleasedEchelonNumbers_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNRETREATRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNRETREATRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_ReleasedEchelonNumbers()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNRETREATRESPONSE_GET_RELEASEDECHELONNUMBERS_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNRETREATRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNRETREATRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ReleasedEchelonNumbers(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNRETREATRESPONSE_SET_RELEASEDECHELONNUMBERS_OFFSET))(arg, nullptr);
		}

	};
}

