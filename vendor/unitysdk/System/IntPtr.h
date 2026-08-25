#pragma once
#include "../unitysdk.h"

#define SYSTEM_INTPTR_.CTOR_OFFSET UNITYSDK_OFFSET(0x93B8380)
#define SYSTEM_INTPTR_.CTOR_OFFSET UNITYSDK_OFFSET(0x93B8390)
#define SYSTEM_INTPTR_.CTOR_OFFSET UNITYSDK_OFFSET(0x93B83A0)
#define SYSTEM_INTPTR_.CTOR_OFFSET UNITYSDK_OFFSET(0x93B83B0)
#define SYSTEM_INTPTR_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x93B3570)
#define SYSTEM_INTPTR_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x93B8400)
#define SYSTEM_INTPTR_EQUALS_OFFSET UNITYSDK_OFFSET(0x93B84B0)
#define SYSTEM_INTPTR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x93B3750)
#define SYSTEM_INTPTR_TOINT32_OFFSET UNITYSDK_OFFSET(0x93B8520)
#define SYSTEM_INTPTR_TOINT64_OFFSET UNITYSDK_OFFSET(0x93B84A0)
#define SYSTEM_INTPTR_TOPOINTER_OFFSET UNITYSDK_OFFSET(0x93B8530)
#define SYSTEM_INTPTR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x93B8540)
#define SYSTEM_INTPTR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x93B8570)
#define SYSTEM_INTPTR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x93AEAE0)
#define SYSTEM_INTPTR_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x93B7810)
#define SYSTEM_INTPTR_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x93B85A0)
#define SYSTEM_INTPTR_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x93B85B0)
#define SYSTEM_INTPTR_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x93B85C0)
#define SYSTEM_INTPTR_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x93B85D0)
#define SYSTEM_INTPTR_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x93B85E0)
#define SYSTEM_INTPTR_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x93B85F0)
#define SYSTEM_INTPTR_ADD_OFFSET UNITYSDK_OFFSET(0x93B8600)
#define SYSTEM_INTPTR_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x93B8610)
#define SYSTEM_INTPTR_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x93B8620)
#define SYSTEM_INTPTR_ISNULL_OFFSET UNITYSDK_OFFSET(0x93B8630)
#define SYSTEM_INTPTR_SYSTEM.IEQUATABLE_SYSTEM.INTPTR_.EQUALS_OFFSET UNITYSDK_OFFSET(0x93B8640)

namespace System
{
	inline static constexpr unsigned int IntPtr_TypeDefinitionIndex = 23975;

	class IntPtr : public Il2CppObject
	{
	public:
		::System::Object** m_value; // 0x10
		::System::Int32 Zero; // 0x0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INTPTR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INTPTR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INTPTR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INTPTR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Size()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INTPTR_GET_SIZE_OFFSET))(nullptr);
		}

		::System::Void System.Runtime.Serialization.ISerializable.GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INTPTR_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INTPTR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INTPTR_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Int32 ToInt32()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INTPTR_TOINT32_OFFSET))(nullptr);
		}

		::System::Int64 ToInt64()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INTPTR_TOINT64_OFFSET))(nullptr);
		}

		::System::Object** ToPointer()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INTPTR_TOPOINTER_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INTPTR_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INTPTR_TOSTRING_OFFSET))(str, nullptr);
		}

		::System::Boolean op_Equality(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INTPTR_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INTPTR_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 op_Explicit(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INTPTR_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Int32 op_Explicit(::System::Int64 arg)
		{
			return (return (::System::Int32(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INTPTR_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Int32 op_Explicit(::System::Object** arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INTPTR_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Int32 op_Explicit(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INTPTR_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Int64 op_Explicit(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INTPTR_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Object** op_Explicit(::System::Int32 arg)
		{
			return (return (::System::Object**(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INTPTR_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Int32 Add(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INTPTR_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 op_Addition(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INTPTR_OP_ADDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 op_Subtraction(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INTPTR_OP_SUBTRACTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsNull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INTPTR_ISNULL_OFFSET))(nullptr);
		}

		::System::Boolean System.IEquatable_System.IntPtr_.Equals(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INTPTR_SYSTEM.IEQUATABLE_SYSTEM.INTPTR_.EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

