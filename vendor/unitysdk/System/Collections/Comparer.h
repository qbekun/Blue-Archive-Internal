#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COLLECTIONS_COMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C7C60)
#define SYSTEM_COLLECTIONS_COMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C7D00)
#define SYSTEM_COLLECTIONS_COMPARER_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x92C7E80)
#define SYSTEM_COLLECTIONS_COMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x92C7F20)
#define SYSTEM_COLLECTIONS_COMPARER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x92C8130)

namespace System::Collections
{
	inline static constexpr unsigned int Comparer_TypeDefinitionIndex = 25049;

	class Comparer : public Il2CppObject
	{
	public:
		::System::Globalization::CompareInfo* _compareInfo; // 0x10
		::System::Collections::Comparer* Default; // 0x0
		::System::Collections::Comparer* DefaultInvariant; // 0x8

		::System::Void .ctor(::System::Globalization::CultureInfo* arg)
		{
			((::System::Void(*)(::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COMPARER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COMPARER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COMPARER_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Compare(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COMPARER_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COMPARER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

