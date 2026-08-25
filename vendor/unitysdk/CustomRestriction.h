#pragma once
#include "unitysdk.h"

#define CUSTOMRESTRICTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96B4220)
#define CUSTOMRESTRICTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x96B4C30)
#define CUSTOMRESTRICTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x96B4C80)
#define CUSTOMRESTRICTION_GETEXPRESSION_OFFSET UNITYSDK_OFFSET(0x96B4CB0)

	inline static constexpr unsigned int CustomRestriction_TypeDefinitionIndex = 33537;

	class CustomRestriction : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Expression* _expression; // 0x10

		::System::Void .ctor(::System::Linq::Expressions::Expression* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + CUSTOMRESTRICTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CUSTOMRESTRICTION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMRESTRICTION_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* GetExpression()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMRESTRICTION_GETEXPRESSION_OFFSET))(nullptr);
		}

	};

