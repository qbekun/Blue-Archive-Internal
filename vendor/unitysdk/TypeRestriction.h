#pragma once
#include "unitysdk.h"

#define TYPERESTRICTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96B3C30)
#define TYPERESTRICTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x96B4CC0)
#define TYPERESTRICTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x96B4D60)
#define TYPERESTRICTION_GETEXPRESSION_OFFSET UNITYSDK_OFFSET(0x96B4DC0)

	inline static constexpr unsigned int TypeRestriction_TypeDefinitionIndex = 33538;

	class TypeRestriction : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Expression* _expression; // 0x10
		::System::Type* _type; // 0x18

		::System::Void .ctor(::System::Linq::Expressions::Expression* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + TYPERESTRICTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TYPERESTRICTION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TYPERESTRICTION_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* GetExpression()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + TYPERESTRICTION_GETEXPRESSION_OFFSET))(nullptr);
		}

	};

