#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Animations::Rigging { class IAnimationJobBinder; }
namespace UnityEngine::Animations { class IAnimationJob; }
namespace UnityEngine::Animations::Rigging { class IAnimationJobData; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Component; }

#define UNITYENGINE_ANIMATIONS_RIGGING_RIGCONSTRAINT`3_SET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGCONSTRAINT`3_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGCONSTRAINT`3_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGCONSTRAINT`3_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGCONSTRAINT`3_GET_DATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGCONSTRAINT`3_UNITYENGINE.ANIMATIONS.RIGGING.IRIGCONSTRAINT.GET_BINDER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGCONSTRAINT`3_UPDATEJOB_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGCONSTRAINT`3_UNITYENGINE.ANIMATIONS.RIGGING.IRIGCONSTRAINT.GET_DATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGCONSTRAINT`3_DESTROYJOB_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGCONSTRAINT`3_ISVALID_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGCONSTRAINT`3_CREATEJOB_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGCONSTRAINT`3_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGCONSTRAINT`3_UNITYENGINE.ANIMATIONS.RIGGING.IRIGCONSTRAINT.GET_COMPONENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGCONSTRAINT`3_RESET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int RigConstraint`3_TypeDefinitionIndex = 37177;

	class RigConstraint`3 : public Il2CppObject
	{
	public:
		::System::Single m_Weight; // 0x0
		Il2CppObject* m_Data; // 0x0
		Il2CppObject* s_Binder; // 0x0

		::System::Void set_weight(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGCONSTRAINT`3_SET_WEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGCONSTRAINT`3_.CCTOR_OFFSET))(nullptr);
		}

		::System::Single get_weight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGCONSTRAINT`3_GET_WEIGHT_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGCONSTRAINT`3_ONVALIDATE_OFFSET))(nullptr);
		}

		Il2CppObject&* get_data()
		{
			return (return (Il2CppObject&*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGCONSTRAINT`3_GET_DATA_OFFSET))(nullptr);
		}

		::UnityEngine::Animations::Rigging::IAnimationJobBinder* UnityEngine.Animations.Rigging.IRigConstraint.get_binder()
		{
			return (return (::UnityEngine::Animations::Rigging::IAnimationJobBinder*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGCONSTRAINT`3_UNITYENGINE.ANIMATIONS.RIGGING.IRIGCONSTRAINT.GET_BINDER_OFFSET))(nullptr);
		}

		::System::Void UpdateJob(::UnityEngine::Animations::IAnimationJob* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::IAnimationJob*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGCONSTRAINT`3_UPDATEJOB_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animations::Rigging::IAnimationJobData* UnityEngine.Animations.Rigging.IRigConstraint.get_data()
		{
			return (return (::UnityEngine::Animations::Rigging::IAnimationJobData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGCONSTRAINT`3_UNITYENGINE.ANIMATIONS.RIGGING.IRIGCONSTRAINT.GET_DATA_OFFSET))(nullptr);
		}

		::System::Void DestroyJob(::UnityEngine::Animations::IAnimationJob* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::IAnimationJob*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGCONSTRAINT`3_DESTROYJOB_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGCONSTRAINT`3_ISVALID_OFFSET))(nullptr);
		}

		::UnityEngine::Animations::IAnimationJob* CreateJob(::UnityEngine::Animator* arg)
		{
			return (return (::UnityEngine::Animations::IAnimationJob*(*)(::UnityEngine::Animator*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGCONSTRAINT`3_CREATEJOB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGCONSTRAINT`3_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Component* UnityEngine.Animations.Rigging.IRigConstraint.get_component()
		{
			return (return (::UnityEngine::Component*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGCONSTRAINT`3_UNITYENGINE.ANIMATIONS.RIGGING.IRIGCONSTRAINT.GET_COMPONENT_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGCONSTRAINT`3_RESET_OFFSET))(nullptr);
		}

	};
}

