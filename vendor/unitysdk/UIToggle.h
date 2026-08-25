#pragma once
#include "unitysdk.h"

class UIToggle;
class UIWidget;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
class UITweener;
class Validate;
class UISprite;
namespace UnityEngine { class GameObject; }

#define UITOGGLE_SET_ISCHECKED_OFFSET UNITYSDK_OFFSET(0xA3FD00)
#define UITOGGLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA3FD30)
#define UITOGGLE_ONCLICK_OFFSET UNITYSDK_OFFSET(0xA3FDD0)
#define UITOGGLE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA3FF90)
#define UITOGGLE_GET_ISCHECKED_OFFSET UNITYSDK_OFFSET(0xA40030)
#define UITOGGLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA40050)
#define UITOGGLE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA354B0)
#define UITOGGLE_GET_ISCOLLIDERENABLED_OFFSET UNITYSDK_OFFSET(0xA3FEA0)
#define UITOGGLE_START_OFFSET UNITYSDK_OFFSET(0xA400E0)
#define UITOGGLE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA35EE0)
#define UITOGGLE_SET_OFFSET UNITYSDK_OFFSET(0xA40400)
#define UITOGGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA417B0)
#define UITOGGLE_GETACTIVETOGGLE_OFFSET UNITYSDK_OFFSET(0xA41860)

	inline static constexpr unsigned int UIToggle_TypeDefinitionIndex = 84;

	class UIToggle : public Il2CppObject
	{
	public:
		Il2CppObject* list; // 0x0
		UIToggle* current; // 0x8
		::System::Int32 group; // 0x18
		UIWidget* activeSprite; // 0x20
		::System::Boolean invertSpriteState; // 0x28
		::UnityEngine::Animation* activeAnimation; // 0x30
		::UnityEngine::Animator* animator; // 0x38
		UITweener* tween; // 0x40
		::System::Boolean startsActive; // 0x48
		::System::Boolean instantTween; // 0x49
		::System::Boolean optionCanBeNone; // 0x4A
		Il2CppObject* onChange; // 0x50
		Validate* validator; // 0x58
		UISprite* checkSprite; // 0x60
		::UnityEngine::Animation* checkAnimation; // 0x68
		::UnityEngine::GameObject* eventReceiver; // 0x70
		::System::String* functionName; // 0x78
		::System::Boolean startsChecked; // 0x80
		::System::Boolean mIsActive; // 0x81
		::System::Boolean mStarted; // 0x82

		::System::Void set_isChecked(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITOGGLE_SET_ISCHECKED_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOGGLE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOGGLE_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOGGLE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_isChecked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOGGLE_GET_ISCHECKED_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOGGLE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_value()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOGGLE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Boolean get_isColliderEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOGGLE_GET_ISCOLLIDERENABLED_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOGGLE_START_OFFSET))(nullptr);
		}

		::System::Void set_value(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITOGGLE_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITOGGLE_SET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOGGLE_.CTOR_OFFSET))(nullptr);
		}

		UIToggle* GetActiveToggle(::System::Int32 arg)
		{
			return ((UIToggle*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UITOGGLE_GETACTIVETOGGLE_OFFSET))(arg, nullptr);
		}

	};

