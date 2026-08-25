#pragma once
#include "unitysdk.h"

class UIInput;
class UILabel;
class InputType;
class OnReturnKey;
class KeyboardType;
class Validation;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Color; }
class OnValidate;
class Alignment;
class UITexture;
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Vector2; }
class UIInputOnGUI;
class UICamera;
namespace UnityEngine { class KeyCode; }
namespace UnityEngine { class Event; }

#define UIINPUT_GET_DEFAULTTEXT_OFFSET UNITYSDK_OFFSET(0x23027F0)
#define UIINPUT_SET_DEFAULTTEXT_OFFSET UNITYSDK_OFFSET(0x2302990)
#define UIINPUT_GET_DEFAULTCOLOR_OFFSET UNITYSDK_OFFSET(0x2303D30)
#define UIINPUT_SET_DEFAULTCOLOR_OFFSET UNITYSDK_OFFSET(0x2303D70)
#define UIINPUT_GET_INPUTSHOULDBEHIDDEN_OFFSET UNITYSDK_OFFSET(0x2303EC0)
#define UIINPUT_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x2303F60)
#define UIINPUT_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x2303FC0)
#define UIINPUT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x2303F90)
#define UIINPUT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x2303FD0)
#define UIINPUT_SET_OFFSET UNITYSDK_OFFSET(0x2303FE0)
#define UIINPUT_GET_SELECTED_OFFSET UNITYSDK_OFFSET(0x23045B0)
#define UIINPUT_SET_SELECTED_OFFSET UNITYSDK_OFFSET(0x2304640)
#define UIINPUT_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x2303E30)
#define UIINPUT_SET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x2304650)
#define UIINPUT_GET_CURSORPOSITION_OFFSET UNITYSDK_OFFSET(0x2304750)
#define UIINPUT_SET_CURSORPOSITION_OFFSET UNITYSDK_OFFSET(0x2304810)
#define UIINPUT_GET_SELECTIONSTART_OFFSET UNITYSDK_OFFSET(0x23048B0)
#define UIINPUT_SET_SELECTIONSTART_OFFSET UNITYSDK_OFFSET(0x2304970)
#define UIINPUT_GET_SELECTIONEND_OFFSET UNITYSDK_OFFSET(0x2304A10)
#define UIINPUT_SET_SELECTIONEND_OFFSET UNITYSDK_OFFSET(0x2304AD0)
#define UIINPUT_GET_CARET_OFFSET UNITYSDK_OFFSET(0x2304B70)
#define UIINPUT_VALIDATE_OFFSET UNITYSDK_OFFSET(0x2304220)
#define UIINPUT_START_OFFSET UNITYSDK_OFFSET(0x2304F30)
#define UIINPUT_INIT_OFFSET UNITYSDK_OFFSET(0x2302820)
#define UIINPUT_SAVETOPLAYERPREFS_OFFSET UNITYSDK_OFFSET(0x23043F0)
#define UIINPUT_ONSELECT_OFFSET UNITYSDK_OFFSET(0x2305210)
#define UIINPUT_ONSELECTEVENT_OFFSET UNITYSDK_OFFSET(0x23053C0)
#define UIINPUT_SHOWVIRTUALKEYBOARDFORCONTROLLER_OFFSET UNITYSDK_OFFSET(0x2305910)
#define UIINPUT_DESELECTNEXTFRAME_OFFSET UNITYSDK_OFFSET(0x2305CD0)
#define UIINPUT_ONDESELECTEVENT_OFFSET UNITYSDK_OFFSET(0x2305540)
#define UIINPUT_UPDATE_OFFSET UNITYSDK_OFFSET(0x23060A0)
#define UIINPUT_ONKEY_OFFSET UNITYSDK_OFFSET(0x2306F60)
#define UIINPUT_DOBACKSPACE_OFFSET UNITYSDK_OFFSET(0x2307120)
#define UIINPUT_PROCESSEVENT_OFFSET UNITYSDK_OFFSET(0x23071A0)
#define UIINPUT_INSERT_OFFSET UNITYSDK_OFFSET(0x2308080)
#define UIINPUT_GETLEFTTEXT_OFFSET UNITYSDK_OFFSET(0x2308460)
#define UIINPUT_GETRIGHTTEXT_OFFSET UNITYSDK_OFFSET(0x2308640)
#define UIINPUT_GETSELECTION_OFFSET UNITYSDK_OFFSET(0x2307FF0)
#define UIINPUT_GETCHARUNDERMOUSE_OFFSET UNITYSDK_OFFSET(0x23086C0)
#define UIINPUT_ONPRESS_OFFSET UNITYSDK_OFFSET(0x2308970)
#define UIINPUT_ONDRAG_OFFSET UNITYSDK_OFFSET(0x2308AE0)
#define UIINPUT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2308BC0)
#define UIINPUT_CLEANUP_OFFSET UNITYSDK_OFFSET(0x2308CA0)
#define UIINPUT_SUBMIT_OFFSET UNITYSDK_OFFSET(0x2305EE0)
#define UIINPUT_UPDATELABEL_OFFSET UNITYSDK_OFFSET(0x23029E0)
#define UIINPUT_VALIDATE_OFFSET UNITYSDK_OFFSET(0x2304B80)
#define UIINPUT_EXECUTEONCHANGE_OFFSET UNITYSDK_OFFSET(0x2304450)
#define UIINPUT_REMOVEFOCUS_OFFSET UNITYSDK_OFFSET(0x2309440)
#define UIINPUT_SAVEVALUE_OFFSET UNITYSDK_OFFSET(0x2309450)
#define UIINPUT_LOADVALUE_OFFSET UNITYSDK_OFFSET(0x2305100)
#define UIINPUT_.CTOR_OFFSET UNITYSDK_OFFSET(0x23094B0)
#define UIINPUT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x2309620)
#define UIINPUT__SHOWVIRTUALKEYBOARDFORCONTROLLER_B__88_0_OFFSET UNITYSDK_OFFSET(0x23096C0)

	inline static constexpr unsigned int UIInput_TypeDefinitionIndex = 233;

	class UIInput : public Il2CppObject
	{
	public:
		UIInput* current; // 0x0
		UIInput* selection; // 0x8
		UILabel* label; // 0x18
		InputType* inputType; // 0x20
		OnReturnKey* onReturnKey; // 0x24
		KeyboardType* keyboardType; // 0x28
		::System::Boolean hideInput; // 0x2C
		::System::Boolean selectAllTextOnFocus; // 0x2D
		::System::Boolean submitOnUnselect; // 0x2E
		Validation* validation; // 0x30
		::System::Int32 characterLimit; // 0x34
		::System::String* savedAs; // 0x38
		::UnityEngine::GameObject* selectOnTab; // 0x40
		::UnityEngine::Color* activeTextColor; // 0x48
		::UnityEngine::Color* caretColor; // 0x58
		::UnityEngine::Color* selectionColor; // 0x68
		Il2CppObject* onSubmit; // 0x78
		Il2CppObject* onChange; // 0x80
		OnValidate* onValidate; // 0x88
		::System::String* mValue; // 0x90
		::System::String* mDefaultText; // 0x98
		::UnityEngine::Color* mDefaultColor; // 0xA0
		::System::Single mPosition; // 0xB0
		::System::Boolean mDoInit; // 0xB4
		Alignment* mAlignment; // 0xB8
		::System::Boolean mLoadSavedValue; // 0xBC
		::System::Int32 mDrawStart; // 0x10
		::System::String* mLastIME; // 0x18
		::System::Int32 mIMECursorPosition; // 0x20
		::System::Int32 mPendingCursorPosition; // 0x24
		::System::Int32 mSelectionStart; // 0xC0
		::System::Int32 mSelectionEnd; // 0xC4
		UITexture* mHighlight; // 0xC8
		UITexture* mCaret; // 0xD0
		::UnityEngine::Texture2D* mBlankTex; // 0xD8
		::System::Single mNextBlink; // 0xE0
		::System::Single mLastAlpha; // 0xE4
		::System::String* mCached; // 0xE8
		::System::Int32 mSelectMe; // 0xF0
		::System::Int32 mSelectTime; // 0xF4
		::System::Boolean mStarted; // 0xF8
		::UnityEngine::Vector2* caretSizeWeight; // 0xFC
		::UnityEngine::Vector2* caretOffset; // 0x104
		UIInputOnGUI* mOnGUI; // 0x110
		UICamera* mCam; // 0x118
		::System::Boolean mEllipsis; // 0x120
		::System::Int32 mIgnoreKey; // 0x28
		::System::Action* onUpArrow; // 0x128
		::System::Action* onDownArrow; // 0x130

		::System::String* get_defaultText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_GET_DEFAULTTEXT_OFFSET))(nullptr);
		}

		::System::Void set_defaultText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_SET_DEFAULTTEXT_OFFSET))(str, nullptr);
		}

		::UnityEngine::Color* get_defaultColor()
		{
			return ((::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_GET_DEFAULTCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_defaultColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_SET_DEFAULTCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_inputShouldBeHidden()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_GET_INPUTSHOULDBEHIDDEN_OFFSET))(nullptr);
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Void set_text(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_SET_TEXT_OFFSET))(str, nullptr);
		}

		::System::String* get_value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_SET_VALUE_OFFSET))(str, nullptr);
		}

		::System::Void Set(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_SET_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean get_selected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_GET_SELECTED_OFFSET))(nullptr);
		}

		::System::Void set_selected(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_SET_SELECTED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_GET_ISSELECTED_OFFSET))(nullptr);
		}

		::System::Void set_isSelected(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_SET_ISSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_cursorPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_GET_CURSORPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_cursorPosition(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_SET_CURSORPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_selectionStart()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_GET_SELECTIONSTART_OFFSET))(nullptr);
		}

		::System::Void set_selectionStart(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_SET_SELECTIONSTART_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_selectionEnd()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_GET_SELECTIONEND_OFFSET))(nullptr);
		}

		::System::Void set_selectionEnd(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_SET_SELECTIONEND_OFFSET))(arg, nullptr);
		}

		UITexture* get_caret()
		{
			return ((UITexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_GET_CARET_OFFSET))(nullptr);
		}

		::System::String* Validate(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_VALIDATE_OFFSET))(str, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_START_OFFSET))(nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_INIT_OFFSET))(nullptr);
		}

		::System::Void SaveToPlayerPrefs(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_SAVETOPLAYERPREFS_OFFSET))(str, nullptr);
		}

		::System::Void OnSelect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_ONSELECT_OFFSET))(arg, nullptr);
		}

		::System::Void OnSelectEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_ONSELECTEVENT_OFFSET))(nullptr);
		}

		::System::Boolean ShowVirtualKeyboardForController()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_SHOWVIRTUALKEYBOARDFORCONTROLLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* DeselectNextFrame()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_DESELECTNEXTFRAME_OFFSET))(nullptr);
		}

		::System::Void OnDeselectEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_ONDESELECTEVENT_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnKey(::UnityEngine::KeyCode* arg)
		{
			((::System::Void(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_ONKEY_OFFSET))(arg, nullptr);
		}

		::System::Void DoBackspace()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_DOBACKSPACE_OFFSET))(nullptr);
		}

		::System::Boolean ProcessEvent(::UnityEngine::Event* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_PROCESSEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void Insert(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_INSERT_OFFSET))(str, nullptr);
		}

		::System::String* GetLeftText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_GETLEFTTEXT_OFFSET))(nullptr);
		}

		::System::String* GetRightText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_GETRIGHTTEXT_OFFSET))(nullptr);
		}

		::System::String* GetSelection()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_GETSELECTION_OFFSET))(nullptr);
		}

		::System::Int32 GetCharUnderMouse()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_GETCHARUNDERMOUSE_OFFSET))(nullptr);
		}

		::System::Void OnPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_ONPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void OnDrag(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_ONDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Cleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_CLEANUP_OFFSET))(nullptr);
		}

		::System::Void Submit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_SUBMIT_OFFSET))(nullptr);
		}

		::System::Void UpdateLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_UPDATELABEL_OFFSET))(nullptr);
		}

		::System::Char Validate(::System::String* str, ::System::Int32 arg, ::System::Char arg2)
		{
			return ((::System::Char(*)(::System::String*, ::System::Int32, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_VALIDATE_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void ExecuteOnChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_EXECUTEONCHANGE_OFFSET))(nullptr);
		}

		::System::Void RemoveFocus()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_REMOVEFOCUS_OFFSET))(nullptr);
		}

		::System::Void SaveValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_SAVEVALUE_OFFSET))(nullptr);
		}

		::System::Void LoadValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_LOADVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void _ShowVirtualKeyboardForController_b__88_0(::System::Boolean arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIINPUT__SHOWVIRTUALKEYBOARDFORCONTROLLER_B__88_0_OFFSET))(arg, str, nullptr);
		}

	};

