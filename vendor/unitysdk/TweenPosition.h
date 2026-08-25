#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Transform; }
class UIRect;
class TweenPosition;
namespace UnityEngine { class GameObject; }

#define TWEENPOSITION_GET_CACHEDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x21BCF00)
#define TWEENPOSITION_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x21BCF90)
#define TWEENPOSITION_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x21BD0E0)
#define TWEENPOSITION_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x21BCFB0)
#define TWEENPOSITION_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x21BD110)
#define TWEENPOSITION_AWAKE_OFFSET UNITYSDK_OFFSET(0x21BD3B0)
#define TWEENPOSITION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x21BD410)
#define TWEENPOSITION_BEGIN_OFFSET UNITYSDK_OFFSET(0x21BD480)
#define TWEENPOSITION_BEGIN_OFFSET UNITYSDK_OFFSET(0x21BD550)
#define TWEENPOSITION_SETSTARTTOCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x21BD630)
#define TWEENPOSITION_SETENDTOCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x21BD670)
#define TWEENPOSITION_SETCURRENTVALUETOSTART_OFFSET UNITYSDK_OFFSET(0x21BD6B0)
#define TWEENPOSITION_SETCURRENTVALUETOEND_OFFSET UNITYSDK_OFFSET(0x21BD6E0)
#define TWEENPOSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x21BD710)

	inline static constexpr unsigned int TweenPosition_TypeDefinitionIndex = 172;

	class TweenPosition : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* from; // 0x80
		::UnityEngine::Vector3* to; // 0x8C
		::System::Boolean worldSpace; // 0x98
		::UnityEngine::Transform* mTrans; // 0xA0
		UIRect* mRect; // 0xA8

		::UnityEngine::Transform* get_cachedTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENPOSITION_GET_CACHEDTRANSFORM_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_position()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENPOSITION_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_position(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + TWEENPOSITION_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_value()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENPOSITION_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_value(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + TWEENPOSITION_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENPOSITION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnUpdate(::System::Single arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TWEENPOSITION_ONUPDATE_OFFSET))(arg, arg2, nullptr);
		}

		TweenPosition* Begin(::UnityEngine::GameObject* arg, ::System::Single arg2, ::UnityEngine::Vector3* arg3)
		{
			return ((TweenPosition*(*)(::UnityEngine::GameObject*, ::System::Single, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + TWEENPOSITION_BEGIN_OFFSET))(arg, arg2, arg3, nullptr);
		}

		TweenPosition* Begin(::UnityEngine::GameObject* arg, ::System::Single arg2, ::UnityEngine::Vector3* arg3, ::System::Boolean arg4)
		{
			return ((TweenPosition*(*)(::UnityEngine::GameObject*, ::System::Single, ::UnityEngine::Vector3*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TWEENPOSITION_BEGIN_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetStartToCurrentValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENPOSITION_SETSTARTTOCURRENTVALUE_OFFSET))(nullptr);
		}

		::System::Void SetEndToCurrentValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENPOSITION_SETENDTOCURRENTVALUE_OFFSET))(nullptr);
		}

		::System::Void SetCurrentValueToStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENPOSITION_SETCURRENTVALUETOSTART_OFFSET))(nullptr);
		}

		::System::Void SetCurrentValueToEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENPOSITION_SETCURRENTVALUETOEND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENPOSITION_.CTOR_OFFSET))(nullptr);
		}

	};

