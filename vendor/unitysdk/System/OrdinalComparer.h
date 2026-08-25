#pragma once
#include "../unitysdk.h"

#define SYSTEM_ORDINALCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9378D20)
#define SYSTEM_ORDINALCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x9378D70)
#define SYSTEM_ORDINALCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x9378DC0)
#define SYSTEM_ORDINALCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9378E30)
#define SYSTEM_ORDINALCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x9378ED0)
#define SYSTEM_ORDINALCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9378F50)

namespace System
{
	inline static constexpr unsigned int OrdinalComparer_TypeDefinitionIndex = 23835;

	class OrdinalComparer : public Il2CppObject
	{
	public:
		::System::Boolean _ignoreCase; // 0x10

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ORDINALCOMPARER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Compare(::System::String* str, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ORDINALCOMPARER_COMPARE_OFFSET))(str, str, nullptr);
		}

		::System::Boolean Equals(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ORDINALCOMPARER_EQUALS_OFFSET))(str, str, nullptr);
		}

		::System::Int32 GetHashCode(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ORDINALCOMPARER_GETHASHCODE_OFFSET))(str, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ORDINALCOMPARER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ORDINALCOMPARER_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

