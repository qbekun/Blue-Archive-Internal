#pragma once
#include "unitysdk.h"

#define ATTENDANCEOBJECT_ONRECEIVEREWARD_OFFSET UNITYSDK_OFFSET(0x181EF20)
#define ATTENDANCEOBJECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x181F440)
#define ATTENDANCEOBJECT_GET_ATTENDANCEBOOKREWARDS_OFFSET UNITYSDK_OFFSET(0x181F500)
#define ATTENDANCEOBJECT_GET_ATTENDANCEHISTORYDBS_OFFSET UNITYSDK_OFFSET(0x181F510)
#define ATTENDANCEOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x181F520)
#define ATTENDANCEOBJECT_GET_SHOULDATTENDTODAY_OFFSET UNITYSDK_OFFSET(0x181F630)
#define ATTENDANCEOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x181F680)
#define ATTENDANCEOBJECT_SET_ATTENDANCEBOOKREWARDS_OFFSET UNITYSDK_OFFSET(0x181F690)
#define ATTENDANCEOBJECT_SYNCHISTORY_OFFSET UNITYSDK_OFFSET(0x181F5D0)
#define ATTENDANCEOBJECT_SET_ATTENDANCEHISTORYDBS_OFFSET UNITYSDK_OFFSET(0x181F6A0)

	inline static constexpr unsigned int AttendanceObject_TypeDefinitionIndex = 1285;

	class AttendanceObject : public Il2CppObject
	{
	public:
		Il2CppObject* _AttendanceBookRewards_k__BackingField; // 0x10
		Il2CppObject* _AttendanceHistoryDBs_k__BackingField; // 0x18

		::System::Void OnReceiveReward(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ATTENDANCEOBJECT_ONRECEIVEREWARD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTENDANCEOBJECT_INITIALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* get_AttendanceBookRewards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTENDANCEOBJECT_GET_ATTENDANCEBOOKREWARDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_AttendanceHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTENDANCEOBJECT_GET_ATTENDANCEHISTORYDBS_OFFSET))(nullptr);
		}

		::System::Void Sync(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ATTENDANCEOBJECT_SYNC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_ShouldAttendToday()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTENDANCEOBJECT_GET_SHOULDATTENDTODAY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTENDANCEOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_AttendanceBookRewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ATTENDANCEOBJECT_SET_ATTENDANCEBOOKREWARDS_OFFSET))(arg, nullptr);
		}

		::System::Void SyncHistory(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ATTENDANCEOBJECT_SYNCHISTORY_OFFSET))(arg, nullptr);
		}

		::System::Void set_AttendanceHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ATTENDANCEOBJECT_SET_ATTENDANCEHISTORYDBS_OFFSET))(arg, nullptr);
		}

	};

