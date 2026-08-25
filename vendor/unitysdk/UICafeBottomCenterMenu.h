#pragma once
#include "unitysdk.h"

class UICafe;
namespace UnityEngine { class Animation; }
class MXButton;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Coroutine; }

#define UICAFEBOTTOMCENTERMENU_PLAYEDITSWITCHANI_OFFSET UNITYSDK_OFFSET(0x22777E0)
#define UICAFEBOTTOMCENTERMENU_PLAYANI_OFFSET UNITYSDK_OFFSET(0x227B6A0)
#define UICAFEBOTTOMCENTERMENU_CONFIRMSTOREFURNITURE_OFFSET UNITYSDK_OFFSET(0x227B7D0)
#define UICAFEBOTTOMCENTERMENU_PLAYINFOOPENANI_OFFSET UNITYSDK_OFFSET(0x2277740)
#define UICAFEBOTTOMCENTERMENU_PLAYPLACEMODEANI_OFFSET UNITYSDK_OFFSET(0x2277690)
#define UICAFEBOTTOMCENTERMENU_ONCLICKROTATEFURNITURE_OFFSET UNITYSDK_OFFSET(0x227B800)
#define UICAFEBOTTOMCENTERMENU_ONCLICKCANCELEDIT_OFFSET UNITYSDK_OFFSET(0x227B830)
#define UICAFEBOTTOMCENTERMENU_ONCLICKEDIT_OFFSET UNITYSDK_OFFSET(0x227B870)
#define UICAFEBOTTOMCENTERMENU_ONCAFEOPENED_OFFSET UNITYSDK_OFFSET(0x2279270)
#define UICAFEBOTTOMCENTERMENU_.CTOR_OFFSET UNITYSDK_OFFSET(0x227B960)
#define UICAFEBOTTOMCENTERMENU_PLAYGIVEPRESENTANI_OFFSET UNITYSDK_OFFSET(0x2277640)
#define UICAFEBOTTOMCENTERMENU_SHOWROTATEBUTTON_OFFSET UNITYSDK_OFFSET(0x2277830)
#define UICAFEBOTTOMCENTERMENU_ONCLICKCONFIRMEDIT_OFFSET UNITYSDK_OFFSET(0x227B970)
#define UICAFEBOTTOMCENTERMENU_PLAYINFOEDITANI_OFFSET UNITYSDK_OFFSET(0x2277790)
#define UICAFEBOTTOMCENTERMENU_ONCLICKINFO_OFFSET UNITYSDK_OFFSET(0x227B9A0)
#define UICAFEBOTTOMCENTERMENU_PLAYINFOOPENANDEDIT_OFFSET UNITYSDK_OFFSET(0x22776F0)
#define UICAFEBOTTOMCENTERMENU_AWAKE_OFFSET UNITYSDK_OFFSET(0x227BB80)
#define UICAFEBOTTOMCENTERMENU_ISPLAYINGINFOANI_OFFSET UNITYSDK_OFFSET(0x2271EF0)
#define UICAFEBOTTOMCENTERMENU__PLAYANI_B__26_0_OFFSET UNITYSDK_OFFSET(0x227C0F0)
#define UICAFEBOTTOMCENTERMENU_ONCLICKSTOREFURNITURE_OFFSET UNITYSDK_OFFSET(0x227C110)

	inline static constexpr unsigned int UICafeBottomCenterMenu_TypeDefinitionIndex = 4647;

	class UICafeBottomCenterMenu : public Il2CppObject
	{
	public:
		UICafe* cafeUI; // 0x18
		::UnityEngine::Animation* infoAni; // 0x20
		MXButton* editButton; // 0x28
		MXButton* infoButton; // 0x30
		MXButton* storeButton; // 0x38
		MXButton* cancelEditButton; // 0x40
		MXButton* rotateButton; // 0x48
		::UnityEngine::GameObject* rotateButton_Disable; // 0x50
		MXButton* confirmEditmButton; // 0x58
		::UnityEngine::Coroutine* aniCoroutine; // 0x60

		::System::Void PlayEditSwitchAni(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAFEBOTTOMCENTERMENU_PLAYEDITSWITCHANI_OFFSET))(arg, nullptr);
		}

		::System::Void PlayAni(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAFEBOTTOMCENTERMENU_PLAYANI_OFFSET))(str, arg, nullptr);
		}

		::System::Void ConfirmStoreFurniture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEBOTTOMCENTERMENU_CONFIRMSTOREFURNITURE_OFFSET))(nullptr);
		}

		::System::Void PlayInfoOpenAni(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAFEBOTTOMCENTERMENU_PLAYINFOOPENANI_OFFSET))(arg, nullptr);
		}

		::System::Void PlayPlaceModeAni(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAFEBOTTOMCENTERMENU_PLAYPLACEMODEANI_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickRotateFurniture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEBOTTOMCENTERMENU_ONCLICKROTATEFURNITURE_OFFSET))(nullptr);
		}

		::System::Void OnClickCancelEdit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEBOTTOMCENTERMENU_ONCLICKCANCELEDIT_OFFSET))(nullptr);
		}

		::System::Void OnClickEdit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEBOTTOMCENTERMENU_ONCLICKEDIT_OFFSET))(nullptr);
		}

		::System::Void OnCafeOpened()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEBOTTOMCENTERMENU_ONCAFEOPENED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEBOTTOMCENTERMENU_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PlayGivePresentAni(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAFEBOTTOMCENTERMENU_PLAYGIVEPRESENTANI_OFFSET))(arg, nullptr);
		}

		::System::Void ShowRotateButton(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAFEBOTTOMCENTERMENU_SHOWROTATEBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickConfirmEdit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEBOTTOMCENTERMENU_ONCLICKCONFIRMEDIT_OFFSET))(nullptr);
		}

		::System::Void PlayInfoEditAni(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAFEBOTTOMCENTERMENU_PLAYINFOEDITANI_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEBOTTOMCENTERMENU_ONCLICKINFO_OFFSET))(nullptr);
		}

		::System::Void PlayInfoOpenAndEdit(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICAFEBOTTOMCENTERMENU_PLAYINFOOPENANDEDIT_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEBOTTOMCENTERMENU_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean IsPlayingInfoAni()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEBOTTOMCENTERMENU_ISPLAYINGINFOANI_OFFSET))(nullptr);
		}

		::System::Void _PlayAni_b__26_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEBOTTOMCENTERMENU__PLAYANI_B__26_0_OFFSET))(nullptr);
		}

		::System::Void OnClickStoreFurniture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEBOTTOMCENTERMENU_ONCLICKSTOREFURNITURE_OFFSET))(nullptr);
		}

	};

