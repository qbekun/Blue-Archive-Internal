#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Color; }
class UIWidget;
class State;

#define UIBUTTONCOLOR_CACHEDEFAULTCOLOR_OFFSET UNITYSDK_OFFSET(0x9F93C0)
#define UIBUTTONCOLOR_GET_STATE_OFFSET UNITYSDK_OFFSET(0x9F93E0)
#define UIBUTTONCOLOR_UPDATECOLOR_OFFSET UNITYSDK_OFFSET(0x9F93F0)
#define UIBUTTONCOLOR_SETSTATE_OFFSET UNITYSDK_OFFSET(0x9F91E0)
#define UIBUTTONCOLOR_SET_STATE_OFFSET UNITYSDK_OFFSET(0x9F9520)
#define UIBUTTONCOLOR_GET_DEFAULTCOLOR_OFFSET UNITYSDK_OFFSET(0x9F9540)
#define UIBUTTONCOLOR_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0x9F9580)
#define UIBUTTONCOLOR_ONINIT_OFFSET UNITYSDK_OFFSET(0x9F8620)
#define UIBUTTONCOLOR_START_OFFSET UNITYSDK_OFFSET(0x9F9590)
#define UIBUTTONCOLOR_SET_ISENABLED_OFFSET UNITYSDK_OFFSET(0x9F9600)
#define UIBUTTONCOLOR_SET_DEFAULTCOLOR_OFFSET UNITYSDK_OFFSET(0x9F9610)
#define UIBUTTONCOLOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9F9670)
#define UIBUTTONCOLOR_ONDRAGOVER_OFFSET UNITYSDK_OFFSET(0x9F8B60)
#define UIBUTTONCOLOR_ONDRAGOUT_OFFSET UNITYSDK_OFFSET(0x9F8D80)
#define UIBUTTONCOLOR_RESETDEFAULTCOLOR_OFFSET UNITYSDK_OFFSET(0x9F9860)
#define UIBUTTONCOLOR_ONPRESS_OFFSET UNITYSDK_OFFSET(0x9F98C0)
#define UIBUTTONCOLOR_ONHOVER_OFFSET UNITYSDK_OFFSET(0x9F9AE0)
#define UIBUTTONCOLOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9F9BA0)
#define UIBUTTONCOLOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F92E0)

	inline static constexpr unsigned int UIButtonColor_TypeDefinitionIndex = 19;

	class UIButtonColor : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* tweenTarget; // 0x18
		::UnityEngine::Color* hover; // 0x20
		::UnityEngine::Color* pressed; // 0x30
		::UnityEngine::Color* disabledColor; // 0x40
		::System::Single duration; // 0x50
		::UnityEngine::Color* mStartingColor; // 0x54
		::UnityEngine::Color* mDefaultColor; // 0x64
		::System::Boolean mInitDone; // 0x74
		UIWidget* mWidget; // 0x78
		State* mState; // 0x80

		::System::Void CacheDefaultColor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONCOLOR_CACHEDEFAULTCOLOR_OFFSET))(nullptr);
		}

		State* get_state()
		{
			return ((State*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONCOLOR_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void UpdateColor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONCOLOR_UPDATECOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetState(State* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(State*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONCOLOR_SETSTATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_state(State* arg)
		{
			((::System::Void(*)(State*, ::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONCOLOR_SET_STATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_defaultColor()
		{
			return ((::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONCOLOR_GET_DEFAULTCOLOR_OFFSET))(nullptr);
		}

		::System::Boolean get_isEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONCOLOR_GET_ISENABLED_OFFSET))(nullptr);
		}

		::System::Void OnInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONCOLOR_ONINIT_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONCOLOR_START_OFFSET))(nullptr);
		}

		::System::Void set_isEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONCOLOR_SET_ISENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void set_defaultColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONCOLOR_SET_DEFAULTCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONCOLOR_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDragOver()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONCOLOR_ONDRAGOVER_OFFSET))(nullptr);
		}

		::System::Void OnDragOut()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONCOLOR_ONDRAGOUT_OFFSET))(nullptr);
		}

		::System::Void ResetDefaultColor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONCOLOR_RESETDEFAULTCOLOR_OFFSET))(nullptr);
		}

		::System::Void OnPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONCOLOR_ONPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void OnHover(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONCOLOR_ONHOVER_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONCOLOR_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONCOLOR_.CTOR_OFFSET))(nullptr);
		}

	};

