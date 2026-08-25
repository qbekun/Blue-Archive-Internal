#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class WrapMode; }
namespace UnityEngine { class AnimationClip; }

#define UNITYENGINE_ANIMATIONSTATE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA1C56A0)
#define UNITYENGINE_ANIMATIONSTATE_SET_WEIGHT_OFFSET UNITYSDK_OFFSET(0xA1C56E0)
#define UNITYENGINE_ANIMATIONSTATE_GET_WRAPMODE_OFFSET UNITYSDK_OFFSET(0xA1C5730)
#define UNITYENGINE_ANIMATIONSTATE_SET_WRAPMODE_OFFSET UNITYSDK_OFFSET(0xA1C5770)
#define UNITYENGINE_ANIMATIONSTATE_GET_TIME_OFFSET UNITYSDK_OFFSET(0xA1C57B0)
#define UNITYENGINE_ANIMATIONSTATE_SET_TIME_OFFSET UNITYSDK_OFFSET(0xA1C57F0)
#define UNITYENGINE_ANIMATIONSTATE_GET_NORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0xA1C5840)
#define UNITYENGINE_ANIMATIONSTATE_SET_NORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0xA1C5880)
#define UNITYENGINE_ANIMATIONSTATE_GET_SPEED_OFFSET UNITYSDK_OFFSET(0xA1C58D0)
#define UNITYENGINE_ANIMATIONSTATE_SET_SPEED_OFFSET UNITYSDK_OFFSET(0xA1C5910)
#define UNITYENGINE_ANIMATIONSTATE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0xA1C5960)
#define UNITYENGINE_ANIMATIONSTATE_SET_LAYER_OFFSET UNITYSDK_OFFSET(0xA1C59A0)
#define UNITYENGINE_ANIMATIONSTATE_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xA1C52F0)
#define UNITYENGINE_ANIMATIONSTATE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA1C59E0)
#define UNITYENGINE_ANIMATIONSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1C5A20)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimationState_TypeDefinitionIndex = 36451;

	class AnimationState : public Il2CppObject
	{
	public:
		::System::Void set_enabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_SET_ENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void set_weight(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_SET_WEIGHT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::WrapMode* get_wrapMode()
		{
			return (return (::UnityEngine::WrapMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_GET_WRAPMODE_OFFSET))(nullptr);
		}

		::System::Void set_wrapMode(::UnityEngine::WrapMode* arg)
		{
			((::System::Void(*)(::UnityEngine::WrapMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_SET_WRAPMODE_OFFSET))(arg, nullptr);
		}

		::System::Single get_time()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_GET_TIME_OFFSET))(nullptr);
		}

		::System::Void set_time(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_SET_TIME_OFFSET))(arg, nullptr);
		}

		::System::Single get_normalizedTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_GET_NORMALIZEDTIME_OFFSET))(nullptr);
		}

		::System::Void set_normalizedTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_SET_NORMALIZEDTIME_OFFSET))(arg, nullptr);
		}

		::System::Single get_speed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_GET_SPEED_OFFSET))(nullptr);
		}

		::System::Void set_speed(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_SET_SPEED_OFFSET))(arg, nullptr);
		}

		::System::Single get_length()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Void set_layer(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_SET_LAYER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimationClip* get_clip()
		{
			return (return (::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_GET_CLIP_OFFSET))(nullptr);
		}

		::System::String* get_name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONSTATE_.CTOR_OFFSET))(nullptr);
		}

	};
}

