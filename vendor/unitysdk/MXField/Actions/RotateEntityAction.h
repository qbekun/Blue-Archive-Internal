#pragma once
#include "../../unitysdk.h"

namespace MXField::Core { class FieldAIController; }
namespace UnityEngine { class Vector3; }

#define MXFIELD_ACTIONS_ROTATEENTITYACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF4E00)
#define MXFIELD_ACTIONS_ROTATEENTITYACTION_GET_AICONTROLLER_OFFSET UNITYSDK_OFFSET(0xEF4E40)
#define MXFIELD_ACTIONS_ROTATEENTITYACTION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xEF4E50)
#define MXFIELD_ACTIONS_ROTATEENTITYACTION_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xEF4EE0)

namespace MXField::Actions
{
	inline static constexpr unsigned int RotateEntityAction_TypeDefinitionIndex = 11121;

	class RotateEntityAction : public Il2CppObject
	{
	public:
		::MXField::Core::FieldAIController* _AIController_k__BackingField; // 0x40
		::UnityEngine::Vector3* _Target_k__BackingField; // 0x48

		::System::Void .ctor(::MXField::Core::FieldAIController* arg, ::UnityEngine::Vector3* arg2)
		{
			((::System::Void(*)(::MXField::Core::FieldAIController*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_ROTATEENTITYACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MXField::Core::FieldAIController* get_AIController()
		{
			return ((::MXField::Core::FieldAIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_ROTATEENTITYACTION_GET_AICONTROLLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_ROTATEENTITYACTION_COEXECUTE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_Target()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_ROTATEENTITYACTION_GET_TARGET_OFFSET))(nullptr);
		}

	};
}

