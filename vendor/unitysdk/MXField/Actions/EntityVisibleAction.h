#pragma once
#include "../../unitysdk.h"

#define MXFIELD_ACTIONS_ENTITYVISIBLEACTION_COSETVISIBLE_OFFSET UNITYSDK_OFFSET(0xEEA960)
#define MXFIELD_ACTIONS_ENTITYVISIBLEACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEEAA00)
#define MXFIELD_ACTIONS_ENTITYVISIBLEACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEEAA90)
#define MXFIELD_ACTIONS_ENTITYVISIBLEACTION_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0xEEAB90)

namespace MXField::Actions
{
	inline static constexpr unsigned int EntityVisibleAction_TypeDefinitionIndex = 11043;

	class EntityVisibleAction : public Il2CppObject
	{
	public:
		::System::Single delay; // 0x30
		::System::Boolean isVisible; // 0x34
		Il2CppObject* targets; // 0x38

		::System::Collections::IEnumerator* CoSetVisible(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_ENTITYVISIBLEACTION_COSETVISIBLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_ENTITYVISIBLEACTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_ENTITYVISIBLEACTION_EXECUTE_OFFSET))(nullptr);
		}

		::System::Void SetVisible(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_ENTITYVISIBLEACTION_SETVISIBLE_OFFSET))(arg, nullptr);
		}

	};
}

