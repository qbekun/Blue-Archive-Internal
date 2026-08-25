#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x96B3950)
#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_GETEXPRESSION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_MERGE_OFFSET UNITYSDK_OFFSET(0x96B3960)
#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_GETTYPERESTRICTION_OFFSET UNITYSDK_OFFSET(0x96B3B40)
#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_GETTYPERESTRICTION_OFFSET UNITYSDK_OFFSET(0x96B3CB0)
#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_GETINSTANCERESTRICTION_OFFSET UNITYSDK_OFFSET(0x96B3F50)
#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_GETEXPRESSIONRESTRICTION_OFFSET UNITYSDK_OFFSET(0x96B40E0)
#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_COMBINE_OFFSET UNITYSDK_OFFSET(0x96B4280)
#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_TOEXPRESSION_OFFSET UNITYSDK_OFFSET(0x96B45F0)
#define SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x96B4610)

namespace System::Dynamic
{
	inline static constexpr unsigned int BindingRestrictions_TypeDefinitionIndex = 33541;

	class BindingRestrictions : public Il2CppObject
	{
	public:
		::System::Dynamic::BindingRestrictions* Empty; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_.CTOR_OFFSET))(nullptr);
		}

		::System::Linq::Expressions::Expression* GetExpression()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_GETEXPRESSION_OFFSET))(nullptr);
		}

		::System::Dynamic::BindingRestrictions* Merge(::System::Dynamic::BindingRestrictions* arg)
		{
			return (return (::System::Dynamic::BindingRestrictions*(*)(::System::Dynamic::BindingRestrictions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_MERGE_OFFSET))(arg, nullptr);
		}

		::System::Dynamic::BindingRestrictions* GetTypeRestriction(::System::Linq::Expressions::Expression* arg, ::System::Type* arg)
		{
			return (return (::System::Dynamic::BindingRestrictions*(*)(::System::Linq::Expressions::Expression*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_GETTYPERESTRICTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::BindingRestrictions* GetTypeRestriction(::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::BindingRestrictions*(*)(::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_GETTYPERESTRICTION_OFFSET))(arg, nullptr);
		}

		::System::Dynamic::BindingRestrictions* GetInstanceRestriction(::System::Linq::Expressions::Expression* arg, ::System::Object* arg)
		{
			return (return (::System::Dynamic::BindingRestrictions*(*)(::System::Linq::Expressions::Expression*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_GETINSTANCERESTRICTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::BindingRestrictions* GetExpressionRestriction(::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Dynamic::BindingRestrictions*(*)(::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_GETEXPRESSIONRESTRICTION_OFFSET))(arg, nullptr);
		}

		::System::Dynamic::BindingRestrictions* Combine(Il2CppObject* arg)
		{
			return (return (::System::Dynamic::BindingRestrictions*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_COMBINE_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Expression* ToExpression()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_TOEXPRESSION_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINDINGRESTRICTIONS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

