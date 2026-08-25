#pragma once
#include "unitysdk.h"

class UIBasicSprite;
class TweenFill;
namespace UnityEngine { class GameObject; }

#define TWEENFILL_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x2081280)
#define TWEENFILL_SETENDTOCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x2081400)
#define TWEENFILL_CACHE_OFFSET UNITYSDK_OFFSET(0x2081520)
#define TWEENFILL_BEGIN_OFFSET UNITYSDK_OFFSET(0x2081580)
#define TWEENFILL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x20812E0)
#define TWEENFILL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x2081420)
#define TWEENFILL_.CTOR_OFFSET UNITYSDK_OFFSET(0x2081640)
#define TWEENFILL_SETSTARTTOCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x2081660)

	inline static constexpr unsigned int TweenFill_TypeDefinitionIndex = 164;

	class TweenFill : public Il2CppObject
	{
	public:
		::System::Single from; // 0x80
		::System::Single to; // 0x84
		::System::Boolean mCached; // 0x88
		UIBasicSprite* mSprite; // 0x90

		::System::Void OnUpdate(::System::Single arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TWEENFILL_ONUPDATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetEndToCurrentValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENFILL_SETENDTOCURRENTVALUE_OFFSET))(nullptr);
		}

		::System::Void Cache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENFILL_CACHE_OFFSET))(nullptr);
		}

		TweenFill* Begin(::UnityEngine::GameObject* arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((TweenFill*(*)(::UnityEngine::GameObject*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENFILL_BEGIN_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_value(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENFILL_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENFILL_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENFILL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetStartToCurrentValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENFILL_SETSTARTTOCURRENTVALUE_OFFSET))(nullptr);
		}

	};

