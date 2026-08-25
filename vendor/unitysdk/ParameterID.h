#pragma once
#include "unitysdk.h"

namespace UnityEngine { class RuntimeAnimatorController; }
namespace UnityEngine { class AnimatorControllerParameterType; }

#define PARAMETERID_.CTOR_OFFSET UNITYSDK_OFFSET(0x492300)
#define PARAMETERID_.CTOR_OFFSET UNITYSDK_OFFSET(0x492330)
#define PARAMETERID_.CTOR_OFFSET UNITYSDK_OFFSET(0x492360)
#define PARAMETERID_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x492380)
#define PARAMETERID_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x4923C0)
#define PARAMETERID_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x4923F0)
#define PARAMETERID_VALIDATEHASPARAMETER_OFFSET UNITYSDK_OFFSET(0x492400)
#define PARAMETERID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x492410)

	inline static constexpr unsigned int ParameterID_TypeDefinitionIndex = 35101;

	class ParameterID : public Il2CppObject
	{
	public:
		::System::String* Name; // 0x10
		::System::Int32 Hash; // 0x18

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PARAMETERID_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PARAMETERID_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PARAMETERID_.CTOR_OFFSET))(str, arg, nullptr);
		}

		ParameterID* op_Implicit(::System::String* str)
		{
			return (return (ParameterID*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PARAMETERID_OP_IMPLICIT_OFFSET))(str, nullptr);
		}

		ParameterID* op_Implicit(::System::Int32 arg)
		{
			return (return (ParameterID*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PARAMETERID_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Int32 op_Implicit(ParameterID* arg)
		{
			return (return (::System::Int32(*)(ParameterID*, ::PVOID))((::PBYTE)hIl2Cpp + PARAMETERID_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateHasParameter(::UnityEngine::RuntimeAnimatorController* arg, ::UnityEngine::AnimatorControllerParameterType* arg)
		{
			((::System::Void(*)(::UnityEngine::RuntimeAnimatorController*, ::UnityEngine::AnimatorControllerParameterType*, ::PVOID))((::PBYTE)hIl2Cpp + PARAMETERID_VALIDATEHASPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARAMETERID_TOSTRING_OFFSET))(nullptr);
		}

	};

