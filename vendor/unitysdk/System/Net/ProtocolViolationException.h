#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_PROTOCOLVIOLATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BA7F10)
#define SYSTEM_NET_PROTOCOLVIOLATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BA20F0)
#define SYSTEM_NET_PROTOCOLVIOLATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BA7F20)
#define SYSTEM_NET_PROTOCOLVIOLATIONEXCEPTION_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9BA7F40)
#define SYSTEM_NET_PROTOCOLVIOLATIONEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9BA7F60)

namespace System::Net
{
	inline static constexpr unsigned int ProtocolViolationException_TypeDefinitionIndex = 29692;

	class ProtocolViolationException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PROTOCOLVIOLATIONEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PROTOCOLVIOLATIONEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PROTOCOLVIOLATIONEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Runtime.Serialization.ISerializable.GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PROTOCOLVIOLATIONEXCEPTION_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PROTOCOLVIOLATIONEXCEPTION_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

	};
}

