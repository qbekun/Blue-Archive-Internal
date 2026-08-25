#pragma once
#include "../unitysdk.h"

#define SYSTEM_BADIMAGEFORMATEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9278CE0)
#define SYSTEM_BADIMAGEFORMATEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9278D30)
#define SYSTEM_BADIMAGEFORMATEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9278D50)
#define SYSTEM_BADIMAGEFORMATEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9278D70)
#define SYSTEM_BADIMAGEFORMATEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9278DB0)
#define SYSTEM_BADIMAGEFORMATEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9278E70)
#define SYSTEM_BADIMAGEFORMATEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x9278F80)
#define SYSTEM_BADIMAGEFORMATEXCEPTION_SETMESSAGEFIELD_OFFSET UNITYSDK_OFFSET(0x9279000)
#define SYSTEM_BADIMAGEFORMATEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9279080)

namespace System
{
	inline static constexpr unsigned int BadImageFormatException_TypeDefinitionIndex = 23714;

	class BadImageFormatException : public Il2CppObject
	{
	public:
		::System::String* _fileName; // 0x90
		::System::String* _fusionLog; // 0x98

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION_GET_MESSAGE_OFFSET))(nullptr);
		}

		::System::Void SetMessageField()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION_SETMESSAGEFIELD_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

