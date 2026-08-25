#pragma once
#include "../unitysdk.h"

#define SYSTEM_UINTPTR_.CTOR_OFFSET UNITYSDK_OFFSET(0x93CAB20)
#define SYSTEM_UINTPTR_.CTOR_OFFSET UNITYSDK_OFFSET(0x93CAB80)
#define SYSTEM_UINTPTR_.CTOR_OFFSET UNITYSDK_OFFSET(0x93CAB90)
#define SYSTEM_UINTPTR_EQUALS_OFFSET UNITYSDK_OFFSET(0x93CABA0)
#define SYSTEM_UINTPTR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x93CAC10)
#define SYSTEM_UINTPTR_TOUINT32_OFFSET UNITYSDK_OFFSET(0x93CAC20)
#define SYSTEM_UINTPTR_TOUINT64_OFFSET UNITYSDK_OFFSET(0x93CAC30)
#define SYSTEM_UINTPTR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x93CAC40)
#define SYSTEM_UINTPTR_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x93CACA0)
#define SYSTEM_UINTPTR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x93CAD40)
#define SYSTEM_UINTPTR_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x93CAD50)
#define SYSTEM_UINTPTR_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x93CAD60)
#define SYSTEM_UINTPTR_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x93CADB0)
#define SYSTEM_UINTPTR_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x93CAB70)
#define SYSTEM_UINTPTR_SYSTEM.IEQUATABLE_SYSTEM.UINTPTR_.EQUALS_OFFSET UNITYSDK_OFFSET(0x93CADC0)
#define SYSTEM_UINTPTR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93CADD0)

namespace System
{
	inline static constexpr unsigned int UIntPtr_TypeDefinitionIndex = 24010;

	class UIntPtr : public Il2CppObject
	{
	public:
		::System::UInt32 Zero; // 0x0
		::System::Object** _pointer; // 0x10

		::System::Void .ctor(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINTPTR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINTPTR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINTPTR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINTPTR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINTPTR_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::UInt32 ToUInt32()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINTPTR_TOUINT32_OFFSET))(nullptr);
		}

		::System::UInt64 ToUInt64()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINTPTR_TOUINT64_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINTPTR_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void System.Runtime.Serialization.ISerializable.GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINTPTR_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Equality(::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINTPTR_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINTPTR_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 op_Explicit(::System::UInt64 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINTPTR_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::UInt32 op_Explicit(::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINTPTR_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Size()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINTPTR_GET_SIZE_OFFSET))(nullptr);
		}

		::System::Boolean System.IEquatable_System.UIntPtr_.Equals(::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINTPTR_SYSTEM.IEQUATABLE_SYSTEM.UINTPTR_.EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINTPTR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

