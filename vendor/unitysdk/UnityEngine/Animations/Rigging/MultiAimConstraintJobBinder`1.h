#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Animations::Rigging { class MultiAimConstraintJob; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Component; }

#define UNITYENGINE_ANIMATIONS_RIGGING_MULTIAIMCONSTRAINTJOBBINDER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_MULTIAIMCONSTRAINTJOBBINDER`1_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_RIGGING_MULTIAIMCONSTRAINTJOBBINDER`1_DESTROY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int MultiAimConstraintJobBinder`1_TypeDefinitionIndex = 37155;

	class MultiAimConstraintJobBinder`1 : public ::FlatData::CouponStuffExcelTable
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_MULTIAIMCONSTRAINTJOBBINDER`1_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Animations::Rigging::MultiAimConstraintJob* Create(::UnityEngine::Animator* arg, Il2CppObject&* arg, ::UnityEngine::Component* arg)
		{
			return (return (::UnityEngine::Animations::Rigging::MultiAimConstraintJob*(*)(::UnityEngine::Animator*, Il2CppObject&*, ::UnityEngine::Component*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_MULTIAIMCONSTRAINTJOBBINDER`1_CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Destroy(::UnityEngine::Animations::Rigging::MultiAimConstraintJob* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::Rigging::MultiAimConstraintJob*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_MULTIAIMCONSTRAINTJOBBINDER`1_DESTROY_OFFSET))(arg, nullptr);
		}

	};
}

