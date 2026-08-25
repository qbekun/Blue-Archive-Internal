#pragma once
#include "unitysdk.h"

#define MERGEDRESTRICTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96B3AC0)
#define MERGEDRESTRICTION_GETEXPRESSION_OFFSET UNITYSDK_OFFSET(0x96B4AA0)

	inline static constexpr unsigned int MergedRestriction_TypeDefinitionIndex = 33536;

	class MergedRestriction : public Il2CppObject
	{
	public:
		::System::Dynamic::BindingRestrictions* Left; // 0x10
		::System::Dynamic::BindingRestrictions* Right; // 0x18

		::System::Void .ctor(::System::Dynamic::BindingRestrictions* arg, ::System::Dynamic::BindingRestrictions* arg)
		{
			((::System::Void(*)(::System::Dynamic::BindingRestrictions*, ::System::Dynamic::BindingRestrictions*, ::PVOID))((::PBYTE)hIl2Cpp + MERGEDRESTRICTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Linq::Expressions::Expression* GetExpression()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + MERGEDRESTRICTION_GETEXPRESSION_OFFSET))(nullptr);
		}

	};

