#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_SIGNATURETYPEEXTENSIONS_MATCHESPARAMETERTYPEEXACTLY_OFFSET UNITYSDK_OFFSET(0x9240D20)
#define SYSTEM_REFLECTION_SIGNATURETYPEEXTENSIONS_MATCHESEXACTLY_OFFSET UNITYSDK_OFFSET(0x9240DD0)
#define SYSTEM_REFLECTION_SIGNATURETYPEEXTENSIONS_TRYRESOLVEAGAINSTGENERICMETHOD_OFFSET UNITYSDK_OFFSET(0x92411B0)
#define SYSTEM_REFLECTION_SIGNATURETYPEEXTENSIONS_TRYRESOLVE_OFFSET UNITYSDK_OFFSET(0x92411F0)
#define SYSTEM_REFLECTION_SIGNATURETYPEEXTENSIONS_TRYMAKEARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x92418D0)
#define SYSTEM_REFLECTION_SIGNATURETYPEEXTENSIONS_TRYMAKEARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x92419A0)
#define SYSTEM_REFLECTION_SIGNATURETYPEEXTENSIONS_TRYMAKEBYREFTYPE_OFFSET UNITYSDK_OFFSET(0x9241A70)
#define SYSTEM_REFLECTION_SIGNATURETYPEEXTENSIONS_TRYMAKEPOINTERTYPE_OFFSET UNITYSDK_OFFSET(0x9241B40)
#define SYSTEM_REFLECTION_SIGNATURETYPEEXTENSIONS_TRYMAKEGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x9241C10)

namespace System::Reflection
{
	inline static constexpr unsigned int SignatureTypeExtensions_TypeDefinitionIndex = 24886;

	class SignatureTypeExtensions : public Il2CppObject
	{
	public:
		::System::Boolean MatchesParameterTypeExactly(::System::Type* arg, ::System::Reflection::ParameterInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Reflection::ParameterInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_SIGNATURETYPEEXTENSIONS_MATCHESPARAMETERTYPEEXACTLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean MatchesExactly(::System::Reflection::SignatureType* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::SignatureType*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_SIGNATURETYPEEXTENSIONS_MATCHESEXACTLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* TryResolveAgainstGenericMethod(::System::Reflection::SignatureType* arg, ::System::Reflection::MethodInfo* arg)
		{
			return (return (::System::Type*(*)(::System::Reflection::SignatureType*, ::System::Reflection::MethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_SIGNATURETYPEEXTENSIONS_TRYRESOLVEAGAINSTGENERICMETHOD_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* TryResolve(::System::Reflection::SignatureType* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Type*(*)(::System::Reflection::SignatureType*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_SIGNATURETYPEEXTENSIONS_TRYRESOLVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* TryMakeArrayType(::System::Type* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_SIGNATURETYPEEXTENSIONS_TRYMAKEARRAYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Type* TryMakeArrayType(::System::Type* arg, ::System::Int32 arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_SIGNATURETYPEEXTENSIONS_TRYMAKEARRAYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* TryMakeByRefType(::System::Type* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_SIGNATURETYPEEXTENSIONS_TRYMAKEBYREFTYPE_OFFSET))(arg, nullptr);
		}

		::System::Type* TryMakePointerType(::System::Type* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_SIGNATURETYPEEXTENSIONS_TRYMAKEPOINTERTYPE_OFFSET))(arg, nullptr);
		}

		::System::Type* TryMakeGenericType(::System::Type* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_SIGNATURETYPEEXTENSIONS_TRYMAKEGENERICTYPE_OFFSET))(arg, arg, nullptr);
		}

	};
}

