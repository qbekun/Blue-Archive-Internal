#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MOMOTALKFAVORSCHEDULERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4AA80)
#define MX_NETWORKPROTOCOL_MOMOTALKFAVORSCHEDULERESPONSE_SET_FAVORSCHEDULERECORDS_OFFSET UNITYSDK_OFFSET(0xF4AA90)
#define MX_NETWORKPROTOCOL_MOMOTALKFAVORSCHEDULERESPONSE_GET_FAVORSCHEDULERECORDS_OFFSET UNITYSDK_OFFSET(0xF4AAA0)
#define MX_NETWORKPROTOCOL_MOMOTALKFAVORSCHEDULERESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4AAB0)
#define MX_NETWORKPROTOCOL_MOMOTALKFAVORSCHEDULERESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4AAC0)
#define MX_NETWORKPROTOCOL_MOMOTALKFAVORSCHEDULERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4AAD0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MomoTalkFavorScheduleResponse_TypeDefinitionIndex = 11966;

	class MomoTalkFavorScheduleResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		Il2CppObject* _FavorScheduleRecords_k__BackingField; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKFAVORSCHEDULERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_FavorScheduleRecords(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKFAVORSCHEDULERESPONSE_SET_FAVORSCHEDULERECORDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_FavorScheduleRecords()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKFAVORSCHEDULERESPONSE_GET_FAVORSCHEDULERECORDS_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKFAVORSCHEDULERESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKFAVORSCHEDULERESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKFAVORSCHEDULERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

