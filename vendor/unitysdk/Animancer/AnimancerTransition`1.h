#pragma once
#include "../unitysdk.h"

namespace Animancer { class AnimancerState; }
namespace UnityEngine { class Object; }
namespace Animancer { class FadeMode; }

#define ANIMANCER_ANIMANCERTRANSITION`1_GET_BASESTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERTRANSITION`1_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERTRANSITION`1_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERTRANSITION`1_SET_STATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERTRANSITION`1_SET_NORMALIZEDSTARTTIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERTRANSITION`1_ANIMANCER.ITRANSITION.CREATESTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERTRANSITION`1_SET_BASESTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERTRANSITION`1_APPLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERTRANSITION`1_APPLYDETAILS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERTRANSITION`1_GET_SERIALIZEDEVENTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERTRANSITION`1_GET_FADEMODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERTRANSITION`1_GET_NAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERTRANSITION`1_GET_NORMALIZEDSTARTTIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERTRANSITION`1_GET_MAXIMUMDURATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERTRANSITION`1_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERTRANSITION`1_CREATESTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERTRANSITION`1_GET_MAINOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERTRANSITION`1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERTRANSITION`1_GET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERTRANSITION`1_GET_STATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERTRANSITION`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERTRANSITION`1_GET_KEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERTRANSITION`1_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERTRANSITION`1_COPYFROM_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERTRANSITION`1_GET_FADEDURATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ANIMANCERTRANSITION`1_SET_FADEDURATION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer
{
	inline static constexpr unsigned int AnimancerTransition`1_TypeDefinitionIndex = 35211;

	class AnimancerTransition`1 : public Il2CppObject
	{
	public:
		::System::Single _FadeDuration; // 0x0
		Serializable* _Events; // 0x0
		::Animancer::AnimancerState* _BaseState_k__BackingField; // 0x0
		Il2CppObject* _State; // 0x0
		::UnityEngine::Object* _MainObject_k__BackingField; // 0x0

		::Animancer::AnimancerState* get_BaseState()
		{
			return (return (::Animancer::AnimancerState*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITION`1_GET_BASESTATE_OFFSET))(nullptr);
		}

		::System::Single get_Speed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITION`1_GET_SPEED_OFFSET))(nullptr);
		}

		Sequence* get_Events()
		{
			return (return (Sequence*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITION`1_GET_EVENTS_OFFSET))(nullptr);
		}

		::System::Void set_State(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITION`1_SET_STATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_NormalizedStartTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITION`1_SET_NORMALIZEDSTARTTIME_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* Animancer.ITransition.CreateState()
		{
			return (return (::Animancer::AnimancerState*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITION`1_ANIMANCER.ITRANSITION.CREATESTATE_OFFSET))(nullptr);
		}

		::System::Void set_BaseState(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITION`1_SET_BASESTATE_OFFSET))(arg, nullptr);
		}

		::System::Void Apply(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITION`1_APPLY_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyDetails(::Animancer::AnimancerState* arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITION`1_APPLYDETAILS_OFFSET))(arg, arg, arg, nullptr);
		}

		Serializable&* get_SerializedEvents()
		{
			return (return (Serializable&*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITION`1_GET_SERIALIZEDEVENTS_OFFSET))(nullptr);
		}

		::Animancer::FadeMode* get_FadeMode()
		{
			return (return (::Animancer::FadeMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITION`1_GET_FADEMODE_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITION`1_GET_NAME_OFFSET))(nullptr);
		}

		::System::Single get_NormalizedStartTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITION`1_GET_NORMALIZEDSTARTTIME_OFFSET))(nullptr);
		}

		::System::Single get_MaximumDuration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITION`1_GET_MAXIMUMDURATION_OFFSET))(nullptr);
		}

		::System::Void set_Speed(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITION`1_SET_SPEED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateState()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITION`1_CREATESTATE_OFFSET))(nullptr);
		}

		::UnityEngine::Object* get_MainObject()
		{
			return (return (::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITION`1_GET_MAINOBJECT_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITION`1_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLooping()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITION`1_GET_ISLOOPING_OFFSET))(nullptr);
		}

		Il2CppObject* get_State()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITION`1_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITION`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* get_Key()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITION`1_GET_KEY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITION`1_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void CopyFrom(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITION`1_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Single get_FadeDuration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITION`1_GET_FADEDURATION_OFFSET))(nullptr);
		}

		::System::Void set_FadeDuration(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITION`1_SET_FADEDURATION_OFFSET))(arg, nullptr);
		}

	};
}

