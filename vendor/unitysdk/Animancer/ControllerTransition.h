#pragma once
#include "../unitysdk.h"

namespace Animancer { class ControllerState; }
namespace UnityEngine { class RuntimeAnimatorController; }
namespace Animancer { class ControllerTransition; }

#define ANIMANCER_CONTROLLERTRANSITION_CREATESTATE_OFFSET UNITYSDK_OFFSET(0x4C0150)
#define ANIMANCER_CONTROLLERTRANSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C0210)
#define ANIMANCER_CONTROLLERTRANSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C0250)
#define ANIMANCER_CONTROLLERTRANSITION_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x4C02C0)
#define ANIMANCER_CONTROLLERTRANSITION_COPYFROM_OFFSET UNITYSDK_OFFSET(0x4C0360)

namespace Animancer
{
	inline static constexpr unsigned int ControllerTransition_TypeDefinitionIndex = 35226;

	class ControllerTransition : public <<OnStopped>g__Release|18_0>d
	{
	public:
		::Animancer::ControllerState* CreateState()
		{
			return (return (::Animancer::ControllerState*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERTRANSITION_CREATESTATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERTRANSITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::RuntimeAnimatorController* arg)
		{
			((::System::Void(*)(::UnityEngine::RuntimeAnimatorController*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERTRANSITION_.CTOR_OFFSET))(arg, nullptr);
		}

		::Animancer::ControllerTransition* op_Implicit(::UnityEngine::RuntimeAnimatorController* arg)
		{
			return (return (::Animancer::ControllerTransition*(*)(::UnityEngine::RuntimeAnimatorController*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERTRANSITION_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Void CopyFrom(::Animancer::ControllerTransition* arg)
		{
			((::System::Void(*)(::Animancer::ControllerTransition*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERTRANSITION_COPYFROM_OFFSET))(arg, nullptr);
		}

	};
}

