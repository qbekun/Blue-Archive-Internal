#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_ELEMENTINIT_GET_ADDMETHOD_OFFSET UNITYSDK_OFFSET(0x9655800)
#define SYSTEM_LINQ_EXPRESSIONS_ELEMENTINIT_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x9655810)
#define SYSTEM_LINQ_EXPRESSIONS_ELEMENTINIT_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x9655820)
#define SYSTEM_LINQ_EXPRESSIONS_ELEMENTINIT_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x9655870)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int ElementInit_TypeDefinitionIndex = 33046;

	class ElementInit : public Il2CppObject
	{
	public:
		::System::Reflection::MethodInfo* _AddMethod_k__BackingField; // 0x10
		Il2CppObject* _Arguments_k__BackingField; // 0x18

		::System::Reflection::MethodInfo* get_AddMethod()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ELEMENTINIT_GET_ADDMETHOD_OFFSET))(nullptr);
		}

		Il2CppObject* get_Arguments()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ELEMENTINIT_GET_ARGUMENTS_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* GetArgument(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ELEMENTINIT_GETARGUMENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ArgumentCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ELEMENTINIT_GET_ARGUMENTCOUNT_OFFSET))(nullptr);
		}

	};
}

