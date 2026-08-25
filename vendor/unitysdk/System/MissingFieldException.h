#pragma once
#include "../unitysdk.h"

#define SYSTEM_MISSINGFIELDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93879C0)
#define SYSTEM_MISSINGFIELDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9387A30)
#define SYSTEM_MISSINGFIELDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9387A50)
#define SYSTEM_MISSINGFIELDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9387B20)
#define SYSTEM_MISSINGFIELDEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x9387D60)

namespace System
{
	inline static constexpr unsigned int MissingFieldException_TypeDefinitionIndex = 23896;

	class MissingFieldException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGFIELDEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGFIELDEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGFIELDEXCEPTION_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGFIELDEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGFIELDEXCEPTION_GET_MESSAGE_OFFSET))(nullptr);
		}

	};
}

