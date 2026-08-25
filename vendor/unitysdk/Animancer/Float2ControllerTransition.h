#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class RuntimeAnimatorController; }
namespace Animancer { class Float2ControllerState; }
namespace Animancer { class Float2ControllerTransition; }

#define ANIMANCER_FLOAT2CONTROLLERTRANSITION_GET_PARAMETERNAMEX_OFFSET UNITYSDK_OFFSET(0x4C0670)
#define ANIMANCER_FLOAT2CONTROLLERTRANSITION_GET_PARAMETERNAMEY_OFFSET UNITYSDK_OFFSET(0x4C0680)
#define ANIMANCER_FLOAT2CONTROLLERTRANSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C0690)
#define ANIMANCER_FLOAT2CONTROLLERTRANSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C06D0)
#define ANIMANCER_FLOAT2CONTROLLERTRANSITION_CREATESTATE_OFFSET UNITYSDK_OFFSET(0x4C0770)
#define ANIMANCER_FLOAT2CONTROLLERTRANSITION_COPYFROM_OFFSET UNITYSDK_OFFSET(0x4C0870)

namespace Animancer
{
	inline static constexpr unsigned int Float2ControllerTransition_TypeDefinitionIndex = 35232;

	class Float2ControllerTransition : public ::Mx::Timeline::TimelineHandleMessage
	{
	public:
		::System::String* _ParameterNameX; // 0x48
		::System::String* _ParameterNameY; // 0x50

		::System::String&* get_ParameterNameX()
		{
			return (return (::System::String&*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT2CONTROLLERTRANSITION_GET_PARAMETERNAMEX_OFFSET))(nullptr);
		}

		::System::String&* get_ParameterNameY()
		{
			return (return (::System::String&*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT2CONTROLLERTRANSITION_GET_PARAMETERNAMEY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT2CONTROLLERTRANSITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::RuntimeAnimatorController* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::RuntimeAnimatorController*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT2CONTROLLERTRANSITION_.CTOR_OFFSET))(arg, str, str, nullptr);
		}

		::Animancer::Float2ControllerState* CreateState()
		{
			return (return (::Animancer::Float2ControllerState*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT2CONTROLLERTRANSITION_CREATESTATE_OFFSET))(nullptr);
		}

		::System::Void CopyFrom(::Animancer::Float2ControllerTransition* arg)
		{
			((::System::Void(*)(::Animancer::Float2ControllerTransition*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT2CONTROLLERTRANSITION_COPYFROM_OFFSET))(arg, nullptr);
		}

	};
}

