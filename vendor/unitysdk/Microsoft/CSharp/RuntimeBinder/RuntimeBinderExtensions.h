#pragma once
#include "../../../unitysdk.h"

#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDEREXTENSIONS_ISNULLABLETYPE_OFFSET UNITYSDK_OFFSET(0x9090470)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDEREXTENSIONS_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x9090520)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDEREXTENSIONS_AREPARAMETERSEQUIVALENT_OFFSET UNITYSDK_OFFSET(0x9091430)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDEREXTENSIONS_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x90915F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDEREXTENSIONS_ISGENERICALLYEQUAL_OFFSET UNITYSDK_OFFSET(0x9090BF0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDEREXTENSIONS_ISGENERICALLYEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x9090DD0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDEREXTENSIONS_ISTYPEPARAMETEREQUIVALENTTOTYPEINST_OFFSET UNITYSDK_OFFSET(0x90916D0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDEREXTENSIONS_GETINDEXERNAME_OFFSET UNITYSDK_OFFSET(0x9091870)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDEREXTENSIONS_GETTYPEINDEXERNAME_OFFSET UNITYSDK_OFFSET(0x9091970)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDEREXTENSIONS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9091AC0)

namespace Microsoft::CSharp::RuntimeBinder
{
	inline static constexpr unsigned int RuntimeBinderExtensions_TypeDefinitionIndex = 34446;

	class RuntimeBinderExtensions : public Il2CppObject
	{
	public:
		Il2CppObject* s_MemberEquivalence; // 0x0

		::System::Boolean IsNullableType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDEREXTENSIONS_ISNULLABLETYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsEquivalentTo(::System::Reflection::MemberInfo* arg, ::System::Reflection::MemberInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDEREXTENSIONS_ISEQUIVALENTTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean AreParametersEquivalent(::System::Reflection::MethodBase* arg, ::System::Reflection::MethodBase* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MethodBase*, ::System::Reflection::MethodBase*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDEREXTENSIONS_AREPARAMETERSEQUIVALENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsEquivalentTo(::System::Reflection::ParameterInfo* arg, ::System::Reflection::ParameterInfo* arg, ::System::Reflection::MethodBase* arg, ::System::Reflection::MethodBase* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::ParameterInfo*, ::System::Reflection::ParameterInfo*, ::System::Reflection::MethodBase*, ::System::Reflection::MethodBase*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDEREXTENSIONS_ISEQUIVALENTTO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IsGenericallyEqual(::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDEREXTENSIONS_ISGENERICALLYEQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsGenericallyEquivalentTo(::System::Type* arg, ::System::Type* arg, ::System::Reflection::MemberInfo* arg, ::System::Reflection::MemberInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Type*, ::System::Reflection::MemberInfo*, ::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDEREXTENSIONS_ISGENERICALLYEQUIVALENTTO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IsTypeParameterEquivalentToTypeInst(::System::Type* arg, ::System::Type* arg, ::System::Reflection::MemberInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Type*, ::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDEREXTENSIONS_ISTYPEPARAMETEREQUIVALENTTOTYPEINST_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* GetIndexerName(::System::Type* arg)
		{
			return (return (::System::String*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDEREXTENSIONS_GETINDEXERNAME_OFFSET))(arg, nullptr);
		}

		::System::String* GetTypeIndexerName(::System::Type* arg)
		{
			return (return (::System::String*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDEREXTENSIONS_GETTYPEINDEXERNAME_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_RUNTIMEBINDEREXTENSIONS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

