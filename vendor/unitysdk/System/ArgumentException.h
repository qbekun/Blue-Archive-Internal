#pragma once
#include "../unitysdk.h"

#define SYSTEM_ARGUMENTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92780E0)
#define SYSTEM_ARGUMENTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9276CC0)
#define SYSTEM_ARGUMENTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9278130)
#define SYSTEM_ARGUMENTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9278150)
#define SYSTEM_ARGUMENTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x926E9D0)
#define SYSTEM_ARGUMENTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9278190)
#define SYSTEM_ARGUMENTEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9278220)
#define SYSTEM_ARGUMENTEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x92782E0)

namespace System
{
	inline static constexpr unsigned int ArgumentException_TypeDefinitionIndex = 23702;

	class ArgumentException : public Il2CppObject
	{
	public:
		::System::String* _paramName; // 0x90

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTEXCEPTION_.CTOR_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTEXCEPTION_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTEXCEPTION_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTEXCEPTION_GET_MESSAGE_OFFSET))(nullptr);
		}

	};
}

