#pragma once
#include "../unitysdk.h"

namespace Animancer { class AnimancerState; }
namespace Animancer { class ClipState; }
namespace UnityEngine { class AnimationClip; }
namespace Animancer { class ITransition; }

#define ANIMANCER_MIXERSTATE`1_GET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERSTATE`1_SET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERSTATE`1_GETPARAMETERERROR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERSTATE`1_GET_HASTHRESHOLDS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERSTATE`1_GETTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERSTATE`1_SETTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERSTATE`1_SETTHRESHOLDS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERSTATE`1_VALIDATETHRESHOLDCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERSTATE`1_ONTHRESHOLDSCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERSTATE`1_CALCULATETHRESHOLDS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERSTATE`1_RECREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERSTATE`1_ONCHILDCAPACITYCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERSTATE`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERSTATE`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERSTATE`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERSTATE`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERSTATE`1_ANIMANCER.ICOPYABLE_ANIMANCER.MIXERSTATE_TPARAMETER__.COPYFROM_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERSTATE`1_GETDISPLAYKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERSTATE`1_APPENDDETAILS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERSTATE`1_APPENDPARAMETER_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_MIXERSTATE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer
{
	inline static constexpr unsigned int MixerState`1_TypeDefinitionIndex = 35165;

	class MixerState`1 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _Thresholds; // 0x0
		Il2CppObject* _Parameter; // 0x0

		Il2CppObject* get_Parameter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERSTATE`1_GET_PARAMETER_OFFSET))(nullptr);
		}

		::System::Void set_Parameter(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERSTATE`1_SET_PARAMETER_OFFSET))(arg, nullptr);
		}

		::System::String* GetParameterError(Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERSTATE`1_GETPARAMETERERROR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasThresholds()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERSTATE`1_GET_HASTHRESHOLDS_OFFSET))(nullptr);
		}

		Il2CppObject* GetThreshold(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERSTATE`1_GETTHRESHOLD_OFFSET))(arg, nullptr);
		}

		::System::Void SetThreshold(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERSTATE`1_SETTHRESHOLD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetThresholds(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERSTATE`1_SETTHRESHOLDS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValidateThresholdCount()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERSTATE`1_VALIDATETHRESHOLDCOUNT_OFFSET))(nullptr);
		}

		::System::Void OnThresholdsChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERSTATE`1_ONTHRESHOLDSCHANGED_OFFSET))(nullptr);
		}

		::System::Void CalculateThresholds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERSTATE`1_CALCULATETHRESHOLDS_OFFSET))(arg, nullptr);
		}

		::System::Void RecreatePlayable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERSTATE`1_RECREATEPLAYABLE_OFFSET))(nullptr);
		}

		::System::Void OnChildCapacityChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERSTATE`1_ONCHILDCAPACITYCHANGED_OFFSET))(nullptr);
		}

		::System::Void Add(::Animancer::AnimancerState* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERSTATE`1_ADD_OFFSET))(arg, arg, nullptr);
		}

		::Animancer::ClipState* Add(::UnityEngine::AnimationClip* arg, Il2CppObject* arg)
		{
			return (return (::Animancer::ClipState*(*)(::UnityEngine::AnimationClip*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERSTATE`1_ADD_OFFSET))(arg, arg, nullptr);
		}

		::Animancer::AnimancerState* Add(::Animancer::ITransition* arg, Il2CppObject* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::Animancer::ITransition*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERSTATE`1_ADD_OFFSET))(arg, arg, nullptr);
		}

		::Animancer::AnimancerState* Add(::System::Object* arg, Il2CppObject* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::System::Object*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERSTATE`1_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Animancer.ICopyable_Animancer.MixerState_TParameter__.CopyFrom(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERSTATE`1_ANIMANCER.ICOPYABLE_ANIMANCER.MIXERSTATE_TPARAMETER__.COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::String* GetDisplayKey(::Animancer::AnimancerState* arg)
		{
			return (return (::System::String*(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERSTATE`1_GETDISPLAYKEY_OFFSET))(arg, nullptr);
		}

		::System::Void AppendDetails(::System::Text::StringBuilder* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERSTATE`1_APPENDDETAILS_OFFSET))(arg, str, nullptr);
		}

		::System::Void AppendParameter(::System::Text::StringBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERSTATE`1_APPENDPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERSTATE`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

