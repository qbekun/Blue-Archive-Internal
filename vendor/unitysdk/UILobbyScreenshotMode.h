#pragma once
#include "unitysdk.h"

class MXButton;
class UITweener;
class UIBase;
namespace UnityEngine { class Coroutine; }

#define UILOBBYSCREENSHOTMODE_OPEN_OFFSET UNITYSDK_OFFSET(0x26761A0)
#define UILOBBYSCREENSHOTMODE_MARKMANUALENTERED_OFFSET UNITYSDK_OFFSET(0x2676370)
#define UILOBBYSCREENSHOTMODE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2676380)
#define UILOBBYSCREENSHOTMODE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2676440)
#define UILOBBYSCREENSHOTMODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2676520)
#define UILOBBYSCREENSHOTMODE_COREFRESHBUTTONDISPLAY_OFFSET UNITYSDK_OFFSET(0x2676300)
#define UILOBBYSCREENSHOTMODE_COWAITANDOPEN_OFFSET UNITYSDK_OFFSET(0x2676550)
#define UILOBBYSCREENSHOTMODE_AWAKE_OFFSET UNITYSDK_OFFSET(0x26765E0)
#define UILOBBYSCREENSHOTMODE_BACKTOLOBBY_OFFSET UNITYSDK_OFFSET(0x2676780)
#define UILOBBYSCREENSHOTMODE_ONCLICKLOBBY_OFFSET UNITYSDK_OFFSET(0x2676B10)
#define UILOBBYSCREENSHOTMODE_WAITANDOPEN_OFFSET UNITYSDK_OFFSET(0x2676390)

	inline static constexpr unsigned int UILobbyScreenshotMode_TypeDefinitionIndex = 6720;

	class UILobbyScreenshotMode : public Il2CppObject
	{
	public:
		MXButton* lobbyButton; // 0x18
		UITweener* tweener; // 0x20
		UIBase* baseUI; // 0x28
		::UnityEngine::Coroutine* openCoroutine; // 0x30
		::UnityEngine::Coroutine* refreshButtonCoroutine; // 0x38
		::System::Single elapsedTime; // 0x40
		::System::Boolean manualEntered; // 0x44
		::System::Boolean isScreenShotMode; // 0x45

		::System::Void Open()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSCREENSHOTMODE_OPEN_OFFSET))(nullptr);
		}

		::System::Void MarkManualEntered()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSCREENSHOTMODE_MARKMANUALENTERED_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSCREENSHOTMODE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSCREENSHOTMODE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSCREENSHOTMODE_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoRefreshButtonDisplay()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSCREENSHOTMODE_COREFRESHBUTTONDISPLAY_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoWaitAndOpen()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSCREENSHOTMODE_COWAITANDOPEN_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSCREENSHOTMODE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void BackToLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSCREENSHOTMODE_BACKTOLOBBY_OFFSET))(nullptr);
		}

		::System::Void OnClickLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSCREENSHOTMODE_ONCLICKLOBBY_OFFSET))(nullptr);
		}

		::System::Void WaitAndOpen()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYSCREENSHOTMODE_WAITANDOPEN_OFFSET))(nullptr);
		}

	};

