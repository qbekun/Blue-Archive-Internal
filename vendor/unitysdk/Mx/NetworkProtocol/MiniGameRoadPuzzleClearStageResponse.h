#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLECLEARSTAGERESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF49A40)
#define MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLECLEARSTAGERESPONSE_GET_ISSKIP_OFFSET UNITYSDK_OFFSET(0xF49A50)
#define MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLECLEARSTAGERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF49A60)
#define MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLECLEARSTAGERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF49A70)
#define MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLECLEARSTAGERESPONSE_SET_ISSKIP_OFFSET UNITYSDK_OFFSET(0xF49A80)
#define MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLECLEARSTAGERESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF49A90)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameRoadPuzzleClearStageResponse_TypeDefinitionIndex = 11920;

	class MiniGameRoadPuzzleClearStageResponse : public Il2CppObject
	{
	public:
		::System::Boolean _IsSkip_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLECLEARSTAGERESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLECLEARSTAGERESPONSE_GET_ISSKIP_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLECLEARSTAGERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLECLEARSTAGERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_IsSkip(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLECLEARSTAGERESPONSE_SET_ISSKIP_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLECLEARSTAGERESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

	};
}

