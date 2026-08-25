#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AnimatorControllerParameterType; }
namespace Animancer { class LinearMixerState; }
namespace Animancer { class AnimancerState; }
namespace Animancer { class AnimancerPlayable; }

#define ANIMANCER_LINEARMIXERSTATE_GETPARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x4AE810)
#define ANIMANCER_LINEARMIXERSTATE_ASSERTTHRESHOLDSSORTED_OFFSET UNITYSDK_OFFSET(0x4AE870)
#define ANIMANCER_LINEARMIXERSTATE_GETPARAMETERTYPE_OFFSET UNITYSDK_OFFSET(0x4AEA40)
#define ANIMANCER_LINEARMIXERSTATE_GETPARAMETERNAME_OFFSET UNITYSDK_OFFSET(0x4AEA50)
#define ANIMANCER_LINEARMIXERSTATE_SET_EXTRAPOLATESPEED_OFFSET UNITYSDK_OFFSET(0x4AEA80)
#define ANIMANCER_LINEARMIXERSTATE_ASSIGNLINEARTHRESHOLDS_OFFSET UNITYSDK_OFFSET(0x4AEB90)
#define ANIMANCER_LINEARMIXERSTATE_GET_EXTRAPOLATESPEED_OFFSET UNITYSDK_OFFSET(0x4AECA0)
#define ANIMANCER_LINEARMIXERSTATE_GET_PARAMETERCOUNT_OFFSET UNITYSDK_OFFSET(0x4AECB0)
#define ANIMANCER_LINEARMIXERSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4AECC0)
#define ANIMANCER_LINEARMIXERSTATE_CLONE_OFFSET UNITYSDK_OFFSET(0x4AED10)
#define ANIMANCER_LINEARMIXERSTATE_APPENDDETAILS_OFFSET UNITYSDK_OFFSET(0x4AEE10)
#define ANIMANCER_LINEARMIXERSTATE_ANIMANCER.ICOPYABLE_ANIMANCER.LINEARMIXERSTATE_.COPYFROM_OFFSET UNITYSDK_OFFSET(0x4AEEB0)
#define ANIMANCER_LINEARMIXERSTATE_SETPARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x4AEF60)
#define ANIMANCER_LINEARMIXERSTATE_FORCERECALCULATEWEIGHTS_OFFSET UNITYSDK_OFFSET(0x4AEFF0)
#define ANIMANCER_LINEARMIXERSTATE_GETPARAMETERERROR_OFFSET UNITYSDK_OFFSET(0x4AF3E0)

namespace Animancer
{
	inline static constexpr unsigned int LinearMixerState_TypeDefinitionIndex = 35161;

	class LinearMixerState : public <VerboseAsync>d__13
	{
	public:
		::System::Boolean _ExtrapolateSpeed; // 0xB0

		::System::Object* GetParameterValue(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_LINEARMIXERSTATE_GETPARAMETERVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void AssertThresholdsSorted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_LINEARMIXERSTATE_ASSERTTHRESHOLDSSORTED_OFFSET))(nullptr);
		}

		::UnityEngine::AnimatorControllerParameterType* GetParameterType(::System::Int32 arg)
		{
			return (return (::UnityEngine::AnimatorControllerParameterType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_LINEARMIXERSTATE_GETPARAMETERTYPE_OFFSET))(arg, nullptr);
		}

		::System::String* GetParameterName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_LINEARMIXERSTATE_GETPARAMETERNAME_OFFSET))(arg, nullptr);
		}

		::System::Void set_ExtrapolateSpeed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_LINEARMIXERSTATE_SET_EXTRAPOLATESPEED_OFFSET))(arg, nullptr);
		}

		::Animancer::LinearMixerState* AssignLinearThresholds(::System::Single arg, ::System::Single arg)
		{
			return (return (::Animancer::LinearMixerState*(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_LINEARMIXERSTATE_ASSIGNLINEARTHRESHOLDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_ExtrapolateSpeed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_LINEARMIXERSTATE_GET_EXTRAPOLATESPEED_OFFSET))(nullptr);
		}

		::System::Int32 get_ParameterCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_LINEARMIXERSTATE_GET_PARAMETERCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_LINEARMIXERSTATE_.CTOR_OFFSET))(nullptr);
		}

		::Animancer::AnimancerState* Clone(::Animancer::AnimancerPlayable* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::Animancer::AnimancerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_LINEARMIXERSTATE_CLONE_OFFSET))(arg, nullptr);
		}

		::System::Void AppendDetails(::System::Text::StringBuilder* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_LINEARMIXERSTATE_APPENDDETAILS_OFFSET))(arg, str, nullptr);
		}

		::System::Void Animancer.ICopyable_Animancer.LinearMixerState_.CopyFrom(::Animancer::LinearMixerState* arg)
		{
			((::System::Void(*)(::Animancer::LinearMixerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_LINEARMIXERSTATE_ANIMANCER.ICOPYABLE_ANIMANCER.LINEARMIXERSTATE_.COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Void SetParameterValue(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_LINEARMIXERSTATE_SETPARAMETERVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ForceRecalculateWeights()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_LINEARMIXERSTATE_FORCERECALCULATEWEIGHTS_OFFSET))(nullptr);
		}

		::System::String* GetParameterError(::System::Single arg)
		{
			return (return (::System::String*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_LINEARMIXERSTATE_GETPARAMETERERROR_OFFSET))(arg, nullptr);
		}

	};
}

