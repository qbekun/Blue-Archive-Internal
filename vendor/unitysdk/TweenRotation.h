#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Quaternion; }
class TweenRotation;
namespace UnityEngine { class GameObject; }

#define TWEENROTATION_SETCURRENTVALUETOEND_OFFSET UNITYSDK_OFFSET(0x21BD720)
#define TWEENROTATION_SETENDTOCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x21BD840)
#define TWEENROTATION_SETSTARTTOCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x21BD970)
#define TWEENROTATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x21BD9F0)
#define TWEENROTATION_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x21BD8C0)
#define TWEENROTATION_SETCURRENTVALUETOSTART_OFFSET UNITYSDK_OFFSET(0x21BDA90)
#define TWEENROTATION_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x21BDB00)
#define TWEENROTATION_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x21BD790)
#define TWEENROTATION_GET_CACHEDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x21BDA00)
#define TWEENROTATION_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x21BDB20)
#define TWEENROTATION_BEGIN_OFFSET UNITYSDK_OFFSET(0x21BDB40)
#define TWEENROTATION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x21BDD00)

	inline static constexpr unsigned int TweenRotation_TypeDefinitionIndex = 173;

	class TweenRotation : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* from; // 0x80
		::UnityEngine::Vector3* to; // 0x8C
		::System::Boolean quaternionLerp; // 0x98
		::UnityEngine::Transform* mTrans; // 0xA0

		::System::Void SetCurrentValueToEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENROTATION_SETCURRENTVALUETOEND_OFFSET))(nullptr);
		}

		::System::Void SetEndToCurrentValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENROTATION_SETENDTOCURRENTVALUE_OFFSET))(nullptr);
		}

		::System::Void SetStartToCurrentValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENROTATION_SETSTARTTOCURRENTVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENROTATION_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Quaternion* get_value()
		{
			return ((::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENROTATION_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void SetCurrentValueToStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENROTATION_SETCURRENTVALUETOSTART_OFFSET))(nullptr);
		}

		::UnityEngine::Quaternion* get_rotation()
		{
			return ((::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENROTATION_GET_ROTATION_OFFSET))(nullptr);
		}

		::System::Void set_value(::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + TWEENROTATION_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_cachedTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENROTATION_GET_CACHEDTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void set_rotation(::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + TWEENROTATION_SET_ROTATION_OFFSET))(arg, nullptr);
		}

		TweenRotation* Begin(::UnityEngine::GameObject* arg, ::System::Single arg2, ::UnityEngine::Quaternion* arg3)
		{
			return ((TweenRotation*(*)(::UnityEngine::GameObject*, ::System::Single, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + TWEENROTATION_BEGIN_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnUpdate(::System::Single arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TWEENROTATION_ONUPDATE_OFFSET))(arg, arg2, nullptr);
		}

	};

