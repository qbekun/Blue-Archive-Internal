#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class AttendanceExcel; }
namespace MX::Data { class AttendanceBookReward; }

#define MX_DATA_ATTENDANCEDATA_GETEXCEL_OFFSET UNITYSDK_OFFSET(0x1879B20)
#define MX_DATA_ATTENDANCEDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x1879BB0)
#define MX_DATA_ATTENDANCEDATA_GET_ALL_OFFSET UNITYSDK_OFFSET(0x187A820)
#define MX_DATA_ATTENDANCEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x187A870)
#define MX_DATA_ATTENDANCEDATA_GET_OFFSET UNITYSDK_OFFSET(0x187A990)
#define MX_DATA_ATTENDANCEDATA_PREPAREINITIALIZEDATA_OFFSET UNITYSDK_OFFSET(0x1879C50)

namespace MX::Data
{
	inline static constexpr unsigned int AttendanceData_TypeDefinitionIndex = 15970;

	class AttendanceData : public Il2CppObject
	{
	public:
		Il2CppObject* bookRewardDictionary; // 0x28
		Il2CppObject* bookDict; // 0x30
		Il2CppObject* rewardDict; // 0x38

		::MX::Data::Excel::AttendanceExcel* GetExcel(::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::AttendanceExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEDATA_GETEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		Il2CppObject* get_All()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEDATA_GET_ALL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEDATA_.CTOR_OFFSET))(nullptr);
		}

		::MX::Data::AttendanceBookReward* Get(::System::Int64 arg)
		{
			return (return (::MX::Data::AttendanceBookReward*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEDATA_GET_OFFSET))(arg, nullptr);
		}

		::System::Void PrepareInitializeData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ATTENDANCEDATA_PREPAREINITIALIZEDATA_OFFSET))(nullptr);
		}

	};
}

