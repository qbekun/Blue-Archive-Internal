#pragma once
#include "../../unitysdk.h"

#define MXFIELD_ACTIONS_OBJECTVISIBLEACTION_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0xEF0E70)
#define MXFIELD_ACTIONS_OBJECTVISIBLEACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEF1090)
#define MXFIELD_ACTIONS_OBJECTVISIBLEACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF1210)
#define MXFIELD_ACTIONS_OBJECTVISIBLEACTION_COSETVISIBLE_OFFSET UNITYSDK_OFFSET(0xEF1190)

namespace MXField::Actions
{
	inline static constexpr unsigned int ObjectVisibleAction_TypeDefinitionIndex = 11088;

	class ObjectVisibleAction : public Il2CppObject
	{
	public:
		::System::Single delay; // 0x30
		::System::Boolean isVisible; // 0x34
		Il2CppObject* targets; // 0x38

		::System::Void SetVisible(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_OBJECTVISIBLEACTION_SETVISIBLE_OFFSET))(arg, nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_OBJECTVISIBLEACTION_EXECUTE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_OBJECTVISIBLEACTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoSetVisible(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_OBJECTVISIBLEACTION_COSETVISIBLE_OFFSET))(arg, nullptr);
		}

	};
}

