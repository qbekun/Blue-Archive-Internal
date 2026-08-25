#pragma once
#include "../../unitysdk.h"

namespace MXField::Actions { class FieldAction; }

#define MXFIELD_ACTIONS_COEMPTYACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEE8580)
#define MXFIELD_ACTIONS_COEMPTYACTION_ADDACTION_OFFSET UNITYSDK_OFFSET(0xEE86E0)
#define MXFIELD_ACTIONS_COEMPTYACTION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xEE8780)
#define MXFIELD_ACTIONS_COEMPTYACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEE8810)

namespace MXField::Actions
{
	inline static constexpr unsigned int CoEmptyAction_TypeDefinitionIndex = 11034;

	class CoEmptyAction : public Il2CppObject
	{
	public:
		Il2CppObject* actions; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_COEMPTYACTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AddAction(::MXField::Actions::FieldAction* arg)
		{
			((::System::Void(*)(::MXField::Actions::FieldAction*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_COEMPTYACTION_ADDACTION_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_COEMPTYACTION_COEXECUTE_OFFSET))(nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_COEMPTYACTION_EXECUTE_OFFSET))(nullptr);
		}

	};
}

