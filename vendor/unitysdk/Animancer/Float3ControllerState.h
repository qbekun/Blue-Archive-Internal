#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class RuntimeAnimatorController; }
namespace Animancer { class AnimancerState; }
namespace Animancer { class AnimancerPlayable; }

#define ANIMANCER_FLOAT3CONTROLLERSTATE_GET_PARAMETERXID_OFFSET UNITYSDK_OFFSET(0x492ED0)
#define ANIMANCER_FLOAT3CONTROLLERSTATE_SET_PARAMETERXID_OFFSET UNITYSDK_OFFSET(0x492EE0)
#define ANIMANCER_FLOAT3CONTROLLERSTATE_GET_PARAMETERX_OFFSET UNITYSDK_OFFSET(0x492F00)
#define ANIMANCER_FLOAT3CONTROLLERSTATE_SET_PARAMETERX_OFFSET UNITYSDK_OFFSET(0x492F70)
#define ANIMANCER_FLOAT3CONTROLLERSTATE_GET_PARAMETERYID_OFFSET UNITYSDK_OFFSET(0x492FE0)
#define ANIMANCER_FLOAT3CONTROLLERSTATE_SET_PARAMETERYID_OFFSET UNITYSDK_OFFSET(0x492FF0)
#define ANIMANCER_FLOAT3CONTROLLERSTATE_GET_PARAMETERY_OFFSET UNITYSDK_OFFSET(0x493010)
#define ANIMANCER_FLOAT3CONTROLLERSTATE_SET_PARAMETERY_OFFSET UNITYSDK_OFFSET(0x493080)
#define ANIMANCER_FLOAT3CONTROLLERSTATE_GET_PARAMETERZID_OFFSET UNITYSDK_OFFSET(0x4930F0)
#define ANIMANCER_FLOAT3CONTROLLERSTATE_SET_PARAMETERZID_OFFSET UNITYSDK_OFFSET(0x493100)
#define ANIMANCER_FLOAT3CONTROLLERSTATE_GET_PARAMETERZ_OFFSET UNITYSDK_OFFSET(0x493120)
#define ANIMANCER_FLOAT3CONTROLLERSTATE_SET_PARAMETERZ_OFFSET UNITYSDK_OFFSET(0x493190)
#define ANIMANCER_FLOAT3CONTROLLERSTATE_GET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x493200)
#define ANIMANCER_FLOAT3CONTROLLERSTATE_SET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x493340)
#define ANIMANCER_FLOAT3CONTROLLERSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x493480)
#define ANIMANCER_FLOAT3CONTROLLERSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x493510)
#define ANIMANCER_FLOAT3CONTROLLERSTATE_GET_PARAMETERCOUNT_OFFSET UNITYSDK_OFFSET(0x4935B0)
#define ANIMANCER_FLOAT3CONTROLLERSTATE_GETPARAMETERHASH_OFFSET UNITYSDK_OFFSET(0x4935C0)
#define ANIMANCER_FLOAT3CONTROLLERSTATE_CLONE_OFFSET UNITYSDK_OFFSET(0x493650)

namespace Animancer
{
	inline static constexpr unsigned int Float3ControllerState_TypeDefinitionIndex = 35108;

	class Float3ControllerState : public Il2CppObject
	{
	public:
		ParameterID* _ParameterXID; // 0xB8
		ParameterID* _ParameterYID; // 0xC8
		ParameterID* _ParameterZID; // 0xD8

		ParameterID* get_ParameterXID()
		{
			return (return (ParameterID*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT3CONTROLLERSTATE_GET_PARAMETERXID_OFFSET))(nullptr);
		}

		::System::Void set_ParameterXID(ParameterID* arg)
		{
			((::System::Void(*)(ParameterID*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT3CONTROLLERSTATE_SET_PARAMETERXID_OFFSET))(arg, nullptr);
		}

		::System::Single get_ParameterX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT3CONTROLLERSTATE_GET_PARAMETERX_OFFSET))(nullptr);
		}

		::System::Void set_ParameterX(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT3CONTROLLERSTATE_SET_PARAMETERX_OFFSET))(arg, nullptr);
		}

		ParameterID* get_ParameterYID()
		{
			return (return (ParameterID*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT3CONTROLLERSTATE_GET_PARAMETERYID_OFFSET))(nullptr);
		}

		::System::Void set_ParameterYID(ParameterID* arg)
		{
			((::System::Void(*)(ParameterID*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT3CONTROLLERSTATE_SET_PARAMETERYID_OFFSET))(arg, nullptr);
		}

		::System::Single get_ParameterY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT3CONTROLLERSTATE_GET_PARAMETERY_OFFSET))(nullptr);
		}

		::System::Void set_ParameterY(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT3CONTROLLERSTATE_SET_PARAMETERY_OFFSET))(arg, nullptr);
		}

		ParameterID* get_ParameterZID()
		{
			return (return (ParameterID*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT3CONTROLLERSTATE_GET_PARAMETERZID_OFFSET))(nullptr);
		}

		::System::Void set_ParameterZID(ParameterID* arg)
		{
			((::System::Void(*)(ParameterID*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT3CONTROLLERSTATE_SET_PARAMETERZID_OFFSET))(arg, nullptr);
		}

		::System::Single get_ParameterZ()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT3CONTROLLERSTATE_GET_PARAMETERZ_OFFSET))(nullptr);
		}

		::System::Void set_ParameterZ(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT3CONTROLLERSTATE_SET_PARAMETERZ_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_Parameter()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT3CONTROLLERSTATE_GET_PARAMETER_OFFSET))(nullptr);
		}

		::System::Void set_Parameter(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT3CONTROLLERSTATE_SET_PARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::RuntimeAnimatorController* arg, ParameterID* arg, ParameterID* arg, ParameterID* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::UnityEngine::RuntimeAnimatorController*, ParameterID*, ParameterID*, ParameterID*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT3CONTROLLERSTATE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::RuntimeAnimatorController* arg, ParameterID* arg, ParameterID* arg, ParameterID* arg)
		{
			((::System::Void(*)(::UnityEngine::RuntimeAnimatorController*, ParameterID*, ParameterID*, ParameterID*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT3CONTROLLERSTATE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_ParameterCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT3CONTROLLERSTATE_GET_PARAMETERCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 GetParameterHash(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT3CONTROLLERSTATE_GETPARAMETERHASH_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* Clone(::Animancer::AnimancerPlayable* arg)
		{
			return (return (::Animancer::AnimancerState*(*)(::Animancer::AnimancerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT3CONTROLLERSTATE_CLONE_OFFSET))(arg, nullptr);
		}

	};
}

