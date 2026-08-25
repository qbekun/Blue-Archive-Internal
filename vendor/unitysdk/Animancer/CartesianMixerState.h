#pragma once
#include "../unitysdk.h"

namespace Animancer { class AnimancerState; }
namespace Animancer { class AnimancerPlayable; }
namespace UnityEngine { class Vector2; }
namespace Animancer { class CartesianMixerState; }
namespace UnityEngine { class AnimatorControllerParameterType; }

#define ANIMANCER_CARTESIANMIXERSTATE_CLONE_OFFSET UNITYSDK_OFFSET(0x4AC6F0)
#define ANIMANCER_CARTESIANMIXERSTATE_GETPARAMETERERROR_OFFSET UNITYSDK_OFFSET(0x4AC840)
#define ANIMANCER_CARTESIANMIXERSTATE_GET_PARAMETERCOUNT_OFFSET UNITYSDK_OFFSET(0x4AC890)
#define ANIMANCER_CARTESIANMIXERSTATE_GET_PARAMETERX_OFFSET UNITYSDK_OFFSET(0x4AC8A0)
#define ANIMANCER_CARTESIANMIXERSTATE_SET_PARAMETERY_OFFSET UNITYSDK_OFFSET(0x4AC8E0)
#define ANIMANCER_CARTESIANMIXERSTATE_APPENDPARAMETER_OFFSET UNITYSDK_OFFSET(0x4AC950)
#define ANIMANCER_CARTESIANMIXERSTATE_GET_PARAMETERY_OFFSET UNITYSDK_OFFSET(0x4AC9F0)
#define ANIMANCER_CARTESIANMIXERSTATE_GETPARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x4ACA30)
#define ANIMANCER_CARTESIANMIXERSTATE_CALCULATEBLENDFACTORS_OFFSET UNITYSDK_OFFSET(0x4ACB30)
#define ANIMANCER_CARTESIANMIXERSTATE_SETPARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x4ACE00)
#define ANIMANCER_CARTESIANMIXERSTATE_GETPARAMETERNAME_OFFSET UNITYSDK_OFFSET(0x4AD010)
#define ANIMANCER_CARTESIANMIXERSTATE_ANIMANCER.ICOPYABLE_ANIMANCER.CARTESIANMIXERSTATE_.COPYFROM_OFFSET UNITYSDK_OFFSET(0x4AD0C0)
#define ANIMANCER_CARTESIANMIXERSTATE_FORCERECALCULATEWEIGHTS_OFFSET UNITYSDK_OFFSET(0x4AD190)
#define ANIMANCER_CARTESIANMIXERSTATE_GETPARAMETERTYPE_OFFSET UNITYSDK_OFFSET(0x4AD560)
#define ANIMANCER_CARTESIANMIXERSTATE_ONTHRESHOLDSCHANGED_OFFSET UNITYSDK_OFFSET(0x4AD570)
#define ANIMANCER_CARTESIANMIXERSTATE_SET_PARAMETERX_OFFSET UNITYSDK_OFFSET(0x4ACFA0)
#define ANIMANCER_CARTESIANMIXERSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4AC7F0)

namespace Animancer
{
	inline static constexpr unsigned int CartesianMixerState_TypeDefinitionIndex = 35158;

	class CartesianMixerState : public <ErrorAsync>d__15
	{
	public:
		::Il2CppArray<::System::Object*>* _BlendFactors; // 0xB0
		::System::Boolean _BlendFactorsDirty; // 0xB8

		::Animancer::AnimancerState* Clone(::Animancer::AnimancerPlayable* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::Animancer::AnimancerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CARTESIANMIXERSTATE_CLONE_OFFSET))(arg, nullptr);
		}

		::System::String* GetParameterError(::UnityEngine::Vector2* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CARTESIANMIXERSTATE_GETPARAMETERERROR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParameterCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CARTESIANMIXERSTATE_GET_PARAMETERCOUNT_OFFSET))(nullptr);
		}

		::System::Single get_ParameterX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CARTESIANMIXERSTATE_GET_PARAMETERX_OFFSET))(nullptr);
		}

		::System::Void set_ParameterY(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CARTESIANMIXERSTATE_SET_PARAMETERY_OFFSET))(arg, nullptr);
		}

		::System::Void AppendParameter(::System::Text::StringBuilder* arg, ::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CARTESIANMIXERSTATE_APPENDPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::System::Single get_ParameterY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CARTESIANMIXERSTATE_GET_PARAMETERY_OFFSET))(nullptr);
		}

		::System::Object* GetParameterValue(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CARTESIANMIXERSTATE_GETPARAMETERVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void CalculateBlendFactors(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CARTESIANMIXERSTATE_CALCULATEBLENDFACTORS_OFFSET))(arg, nullptr);
		}

		::System::Void SetParameterValue(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CARTESIANMIXERSTATE_SETPARAMETERVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetParameterName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CARTESIANMIXERSTATE_GETPARAMETERNAME_OFFSET))(arg, nullptr);
		}

		::System::Void Animancer.ICopyable_Animancer.CartesianMixerState_.CopyFrom(::Animancer::CartesianMixerState* arg)
		{
			((::System::Void(*)(::Animancer::CartesianMixerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CARTESIANMIXERSTATE_ANIMANCER.ICOPYABLE_ANIMANCER.CARTESIANMIXERSTATE_.COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Void ForceRecalculateWeights()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CARTESIANMIXERSTATE_FORCERECALCULATEWEIGHTS_OFFSET))(nullptr);
		}

		::UnityEngine::AnimatorControllerParameterType* GetParameterType(::System::Int32 arg)
		{
			return (return (::UnityEngine::AnimatorControllerParameterType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CARTESIANMIXERSTATE_GETPARAMETERTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void OnThresholdsChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CARTESIANMIXERSTATE_ONTHRESHOLDSCHANGED_OFFSET))(nullptr);
		}

		::System::Void set_ParameterX(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CARTESIANMIXERSTATE_SET_PARAMETERX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CARTESIANMIXERSTATE_.CTOR_OFFSET))(nullptr);
		}

	};
}

