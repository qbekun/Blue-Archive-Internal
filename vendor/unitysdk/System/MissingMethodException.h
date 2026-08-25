#pragma once
#include "../unitysdk.h"

#define SYSTEM_MISSINGMETHODEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x935DDD0)
#define SYSTEM_MISSINGMETHODEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x935DE20)
#define SYSTEM_MISSINGMETHODEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x935DE40)
#define SYSTEM_MISSINGMETHODEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x935DE90)
#define SYSTEM_MISSINGMETHODEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x935DEB0)

namespace System
{
	inline static constexpr unsigned int MissingMethodException_TypeDefinitionIndex = 23801;

	class MissingMethodException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMETHODEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMETHODEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMETHODEXCEPTION_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMETHODEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMETHODEXCEPTION_GET_MESSAGE_OFFSET))(nullptr);
		}

	};
}

