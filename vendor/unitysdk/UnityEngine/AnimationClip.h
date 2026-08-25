#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class WrapMode; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Bounds; }
namespace UnityEngine { class AnimationEvent; }
namespace UnityEngine { class Bounds&; }

#define UNITYENGINE_ANIMATIONCLIP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1C5BF0)
#define UNITYENGINE_ANIMATIONCLIP_INTERNAL_CREATEANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0xA1C5CB0)
#define UNITYENGINE_ANIMATIONCLIP_SAMPLEANIMATION_OFFSET UNITYSDK_OFFSET(0xA1C5CF0)
#define UNITYENGINE_ANIMATIONCLIP_SAMPLEANIMATION_OFFSET UNITYSDK_OFFSET(0xA1C5DB0)
#define UNITYENGINE_ANIMATIONCLIP_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0xA1C5E10)
#define UNITYENGINE_ANIMATIONCLIP_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0xA1C5E50)
#define UNITYENGINE_ANIMATIONCLIP_GET_STOPTIME_OFFSET UNITYSDK_OFFSET(0xA1C5E90)
#define UNITYENGINE_ANIMATIONCLIP_GET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0xA1C5ED0)
#define UNITYENGINE_ANIMATIONCLIP_SET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0xA1C5F10)
#define UNITYENGINE_ANIMATIONCLIP_SETCURVE_OFFSET UNITYSDK_OFFSET(0xA1C5F60)
#define UNITYENGINE_ANIMATIONCLIP_ENSUREQUATERNIONCONTINUITY_OFFSET UNITYSDK_OFFSET(0xA1C5FB0)
#define UNITYENGINE_ANIMATIONCLIP_CLEARCURVES_OFFSET UNITYSDK_OFFSET(0xA1C5FF0)
#define UNITYENGINE_ANIMATIONCLIP_GET_WRAPMODE_OFFSET UNITYSDK_OFFSET(0xA1C5D70)
#define UNITYENGINE_ANIMATIONCLIP_SET_WRAPMODE_OFFSET UNITYSDK_OFFSET(0xA1C6030)
#define UNITYENGINE_ANIMATIONCLIP_GET_LOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0xA1C6070)
#define UNITYENGINE_ANIMATIONCLIP_SET_LOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0xA1C6120)
#define UNITYENGINE_ANIMATIONCLIP_GET_LEGACY_OFFSET UNITYSDK_OFFSET(0xA1C61A0)
#define UNITYENGINE_ANIMATIONCLIP_SET_LEGACY_OFFSET UNITYSDK_OFFSET(0xA1C61E0)
#define UNITYENGINE_ANIMATIONCLIP_GET_HUMANMOTION_OFFSET UNITYSDK_OFFSET(0xA1C6220)
#define UNITYENGINE_ANIMATIONCLIP_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0xA1C6260)
#define UNITYENGINE_ANIMATIONCLIP_GET_HASGENERICROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA1C62A0)
#define UNITYENGINE_ANIMATIONCLIP_GET_HASMOTIONFLOATCURVES_OFFSET UNITYSDK_OFFSET(0xA1C62E0)
#define UNITYENGINE_ANIMATIONCLIP_GET_HASMOTIONCURVES_OFFSET UNITYSDK_OFFSET(0xA1C6320)
#define UNITYENGINE_ANIMATIONCLIP_GET_HASROOTCURVES_OFFSET UNITYSDK_OFFSET(0xA1C6360)
#define UNITYENGINE_ANIMATIONCLIP_GET_HASROOTMOTION_OFFSET UNITYSDK_OFFSET(0xA1C63A0)
#define UNITYENGINE_ANIMATIONCLIP_ADDEVENT_OFFSET UNITYSDK_OFFSET(0xA1C63E0)
#define UNITYENGINE_ANIMATIONCLIP_ADDEVENTINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1C6480)
#define UNITYENGINE_ANIMATIONCLIP_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0xA1C64C0)
#define UNITYENGINE_ANIMATIONCLIP_SET_EVENTS_OFFSET UNITYSDK_OFFSET(0xA1C65A0)
#define UNITYENGINE_ANIMATIONCLIP_SETEVENTSINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1C65E0)
#define UNITYENGINE_ANIMATIONCLIP_GETEVENTSINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1C6560)
#define UNITYENGINE_ANIMATIONCLIP_GET_LOCALBOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1C60E0)
#define UNITYENGINE_ANIMATIONCLIP_SET_LOCALBOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1C6160)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimationClip_TypeDefinitionIndex = 36453;

	class AnimationClip : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Internal_CreateAnimationClip(::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_INTERNAL_CREATEANIMATIONCLIP_OFFSET))(arg, nullptr);
		}

		::System::Void SampleAnimation(::UnityEngine::GameObject* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SAMPLEANIMATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SampleAnimation(::UnityEngine::GameObject* arg, ::UnityEngine::AnimationClip* arg, ::System::Single arg, ::UnityEngine::WrapMode* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::AnimationClip*, ::System::Single, ::UnityEngine::WrapMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SAMPLEANIMATION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Single get_length()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Single get_startTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_STARTTIME_OFFSET))(nullptr);
		}

		::System::Single get_stopTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_STOPTIME_OFFSET))(nullptr);
		}

		::System::Single get_frameRate()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_FRAMERATE_OFFSET))(nullptr);
		}

		::System::Void set_frameRate(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SET_FRAMERATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetCurve(::System::String* str, ::System::Type* arg, ::System::String* str, ::UnityEngine::AnimationCurve* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Type*, ::System::String*, ::UnityEngine::AnimationCurve*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SETCURVE_OFFSET))(str, arg, str, arg, nullptr);
		}

		::System::Void EnsureQuaternionContinuity()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_ENSUREQUATERNIONCONTINUITY_OFFSET))(nullptr);
		}

		::System::Void ClearCurves()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_CLEARCURVES_OFFSET))(nullptr);
		}

		::UnityEngine::WrapMode* get_wrapMode()
		{
			return (return (::UnityEngine::WrapMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_WRAPMODE_OFFSET))(nullptr);
		}

		::System::Void set_wrapMode(::UnityEngine::WrapMode* arg)
		{
			((::System::Void(*)(::UnityEngine::WrapMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SET_WRAPMODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Bounds* get_localBounds()
		{
			return (return (::UnityEngine::Bounds*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_LOCALBOUNDS_OFFSET))(nullptr);
		}

		::System::Void set_localBounds(::UnityEngine::Bounds* arg)
		{
			((::System::Void(*)(::UnityEngine::Bounds*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SET_LOCALBOUNDS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_legacy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_LEGACY_OFFSET))(nullptr);
		}

		::System::Void set_legacy(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SET_LEGACY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_humanMotion()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_HUMANMOTION_OFFSET))(nullptr);
		}

		::System::Boolean get_empty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_EMPTY_OFFSET))(nullptr);
		}

		::System::Boolean get_hasGenericRootTransform()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_HASGENERICROOTTRANSFORM_OFFSET))(nullptr);
		}

		::System::Boolean get_hasMotionFloatCurves()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_HASMOTIONFLOATCURVES_OFFSET))(nullptr);
		}

		::System::Boolean get_hasMotionCurves()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_HASMOTIONCURVES_OFFSET))(nullptr);
		}

		::System::Boolean get_hasRootCurves()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_HASROOTCURVES_OFFSET))(nullptr);
		}

		::System::Boolean get_hasRootMotion()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_HASROOTMOTION_OFFSET))(nullptr);
		}

		::System::Void AddEvent(::UnityEngine::AnimationEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_ADDEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventInternal(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_ADDEVENTINTERNAL_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_events()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_EVENTS_OFFSET))(nullptr);
		}

		::System::Void set_events(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SET_EVENTS_OFFSET))(arg, nullptr);
		}

		::System::Void SetEventsInternal(::System::Array* arg)
		{
			((::System::Void(*)(::System::Array*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SETEVENTSINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Array* GetEventsInternal()
		{
			return (return (::System::Array*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GETEVENTSINTERNAL_OFFSET))(nullptr);
		}

		::System::Void get_localBounds_Injected(::UnityEngine::Bounds&* arg)
		{
			((::System::Void(*)(::UnityEngine::Bounds&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_GET_LOCALBOUNDS_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_localBounds_Injected(::UnityEngine::Bounds&* arg)
		{
			((::System::Void(*)(::UnityEngine::Bounds&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONCLIP_SET_LOCALBOUNDS_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

