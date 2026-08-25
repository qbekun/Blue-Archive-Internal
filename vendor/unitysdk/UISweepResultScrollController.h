#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
class UICenterOnChild;
namespace UnityEngine { class Coroutine; }
class UISweepResult;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class UISweepResultSlot;

#define UISWEEPRESULTSCROLLCONTROLLER_PLAY_OFFSET UNITYSDK_OFFSET(0xB29C50)
#define UISWEEPRESULTSCROLLCONTROLLER_ALLOWUSERSCROLL_OFFSET UNITYSDK_OFFSET(0xB2C540)
#define UISWEEPRESULTSCROLLCONTROLLER_HANDLECLOSELEVELUPUI_OFFSET UNITYSDK_OFFSET(0xB2CCE0)
#define UISWEEPRESULTSCROLLCONTROLLER_COAPPEAR_OFFSET UNITYSDK_OFFSET(0xB2CEA0)
#define UISWEEPRESULTSCROLLCONTROLLER_STOP_OFFSET UNITYSDK_OFFSET(0xB2C220)
#define UISWEEPRESULTSCROLLCONTROLLER_COPLAYWITHONEELEMENT_OFFSET UNITYSDK_OFFSET(0xB2CB40)
#define UISWEEPRESULTSCROLLCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB2CF90)
#define UISWEEPRESULTSCROLLCONTROLLER_COSHOWLEVELUPUI_OFFSET UNITYSDK_OFFSET(0xB2D0A0)
#define UISWEEPRESULTSCROLLCONTROLLER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xB2C200)
#define UISWEEPRESULTSCROLLCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xB2D130)
#define UISWEEPRESULTSCROLLCONTROLLER_GET_ISLEVELUP_OFFSET UNITYSDK_OFFSET(0xB2D2A0)
#define UISWEEPRESULTSCROLLCONTROLLER_COPLAY_OFFSET UNITYSDK_OFFSET(0xB2CBD0)
#define UISWEEPRESULTSCROLLCONTROLLER_SET_ISLEVELUP_OFFSET UNITYSDK_OFFSET(0xB2D2D0)
#define UISWEEPRESULTSCROLLCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xB2D2E0)

	inline static constexpr unsigned int UISweepResultScrollController_TypeDefinitionIndex = 8276;

	class UISweepResultScrollController : public ::System::Xml::XmlUnspecifiedAttribute
	{
	public:
		UILabel* confirmLabel; // 0x90
		::System::Single toNextTime; // 0x98
		::UnityEngine::GameObject* centerObject; // 0xA0
		UICenterOnChild* centerOnChild; // 0xA8
		::Il2CppArray<::System::Object*>* slots; // 0xB0
		::UnityEngine::Coroutine* directorCoroutine; // 0xB8
		::System::Boolean isScrolled; // 0xC0
		::System::Boolean _IsLevelUp_k__BackingField; // 0xC1
		::System::Boolean isWaitingForLevelupUI; // 0xC2
		UISweepResult* uiSweepResult; // 0xC8

		::System::Void Play(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULTSCROLLCONTROLLER_PLAY_OFFSET))(arg, nullptr);
		}

		::System::Void AllowUserScroll(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULTSCROLLCONTROLLER_ALLOWUSERSCROLL_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleCloseLevelUpUI(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULTSCROLLCONTROLLER_HANDLECLOSELEVELUPUI_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoAppear(UISweepResultSlot* arg, ::System::Single arg2, ::System::Int32 arg3, ::System::Boolean arg4)
		{
			return ((::System::Collections::IEnumerator*(*)(UISweepResultSlot*, ::System::Single, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULTSCROLLCONTROLLER_COAPPEAR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULTSCROLLCONTROLLER_STOP_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlayWithOneElement(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULTSCROLLCONTROLLER_COPLAYWITHONEELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULTSCROLLCONTROLLER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoShowLevelUpUI()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULTSCROLLCONTROLLER_COSHOWLEVELUPUI_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULTSCROLLCONTROLLER_GET_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULTSCROLLCONTROLLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLevelUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULTSCROLLCONTROLLER_GET_ISLEVELUP_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlay(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULTSCROLLCONTROLLER_COPLAY_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsLevelUp(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULTSCROLLCONTROLLER_SET_ISLEVELUP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISWEEPRESULTSCROLLCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

