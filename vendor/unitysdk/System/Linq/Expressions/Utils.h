#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_UTILS_CONSTANT_OFFSET UNITYSDK_OFFSET(0x9668130)
#define SYSTEM_LINQ_EXPRESSIONS_UTILS_CONSTANT_OFFSET UNITYSDK_OFFSET(0x96681A0)
#define SYSTEM_LINQ_EXPRESSIONS_UTILS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9668330)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Utils_TypeDefinitionIndex = 33119;

	class Utils : public Il2CppObject
	{
	public:
		::System::Object* BoxedFalse; // 0x0
		::System::Object* BoxedTrue; // 0x8
		::System::Object* BoxedIntM1; // 0x10
		::System::Object* BoxedInt0; // 0x18
		::System::Object* BoxedInt1; // 0x20
		::System::Object* BoxedInt2; // 0x28
		::System::Object* BoxedInt3; // 0x30
		::System::Object* BoxedDefaultSByte; // 0x38
		::System::Object* BoxedDefaultChar; // 0x40
		::System::Object* BoxedDefaultInt16; // 0x48
		::System::Object* BoxedDefaultInt64; // 0x50
		::System::Object* BoxedDefaultByte; // 0x58
		::System::Object* BoxedDefaultUInt16; // 0x60
		::System::Object* BoxedDefaultUInt32; // 0x68
		::System::Object* BoxedDefaultUInt64; // 0x70
		::System::Object* BoxedDefaultSingle; // 0x78
		::System::Object* BoxedDefaultDouble; // 0x80
		::System::Object* BoxedDefaultDecimal; // 0x88
		::System::Object* BoxedDefaultDateTime; // 0x90
		::System::Linq::Expressions::ConstantExpression* s_true; // 0x98
		::System::Linq::Expressions::ConstantExpression* s_false; // 0xA0
		::System::Linq::Expressions::ConstantExpression* s_m1; // 0xA8
		::System::Linq::Expressions::ConstantExpression* s_0; // 0xB0
		::System::Linq::Expressions::ConstantExpression* s_1; // 0xB8
		::System::Linq::Expressions::ConstantExpression* s_2; // 0xC0
		::System::Linq::Expressions::ConstantExpression* s_3; // 0xC8
		::System::Linq::Expressions::DefaultExpression* Empty; // 0xD0
		::System::Linq::Expressions::ConstantExpression* Null; // 0xD8

		::System::Linq::Expressions::ConstantExpression* Constant(::System::Boolean arg)
		{
			return (return (::System::Linq::Expressions::ConstantExpression*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UTILS_CONSTANT_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::ConstantExpression* Constant(::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::ConstantExpression*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UTILS_CONSTANT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UTILS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

