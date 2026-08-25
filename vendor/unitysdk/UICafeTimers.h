#pragma once
#include "unitysdk.h"

class UILabel;
class OpenConditionButtonController;
class MXButton;
namespace UnityEngine { class GameObject; }
class UICafe;
namespace UnityEngine { class Coroutine; }
namespace MX::GameLogic::DBModel { class CafeDB; }

#define UICAFETIMERS_STOPTIMERCOROUTINE_OFFSET UNITYSDK_OFFSET(0x228F250)
#define UICAFETIMERS__SETINVITEBUTTON_G__SETINVITETIMEGO|21_0_OFFSET UNITYSDK_OFFSET(0x228F290)
#define UICAFETIMERS_STARTTIMERCOROUTINE_OFFSET UNITYSDK_OFFSET(0x228F310)
#define UICAFETIMERS_GET_UICAFE_OFFSET UNITYSDK_OFFSET(0x228F420)
#define UICAFETIMERS_ONCLOSECAFEINFOPOPUP_OFFSET UNITYSDK_OFFSET(0x228F4B0)
#define UICAFETIMERS_DECIDEOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x228F520)
#define UICAFETIMERS_ONCAFERANKCHANGED_OFFSET UNITYSDK_OFFSET(0x228F6F0)
#define UICAFETIMERS_ONCLICKINVITEOFF_OFFSET UNITYSDK_OFFSET(0x228F700)
#define UICAFETIMERS_TIMER_OFFSET UNITYSDK_OFFSET(0x228F3B0)
#define UICAFETIMERS_SETNEXTVISITTIME_OFFSET UNITYSDK_OFFSET(0x228F8C0)
#define UICAFETIMERS_REFRESH_OFFSET UNITYSDK_OFFSET(0x228F500)
#define UICAFETIMERS_ONCLICKINVITEON_OFFSET UNITYSDK_OFFSET(0x2290010)
#define UICAFETIMERS__DECIDEOPENCONDITION_B__25_0_OFFSET UNITYSDK_OFFSET(0x22903E0)
#define UICAFETIMERS__SETINVITEBUTTON_G__SETINVITEON|21_1_OFFSET UNITYSDK_OFFSET(0x2290410)
#define UICAFETIMERS_SETINVITEBUTTON_OFFSET UNITYSDK_OFFSET(0x228FB20)
#define UICAFETIMERS__SETINVITEBUTTON_G__SETINVITEOFF|21_2_OFFSET UNITYSDK_OFFSET(0x2290490)
#define UICAFETIMERS_AWAKE_OFFSET UNITYSDK_OFFSET(0x2290550)
#define UICAFETIMERS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2290760)
#define UICAFETIMERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x2290790)

	inline static constexpr unsigned int UICafeTimers_TypeDefinitionIndex = 4703;

	class UICafeTimers : public Il2CppObject
	{
	public:
		UILabel* nextVisitTime; // 0x18
		OpenConditionButtonController* openCondition; // 0x20
		MXButton* inviteOnButton; // 0x28
		MXButton* inviteOffButton; // 0x30
		::UnityEngine::GameObject* inviteTimeGo; // 0x38
		UILabel* inviteTimeLabel; // 0x40
		::UnityEngine::GameObject* inviteOn; // 0x48
		::UnityEngine::GameObject* inviteOff; // 0x50
		UICafe* _UICafe; // 0x58
		::System::Boolean cafeRankChanged; // 0x60
		::UnityEngine::Coroutine* timer; // 0x68

		::System::Void StopTimerCoroutine()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETIMERS_STOPTIMERCOROUTINE_OFFSET))(nullptr);
		}

		::System::Void _SetInviteButton_g__SetInviteTimeGo|21_0(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAFETIMERS__SETINVITEBUTTON_G__SETINVITETIMEGO|21_0_OFFSET))(arg, nullptr);
		}

		::System::Void StartTimerCoroutine()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETIMERS_STARTTIMERCOROUTINE_OFFSET))(nullptr);
		}

		UICafe* get_UICafe()
		{
			return ((UICafe*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETIMERS_GET_UICAFE_OFFSET))(nullptr);
		}

		::System::Void OnCloseCafeInfoPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETIMERS_ONCLOSECAFEINFOPOPUP_OFFSET))(nullptr);
		}

		::System::Void DecideOpenCondition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETIMERS_DECIDEOPENCONDITION_OFFSET))(nullptr);
		}

		::System::Void OnCafeRankChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETIMERS_ONCAFERANKCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnClickInviteOff()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETIMERS_ONCLICKINVITEOFF_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Timer()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETIMERS_TIMER_OFFSET))(nullptr);
		}

		::System::Void SetNextVisitTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETIMERS_SETNEXTVISITTIME_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETIMERS_REFRESH_OFFSET))(nullptr);
		}

		::System::Void OnClickInviteOn()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETIMERS_ONCLICKINVITEON_OFFSET))(nullptr);
		}

		::System::Boolean _DecideOpenCondition_b__25_0(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFETIMERS__DECIDEOPENCONDITION_B__25_0_OFFSET))(arg, nullptr);
		}

		::System::Void _SetInviteButton_g__SetInviteOn|21_1(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAFETIMERS__SETINVITEBUTTON_G__SETINVITEON|21_1_OFFSET))(arg, nullptr);
		}

		::System::Void SetInviteButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETIMERS_SETINVITEBUTTON_OFFSET))(nullptr);
		}

		::System::Void _SetInviteButton_g__SetInviteOff|21_2(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAFETIMERS__SETINVITEBUTTON_G__SETINVITEOFF|21_2_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETIMERS_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETIMERS_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFETIMERS_.CTOR_OFFSET))(nullptr);
		}

	};

