#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Camera; }
class TweenFOV;
namespace UnityEngine { class GameObject; }

#define TWEENFOV_SET_FOV_OFFSET UNITYSDK_OFFSET(0x2081680)
#define TWEENFOV_SETENDTOCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x2081700)
#define TWEENFOV_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x2081730)
#define TWEENFOV_SETCURRENTVALUETOSTART_OFFSET UNITYSDK_OFFSET(0x2081800)
#define TWEENFOV_GET_CACHEDCAMERA_OFFSET UNITYSDK_OFFSET(0x2081760)
#define TWEENFOV_SETSTARTTOCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x2081840)
#define TWEENFOV_.CTOR_OFFSET UNITYSDK_OFFSET(0x2081870)
#define TWEENFOV_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x20816C0)
#define TWEENFOV_BEGIN_OFFSET UNITYSDK_OFFSET(0x2081890)
#define TWEENFOV_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x2081950)
#define TWEENFOV_GET_FOV_OFFSET UNITYSDK_OFFSET(0x20819B0)
#define TWEENFOV_SETCURRENTVALUETOEND_OFFSET UNITYSDK_OFFSET(0x20819E0)

	inline static constexpr unsigned int TweenFOV_TypeDefinitionIndex = 165;

	class TweenFOV : public Il2CppObject
	{
	public:
		::System::Single from; // 0x80
		::System::Single to; // 0x84
		::UnityEngine::Camera* mCam; // 0x88

		::System::Void set_fov(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENFOV_SET_FOV_OFFSET))(arg, nullptr);
		}

		::System::Void SetEndToCurrentValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENFOV_SETENDTOCURRENTVALUE_OFFSET))(nullptr);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENFOV_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void SetCurrentValueToStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENFOV_SETCURRENTVALUETOSTART_OFFSET))(nullptr);
		}

		::UnityEngine::Camera* get_cachedCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENFOV_GET_CACHEDCAMERA_OFFSET))(nullptr);
		}

		::System::Void SetStartToCurrentValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENFOV_SETSTARTTOCURRENTVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENFOV_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_value(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENFOV_SET_VALUE_OFFSET))(arg, nullptr);
		}

		TweenFOV* Begin(::UnityEngine::GameObject* arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((TweenFOV*(*)(::UnityEngine::GameObject*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENFOV_BEGIN_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnUpdate(::System::Single arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TWEENFOV_ONUPDATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single get_fov()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENFOV_GET_FOV_OFFSET))(nullptr);
		}

		::System::Void SetCurrentValueToEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENFOV_SETCURRENTVALUETOEND_OFFSET))(nullptr);
		}

	};

