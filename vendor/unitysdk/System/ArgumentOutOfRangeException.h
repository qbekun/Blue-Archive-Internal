#pragma once
#include "../unitysdk.h"

#define SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9278490)
#define SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92784E0)
#define SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92727E0)
#define SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9278540)
#define SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9273840)
#define SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9278560)
#define SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9278680)
#define SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x9278740)

namespace System
{
	inline static constexpr unsigned int ArgumentOutOfRangeException_TypeDefinitionIndex = 23704;

	class ArgumentOutOfRangeException : public <>c__DisplayClass0_0
	{
	public:
		::System::Object* _actualValue; // 0x98

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION_.CTOR_OFFSET))(str, arg, str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION_GET_MESSAGE_OFFSET))(nullptr);
		}

	};
}

