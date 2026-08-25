#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ATTENDANCEREWARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11680)
#define MX_NETWORKPROTOCOL_ATTENDANCEREWARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11690)
#define MX_NETWORKPROTOCOL_ATTENDANCEREWARDRESPONSE_SET_ATTENDANCEBOOKREWARDS_OFFSET UNITYSDK_OFFSET(0xF116A0)
#define MX_NETWORKPROTOCOL_ATTENDANCEREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF116B0)
#define MX_NETWORKPROTOCOL_ATTENDANCEREWARDRESPONSE_SET_ATTENDANCEHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF116C0)
#define MX_NETWORKPROTOCOL_ATTENDANCEREWARDRESPONSE_GET_ATTENDANCEBOOKREWARDS_OFFSET UNITYSDK_OFFSET(0xF116D0)
#define MX_NETWORKPROTOCOL_ATTENDANCEREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF116E0)
#define MX_NETWORKPROTOCOL_ATTENDANCEREWARDRESPONSE_GET_ATTENDANCEHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF116F0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AttendanceRewardResponse_TypeDefinitionIndex = 11316;

	class AttendanceRewardResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _AttendanceBookRewards_k__BackingField; // 0x50
		Il2CppObject* _AttendanceHistoryDBs_k__BackingField; // 0x58
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x60

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTENDANCEREWARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTENDANCEREWARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_AttendanceBookRewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTENDANCEREWARDRESPONSE_SET_ATTENDANCEBOOKREWARDS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTENDANCEREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_AttendanceHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTENDANCEREWARDRESPONSE_SET_ATTENDANCEHISTORYDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_AttendanceBookRewards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTENDANCEREWARDRESPONSE_GET_ATTENDANCEBOOKREWARDS_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTENDANCEREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_AttendanceHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTENDANCEREWARDRESPONSE_GET_ATTENDANCEHISTORYDBS_OFFSET))(nullptr);
		}

	};
}

