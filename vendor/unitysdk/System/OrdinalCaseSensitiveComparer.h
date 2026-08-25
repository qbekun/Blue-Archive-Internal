#pragma once
#include "../unitysdk.h"

#define SYSTEM_ORDINALCASESENSITIVECOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x93785E0)
#define SYSTEM_ORDINALCASESENSITIVECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x9378FB0)
#define SYSTEM_ORDINALCASESENSITIVECOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x9378FC0)
#define SYSTEM_ORDINALCASESENSITIVECOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9378FD0)
#define SYSTEM_ORDINALCASESENSITIVECOMPARER_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9379020)

namespace System
{
	inline static constexpr unsigned int OrdinalCaseSensitiveComparer_TypeDefinitionIndex = 23836;

	class OrdinalCaseSensitiveComparer : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ORDINALCASESENSITIVECOMPARER_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 Compare(::System::String* str, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ORDINALCASESENSITIVECOMPARER_COMPARE_OFFSET))(str, str, nullptr);
		}

		::System::Boolean Equals(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ORDINALCASESENSITIVECOMPARER_EQUALS_OFFSET))(str, str, nullptr);
		}

		::System::Int32 GetHashCode(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ORDINALCASESENSITIVECOMPARER_GETHASHCODE_OFFSET))(str, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ORDINALCASESENSITIVECOMPARER_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

	};
}

