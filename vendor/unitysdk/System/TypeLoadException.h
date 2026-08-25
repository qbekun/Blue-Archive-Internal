#pragma once
#include "../unitysdk.h"

#define SYSTEM_TYPELOADEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93AEC00)
#define SYSTEM_TYPELOADEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93AEC50)
#define SYSTEM_TYPELOADEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93AEC80)
#define SYSTEM_TYPELOADEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x93AECB0)
#define SYSTEM_TYPELOADEXCEPTION_SETMESSAGEFIELD_OFFSET UNITYSDK_OFFSET(0x93AECD0)
#define SYSTEM_TYPELOADEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93AEE30)
#define SYSTEM_TYPELOADEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93AEEC0)
#define SYSTEM_TYPELOADEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93AEF50)
#define SYSTEM_TYPELOADEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x93AF0B0)

namespace System
{
	inline static constexpr unsigned int TypeLoadException_TypeDefinitionIndex = 23945;

	class TypeLoadException : public Il2CppObject
	{
	public:
		::System::String* ClassName; // 0x90
		::System::String* AssemblyName; // 0x98
		::System::String* MessageArg; // 0xA0
		::System::Int32 ResourceId; // 0xA8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPELOADEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPELOADEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPELOADEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPELOADEXCEPTION_GET_MESSAGE_OFFSET))(nullptr);
		}

		::System::Void SetMessageField()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPELOADEXCEPTION_SETMESSAGEFIELD_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPELOADEXCEPTION_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPELOADEXCEPTION_.CTOR_OFFSET))(str, str, str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPELOADEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPELOADEXCEPTION_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

	};
}

