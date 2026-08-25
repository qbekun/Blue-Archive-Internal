#pragma once
#include "../unitysdk.h"

#define SYSTEM_ORDINALIGNORECASECOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9378630)
#define SYSTEM_ORDINALIGNORECASECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x9379160)
#define SYSTEM_ORDINALIGNORECASECOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x9379180)
#define SYSTEM_ORDINALIGNORECASECOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x93791A0)
#define SYSTEM_ORDINALIGNORECASECOMPARER_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9379210)

namespace System
{
	inline static constexpr unsigned int OrdinalIgnoreCaseComparer_TypeDefinitionIndex = 23837;

	class OrdinalIgnoreCaseComparer : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ORDINALIGNORECASECOMPARER_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 Compare(::System::String* str, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ORDINALIGNORECASECOMPARER_COMPARE_OFFSET))(str, str, nullptr);
		}

		::System::Boolean Equals(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ORDINALIGNORECASECOMPARER_EQUALS_OFFSET))(str, str, nullptr);
		}

		::System::Int32 GetHashCode(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ORDINALIGNORECASECOMPARER_GETHASHCODE_OFFSET))(str, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ORDINALIGNORECASECOMPARER_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

	};
}

