#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class RuntimeAnimatorController; }
namespace Animancer { class Float1ControllerState; }
namespace Animancer { class Float1ControllerTransition; }

#define ANIMANCER_FLOAT1CONTROLLERTRANSITION_GET_PARAMETERNAME_OFFSET UNITYSDK_OFFSET(0x4C0400)
#define ANIMANCER_FLOAT1CONTROLLERTRANSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C0410)
#define ANIMANCER_FLOAT1CONTROLLERTRANSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C0450)
#define ANIMANCER_FLOAT1CONTROLLERTRANSITION_CREATESTATE_OFFSET UNITYSDK_OFFSET(0x4C04D0)
#define ANIMANCER_FLOAT1CONTROLLERTRANSITION_COPYFROM_OFFSET UNITYSDK_OFFSET(0x4C05B0)

namespace Animancer
{
	inline static constexpr unsigned int Float1ControllerTransition_TypeDefinitionIndex = 35229;

	class Float1ControllerTransition : public ::Mx::Timeline::TimelineHandlerBase`1
	{
	public:
		::System::String* _ParameterName; // 0x48

		::System::String&* get_ParameterName()
		{
			return (return (::System::String&*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT1CONTROLLERTRANSITION_GET_PARAMETERNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT1CONTROLLERTRANSITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::RuntimeAnimatorController* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::RuntimeAnimatorController*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT1CONTROLLERTRANSITION_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::Animancer::Float1ControllerState* CreateState()
		{
			return (return (::Animancer::Float1ControllerState*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT1CONTROLLERTRANSITION_CREATESTATE_OFFSET))(nullptr);
		}

		::System::Void CopyFrom(::Animancer::Float1ControllerTransition* arg)
		{
			((::System::Void(*)(::Animancer::Float1ControllerTransition*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT1CONTROLLERTRANSITION_COPYFROM_OFFSET))(arg, nullptr);
		}

	};
}

