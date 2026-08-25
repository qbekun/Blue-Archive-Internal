#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class AnimatorControllerParameterType; }
namespace Animancer { class DirectionalMixerState; }
namespace Animancer { class AnimancerState; }
namespace Animancer { class AnimancerPlayable; }

#define ANIMANCER_DIRECTIONALMIXERSTATE_SET_PARAMETERX_OFFSET UNITYSDK_OFFSET(0x4AD5C0)
#define ANIMANCER_DIRECTIONALMIXERSTATE_ONTHRESHOLDSCHANGED_OFFSET UNITYSDK_OFFSET(0x4AD630)
#define ANIMANCER_DIRECTIONALMIXERSTATE_GETPARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x4AD680)
#define ANIMANCER_DIRECTIONALMIXERSTATE_SIGNEDANGLE_OFFSET UNITYSDK_OFFSET(0x4AD800)
#define ANIMANCER_DIRECTIONALMIXERSTATE_GETPARAMETERERROR_OFFSET UNITYSDK_OFFSET(0x4AD860)
#define ANIMANCER_DIRECTIONALMIXERSTATE_GET_PARAMETERX_OFFSET UNITYSDK_OFFSET(0x4AD780)
#define ANIMANCER_DIRECTIONALMIXERSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4AD8B0)
#define ANIMANCER_DIRECTIONALMIXERSTATE_GETPARAMETERTYPE_OFFSET UNITYSDK_OFFSET(0x4AD900)
#define ANIMANCER_DIRECTIONALMIXERSTATE_CALCULATEBLENDFACTORS_OFFSET UNITYSDK_OFFSET(0x4AD910)
#define ANIMANCER_DIRECTIONALMIXERSTATE_SET_PARAMETERY_OFFSET UNITYSDK_OFFSET(0x4ADDB0)
#define ANIMANCER_DIRECTIONALMIXERSTATE_GET_PARAMETERCOUNT_OFFSET UNITYSDK_OFFSET(0x4ADE20)
#define ANIMANCER_DIRECTIONALMIXERSTATE_GET_PARAMETERY_OFFSET UNITYSDK_OFFSET(0x4AD7C0)
#define ANIMANCER_DIRECTIONALMIXERSTATE_FORCERECALCULATEWEIGHTS_OFFSET UNITYSDK_OFFSET(0x4ADE30)
#define ANIMANCER_DIRECTIONALMIXERSTATE_ANIMANCER.ICOPYABLE_ANIMANCER.DIRECTIONALMIXERSTATE_.COPYFROM_OFFSET UNITYSDK_OFFSET(0x4AE330)
#define ANIMANCER_DIRECTIONALMIXERSTATE_APPENDPARAMETER_OFFSET UNITYSDK_OFFSET(0x4AE420)
#define ANIMANCER_DIRECTIONALMIXERSTATE_SETPARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x4AE4C0)
#define ANIMANCER_DIRECTIONALMIXERSTATE_CLONE_OFFSET UNITYSDK_OFFSET(0x4AE660)
#define ANIMANCER_DIRECTIONALMIXERSTATE_GETPARAMETERNAME_OFFSET UNITYSDK_OFFSET(0x4AE760)

namespace Animancer
{
	inline static constexpr unsigned int DirectionalMixerState_TypeDefinitionIndex = 35159;

	class DirectionalMixerState : public <ErrorAsync>d__15
	{
	public:
		::Il2CppArray<::System::Object*>* _ThresholdMagnitudes; // 0xB0
		::Il2CppArray<::System::Object*>* _BlendFactors; // 0xB8
		::System::Boolean _BlendFactorsDirty; // 0xC0
		::System::Single AngleFactor; // 0x0

		::System::Void set_ParameterX(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALMIXERSTATE_SET_PARAMETERX_OFFSET))(arg, nullptr);
		}

		::System::Void OnThresholdsChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALMIXERSTATE_ONTHRESHOLDSCHANGED_OFFSET))(nullptr);
		}

		::System::Object* GetParameterValue(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALMIXERSTATE_GETPARAMETERVALUE_OFFSET))(arg, nullptr);
		}

		::System::Single SignedAngle(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALMIXERSTATE_SIGNEDANGLE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetParameterError(::UnityEngine::Vector2* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALMIXERSTATE_GETPARAMETERERROR_OFFSET))(arg, nullptr);
		}

		::System::Single get_ParameterX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALMIXERSTATE_GET_PARAMETERX_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALMIXERSTATE_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::AnimatorControllerParameterType* GetParameterType(::System::Int32 arg)
		{
			return (return (::UnityEngine::AnimatorControllerParameterType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALMIXERSTATE_GETPARAMETERTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void CalculateBlendFactors(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALMIXERSTATE_CALCULATEBLENDFACTORS_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParameterY(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALMIXERSTATE_SET_PARAMETERY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParameterCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALMIXERSTATE_GET_PARAMETERCOUNT_OFFSET))(nullptr);
		}

		::System::Single get_ParameterY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALMIXERSTATE_GET_PARAMETERY_OFFSET))(nullptr);
		}

		::System::Void ForceRecalculateWeights()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALMIXERSTATE_FORCERECALCULATEWEIGHTS_OFFSET))(nullptr);
		}

		::System::Void Animancer.ICopyable_Animancer.DirectionalMixerState_.CopyFrom(::Animancer::DirectionalMixerState* arg)
		{
			((::System::Void(*)(::Animancer::DirectionalMixerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALMIXERSTATE_ANIMANCER.ICOPYABLE_ANIMANCER.DIRECTIONALMIXERSTATE_.COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Void AppendParameter(::System::Text::StringBuilder* arg, ::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALMIXERSTATE_APPENDPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetParameterValue(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALMIXERSTATE_SETPARAMETERVALUE_OFFSET))(arg, arg, nullptr);
		}

		::Animancer::AnimancerState* Clone(::Animancer::AnimancerPlayable* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::Animancer::AnimancerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALMIXERSTATE_CLONE_OFFSET))(arg, nullptr);
		}

		::System::String* GetParameterName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DIRECTIONALMIXERSTATE_GETPARAMETERNAME_OFFSET))(arg, nullptr);
		}

	};
}

