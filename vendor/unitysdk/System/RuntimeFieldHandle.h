#pragma once
#include "../unitysdk.h"

#define SYSTEM_RUNTIMEFIELDHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x93BD8D0)
#define SYSTEM_RUNTIMEFIELDHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x93BD8E0)
#define SYSTEM_RUNTIMEFIELDHANDLE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x93BDA80)
#define SYSTEM_RUNTIMEFIELDHANDLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x93BDA90)
#define SYSTEM_RUNTIMEFIELDHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x93BDC40)
#define SYSTEM_RUNTIMEFIELDHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x93BDD30)
#define SYSTEM_RUNTIMEFIELDHANDLE_SETVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x93BDD40)
#define SYSTEM_RUNTIMEFIELDHANDLE_SETVALUE_OFFSET UNITYSDK_OFFSET(0x93BDD50)
#define SYSTEM_RUNTIMEFIELDHANDLE_SETVALUEDIRECT_OFFSET UNITYSDK_OFFSET(0x93BDD60)

namespace System
{
	inline static constexpr unsigned int RuntimeFieldHandle_TypeDefinitionIndex = 23988;

	class RuntimeFieldHandle : public Il2CppObject
	{
	public:
		::System::Int32 value; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Value()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void SetValueInternal(::System::Reflection::FieldInfo* arg, ::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Reflection::FieldInfo*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_SETVALUEINTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetValue(::System::Reflection::RuntimeFieldInfo* arg, ::System::Object* arg, ::System::Object* arg, ::System::RuntimeType* arg, ::System::Reflection::FieldAttributes* arg, ::System::RuntimeType* arg, bool&* arg)
		{
			((::System::Void(*)(::System::Reflection::RuntimeFieldInfo*, ::System::Object*, ::System::Object*, ::System::RuntimeType*, ::System::Reflection::FieldAttributes*, ::System::RuntimeType*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_SETVALUE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetValueDirect(::System::Reflection::RuntimeFieldInfo* arg, ::System::RuntimeType* arg, ::System::Object** arg, ::System::Object* arg, ::System::RuntimeType* arg)
		{
			((::System::Void(*)(::System::Reflection::RuntimeFieldInfo*, ::System::RuntimeType*, ::System::Object**, ::System::Object*, ::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMEFIELDHANDLE_SETVALUEDIRECT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

