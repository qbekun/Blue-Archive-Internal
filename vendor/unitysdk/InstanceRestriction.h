#pragma once
#include "unitysdk.h"

#define INSTANCERESTRICTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96B4060)
#define INSTANCERESTRICTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x96B4E20)
#define INSTANCERESTRICTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x96B4E90)
#define INSTANCERESTRICTION_GETEXPRESSION_OFFSET UNITYSDK_OFFSET(0x96B4EE0)

	inline static constexpr unsigned int InstanceRestriction_TypeDefinitionIndex = 33539;

	class InstanceRestriction : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Expression* _expression; // 0x10
		::System::Object* _instance; // 0x18

		::System::Void .ctor(::System::Linq::Expressions::Expression* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + INSTANCERESTRICTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + INSTANCERESTRICTION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INSTANCERESTRICTION_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* GetExpression()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + INSTANCERESTRICTION_GETEXPRESSION_OFFSET))(nullptr);
		}

	};

