#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class RuntimeAnimatorController; }
namespace Animancer { class AnimancerState; }
namespace Animancer { class AnimancerPlayable; }

#define ANIMANCER_FLOAT1CONTROLLERSTATE_GET_PARAMETERID_OFFSET UNITYSDK_OFFSET(0x4924D0)
#define ANIMANCER_FLOAT1CONTROLLERSTATE_SET_PARAMETERID_OFFSET UNITYSDK_OFFSET(0x4924E0)
#define ANIMANCER_FLOAT1CONTROLLERSTATE_GET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x492500)
#define ANIMANCER_FLOAT1CONTROLLERSTATE_SET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x492570)
#define ANIMANCER_FLOAT1CONTROLLERSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4925E0)
#define ANIMANCER_FLOAT1CONTROLLERSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x492630)
#define ANIMANCER_FLOAT1CONTROLLERSTATE_GET_PARAMETERCOUNT_OFFSET UNITYSDK_OFFSET(0x492690)
#define ANIMANCER_FLOAT1CONTROLLERSTATE_GETPARAMETERHASH_OFFSET UNITYSDK_OFFSET(0x4926A0)
#define ANIMANCER_FLOAT1CONTROLLERSTATE_CLONE_OFFSET UNITYSDK_OFFSET(0x4926B0)

namespace Animancer
{
	inline static constexpr unsigned int Float1ControllerState_TypeDefinitionIndex = 35104;

	class Float1ControllerState : public Il2CppObject
	{
	public:
		ParameterID* _ParameterID; // 0xB8

		ParameterID* get_ParameterID()
		{
			return (return (ParameterID*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT1CONTROLLERSTATE_GET_PARAMETERID_OFFSET))(nullptr);
		}

		::System::Void set_ParameterID(ParameterID* arg)
		{
			((::System::Void(*)(ParameterID*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT1CONTROLLERSTATE_SET_PARAMETERID_OFFSET))(arg, nullptr);
		}

		::System::Single get_Parameter()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT1CONTROLLERSTATE_GET_PARAMETER_OFFSET))(nullptr);
		}

		::System::Void set_Parameter(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT1CONTROLLERSTATE_SET_PARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::RuntimeAnimatorController* arg, ParameterID* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::UnityEngine::RuntimeAnimatorController*, ParameterID*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT1CONTROLLERSTATE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::RuntimeAnimatorController* arg, ParameterID* arg)
		{
			((::System::Void(*)(::UnityEngine::RuntimeAnimatorController*, ParameterID*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT1CONTROLLERSTATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_ParameterCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT1CONTROLLERSTATE_GET_PARAMETERCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 GetParameterHash(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT1CONTROLLERSTATE_GETPARAMETERHASH_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* Clone(::Animancer::AnimancerPlayable* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::Animancer::AnimancerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT1CONTROLLERSTATE_CLONE_OFFSET))(arg, nullptr);
		}

	};
}

