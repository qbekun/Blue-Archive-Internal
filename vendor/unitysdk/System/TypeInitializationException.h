#pragma once
#include "../unitysdk.h"

#define SYSTEM_TYPEINITIALIZATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9380010)
#define SYSTEM_TYPEINITIALIZATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93800B0)
#define SYSTEM_TYPEINITIALIZATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9380170)
#define SYSTEM_TYPEINITIALIZATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9380200)
#define SYSTEM_TYPEINITIALIZATIONEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9380300)
#define SYSTEM_TYPEINITIALIZATIONEXCEPTION_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x93804B0)

namespace System
{
	inline static constexpr unsigned int TypeInitializationException_TypeDefinitionIndex = 23860;

	class TypeInitializationException : public Il2CppObject
	{
	public:
		::System::String* _typeName; // 0x90

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEINITIALIZATIONEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEINITIALIZATIONEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEINITIALIZATIONEXCEPTION_.CTOR_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEINITIALIZATIONEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEINITIALIZATIONEXCEPTION_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_TypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEINITIALIZATIONEXCEPTION_GET_TYPENAME_OFFSET))(nullptr);
		}

	};
}

