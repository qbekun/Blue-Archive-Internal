#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class RuntimeAnimatorController; }
namespace Animancer { class AnimancerState; }
namespace UnityEngine { class RuntimeAnimatorController&; }
namespace UnityEngine { class Object; }

#define ANIMANCER_CONTROLLERTRANSITION`1_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_CONTROLLERTRANSITION`1_COPYFROM_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_CONTROLLERTRANSITION`1_APPLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_CONTROLLERTRANSITION`1_GET_ACTIONSONSTOP_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_CONTROLLERTRANSITION`1_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_CONTROLLERTRANSITION`1_GET_MAXIMUMDURATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_CONTROLLERTRANSITION`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_CONTROLLERTRANSITION`1_ANIMANCER.IANIMATIONCLIPCOLLECTION.GATHERANIMATIONCLIPS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_CONTROLLERTRANSITION`1_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_CONTROLLERTRANSITION`1_GET_MAINOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer
{
	inline static constexpr unsigned int ControllerTransition`1_TypeDefinitionIndex = 35225;

	class ControllerTransition`1 : public ::FlatData::ConstContentsExcelTable
	{
	public:
		::UnityEngine::RuntimeAnimatorController* _Controller; // 0x0
		::Il2CppArray<::System::Object*>* _ActionsOnStop; // 0x0

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERTRANSITION`1_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void CopyFrom(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERTRANSITION`1_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Void Apply(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERTRANSITION`1_APPLY_OFFSET))(arg, nullptr);
		}

		::System::Object[]&* get_ActionsOnStop()
		{
			return (return (::System::Object[]&*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERTRANSITION`1_GET_ACTIONSONSTOP_OFFSET))(nullptr);
		}

		::UnityEngine::RuntimeAnimatorController&* get_Controller()
		{
			return (return (::UnityEngine::RuntimeAnimatorController&*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERTRANSITION`1_GET_CONTROLLER_OFFSET))(nullptr);
		}

		::System::Single get_MaximumDuration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERTRANSITION`1_GET_MAXIMUMDURATION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERTRANSITION`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Animancer.IAnimationClipCollection.GatherAnimationClips(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERTRANSITION`1_ANIMANCER.IANIMATIONCLIPCOLLECTION.GATHERANIMATIONCLIPS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RuntimeAnimatorController* op_Implicit(Il2CppObject* arg)
		{
			return (return (::UnityEngine::RuntimeAnimatorController*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERTRANSITION`1_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Object* get_MainObject()
		{
			return (return (::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERTRANSITION`1_GET_MAINOBJECT_OFFSET))(nullptr);
		}

	};
}

