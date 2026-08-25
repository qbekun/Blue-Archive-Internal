#pragma once
#include "../unitysdk.h"

#define SYSTEM_TYPEDREFERENCE_MAKETYPEDREFERENCE_OFFSET UNITYSDK_OFFSET(0x93AE5C0)
#define SYSTEM_TYPEDREFERENCE_INTERNALMAKETYPEDREFERENCE_OFFSET UNITYSDK_OFFSET(0x93AEA30)
#define SYSTEM_TYPEDREFERENCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x93AEA40)
#define SYSTEM_TYPEDREFERENCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x93AEAF0)
#define SYSTEM_TYPEDREFERENCE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x93AEB50)
#define SYSTEM_TYPEDREFERENCE_SETTYPEDREFERENCE_OFFSET UNITYSDK_OFFSET(0x93AEBA0)

namespace System
{
	inline static constexpr unsigned int TypedReference_TypeDefinitionIndex = 23944;

	class TypedReference : public Il2CppObject
	{
	public:
		::System::RuntimeTypeHandle* type; // 0x10
		::System::Int32 Value; // 0x18
		::System::Int32 Type; // 0x20

		::System::TypedReference* MakeTypedReference(::System::Object* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::TypedReference*(*)(::System::Object*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEDREFERENCE_MAKETYPEDREFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InternalMakeTypedReference(::System::Object** arg, ::System::Object* arg, ::Il2CppArray<::System::Object*>* arg, ::System::RuntimeType* arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEDREFERENCE_INTERNALMAKETYPEDREFERENCE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEDREFERENCE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEDREFERENCE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsNull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEDREFERENCE_GET_ISNULL_OFFSET))(nullptr);
		}

		::System::Void SetTypedReference(::System::TypedReference* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::TypedReference*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEDREFERENCE_SETTYPEDREFERENCE_OFFSET))(arg, arg, nullptr);
		}

	};
}

