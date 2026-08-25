#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class RuntimeAnimatorController; }
namespace Animancer { class Float3ControllerState; }
namespace Animancer { class Float3ControllerTransition; }

#define ANIMANCER_FLOAT3CONTROLLERTRANSITION_GET_PARAMETERNAMEX_OFFSET UNITYSDK_OFFSET(0x4C0960)
#define ANIMANCER_FLOAT3CONTROLLERTRANSITION_GET_PARAMETERNAMEY_OFFSET UNITYSDK_OFFSET(0x4C0970)
#define ANIMANCER_FLOAT3CONTROLLERTRANSITION_GET_PARAMETERNAMEZ_OFFSET UNITYSDK_OFFSET(0x4C0980)
#define ANIMANCER_FLOAT3CONTROLLERTRANSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C0990)
#define ANIMANCER_FLOAT3CONTROLLERTRANSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C09D0)
#define ANIMANCER_FLOAT3CONTROLLERTRANSITION_CREATESTATE_OFFSET UNITYSDK_OFFSET(0x4C0A80)
#define ANIMANCER_FLOAT3CONTROLLERTRANSITION_COPYFROM_OFFSET UNITYSDK_OFFSET(0x4C0BC0)

namespace Animancer
{
	inline static constexpr unsigned int Float3ControllerTransition_TypeDefinitionIndex = 35235;

	class Float3ControllerTransition : public <>c__DisplayClass1_0
	{
	public:
		::System::String* _ParameterNameX; // 0x48
		::System::String* _ParameterNameY; // 0x50
		::System::String* _ParameterNameZ; // 0x58

		::System::String&* get_ParameterNameX()
		{
			return (return (::System::String&*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT3CONTROLLERTRANSITION_GET_PARAMETERNAMEX_OFFSET))(nullptr);
		}

		::System::String&* get_ParameterNameY()
		{
			return (return (::System::String&*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT3CONTROLLERTRANSITION_GET_PARAMETERNAMEY_OFFSET))(nullptr);
		}

		::System::String&* get_ParameterNameZ()
		{
			return (return (::System::String&*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT3CONTROLLERTRANSITION_GET_PARAMETERNAMEZ_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT3CONTROLLERTRANSITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::RuntimeAnimatorController* arg, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::RuntimeAnimatorController*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT3CONTROLLERTRANSITION_.CTOR_OFFSET))(arg, str, str, str, nullptr);
		}

		::Animancer::Float3ControllerState* CreateState()
		{
			return (return (::Animancer::Float3ControllerState*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT3CONTROLLERTRANSITION_CREATESTATE_OFFSET))(nullptr);
		}

		::System::Void CopyFrom(::Animancer::Float3ControllerTransition* arg)
		{
			((::System::Void(*)(::Animancer::Float3ControllerTransition*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT3CONTROLLERTRANSITION_COPYFROM_OFFSET))(arg, nullptr);
		}

	};
}

