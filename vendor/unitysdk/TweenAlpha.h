#pragma once
#include "unitysdk.h"

class UIRect;
namespace UnityEngine { class Material; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class SpriteRenderer; }
class TweenAlpha;
namespace UnityEngine { class GameObject; }

#define TWEENALPHA_GET_ALPHA_OFFSET UNITYSDK_OFFSET(0x2080230)
#define TWEENALPHA_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x20803A0)
#define TWEENALPHA_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x2080870)
#define TWEENALPHA_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x2080240)
#define TWEENALPHA_.CTOR_OFFSET UNITYSDK_OFFSET(0x20808D0)
#define TWEENALPHA_SETENDTOCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x2080900)
#define TWEENALPHA_BEGIN_OFFSET UNITYSDK_OFFSET(0x2080920)
#define TWEENALPHA_SET_ALPHA_OFFSET UNITYSDK_OFFSET(0x20809F0)
#define TWEENALPHA_CACHE_OFFSET UNITYSDK_OFFSET(0x2080610)
#define TWEENALPHA_SETSTARTTOCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x2080A00)

	inline static constexpr unsigned int TweenAlpha_TypeDefinitionIndex = 162;

	class TweenAlpha : public Il2CppObject
	{
	public:
		::System::Single from; // 0x80
		::System::Single to; // 0x84
		::System::Boolean mCached; // 0x88
		UIRect* mRect; // 0x90
		::UnityEngine::Material* mMat; // 0x98
		::UnityEngine::Light* mLight; // 0xA0
		::UnityEngine::SpriteRenderer* mSr; // 0xA8
		::System::Single mBaseIntensity; // 0xB0

		::System::Single get_alpha()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENALPHA_GET_ALPHA_OFFSET))(nullptr);
		}

		::System::Void set_value(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENALPHA_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void OnUpdate(::System::Single arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TWEENALPHA_ONUPDATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENALPHA_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENALPHA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetEndToCurrentValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENALPHA_SETENDTOCURRENTVALUE_OFFSET))(nullptr);
		}

		TweenAlpha* Begin(::UnityEngine::GameObject* arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4)
		{
			return ((TweenAlpha*(*)(::UnityEngine::GameObject*, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENALPHA_BEGIN_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void set_alpha(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENALPHA_SET_ALPHA_OFFSET))(arg, nullptr);
		}

		::System::Void Cache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENALPHA_CACHE_OFFSET))(nullptr);
		}

		::System::Void SetStartToCurrentValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENALPHA_SETSTARTTOCURRENTVALUE_OFFSET))(nullptr);
		}

	};

