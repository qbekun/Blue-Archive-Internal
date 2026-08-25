#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
class UISmallParcelCard;
class AttendanceDayReward;

#define UIWELCOMECAMPAIGN_ATTENDANCESLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0xBD7590)
#define UIWELCOMECAMPAIGN_ATTENDANCESLOT_SETDATA_OFFSET UNITYSDK_OFFSET(0xBD3B20)

	inline static constexpr unsigned int UIWelcomeCampaign_AttendanceSlot_TypeDefinitionIndex = 8682;

	class UIWelcomeCampaign_AttendanceSlot : public Il2CppObject
	{
	public:
		UILabel* nameLabel; // 0x18
		::UnityEngine::GameObject* clearMark; // 0x20
		::UnityEngine::GameObject* rewardedMark; // 0x28
		UISmallParcelCard* smallParcel; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_ATTENDANCESLOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(AttendanceDayReward* arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(AttendanceDayReward*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_ATTENDANCESLOT_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

