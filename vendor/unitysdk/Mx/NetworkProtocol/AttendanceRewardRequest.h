#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ATTENDANCEREWARDREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11600)
#define MX_NETWORKPROTOCOL_ATTENDANCEREWARDREQUEST_GET_DAY_OFFSET UNITYSDK_OFFSET(0xF11610)
#define MX_NETWORKPROTOCOL_ATTENDANCEREWARDREQUEST_SET_DAYBYBOOKUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF11620)
#define MX_NETWORKPROTOCOL_ATTENDANCEREWARDREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11630)
#define MX_NETWORKPROTOCOL_ATTENDANCEREWARDREQUEST_SET_ATTENDANCEBOOKUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF11640)
#define MX_NETWORKPROTOCOL_ATTENDANCEREWARDREQUEST_GET_DAYBYBOOKUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF11650)
#define MX_NETWORKPROTOCOL_ATTENDANCEREWARDREQUEST_SET_DAY_OFFSET UNITYSDK_OFFSET(0xF11660)
#define MX_NETWORKPROTOCOL_ATTENDANCEREWARDREQUEST_GET_ATTENDANCEBOOKUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF11670)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AttendanceRewardRequest_TypeDefinitionIndex = 11315;

	class AttendanceRewardRequest : public Il2CppObject
	{
	public:
		Il2CppObject* _DayByBookUniqueId_k__BackingField; // 0x40
		::System::Int64 _AttendanceBookUniqueId_k__BackingField; // 0x48
		::System::Int64 _Day_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTENDANCEREWARDREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_Day()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTENDANCEREWARDREQUEST_GET_DAY_OFFSET))(nullptr);
		}

		::System::Void set_DayByBookUniqueId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTENDANCEREWARDREQUEST_SET_DAYBYBOOKUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTENDANCEREWARDREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_AttendanceBookUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTENDANCEREWARDREQUEST_SET_ATTENDANCEBOOKUNIQUEID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DayByBookUniqueId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTENDANCEREWARDREQUEST_GET_DAYBYBOOKUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_Day(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTENDANCEREWARDREQUEST_SET_DAY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AttendanceBookUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTENDANCEREWARDREQUEST_GET_ATTENDANCEBOOKUNIQUEID_OFFSET))(nullptr);
		}

	};
}

