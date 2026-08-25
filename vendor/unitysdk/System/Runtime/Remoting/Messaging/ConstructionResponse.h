#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x91D9BC0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x91E69C0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x91F02B0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONRESPONSE_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x91F0340)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int ConstructionResponse_TypeDefinitionIndex = 24537;

	class ConstructionResponse : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Runtime::Remoting::Messaging::LogicalCallContext* arg, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Runtime::Remoting::Messaging::LogicalCallContext*, ::System::Runtime::Remoting::Messaging::IMethodCallMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONRESPONSE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Exception* arg, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* arg)
		{
			((::System::Void(*)(::System::Exception*, ::System::Runtime::Remoting::Messaging::IMethodCallMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONRESPONSE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONRESPONSE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IDictionary* get_Properties()
		{
			return (return (::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONRESPONSE_GET_PROPERTIES_OFFSET))(nullptr);
		}

	};
}

