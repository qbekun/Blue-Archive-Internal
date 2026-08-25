#pragma once
#include "../../unitysdk.h"

namespace MXField::Core { class FieldEntityController; }
namespace UnityEngine { class Transform; }

#define MXFIELD_ACTIONS_MOVEENTITYACTION_EXECUTEINCODE_OFFSET UNITYSDK_OFFSET(0xEEDCC0)
#define MXFIELD_ACTIONS_MOVEENTITYACTION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xEF0710)
#define MXFIELD_ACTIONS_MOVEENTITYACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF07A0)

namespace MXField::Actions
{
	inline static constexpr unsigned int MoveEntityAction_TypeDefinitionIndex = 11086;

	class MoveEntityAction : public Il2CppObject
	{
	public:
		::System::Boolean moveInstantly; // 0x40
		::System::Single speed; // 0x44
		::MXField::Core::FieldEntityController* entity; // 0x48
		::System::Boolean isPlayer; // 0x50
		::UnityEngine::Transform* targetLocation; // 0x58
		::System::Boolean ignoreTargetRotation; // 0x60

		::System::Collections::IEnumerator* ExecuteInCode()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_MOVEENTITYACTION_EXECUTEINCODE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_MOVEENTITYACTION_COEXECUTE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_MOVEENTITYACTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

