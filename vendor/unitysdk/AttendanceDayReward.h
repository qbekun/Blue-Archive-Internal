#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define ATTENDANCEDAYREWARD_SET_DAY_OFFSET UNITYSDK_OFFSET(0x1864BA0)
#define ATTENDANCEDAYREWARD_SET_PARCEL_OFFSET UNITYSDK_OFFSET(0x1864BB0)
#define ATTENDANCEDAYREWARD_GET_DAY_OFFSET UNITYSDK_OFFSET(0x1864BC0)
#define ATTENDANCEDAYREWARD_GET_PARCEL_OFFSET UNITYSDK_OFFSET(0x1864BD0)
#define ATTENDANCEDAYREWARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x18646E0)

	inline static constexpr unsigned int AttendanceDayReward_TypeDefinitionIndex = 15920;

	class AttendanceDayReward : public Il2CppObject
	{
	public:
		::System::Int64 _Day_k__BackingField; // 0x10
		::MX::GameLogic::Parcel::ParcelInfo* _Parcel_k__BackingField; // 0x18

		::System::Void set_Day(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ATTENDANCEDAYREWARD_SET_DAY_OFFSET))(arg, nullptr);
		}

		::System::Void set_Parcel(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + ATTENDANCEDAYREWARD_SET_PARCEL_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Day()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTENDANCEDAYREWARD_GET_DAY_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_Parcel()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTENDANCEDAYREWARD_GET_PARCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTENDANCEDAYREWARD_.CTOR_OFFSET))(nullptr);
		}

	};

