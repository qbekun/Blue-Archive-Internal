#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class AcademyDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACADEMYATTENDSCHEDULERESPONSE_SET_ACADEMYDB_OFFSET UNITYSDK_OFFSET(0xF0EB50)
#define MX_NETWORKPROTOCOL_ACADEMYATTENDSCHEDULERESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF0EB60)
#define MX_NETWORKPROTOCOL_ACADEMYATTENDSCHEDULERESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF0EB70)
#define MX_NETWORKPROTOCOL_ACADEMYATTENDSCHEDULERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0EB80)
#define MX_NETWORKPROTOCOL_ACADEMYATTENDSCHEDULERESPONSE_GET_EXTRAREWARDS_OFFSET UNITYSDK_OFFSET(0xF0EB90)
#define MX_NETWORKPROTOCOL_ACADEMYATTENDSCHEDULERESPONSE_SET_EXTRAREWARDS_OFFSET UNITYSDK_OFFSET(0xF0EBA0)
#define MX_NETWORKPROTOCOL_ACADEMYATTENDSCHEDULERESPONSE_GET_ACADEMYDB_OFFSET UNITYSDK_OFFSET(0xF0EBB0)
#define MX_NETWORKPROTOCOL_ACADEMYATTENDSCHEDULERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0EBC0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AcademyAttendScheduleResponse_TypeDefinitionIndex = 11226;

	class AcademyAttendScheduleResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::AcademyDB* _AcademyDB_k__BackingField; // 0x58
		Il2CppObject* _ExtraRewards_k__BackingField; // 0x60

		::System::Void set_AcademyDB(::MX::GameLogic::DBModel::AcademyDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AcademyDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACADEMYATTENDSCHEDULERESPONSE_SET_ACADEMYDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACADEMYATTENDSCHEDULERESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACADEMYATTENDSCHEDULERESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACADEMYATTENDSCHEDULERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_ExtraRewards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACADEMYATTENDSCHEDULERESPONSE_GET_EXTRAREWARDS_OFFSET))(nullptr);
		}

		::System::Void set_ExtraRewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACADEMYATTENDSCHEDULERESPONSE_SET_EXTRAREWARDS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::AcademyDB* get_AcademyDB()
		{
			return ((::MX::GameLogic::DBModel::AcademyDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACADEMYATTENDSCHEDULERESPONSE_GET_ACADEMYDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACADEMYATTENDSCHEDULERESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

