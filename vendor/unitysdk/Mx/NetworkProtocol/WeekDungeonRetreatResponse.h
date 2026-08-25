#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_WEEKDUNGEONRETREATRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF50620)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONRETREATRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF50630)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONRETREATRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF50640)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONRETREATRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF50650)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int WeekDungeonRetreatResponse_TypeDefinitionIndex = 12184;

	class WeekDungeonRetreatResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONRETREATRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONRETREATRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONRETREATRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONRETREATRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

	};
}

