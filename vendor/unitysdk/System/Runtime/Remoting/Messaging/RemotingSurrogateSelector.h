#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_REMOTINGSURROGATESELECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x91E5900)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_REMOTINGSURROGATESELECTOR_GETSURROGATE_OFFSET UNITYSDK_OFFSET(0x91F5A30)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_REMOTINGSURROGATESELECTOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x91F5BF0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int RemotingSurrogateSelector_TypeDefinitionIndex = 24560;

	class RemotingSurrogateSelector : public Il2CppObject
	{
	public:
		::System::Type* s_cachedTypeObjRef; // 0x0
		::System::Runtime::Remoting::Messaging::ObjRefSurrogate* _objRefSurrogate; // 0x8
		::System::Runtime::Remoting::Messaging::RemotingSurrogate* _objRemotingSurrogate; // 0x10
		::System::Runtime::Serialization::ISurrogateSelector* _next; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_REMOTINGSURROGATESELECTOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Runtime::Serialization::ISerializationSurrogate* GetSurrogate(::System::Type* arg, ::System::Runtime::Serialization::StreamingContext* arg, ::System::Runtime::Serialization::ISurrogateSelector&* arg)
		{
			return (return (::System::Runtime::Serialization::ISerializationSurrogate*(*)(::System::Type*, ::System::Runtime::Serialization::StreamingContext*, ::System::Runtime::Serialization::ISurrogateSelector&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_REMOTINGSURROGATESELECTOR_GETSURROGATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_REMOTINGSURROGATESELECTOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

