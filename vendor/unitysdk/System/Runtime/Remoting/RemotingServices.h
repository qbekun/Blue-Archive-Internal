#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x91CD2B0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_INTERNALEXECUTE_OFFSET UNITYSDK_OFFSET(0x91CD6D0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETVIRTUALMETHOD_OFFSET UNITYSDK_OFFSET(0x91CD6E0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_ISTRANSPARENTPROXY_OFFSET UNITYSDK_OFFSET(0x91CD6F0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_INTERNALEXECUTEMESSAGE_OFFSET UNITYSDK_OFFSET(0x91CD740)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CONNECT_OFFSET UNITYSDK_OFFSET(0x91CE200)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CONNECT_OFFSET UNITYSDK_OFFSET(0x91CE370)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETSERVERTYPEFORURI_OFFSET UNITYSDK_OFFSET(0x91CE470)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_UNMARSHAL_OFFSET UNITYSDK_OFFSET(0x91C4670)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_UNMARSHAL_OFFSET UNITYSDK_OFFSET(0x91CE850)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_MARSHAL_OFFSET UNITYSDK_OFFSET(0x91CED20)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_MARSHAL_OFFSET UNITYSDK_OFFSET(0x91CED70)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_NEWURI_OFFSET UNITYSDK_OFFSET(0x91CEE20)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETREALPROXY_OFFSET UNITYSDK_OFFSET(0x91CEDE0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETMETHODBASEFROMMETHODMESSAGE_OFFSET UNITYSDK_OFFSET(0x91CF7F0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETMETHODBASEFROMNAME_OFFSET UNITYSDK_OFFSET(0x91CFAD0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_FINDINTERFACEMETHOD_OFFSET UNITYSDK_OFFSET(0x91CFCB0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x91CFE00)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_ISONEWAY_OFFSET UNITYSDK_OFFSET(0x91CFF30)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECLIENTPROXY_OFFSET UNITYSDK_OFFSET(0x91CFFC0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECLIENTPROXY_OFFSET UNITYSDK_OFFSET(0x91D00C0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECLIENTPROXY_OFFSET UNITYSDK_OFFSET(0x91D02C0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECLIENTPROXYFORCONTEXTBOUND_OFFSET UNITYSDK_OFFSET(0x91D0330)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETIDENTITYFORURI_OFFSET UNITYSDK_OFFSET(0x91CE520)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_REMOVEAPPNAMEFROMURI_OFFSET UNITYSDK_OFFSET(0x91D0530)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETORCREATECLIENTIDENTITY_OFFSET UNITYSDK_OFFSET(0x91D0660)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETCLIENTCHANNELSINKCHAIN_OFFSET UNITYSDK_OFFSET(0x91D01E0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECONTEXTBOUNDOBJECTIDENTITY_OFFSET UNITYSDK_OFFSET(0x91D0FD0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECLIENTACTIVATEDSERVERIDENTITY_OFFSET UNITYSDK_OFFSET(0x91CF6C0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATEWELLKNOWNSERVERIDENTITY_OFFSET UNITYSDK_OFFSET(0x91C5C80)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_REGISTERSERVERIDENTITY_OFFSET UNITYSDK_OFFSET(0x91CF2D0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETPROXYFORREMOTEOBJECT_OFFSET UNITYSDK_OFFSET(0x91CEBD0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETREMOTEOBJECT_OFFSET UNITYSDK_OFFSET(0x91CE300)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_SERIALIZECALLDATA_OFFSET UNITYSDK_OFFSET(0x91D1280)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_DESERIALIZECALLDATA_OFFSET UNITYSDK_OFFSET(0x91D1500)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_SERIALIZEEXCEPTIONDATA_OFFSET UNITYSDK_OFFSET(0x91D17B0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_REGISTERINTERNALCHANNELS_OFFSET UNITYSDK_OFFSET(0x91CD670)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_DISPOSEIDENTITY_OFFSET UNITYSDK_OFFSET(0x91D0D10)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETMESSAGETARGETIDENTITY_OFFSET UNITYSDK_OFFSET(0x91D1950)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_SETMESSAGETARGETIDENTITY_OFFSET UNITYSDK_OFFSET(0x91D1D50)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_UPDATEOUTARGOBJECT_OFFSET UNITYSDK_OFFSET(0x91D1E70)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETNORMALIZEDURI_OFFSET UNITYSDK_OFFSET(0x91D04C0)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int RemotingServices_TypeDefinitionIndex = 24446;

	class RemotingServices : public Il2CppObject
	{
	public:
		::System::Collections::Hashtable* uri_hash; // 0x0
		::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* _serializationFormatter; // 0x8
		::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* _deserializationFormatter; // 0x10
		::System::String* app_id; // 0x18
		::System::Object* app_id_lock; // 0x20
		::System::Int32 next_id; // 0x28
		::System::Reflection::MethodInfo* FieldSetterMethod; // 0x30
		::System::Reflection::MethodInfo* FieldGetterMethod; // 0x38

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_.CCTOR_OFFSET))(nullptr);
		}

		::System::Object* InternalExecute(::System::Reflection::MethodBase* arg, ::System::Object* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Object[]&* arg)
		{
			return (return (::System::Object*(*)(::System::Reflection::MethodBase*, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_INTERNALEXECUTE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Reflection::MethodBase* GetVirtualMethod(::System::Type* arg, ::System::Reflection::MethodBase* arg)
		{
			return (return (::System::Reflection::MethodBase*(*)(::System::Type*, ::System::Reflection::MethodBase*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETVIRTUALMETHOD_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsTransparentProxy(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_ISTRANSPARENTPROXY_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMethodReturnMessage* InternalExecuteMessage(::System::MarshalByRefObject* arg, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMethodReturnMessage*(*)(::System::MarshalByRefObject*, ::System::Runtime::Remoting::Messaging::IMethodCallMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_INTERNALEXECUTEMESSAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Connect(::System::Type* arg, ::System::String* str)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CONNECT_OFFSET))(arg, str, nullptr);
		}

		::System::Object* Connect(::System::Type* arg, ::System::String* str, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CONNECT_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Type* GetServerTypeForUri(::System::String* str)
		{
			return (return (::System::Type*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETSERVERTYPEFORURI_OFFSET))(str, nullptr);
		}

		::System::Object* Unmarshal(::System::Runtime::Remoting::ObjRef* arg)
		{
			return (return (::System::Object*(*)(::System::Runtime::Remoting::ObjRef*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_UNMARSHAL_OFFSET))(arg, nullptr);
		}

		::System::Object* Unmarshal(::System::Runtime::Remoting::ObjRef* arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::Runtime::Remoting::ObjRef*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_UNMARSHAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Runtime::Remoting::ObjRef* Marshal(::System::MarshalByRefObject* arg)
		{
			return (return (::System::Runtime::Remoting::ObjRef*(*)(::System::MarshalByRefObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_MARSHAL_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::ObjRef* Marshal(::System::MarshalByRefObject* arg, ::System::String* str, ::System::Type* arg)
		{
			return (return (::System::Runtime::Remoting::ObjRef*(*)(::System::MarshalByRefObject*, ::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_MARSHAL_OFFSET))(arg, str, arg, nullptr);
		}

		::System::String* NewUri()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_NEWURI_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Proxies::RealProxy* GetRealProxy(::System::Object* arg)
		{
			return (return (::System::Runtime::Remoting::Proxies::RealProxy*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETREALPROXY_OFFSET))(arg, nullptr);
		}

		::System::Reflection::MethodBase* GetMethodBaseFromMethodMessage(::System::Runtime::Remoting::Messaging::IMethodMessage* arg)
		{
			return (return (::System::Reflection::MethodBase*(*)(::System::Runtime::Remoting::Messaging::IMethodMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETMETHODBASEFROMMETHODMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Reflection::MethodBase* GetMethodBaseFromName(::System::Type* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Reflection::MethodBase*(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETMETHODBASEFROMNAME_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Reflection::MethodBase* FindInterfaceMethod(::System::Type* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Reflection::MethodBase*(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_FINDINTERFACEMETHOD_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Object* arg, ::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETOBJECTDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsOneWay(::System::Reflection::MethodBase* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MethodBase*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_ISONEWAY_OFFSET))(arg, nullptr);
		}

		::System::Object* CreateClientProxy(::System::Runtime::Remoting::ActivatedClientTypeEntry* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::System::Runtime::Remoting::ActivatedClientTypeEntry*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECLIENTPROXY_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* CreateClientProxy(::System::Type* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECLIENTPROXY_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Object* CreateClientProxy(::System::Runtime::Remoting::WellKnownClientTypeEntry* arg)
		{
			return (return (::System::Object*(*)(::System::Runtime::Remoting::WellKnownClientTypeEntry*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECLIENTPROXY_OFFSET))(arg, nullptr);
		}

		::System::Object* CreateClientProxyForContextBound(::System::Type* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECLIENTPROXYFORCONTEXTBOUND_OFFSET))(arg, arg, nullptr);
		}

		::System::Runtime::Remoting::Identity* GetIdentityForUri(::System::String* str)
		{
			return (return (::System::Runtime::Remoting::Identity*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETIDENTITYFORURI_OFFSET))(str, nullptr);
		}

		::System::String* RemoveAppNameFromUri(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_REMOVEAPPNAMEFROMURI_OFFSET))(str, nullptr);
		}

		::System::Runtime::Remoting::ClientIdentity* GetOrCreateClientIdentity(::System::Runtime::Remoting::ObjRef* arg, ::System::Type* arg, ::System::Object&* arg)
		{
			return (return (::System::Runtime::Remoting::ClientIdentity*(*)(::System::Runtime::Remoting::ObjRef*, ::System::Type*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETORCREATECLIENTIDENTITY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessageSink* GetClientChannelSinkChain(::System::String* str, ::System::Object* arg, ::System::String&* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::System::String*, ::System::Object*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETCLIENTCHANNELSINKCHAIN_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Runtime::Remoting::ClientActivatedIdentity* CreateContextBoundObjectIdentity(::System::Type* arg)
		{
			return (return (::System::Runtime::Remoting::ClientActivatedIdentity*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECONTEXTBOUNDOBJECTIDENTITY_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::ClientActivatedIdentity* CreateClientActivatedServerIdentity(::System::MarshalByRefObject* arg, ::System::Type* arg, ::System::String* str)
		{
			return (return (::System::Runtime::Remoting::ClientActivatedIdentity*(*)(::System::MarshalByRefObject*, ::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATECLIENTACTIVATEDSERVERIDENTITY_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Runtime::Remoting::ServerIdentity* CreateWellKnownServerIdentity(::System::Type* arg, ::System::String* str, ::System::Runtime::Remoting::WellKnownObjectMode* arg)
		{
			return (return (::System::Runtime::Remoting::ServerIdentity*(*)(::System::Type*, ::System::String*, ::System::Runtime::Remoting::WellKnownObjectMode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_CREATEWELLKNOWNSERVERIDENTITY_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void RegisterServerIdentity(::System::Runtime::Remoting::ServerIdentity* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::ServerIdentity*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_REGISTERSERVERIDENTITY_OFFSET))(arg, nullptr);
		}

		::System::Object* GetProxyForRemoteObject(::System::Runtime::Remoting::ObjRef* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Runtime::Remoting::ObjRef*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETPROXYFORREMOTEOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetRemoteObject(::System::Runtime::Remoting::ObjRef* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Runtime::Remoting::ObjRef*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETREMOTEOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* SerializeCallData(::System::Object* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_SERIALIZECALLDATA_OFFSET))(arg, nullptr);
		}

		::System::Object* DeserializeCallData(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_DESERIALIZECALLDATA_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* SerializeExceptionData(::System::Exception* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_SERIALIZEEXCEPTIONDATA_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterInternalChannels()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_REGISTERINTERNALCHANNELS_OFFSET))(nullptr);
		}

		::System::Void DisposeIdentity(::System::Runtime::Remoting::Identity* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Identity*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_DISPOSEIDENTITY_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Identity* GetMessageTargetIdentity(::System::Runtime::Remoting::Messaging::IMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Identity*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETMESSAGETARGETIDENTITY_OFFSET))(arg, nullptr);
		}

		::System::Void SetMessageTargetIdentity(::System::Runtime::Remoting::Messaging::IMessage* arg, ::System::Runtime::Remoting::Identity* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Identity*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_SETMESSAGETARGETIDENTITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean UpdateOutArgObject(::System::Reflection::ParameterInfo* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::ParameterInfo*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_UPDATEOUTARGOBJECT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* GetNormalizedUri(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGSERVICES_GETNORMALIZEDURI_OFFSET))(str, nullptr);
		}

	};
}

