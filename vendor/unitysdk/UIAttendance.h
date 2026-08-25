#pragma once
#include "unitysdk.h"

class RewardSet;
class Event20DaysRewardSet;
class UITexture;
class SpineChatDialogContainer;
namespace UnityEngine { class GameObject; }
class MXButton;
namespace MX::Data { class AttendanceBookReward; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace UnityEngine { class AnimationClip; }

#define UIATTENDANCE_GET_COMPLETE_OFFSET UNITYSDK_OFFSET(0x2210AC0)
#define UIATTENDANCE_SET_COMPLETE_OFFSET UNITYSDK_OFFSET(0x2210AD0)
#define UIATTENDANCE_GET_ISATTENDANCEREPLAY_OFFSET UNITYSDK_OFFSET(0x2210AE0)
#define UIATTENDANCE_SET_ISATTENDANCEREPLAY_OFFSET UNITYSDK_OFFSET(0x2210AF0)
#define UIATTENDANCE_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x2210B00)
#define UIATTENDANCE_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x2210B40)
#define UIATTENDANCE_AWAKE_OFFSET UNITYSDK_OFFSET(0x2210B80)
#define UIATTENDANCE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x2211000)
#define UIATTENDANCE_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2211160)
#define UIATTENDANCE_ONOPENED_OFFSET UNITYSDK_OFFSET(0x22111F0)
#define UIATTENDANCE_CLEARSLOTS_OFFSET UNITYSDK_OFFSET(0x2211560)
#define UIATTENDANCE_SET_OFFSET UNITYSDK_OFFSET(0x2211E50)
#define UIATTENDANCE_SET_OFFSET UNITYSDK_OFFSET(0x2212310)
#define UIATTENDANCE_CO_PLAYREWARDSEQUENCE_OFFSET UNITYSDK_OFFSET(0x22114F0)
#define UIATTENDANCE_CO_WAITCLICK_OFFSET UNITYSDK_OFFSET(0x2213DE0)
#define UIATTENDANCE_CO_REQUESTREWARD_OFFSET UNITYSDK_OFFSET(0x2213E70)
#define UIATTENDANCE_ONCLICK_OFFSET UNITYSDK_OFFSET(0x2213F20)
#define UIATTENDANCE_ONRESPONSE_OFFSET UNITYSDK_OFFSET(0x2213F50)
#define UIATTENDANCE_SETATTENDANCEREPLAY_OFFSET UNITYSDK_OFFSET(0x2213FE0)
#define UIATTENDANCE_ISSETREPLAYATTENDANCE_OFFSET UNITYSDK_OFFSET(0x22112A0)
#define UIATTENDANCE_REPLAYREWARDSEQUENCE_OFFSET UNITYSDK_OFFSET(0x2213FF0)
#define UIATTENDANCE_ONCLICKBACK_OFFSET UNITYSDK_OFFSET(0x2214170)
#define UIATTENDANCE_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x22141B0)
#define UIATTENDANCE_ONCLICKREPLAYLEFT_OFFSET UNITYSDK_OFFSET(0x22141F0)
#define UIATTENDANCE_ONCLICKREPLAYRIGHT_OFFSET UNITYSDK_OFFSET(0x22142D0)
#define UIATTENDANCE_GETCHANGEUIANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0x22143B0)
#define UIATTENDANCE_SENDNEXONEVENTFORLOGINDAYS_OFFSET UNITYSDK_OFFSET(0x2213CD0)
#define UIATTENDANCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2214490)
#define UIATTENDANCE___N__0_OFFSET UNITYSDK_OFFSET(0x2214510)

	inline static constexpr unsigned int UIAttendance_TypeDefinitionIndex = 4381;

	class UIAttendance : public Il2CppObject
	{
	public:
		RewardSet* NormalSet; // 0xD8
		RewardSet* EventSet; // 0xE0
		Event20DaysRewardSet* EventSet_20Days; // 0xE8
		Event20DaysRewardSet* Event20DaysSet; // 0xF0
		Event20DaysRewardSet* Comeback20DaysSet; // 0xF8
		UITexture* Texture; // 0x100
		SpineChatDialogContainer* spineContainer; // 0x108
		::System::Boolean _Complete_k__BackingField; // 0x110
		Il2CppObject* queue; // 0x118
		::System::Action* onClickEvent; // 0x120
		::System::Action* onResponseEvent; // 0x128
		::UnityEngine::GameObject* listBG; // 0x130
		MXButton* attendanceReplayCloseButton; // 0x138
		MXButton* attendanceReplayRightButton; // 0x140
		MXButton* attendanceReplayLeftButton; // 0x148
		::System::Boolean _IsAttendanceReplay_k__BackingField; // 0x150
		Il2CppObject* AttendanceReplayRewardList; // 0x158
		::System::Int32 ReplayRewardNextIndex; // 0x160
		::System::DateTime* lastSyncenServerTime; // 0x168
		::System::Boolean _IsShow_k__BackingField; // 0x0

		::System::Boolean get_Complete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCE_GET_COMPLETE_OFFSET))(nullptr);
		}

		::System::Void set_Complete(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCE_SET_COMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsAttendanceReplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCE_GET_ISATTENDANCEREPLAY_OFFSET))(nullptr);
		}

		::System::Void set_IsAttendanceReplay(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCE_SET_ISATTENDANCEREPLAY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCE_GET_ISSHOW_OFFSET))(nullptr);
		}

		::System::Void set_IsShow(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCE_SET_ISSHOW_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCE_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCE_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCE_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void ClearSlots()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCE_CLEARSLOTS_OFFSET))(nullptr);
		}

		::System::Void Set(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCE_SET_OFFSET))(arg, nullptr);
		}

		::System::Void Set(RewardSet* arg, ::MX::Data::AttendanceBookReward* arg2)
		{
			((::System::Void(*)(RewardSet*, ::MX::Data::AttendanceBookReward*, ::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCE_SET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* co_PlayRewardSequence()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCE_CO_PLAYREWARDSEQUENCE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_WaitClick(RewardSet* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(RewardSet*, ::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCE_CO_WAITCLICK_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_RequestReward(RewardSet* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(RewardSet*, ::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCE_CO_REQUESTREWARD_OFFSET))(arg, nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCE_ONCLICK_OFFSET))(nullptr);
		}

		::System::Boolean OnResponse(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCE_ONRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void SetAttendanceReplay(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCE_SETATTENDANCEREPLAY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSetRePlayAttendance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCE_ISSETREPLAYATTENDANCE_OFFSET))(nullptr);
		}

		::System::Void RePlayRewardSequence(RewardSet* arg)
		{
			((::System::Void(*)(RewardSet*, ::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCE_REPLAYREWARDSEQUENCE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCE_ONCLICKBACK_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCE_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickReplayLeft()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCE_ONCLICKREPLAYLEFT_OFFSET))(nullptr);
		}

		::System::Void OnClickReplayRight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCE_ONCLICKREPLAYRIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::AnimationClip* GetChangeUiAnimationClip()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCE_GETCHANGEUIANIMATIONCLIP_OFFSET))(nullptr);
		}

		::System::Void SendNexonEventForLoginDays(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCE_SENDNEXONEVENTFORLOGINDAYS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCE_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATTENDANCE___N__0_OFFSET))(nullptr);
		}

	};

