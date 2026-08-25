#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }
class MXUIKeyShortcut;
namespace UnityEngine { class KeyCode; }
namespace UnityEngine { class GameObject; }
namespace MX::Controller { class ControllerKey; }
namespace MX::Data::Excel { class KeyMappingExcel; }

#define MXUIKEYMAPPING_GET_CURSORFOCUS_OFFSET UNITYSDK_OFFSET(0x205B560)
#define MXUIKEYMAPPING_START_OFFSET UNITYSDK_OFFSET(0x205B5A0)
#define MXUIKEYMAPPING_WARNINGANOMALY_OFFSET UNITYSDK_OFFSET(0x205B5F0)
#define MXUIKEYMAPPING_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x205B720)
#define MXUIKEYMAPPING_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x205B730)
#define MXUIKEYMAPPING_SET_OFFSET UNITYSDK_OFFSET(0x205B700)
#define MXUIKEYMAPPING_SET_OFFSET UNITYSDK_OFFSET(0x205B960)
#define MXUIKEYMAPPING_SETTARGET_OFFSET UNITYSDK_OFFSET(0x205BE80)
#define MXUIKEYMAPPING_ONVISIBLEICONBYOPTION_OFFSET UNITYSDK_OFFSET(0x205C130)
#define MXUIKEYMAPPING_HIDEICON_OFFSET UNITYSDK_OFFSET(0x205C220)
#define MXUIKEYMAPPING_DISABLEICON_OFFSET UNITYSDK_OFFSET(0x205C320)
#define MXUIKEYMAPPING_SETDIMMEDICON_OFFSET UNITYSDK_OFFSET(0x205C3A0)
#define MXUIKEYMAPPING_CREATEICON_OFFSET UNITYSDK_OFFSET(0x205BF00)
#define MXUIKEYMAPPING_UPDATE_OFFSET UNITYSDK_OFFSET(0x205C6E0)
#define MXUIKEYMAPPING_SENDMESSAGETOTARGETOBJECT_OFFSET UNITYSDK_OFFSET(0x205D460)
#define MXUIKEYMAPPING_ONBINDINGPRESS_OFFSET UNITYSDK_OFFSET(0x205D3D0)
#define MXUIKEYMAPPING_ONBINDINGCLICK_OFFSET UNITYSDK_OFFSET(0x205D860)
#define MXUIKEYMAPPING_INPUTCTRL_OFFSET UNITYSDK_OFFSET(0x205D370)
#define MXUIKEYMAPPING_ISTEXTINPUTFOCUSED_OFFSET UNITYSDK_OFFSET(0x205CF60)
#define MXUIKEYMAPPING_ISRETURNONLYSHORTCUT_OFFSET UNITYSDK_OFFSET(0x205D000)
#define MXUIKEYMAPPING_ISRETURNKEY_OFFSET UNITYSDK_OFFSET(0x205D8E0)
#define MXUIKEYMAPPING_ISCURBUTTON_OFFSET UNITYSDK_OFFSET(0x205D030)
#define MXUIKEYMAPPING_SETACTIVEICON_OFFSET UNITYSDK_OFFSET(0x205C2A0)
#define MXUIKEYMAPPING_CLEAREVENT_OFFSET UNITYSDK_OFFSET(0x205B740)
#define MXUIKEYMAPPING_ONCHANGEDKEYCODE_OFFSET UNITYSDK_OFFSET(0x205D900)
#define MXUIKEYMAPPING_.CTOR_OFFSET UNITYSDK_OFFSET(0x205D990)
#define MXUIKEYMAPPING__CREATEICON_B__36_0_OFFSET UNITYSDK_OFFSET(0x205DAA0)
#define MXUIKEYMAPPING__CREATEICON_G__SETSHORTCUT|36_1_OFFSET UNITYSDK_OFFSET(0x205C3C0)

	inline static constexpr unsigned int MXUIKeyMapping_TypeDefinitionIndex = 3367;

	class MXUIKeyMapping : public Il2CppObject
	{
	public:
		::System::String* MXUIKeyId; // 0x18
		::System::Boolean IsUsed; // 0x20
		::System::Boolean IsDisplayIcon; // 0x21
		::System::Boolean IsLongPress; // 0x22
		::System::Boolean IgnorePosCheck; // 0x23
		::UnityEngine::Vector2* IconPosition; // 0x24
		::UnityEngine::Vector2* IconScale; // 0x2C
		MXUIKeyShortcut* Icon; // 0x38
		::System::Single curTime; // 0x40
		::System::Boolean IsCreatedIcon; // 0x44
		::System::Boolean IsActive; // 0x45
		::UnityEngine::KeyCode* targetKeyCode; // 0x48
		::UnityEngine::KeyCode* targetKeyCode2; // 0x4C
		::System::Boolean mPress; // 0x50
		::UnityEngine::GameObject* _target; // 0x58
		Il2CppObject* _exceptCollider; // 0x60
		::System::Boolean _sameFrameWithEsc; // 0x68
		::System::Boolean _isDisplayFromCode; // 0x69
		::System::Boolean _ignorePosCheckFromCode; // 0x6A
		::UnityEngine::KeyCode* numpadEnterKey; // 0x6C
		::MX::Controller::ControllerKey* ControllerKey; // 0x70
		::MX::Controller::ControllerKey* AddControllerKey; // 0x74
		::MX::Data::Excel::KeyMappingExcel* _data; // 0x78

		::System::Boolean get_CursorFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYMAPPING_GET_CURSORFOCUS_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYMAPPING_START_OFFSET))(nullptr);
		}

		::System::Void WarningAnomaly()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYMAPPING_WARNINGANOMALY_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYMAPPING_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYMAPPING_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void Set(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYMAPPING_SET_OFFSET))(str, nullptr);
		}

		::System::Void Set(::System::String* str, ::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYMAPPING_SET_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void SetTarget(::UnityEngine::GameObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYMAPPING_SETTARGET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnVisibleIconByOption(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYMAPPING_ONVISIBLEICONBYOPTION_OFFSET))(arg, nullptr);
		}

		::System::Void HideIcon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYMAPPING_HIDEICON_OFFSET))(nullptr);
		}

		::System::Void DisableIcon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYMAPPING_DISABLEICON_OFFSET))(nullptr);
		}

		::System::Void SetDimmedIcon(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYMAPPING_SETDIMMEDICON_OFFSET))(arg, nullptr);
		}

		::System::Void CreateIcon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYMAPPING_CREATEICON_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYMAPPING_UPDATE_OFFSET))(nullptr);
		}

		::System::Void SendMessageToTargetObject(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYMAPPING_SENDMESSAGETOTARGETOBJECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnBindingPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYMAPPING_ONBINDINGPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void OnBindingClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYMAPPING_ONBINDINGCLICK_OFFSET))(nullptr);
		}

		::System::Boolean InputCtrl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYMAPPING_INPUTCTRL_OFFSET))(nullptr);
		}

		::System::Boolean IsTextInputFocused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYMAPPING_ISTEXTINPUTFOCUSED_OFFSET))(nullptr);
		}

		::System::Boolean IsReturnOnlyShortcut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYMAPPING_ISRETURNONLYSHORTCUT_OFFSET))(nullptr);
		}

		::System::Boolean IsReturnKey(::UnityEngine::KeyCode* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYMAPPING_ISRETURNKEY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsCurButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYMAPPING_ISCURBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetActiveIcon(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYMAPPING_SETACTIVEICON_OFFSET))(arg, nullptr);
		}

		::System::Void ClearEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYMAPPING_CLEAREVENT_OFFSET))(nullptr);
		}

		::System::Void OnChangedKeyCode(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYMAPPING_ONCHANGEDKEYCODE_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYMAPPING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _CreateIcon_b__36_0(MXUIKeyShortcut* arg)
		{
			((::System::Void(*)(MXUIKeyShortcut*, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYMAPPING__CREATEICON_B__36_0_OFFSET))(arg, nullptr);
		}

		::System::Void _CreateIcon_g__SetShortcut|36_1(MXUIKeyShortcut* arg)
		{
			((::System::Void(*)(MXUIKeyShortcut*, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYMAPPING__CREATEICON_G__SETSHORTCUT|36_1_OFFSET))(arg, nullptr);
		}

	};

