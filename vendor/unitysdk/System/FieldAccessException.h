#pragma once
#include "../unitysdk.h"

#define SYSTEM_FIELDACCESSEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x933D070)
#define SYSTEM_FIELDACCESSEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x933D0C0)
#define SYSTEM_FIELDACCESSEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x933D0E0)

namespace System
{
	inline static constexpr unsigned int FieldAccessException_TypeDefinitionIndex = 23738;

	class FieldAccessException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_FIELDACCESSEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_FIELDACCESSEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_FIELDACCESSEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

