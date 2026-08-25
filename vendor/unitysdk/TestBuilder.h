#pragma once
#include "unitysdk.h"

#define TESTBUILDER_APPEND_OFFSET UNITYSDK_OFFSET(0x96B4700)
#define TESTBUILDER_TOEXPRESSION_OFFSET UNITYSDK_OFFSET(0x96B4900)
#define TESTBUILDER_PUSH_OFFSET UNITYSDK_OFFSET(0x96B4780)
#define TESTBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x96B49D0)

	inline static constexpr unsigned int TestBuilder_TypeDefinitionIndex = 33535;

	class TestBuilder : public Il2CppObject
	{
	public:
		Il2CppObject* _unique; // 0x10
		Il2CppObject* _tests; // 0x18

		::System::Void Append(::System::Dynamic::BindingRestrictions* arg)
		{
			((::System::Void(*)(::System::Dynamic::BindingRestrictions*, ::PVOID))((::PBYTE)hIl2Cpp + TESTBUILDER_APPEND_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* ToExpression()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTBUILDER_TOEXPRESSION_OFFSET))(nullptr);
		}

		::System::Void Push(::System::Linq::Expressions::Expression* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TESTBUILDER_PUSH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTBUILDER_.CTOR_OFFSET))(nullptr);
		}

	};

