#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_GENERIC_KEYNOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92DB480)
#define SYSTEM_COLLECTIONS_GENERIC_KEYNOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92DB4D0)
#define SYSTEM_COLLECTIONS_GENERIC_KEYNOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92DB4F0)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int KeyNotFoundException_TypeDefinitionIndex = 25146;

	class KeyNotFoundException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_KEYNOTFOUNDEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_KEYNOTFOUNDEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_KEYNOTFOUNDEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

