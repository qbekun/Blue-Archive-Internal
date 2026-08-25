#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Camera; }
class TweenOrthoSize;
namespace UnityEngine { class GameObject; }

#define TWEENORTHOSIZE_.CTOR_OFFSET UNITYSDK_OFFSET(0x21BC710)
#define TWEENORTHOSIZE_GET_ORTHOSIZE_OFFSET UNITYSDK_OFFSET(0x21BC8E0)
#define TWEENORTHOSIZE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x21BC940)
#define TWEENORTHOSIZE_GET_CACHEDCAMERA_OFFSET UNITYSDK_OFFSET(0x21BC9E0)
#define TWEENORTHOSIZE_SETENDTOCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x21BCA80)
#define TWEENORTHOSIZE_SET_ORTHOSIZE_OFFSET UNITYSDK_OFFSET(0x21BCAB0)
#define TWEENORTHOSIZE_BEGIN_OFFSET UNITYSDK_OFFSET(0x21BCAF0)
#define TWEENORTHOSIZE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x21BC9A0)
#define TWEENORTHOSIZE_SETSTARTTOCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x21BCED0)
#define TWEENORTHOSIZE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x21BC910)

	inline static constexpr unsigned int TweenOrthoSize_TypeDefinitionIndex = 171;

	class TweenOrthoSize : public Il2CppObject
	{
	public:
		::System::Single from; // 0x80
		::System::Single to; // 0x84
		::UnityEngine::Camera* mCam; // 0x88

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENORTHOSIZE_.CTOR_OFFSET))(nullptr);
		}

		::System::Single get_orthoSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENORTHOSIZE_GET_ORTHOSIZE_OFFSET))(nullptr);
		}

		::System::Void OnUpdate(::System::Single arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TWEENORTHOSIZE_ONUPDATE_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Camera* get_cachedCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENORTHOSIZE_GET_CACHEDCAMERA_OFFSET))(nullptr);
		}

		::System::Void SetEndToCurrentValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENORTHOSIZE_SETENDTOCURRENTVALUE_OFFSET))(nullptr);
		}

		::System::Void set_orthoSize(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENORTHOSIZE_SET_ORTHOSIZE_OFFSET))(arg, nullptr);
		}

		TweenOrthoSize* Begin(::UnityEngine::GameObject* arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((TweenOrthoSize*(*)(::UnityEngine::GameObject*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENORTHOSIZE_BEGIN_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_value(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENORTHOSIZE_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetStartToCurrentValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENORTHOSIZE_SETSTARTTOCURRENTVALUE_OFFSET))(nullptr);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENORTHOSIZE_GET_VALUE_OFFSET))(nullptr);
		}

	};

