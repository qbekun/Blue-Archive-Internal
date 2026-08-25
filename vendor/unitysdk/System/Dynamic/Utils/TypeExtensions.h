#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS_GETANYSTATICMETHODVALIDATED_OFFSET UNITYSDK_OFFSET(0x96C0A40)
#define SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS_MATCHESARGUMENTTYPES_OFFSET UNITYSDK_OFFSET(0x96C0AE0)
#define SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS_GETRETURNTYPE_OFFSET UNITYSDK_OFFSET(0x96C0C00)
#define SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x96C0CA0)
#define SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS_GETPARAMETERSCACHED_OFFSET UNITYSDK_OFFSET(0x96BFD80)
#define SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x96C0CF0)

namespace System::Dynamic::Utils
{
	inline static constexpr unsigned int TypeExtensions_TypeDefinitionIndex = 33580;

	class TypeExtensions : public Il2CppObject
	{
	public:
		Il2CppObject* s_paramInfoCache; // 0x0

		::System::Reflection::MethodInfo* GetAnyStaticMethodValidated(::System::Type* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS_GETANYSTATICMETHODVALIDATED_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Boolean MatchesArgumentTypes(::System::Reflection::MethodInfo* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS_MATCHESARGUMENTTYPES_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* GetReturnType(::System::Reflection::MethodBase* arg)
		{
			return (return (::System::Type*(*)(::System::Reflection::MethodBase*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS_GETRETURNTYPE_OFFSET))(arg, nullptr);
		}

		::System::TypeCode* GetTypeCode(::System::Type* arg)
		{
			return (return (::System::TypeCode*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS_GETTYPECODE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetParametersCached(::System::Reflection::MethodBase* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Reflection::MethodBase*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS_GETPARAMETERSCACHED_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEEXTENSIONS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

