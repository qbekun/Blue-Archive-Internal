#pragma once
#include "../unitysdk.h"

#define SYSTEM_OBJECTDISPOSEDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x936E180)
#define SYSTEM_OBJECTDISPOSEDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x936E220)
#define SYSTEM_OBJECTDISPOSEDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x936E1E0)
#define SYSTEM_OBJECTDISPOSEDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x936E280)
#define SYSTEM_OBJECTDISPOSEDEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x936E310)
#define SYSTEM_OBJECTDISPOSEDEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x936E5A0)
#define SYSTEM_OBJECTDISPOSEDEXCEPTION_GET_OBJECTNAME_OFFSET UNITYSDK_OFFSET(0x936E4C0)

namespace System
{
	inline static constexpr unsigned int ObjectDisposedException_TypeDefinitionIndex = 23812;

	class ObjectDisposedException : public Il2CppObject
	{
	public:
		::System::String* _objectName; // 0x90

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECTDISPOSEDEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECTDISPOSEDEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECTDISPOSEDEXCEPTION_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECTDISPOSEDEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECTDISPOSEDEXCEPTION_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECTDISPOSEDEXCEPTION_GET_MESSAGE_OFFSET))(nullptr);
		}

		::System::String* get_ObjectName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECTDISPOSEDEXCEPTION_GET_OBJECTNAME_OFFSET))(nullptr);
		}

	};
}

