#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Transform; }
class UITable;
class TweenScale;
namespace UnityEngine { class GameObject; }

#define TWEENSCALE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x21BDF30)
#define TWEENSCALE_SETCURRENTVALUETOSTART_OFFSET UNITYSDK_OFFSET(0x21BE070)
#define TWEENSCALE_.CTOR_OFFSET UNITYSDK_OFFSET(0x21BE0A0)
#define TWEENSCALE_SETENDTOCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x21BE130)
#define TWEENSCALE_GET_CACHEDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x21BDFE0)
#define TWEENSCALE_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x21BE220)
#define TWEENSCALE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x21BE250)
#define TWEENSCALE_SETSTARTTOCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x21BE3E0)
#define TWEENSCALE_BEGIN_OFFSET UNITYSDK_OFFSET(0x21BE420)
#define TWEENSCALE_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x21BE4F0)
#define TWEENSCALE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x21BE170)
#define TWEENSCALE_SETCURRENTVALUETOEND_OFFSET UNITYSDK_OFFSET(0x21BE510)

	inline static constexpr unsigned int TweenScale_TypeDefinitionIndex = 174;

	class TweenScale : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* from; // 0x80
		::UnityEngine::Vector3* to; // 0x8C
		::System::Boolean updateTable; // 0x98
		::UnityEngine::Transform* mTrans; // 0xA0
		UITable* mTable; // 0xA8

		::System::Void set_value(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + TWEENSCALE_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetCurrentValueToStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENSCALE_SETCURRENTVALUETOSTART_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENSCALE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetEndToCurrentValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENSCALE_SETENDTOCURRENTVALUE_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_cachedTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENSCALE_GET_CACHEDTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void set_scale(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + TWEENSCALE_SET_SCALE_OFFSET))(arg, nullptr);
		}

		::System::Void OnUpdate(::System::Single arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TWEENSCALE_ONUPDATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetStartToCurrentValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENSCALE_SETSTARTTOCURRENTVALUE_OFFSET))(nullptr);
		}

		TweenScale* Begin(::UnityEngine::GameObject* arg, ::System::Single arg2, ::UnityEngine::Vector3* arg3)
		{
			return ((TweenScale*(*)(::UnityEngine::GameObject*, ::System::Single, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + TWEENSCALE_BEGIN_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Vector3* get_scale()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENSCALE_GET_SCALE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_value()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENSCALE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void SetCurrentValueToEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENSCALE_SETCURRENTVALUETOEND_OFFSET))(nullptr);
		}

	};

