#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTRETREATRESPONSE_GET_RELEASEDECHELONNUMBERS_OFFSET UNITYSDK_OFFSET(0xF445E0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTRETREATRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF445F0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTRETREATRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF44600)
#define MX_NETWORKPROTOCOL_EVENTCONTENTRETREATRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF44610)
#define MX_NETWORKPROTOCOL_EVENTCONTENTRETREATRESPONSE_SET_RELEASEDECHELONNUMBERS_OFFSET UNITYSDK_OFFSET(0xF44620)
#define MX_NETWORKPROTOCOL_EVENTCONTENTRETREATRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF44630)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentRetreatResponse_TypeDefinitionIndex = 11704;

	class EventContentRetreatResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _ReleasedEchelonNumbers_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58

		Il2CppObject* get_ReleasedEchelonNumbers()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTRETREATRESPONSE_GET_RELEASEDECHELONNUMBERS_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTRETREATRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTRETREATRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTRETREATRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ReleasedEchelonNumbers(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTRETREATRESPONSE_SET_RELEASEDECHELONNUMBERS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTRETREATRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

	};
}

