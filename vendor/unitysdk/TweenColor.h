#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Color; }
class UIWidget;
namespace UnityEngine { class Material; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class SpriteRenderer; }
class TweenColor;
namespace UnityEngine { class GameObject; }

#define TWEENCOLOR_SETSTARTTOCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x2080A20)
#define TWEENCOLOR_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x2080BF0)
#define TWEENCOLOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x2080A50)
#define TWEENCOLOR_SETENDTOCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x20810F0)
#define TWEENCOLOR_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x2081120)
#define TWEENCOLOR_SETCURRENTVALUETOEND_OFFSET UNITYSDK_OFFSET(0x2081140)
#define TWEENCOLOR_CACHE_OFFSET UNITYSDK_OFFSET(0x2080EE0)
#define TWEENCOLOR_SETCURRENTVALUETOSTART_OFFSET UNITYSDK_OFFSET(0x2081160)
#define TWEENCOLOR_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x2081180)
#define TWEENCOLOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x20811A0)
#define TWEENCOLOR_BEGIN_OFFSET UNITYSDK_OFFSET(0x20811C0)
#define TWEENCOLOR_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x2080C60)

	inline static constexpr unsigned int TweenColor_TypeDefinitionIndex = 163;

	class TweenColor : public Il2CppObject
	{
	public:
		::UnityEngine::Color* from; // 0x80
		::UnityEngine::Color* to; // 0x90
		::System::Boolean mCached; // 0xA0
		UIWidget* mWidget; // 0xA8
		::UnityEngine::Material* mMat; // 0xB0
		::UnityEngine::Light* mLight; // 0xB8
		::UnityEngine::SpriteRenderer* mSr; // 0xC0

		::System::Void SetStartToCurrentValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENCOLOR_SETSTARTTOCURRENTVALUE_OFFSET))(nullptr);
		}

		::System::Void OnUpdate(::System::Single arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TWEENCOLOR_ONUPDATE_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Color* get_value()
		{
			return ((::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENCOLOR_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void SetEndToCurrentValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENCOLOR_SETENDTOCURRENTVALUE_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_color()
		{
			return ((::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENCOLOR_GET_COLOR_OFFSET))(nullptr);
		}

		::System::Void SetCurrentValueToEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENCOLOR_SETCURRENTVALUETOEND_OFFSET))(nullptr);
		}

		::System::Void Cache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENCOLOR_CACHE_OFFSET))(nullptr);
		}

		::System::Void SetCurrentValueToStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENCOLOR_SETCURRENTVALUETOSTART_OFFSET))(nullptr);
		}

		::System::Void set_color(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + TWEENCOLOR_SET_COLOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENCOLOR_.CTOR_OFFSET))(nullptr);
		}

		TweenColor* Begin(::UnityEngine::GameObject* arg, ::System::Single arg2, ::UnityEngine::Color* arg3)
		{
			return ((TweenColor*(*)(::UnityEngine::GameObject*, ::System::Single, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + TWEENCOLOR_BEGIN_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_value(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + TWEENCOLOR_SET_VALUE_OFFSET))(arg, nullptr);
		}

	};

