#pragma once
#include "unitysdk.h"

class UILabel;
class UIGrid;

#define UIPOPUP_ATTENDANCEREWARD_ONOPENED_OFFSET UNITYSDK_OFFSET(0x275FC30)
#define UIPOPUP_ATTENDANCEREWARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x275FC80)
#define UIPOPUP_ATTENDANCEREWARD_SETREWARDS_OFFSET UNITYSDK_OFFSET(0x275FD00)

	inline static constexpr unsigned int UIPopup_AttendanceReward_TypeDefinitionIndex = 7295;

	class UIPopup_AttendanceReward : public Il2CppObject
	{
	public:
		UILabel* title; // 0xD8
		UIGrid* grid; // 0xE0
		::System::String* clanAttendanceRewardLocalizeKey; // 0xE8
		::System::String* countdownAttendanceRewardLocalizeKey; // 0xF0
		Il2CppObject* rewardParcelList; // 0xF8

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ATTENDANCEREWARD_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ATTENDANCEREWARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetRewards(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ATTENDANCEREWARD_SETREWARDS_OFFSET))(arg, arg2, nullptr);
		}

	};

