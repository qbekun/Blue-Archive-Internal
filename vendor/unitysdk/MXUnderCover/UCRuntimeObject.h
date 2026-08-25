#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class GameObject; }
class CoroutineAsyncOperation;
namespace MXUnderCover { class UCSkillLogic; }

#define MXUNDERCOVER_UCRUNTIMEOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB3B90)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCRuntimeObject_TypeDefinitionIndex = 9970;

	class UCRuntimeObject : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* InstanceObject; // 0x10
		::System::Boolean HasLifeTime; // 0x18
		::System::Single LiftTime; // 0x1C
		CoroutineAsyncOperation* LifeCycleCoroutine; // 0x20
		::MXUnderCover::UCSkillLogic* SkillLogic; // 0x28

		::System::Void .ctor(::UnityEngine::GameObject* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCRUNTIMEOBJECT_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

