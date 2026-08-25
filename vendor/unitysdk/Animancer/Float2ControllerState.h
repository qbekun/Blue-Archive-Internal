#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class RuntimeAnimatorController; }
namespace Animancer { class AnimancerState; }
namespace Animancer { class AnimancerPlayable; }

#define ANIMANCER_FLOAT2CONTROLLERSTATE_GET_PARAMETERXID_OFFSET UNITYSDK_OFFSET(0x4927F0)
#define ANIMANCER_FLOAT2CONTROLLERSTATE_SET_PARAMETERXID_OFFSET UNITYSDK_OFFSET(0x492800)
#define ANIMANCER_FLOAT2CONTROLLERSTATE_GET_PARAMETERX_OFFSET UNITYSDK_OFFSET(0x492820)
#define ANIMANCER_FLOAT2CONTROLLERSTATE_SET_PARAMETERX_OFFSET UNITYSDK_OFFSET(0x492890)
#define ANIMANCER_FLOAT2CONTROLLERSTATE_GET_PARAMETERYID_OFFSET UNITYSDK_OFFSET(0x492900)
#define ANIMANCER_FLOAT2CONTROLLERSTATE_SET_PARAMETERYID_OFFSET UNITYSDK_OFFSET(0x492910)
#define ANIMANCER_FLOAT2CONTROLLERSTATE_GET_PARAMETERY_OFFSET UNITYSDK_OFFSET(0x492930)
#define ANIMANCER_FLOAT2CONTROLLERSTATE_SET_PARAMETERY_OFFSET UNITYSDK_OFFSET(0x4929A0)
#define ANIMANCER_FLOAT2CONTROLLERSTATE_GET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x492A10)
#define ANIMANCER_FLOAT2CONTROLLERSTATE_SET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x492AF0)
#define ANIMANCER_FLOAT2CONTROLLERSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x492BE0)
#define ANIMANCER_FLOAT2CONTROLLERSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x492C50)
#define ANIMANCER_FLOAT2CONTROLLERSTATE_GET_PARAMETERCOUNT_OFFSET UNITYSDK_OFFSET(0x492CD0)
#define ANIMANCER_FLOAT2CONTROLLERSTATE_GETPARAMETERHASH_OFFSET UNITYSDK_OFFSET(0x492CE0)
#define ANIMANCER_FLOAT2CONTROLLERSTATE_CLONE_OFFSET UNITYSDK_OFFSET(0x492D60)

namespace Animancer
{
	inline static constexpr unsigned int Float2ControllerState_TypeDefinitionIndex = 35106;

	class Float2ControllerState : public Il2CppObject
	{
	public:
		ParameterID* _ParameterXID; // 0xB8
		ParameterID* _ParameterYID; // 0xC8

		ParameterID* get_ParameterXID()
		{
			return (return (ParameterID*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT2CONTROLLERSTATE_GET_PARAMETERXID_OFFSET))(nullptr);
		}

		::System::Void set_ParameterXID(ParameterID* arg)
		{
			((::System::Void(*)(ParameterID*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT2CONTROLLERSTATE_SET_PARAMETERXID_OFFSET))(arg, nullptr);
		}

		::System::Single get_ParameterX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT2CONTROLLERSTATE_GET_PARAMETERX_OFFSET))(nullptr);
		}

		::System::Void set_ParameterX(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT2CONTROLLERSTATE_SET_PARAMETERX_OFFSET))(arg, nullptr);
		}

		ParameterID* get_ParameterYID()
		{
			return (return (ParameterID*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT2CONTROLLERSTATE_GET_PARAMETERYID_OFFSET))(nullptr);
		}

		::System::Void set_ParameterYID(ParameterID* arg)
		{
			((::System::Void(*)(ParameterID*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT2CONTROLLERSTATE_SET_PARAMETERYID_OFFSET))(arg, nullptr);
		}

		::System::Single get_ParameterY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT2CONTROLLERSTATE_GET_PARAMETERY_OFFSET))(nullptr);
		}

		::System::Void set_ParameterY(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT2CONTROLLERSTATE_SET_PARAMETERY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Parameter()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT2CONTROLLERSTATE_GET_PARAMETER_OFFSET))(nullptr);
		}

		::System::Void set_Parameter(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT2CONTROLLERSTATE_SET_PARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::RuntimeAnimatorController* arg, ParameterID* arg, ParameterID* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::UnityEngine::RuntimeAnimatorController*, ParameterID*, ParameterID*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT2CONTROLLERSTATE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::RuntimeAnimatorController* arg, ParameterID* arg, ParameterID* arg)
		{
			((::System::Void(*)(::UnityEngine::RuntimeAnimatorController*, ParameterID*, ParameterID*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT2CONTROLLERSTATE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_ParameterCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT2CONTROLLERSTATE_GET_PARAMETERCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 GetParameterHash(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT2CONTROLLERSTATE_GETPARAMETERHASH_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* Clone(::Animancer::AnimancerPlayable* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::Animancer::AnimancerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT2CONTROLLERSTATE_CLONE_OFFSET))(arg, nullptr);
		}

	};
}

