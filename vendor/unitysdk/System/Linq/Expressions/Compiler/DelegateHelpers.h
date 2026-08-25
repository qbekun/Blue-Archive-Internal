#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_MAKEDELEGATETYPE_OFFSET UNITYSDK_OFFSET(0x96B1930)
#define SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_NEXTTYPEINFO_OFFSET UNITYSDK_OFFSET(0x96B1BA0)
#define SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_TRYMAKEVBSTYLEDCALLSITE_OFFSET UNITYSDK_OFFSET(0x96B1EE0)
#define SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_MAKENEWDELEGATE_OFFSET UNITYSDK_OFFSET(0x96B1CE0)
#define SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_GETFUNCTYPE_OFFSET UNITYSDK_OFFSET(0x96B2610)
#define SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_GETACTIONTYPE_OFFSET UNITYSDK_OFFSET(0x96B2290)
#define SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_MAKEDEFERREDSITEDELEGATE_OFFSET UNITYSDK_OFFSET(0x96B2970)
#define SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_ISBYREF_OFFSET UNITYSDK_OFFSET(0x96B2F70)
#define SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_MAKENEWCUSTOMDELEGATE_OFFSET UNITYSDK_OFFSET(0x96B2240)
#define SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x96B2FF0)

namespace System::Linq::Expressions::Compiler
{
	inline static constexpr unsigned int DelegateHelpers_TypeDefinitionIndex = 33517;

	class DelegateHelpers : public Il2CppObject
	{
	public:
		TypeInfo* _DelegateCache; // 0x0

		::System::Type* MakeDelegateType(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Type*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_MAKEDELEGATETYPE_OFFSET))(arg, nullptr);
		}

		TypeInfo* NextTypeInfo(::System::Type* arg, TypeInfo* arg)
		{
			return (return (TypeInfo*(*)(::System::Type*, TypeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_NEXTTYPEINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* TryMakeVBStyledCallSite(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Type*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_TRYMAKEVBSTYLEDCALLSITE_OFFSET))(arg, nullptr);
		}

		::System::Type* MakeNewDelegate(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Type*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_MAKENEWDELEGATE_OFFSET))(arg, nullptr);
		}

		::System::Type* GetFuncType(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Type*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_GETFUNCTYPE_OFFSET))(arg, nullptr);
		}

		::System::Type* GetActionType(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Type*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_GETACTIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Type* MakeDeferredSiteDelegate(::Il2CppArray<::System::Object*>* arg, ::System::Type* arg)
		{
			return (return (::System::Type*(*)(::Il2CppArray<::System::Object*>*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_MAKEDEFERREDSITEDELEGATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsByRef(::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Boolean(*)(::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_ISBYREF_OFFSET))(arg, nullptr);
		}

		::System::Type* MakeNewCustomDelegate(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Type*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_MAKENEWCUSTOMDELEGATE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_COMPILER_DELEGATEHELPERS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

