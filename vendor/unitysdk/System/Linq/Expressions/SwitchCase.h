#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_SWITCHCASE_GET_TESTVALUES_OFFSET UNITYSDK_OFFSET(0x9666710)
#define SYSTEM_LINQ_EXPRESSIONS_SWITCHCASE_GET_BODY_OFFSET UNITYSDK_OFFSET(0x9666720)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int SwitchCase_TypeDefinitionIndex = 33113;

	class SwitchCase : public Il2CppObject
	{
	public:
		Il2CppObject* _TestValues_k__BackingField; // 0x10
		::System::Linq::Expressions::Expression* _Body_k__BackingField; // 0x18

		Il2CppObject* get_TestValues()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SWITCHCASE_GET_TESTVALUES_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* get_Body()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_SWITCHCASE_GET_BODY_OFFSET))(nullptr);
		}

	};
}

