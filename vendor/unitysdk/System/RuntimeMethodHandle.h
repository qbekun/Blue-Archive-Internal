#pragma once
#include "../unitysdk.h"

#define SYSTEM_RUNTIMEMETHODHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x93BDD70)
#define SYSTEM_RUNTIMEMETHODHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x93BDD80)
#define SYSTEM_RUNTIMEMETHODHANDLE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x93BDF20)
#define SYSTEM_RUNTIMEMETHODHANDLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x93BDF30)
#define SYSTEM_RUNTIMEMETHODHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x93BE0E0)
#define SYSTEM_RUNTIMEMETHODHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x93BE1D0)
#define SYSTEM_RUNTIMEMETHODHANDLE_CONSTRUCTINSTANTIATION_OFFSET UNITYSDK_OFFSET(0x93BE1E0)
#define SYSTEM_RUNTIMEMETHODHANDLE_ISNULLHANDLE_OFFSET UNITYSDK_OFFSET(0x93BE370)

namespace System
{
	inline static constexpr unsigned int RuntimeMethodHandle_TypeDefinitionIndex = 23989;

	class RuntimeMethodHandle : public Il2CppObject
	{
	public:
		::System::Int32 value; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Value()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ConstructInstantiation(::System::Reflection::RuntimeMethodInfo* arg, ::System::TypeNameFormatFlags* arg)
		{
			return (return (::System::String*(*)(::System::Reflection::RuntimeMethodInfo*, ::System::TypeNameFormatFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_CONSTRUCTINSTANTIATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsNullHandle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEMETHODHANDLE_ISNULLHANDLE_OFFSET))(nullptr);
		}

	};
}

