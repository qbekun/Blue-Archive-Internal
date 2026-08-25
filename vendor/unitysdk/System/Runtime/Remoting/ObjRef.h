#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_OBJREF_.CTOR_OFFSET UNITYSDK_OFFSET(0x91C39B0)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_.CTOR_OFFSET UNITYSDK_OFFSET(0x91C3A80)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_DESERIALIZEINTHECURRENTDOMAIN_OFFSET UNITYSDK_OFFSET(0x91C3AD0)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_SERIALIZETYPE_OFFSET UNITYSDK_OFFSET(0x91C3C20)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_.CTOR_OFFSET UNITYSDK_OFFSET(0x91C3CB0)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_.CTOR_OFFSET UNITYSDK_OFFSET(0x91C3DC0)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_GET_ISREFERENCETOWELLKNOW_OFFSET UNITYSDK_OFFSET(0x91C4310)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_GET_CHANNELINFO_OFFSET UNITYSDK_OFFSET(0x91C4370)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_GET_ENVOYINFO_OFFSET UNITYSDK_OFFSET(0x91C4380)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_SET_ENVOYINFO_OFFSET UNITYSDK_OFFSET(0x91C4390)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x91C43A0)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x91C43B0)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_GET_URI_OFFSET UNITYSDK_OFFSET(0x91C43C0)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_SET_URI_OFFSET UNITYSDK_OFFSET(0x91C43D0)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x91C43E0)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_GETREALOBJECT_OFFSET UNITYSDK_OFFSET(0x91C4570)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_UPDATECHANNELINFO_OFFSET UNITYSDK_OFFSET(0x91C39D0)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_GET_SERVERTYPE_OFFSET UNITYSDK_OFFSET(0x91C46C0)
#define SYSTEM_RUNTIME_REMOTING_OBJREF_.CCTOR_OFFSET UNITYSDK_OFFSET(0x91C4800)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int ObjRef_TypeDefinitionIndex = 24438;

	class ObjRef : public Il2CppObject
	{
	public:
		::System::Runtime::Remoting::IChannelInfo* channel_info; // 0x10
		::System::String* uri; // 0x18
		::System::Runtime::Remoting::IRemotingTypeInfo* typeInfo; // 0x20
		::System::Runtime::Remoting::IEnvoyInfo* envoyInfo; // 0x28
		::System::Int32 flags; // 0x30
		::System::Type* _serverType; // 0x38
		::System::Int32 MarshalledObjectRef; // 0x0
		::System::Int32 WellKnowObjectRef; // 0x4

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Runtime::Remoting::IChannelInfo* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Runtime::Remoting::IChannelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Runtime::Remoting::ObjRef* DeserializeInTheCurrentDomain(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Runtime::Remoting::ObjRef*(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_DESERIALIZEINTHECURRENTDOMAIN_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* SerializeType()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_SERIALIZETYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_.CTOR_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsReferenceToWellKnow()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_GET_ISREFERENCETOWELLKNOW_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::IChannelInfo* get_ChannelInfo()
		{
			return (return (::System::Runtime::Remoting::IChannelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_GET_CHANNELINFO_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::IEnvoyInfo* get_EnvoyInfo()
		{
			return (return (::System::Runtime::Remoting::IEnvoyInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_GET_ENVOYINFO_OFFSET))(nullptr);
		}

		::System::Void set_EnvoyInfo(::System::Runtime::Remoting::IEnvoyInfo* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::IEnvoyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_SET_ENVOYINFO_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::IRemotingTypeInfo* get_TypeInfo()
		{
			return (return (::System::Runtime::Remoting::IRemotingTypeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_GET_TYPEINFO_OFFSET))(nullptr);
		}

		::System::Void set_TypeInfo(::System::Runtime::Remoting::IRemotingTypeInfo* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::IRemotingTypeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_SET_TYPEINFO_OFFSET))(arg, nullptr);
		}

		::System::String* get_URI()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_GET_URI_OFFSET))(nullptr);
		}

		::System::Void set_URI(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_SET_URI_OFFSET))(str, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext* arg)
		{
			return (return (::System::Object*(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_GETREALOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateChannelInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_UPDATECHANNELINFO_OFFSET))(nullptr);
		}

		::System::Type* get_ServerType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_GET_SERVERTYPE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_OBJREF_.CCTOR_OFFSET))(nullptr);
		}

	};
}

