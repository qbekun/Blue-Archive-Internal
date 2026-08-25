#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AudioSource; }
class TweenVolume;
namespace UnityEngine { class GameObject; }

#define TWEENVOLUME_SETENDTOCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x21BEC10)
#define TWEENVOLUME_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0x21BED20)
#define TWEENVOLUME_GET_AUDIOSOURCE_OFFSET UNITYSDK_OFFSET(0x21BEE60)
#define TWEENVOLUME_.CTOR_OFFSET UNITYSDK_OFFSET(0x21BEFD0)
#define TWEENVOLUME_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x21BECA0)
#define TWEENVOLUME_SETSTARTTOCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x21BEFF0)
#define TWEENVOLUME_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x21BEDC0)
#define TWEENVOLUME_GET_VOLUME_OFFSET UNITYSDK_OFFSET(0x21BF080)
#define TWEENVOLUME_BEGIN_OFFSET UNITYSDK_OFFSET(0x21BF100)
#define TWEENVOLUME_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x21BF220)

	inline static constexpr unsigned int TweenVolume_TypeDefinitionIndex = 176;

	class TweenVolume : public Il2CppObject
	{
	public:
		::System::Single from; // 0x80
		::System::Single to; // 0x84
		::UnityEngine::AudioSource* mSource; // 0x88

		::System::Void SetEndToCurrentValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENVOLUME_SETENDTOCURRENTVALUE_OFFSET))(nullptr);
		}

		::System::Void set_volume(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENVOLUME_SET_VOLUME_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AudioSource* get_audioSource()
		{
			return ((::UnityEngine::AudioSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENVOLUME_GET_AUDIOSOURCE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENVOLUME_.CTOR_OFFSET))(nullptr);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENVOLUME_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void SetStartToCurrentValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENVOLUME_SETSTARTTOCURRENTVALUE_OFFSET))(nullptr);
		}

		::System::Void set_value(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENVOLUME_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Single get_volume()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TWEENVOLUME_GET_VOLUME_OFFSET))(nullptr);
		}

		TweenVolume* Begin(::UnityEngine::GameObject* arg, ::System::Single arg2, ::System::Single arg3)
		{
			return ((TweenVolume*(*)(::UnityEngine::GameObject*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TWEENVOLUME_BEGIN_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnUpdate(::System::Single arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TWEENVOLUME_ONUPDATE_OFFSET))(arg, arg2, nullptr);
		}

	};

