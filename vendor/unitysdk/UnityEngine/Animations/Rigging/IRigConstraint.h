#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Component; }
namespace UnityEngine::Animations { class IAnimationJob; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::Animations::Rigging { class IAnimationJobData; }
namespace UnityEngine::Animations::Rigging { class IAnimationJobBinder; }

#define UNITYENGINE_ANIMATIONS_RIGGING_IRIGCONSTRAINT_GET_COMPONENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_IRIGCONSTRAINT_CREATEJOB_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_IRIGCONSTRAINT_ISVALID_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_IRIGCONSTRAINT_UPDATEJOB_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_IRIGCONSTRAINT_GET_DATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_IRIGCONSTRAINT_DESTROYJOB_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_IRIGCONSTRAINT_GET_BINDER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int IRigConstraint_TypeDefinitionIndex = 37169;

	class IRigConstraint : public Il2CppObject
	{
	public:
		::UnityEngine::Component* get_component()
		{
			return (return (::UnityEngine::Component*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_IRIGCONSTRAINT_GET_COMPONENT_OFFSET))(nullptr);
		}

		::UnityEngine::Animations::IAnimationJob* CreateJob(::UnityEngine::Animator* arg)
		{
			return (return (::UnityEngine::Animations::IAnimationJob*(*)(::UnityEngine::Animator*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_IRIGCONSTRAINT_CREATEJOB_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_IRIGCONSTRAINT_ISVALID_OFFSET))(nullptr);
		}

		::System::Void UpdateJob(::UnityEngine::Animations::IAnimationJob* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::IAnimationJob*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_IRIGCONSTRAINT_UPDATEJOB_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animations::Rigging::IAnimationJobData* get_data()
		{
			return (return (::UnityEngine::Animations::Rigging::IAnimationJobData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_IRIGCONSTRAINT_GET_DATA_OFFSET))(nullptr);
		}

		::System::Void DestroyJob(::UnityEngine::Animations::IAnimationJob* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::IAnimationJob*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_IRIGCONSTRAINT_DESTROYJOB_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animations::Rigging::IAnimationJobBinder* get_binder()
		{
			return (return (::UnityEngine::Animations::Rigging::IAnimationJobBinder*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_IRIGCONSTRAINT_GET_BINDER_OFFSET))(nullptr);
		}

	};
}

