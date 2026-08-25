#pragma once
#include "unitysdk.h"

class UISprite;
class UILabel;
namespace UnityEngine { class GameObject; }
class UIGrid;
class IconType;
class KeyboardInfo;
class ControllerInfo;
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class KeyCode; }
namespace MX::Controller { class InputModeType; }
namespace MX::Controller { class ControllerKey; }

#define MXUIKEYSHORTCUT_AWAKE_OFFSET UNITYSDK_OFFSET(0x218FD10)
#define MXUIKEYSHORTCUT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x218FF80)
#define MXUIKEYSHORTCUT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x2190270)
#define MXUIKEYSHORTCUT_SET_OFFSET UNITYSDK_OFFSET(0x21903C0)
#define MXUIKEYSHORTCUT_SET_OFFSET UNITYSDK_OFFSET(0x2190780)
#define MXUIKEYSHORTCUT_SETTARGET_OFFSET UNITYSDK_OFFSET(0x21909F0)
#define MXUIKEYSHORTCUT_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x2190D70)
#define MXUIKEYSHORTCUT_SETWIDGETDEPTH_OFFSET UNITYSDK_OFFSET(0x218FF90)
#define MXUIKEYSHORTCUT_SETDIMMED_OFFSET UNITYSDK_OFFSET(0x2191050)
#define MXUIKEYSHORTCUT_CONVERTKEYCODE_OFFSET UNITYSDK_OFFSET(0x2190670)
#define MXUIKEYSHORTCUT_SETCONTROLLERINFO_OFFSET UNITYSDK_OFFSET(0x2191070)
#define MXUIKEYSHORTCUT_ONCHANGEDINPUTMODETYPE_OFFSET UNITYSDK_OFFSET(0x218FEF0)
#define MXUIKEYSHORTCUT_ONCHANGEDINPUTMODETYPE_OFFSET UNITYSDK_OFFSET(0x2191120)
#define MXUIKEYSHORTCUT_SETCONTROLLERBUTTONIMAGE_OFFSET UNITYSDK_OFFSET(0x21913D0)
#define MXUIKEYSHORTCUT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2191AE0)
#define MXUIKEYSHORTCUT__SETTARGET_B__23_0_OFFSET UNITYSDK_OFFSET(0x2191CF0)
#define MXUIKEYSHORTCUT__SETTARGET_B__23_1_OFFSET UNITYSDK_OFFSET(0x2191D00)
#define MXUIKEYSHORTCUT__SETCONTROLLERBUTTONIMAGE_G__ISNEEDBGBUTTON|31_1_OFFSET UNITYSDK_OFFSET(0x2191A30)

	inline static constexpr unsigned int MXUIKeyShortcut_TypeDefinitionIndex = 4106;

	class MXUIKeyShortcut : public Il2CppObject
	{
	public:
		UISprite* keyboardBGSprite; // 0x18
		UISprite* _controllerIconBG; // 0x20
		Il2CppObject* group; // 0x28
		UILabel* textLabel; // 0x30
		::UnityEngine::GameObject* dim; // 0x38
		Il2CppObject* combinationIconObjs; // 0x40
		Il2CppObject* controllerIconSprites; // 0x48
		UIGrid* controllerIconGrid; // 0x50
		IconType* curIconType; // 0x58
		::System::Int32 _startDepth; // 0x5C
		KeyboardInfo* _keyboardInfo; // 0x60
		ControllerInfo* _controllerInfo; // 0x68
		::UnityEngine::GameObject* _target; // 0x70
		::UnityEngine::GameObject* _stroke; // 0x78
		Il2CppObject* _needStrokeBG; // 0x80

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYSHORTCUT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYSHORTCUT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYSHORTCUT_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void Set(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2, ::System::Int32 arg3, ::UnityEngine::KeyCode* arg4)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Int32, ::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYSHORTCUT_SET_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Set(::System::Int32 arg, KeyboardInfo* arg2, ControllerInfo* arg3, ::UnityEngine::GameObject* arg4)
		{
			((::System::Void(*)(::System::Int32, KeyboardInfo*, ControllerInfo*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYSHORTCUT_SET_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetTarget(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYSHORTCUT_SETTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void SetActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYSHORTCUT_SETACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void SetWidgetDepth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYSHORTCUT_SETWIDGETDEPTH_OFFSET))(arg, nullptr);
		}

		::System::Void SetDimmed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYSHORTCUT_SETDIMMED_OFFSET))(arg, nullptr);
		}

		::System::String* ConvertKeyCode(::UnityEngine::KeyCode* arg)
		{
			return ((::System::String*(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYSHORTCUT_CONVERTKEYCODE_OFFSET))(arg, nullptr);
		}

		::System::Void SetControllerInfo(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYSHORTCUT_SETCONTROLLERINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnChangedInputModeType()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYSHORTCUT_ONCHANGEDINPUTMODETYPE_OFFSET))(nullptr);
		}

		::System::Void OnChangedInputModeType(::MX::Controller::InputModeType* arg)
		{
			((::System::Void(*)(::MX::Controller::InputModeType*, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYSHORTCUT_ONCHANGEDINPUTMODETYPE_OFFSET))(arg, nullptr);
		}

		::System::Void SetControllerButtonImage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYSHORTCUT_SETCONTROLLERBUTTONIMAGE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYSHORTCUT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _SetTarget_b__23_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYSHORTCUT__SETTARGET_B__23_0_OFFSET))(nullptr);
		}

		::System::Void _SetTarget_b__23_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYSHORTCUT__SETTARGET_B__23_1_OFFSET))(nullptr);
		}

		::System::Boolean _SetControllerButtonImage_g__IsNeedBGButton|31_1(::MX::Controller::ControllerKey* arg)
		{
			return ((::System::Boolean(*)(::MX::Controller::ControllerKey*, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYSHORTCUT__SETCONTROLLERBUTTONIMAGE_G__ISNEEDBGBUTTON|31_1_OFFSET))(arg, nullptr);
		}

	};

