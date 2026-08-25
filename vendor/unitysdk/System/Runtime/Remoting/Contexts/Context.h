#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_REGISTERCONTEXT_OFFSET UNITYSDK_OFFSET(0x91DC5C0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_RELEASECONTEXT_OFFSET UNITYSDK_OFFSET(0x91DC5D0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x91DC5E0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x91DC660)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_DEFAULTCONTEXT_OFFSET UNITYSDK_OFFSET(0x91DC760)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_CONTEXTID_OFFSET UNITYSDK_OFFSET(0x91DC770)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_CONTEXTPROPERTIES_OFFSET UNITYSDK_OFFSET(0x91DC780)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_ISDEFAULTCONTEXT_OFFSET UNITYSDK_OFFSET(0x91DC7E0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_NEEDSCONTEXTSINK_OFFSET UNITYSDK_OFFSET(0x91DC7F0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_REGISTERDYNAMICPROPERTY_OFFSET UNITYSDK_OFFSET(0x91DC920)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_UNREGISTERDYNAMICPROPERTY_OFFSET UNITYSDK_OFFSET(0x91DCFF0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETDYNAMICPROPERTYCOLLECTION_OFFSET UNITYSDK_OFFSET(0x91DC990)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_NOTIFYGLOBALDYNAMICSINKS_OFFSET UNITYSDK_OFFSET(0x91DD280)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_HASGLOBALDYNAMICSINKS_OFFSET UNITYSDK_OFFSET(0x91DDA70)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_NOTIFYDYNAMICSINKS_OFFSET UNITYSDK_OFFSET(0x91DDB40)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_HASDYNAMICSINKS_OFFSET UNITYSDK_OFFSET(0x91DDBB0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_HASEXITSINKS_OFFSET UNITYSDK_OFFSET(0x91D95D0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0x91DDBF0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0x91DDE10)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_FREEZE_OFFSET UNITYSDK_OFFSET(0x91DDFE0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x91DE1B0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETSERVERCONTEXTSINKCHAIN_OFFSET UNITYSDK_OFFSET(0x91DE200)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETCLIENTCONTEXTSINKCHAIN_OFFSET UNITYSDK_OFFSET(0x91D96A0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_CREATESERVEROBJECTSINKCHAIN_OFFSET UNITYSDK_OFFSET(0x91DE470)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_CREATEENVOYSINK_OFFSET UNITYSDK_OFFSET(0x91DE710)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_SWITCHTOCONTEXT_OFFSET UNITYSDK_OFFSET(0x91DE950)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_CREATENEWCONTEXT_OFFSET UNITYSDK_OFFSET(0x91DE960)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_DOCALLBACK_OFFSET UNITYSDK_OFFSET(0x91DF2B0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_MYLOCALSTORE_OFFSET UNITYSDK_OFFSET(0x91DF490)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_ALLOCATEDATASLOT_OFFSET UNITYSDK_OFFSET(0x91DF660)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_ALLOCATENAMEDDATASLOT_OFFSET UNITYSDK_OFFSET(0x91DF6E0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_FREENAMEDDATASLOT_OFFSET UNITYSDK_OFFSET(0x91DF770)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETNAMEDDATASLOT_OFFSET UNITYSDK_OFFSET(0x91DF800)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETDATA_OFFSET UNITYSDK_OFFSET(0x91DF890)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_SETDATA_OFFSET UNITYSDK_OFFSET(0x91DF8D0)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x91DF920)

namespace System::Runtime::Remoting::Contexts
{
	inline static constexpr unsigned int Context_TypeDefinitionIndex = 24473;

	class Context : public Il2CppObject
	{
	public:
		::System::Int32 domain_id; // 0x10
		::System::Int32 context_id; // 0x14
		::System::UInt32 static_data; // 0x18
		::System::UInt32 data; // 0x20
		::Il2CppArray<::System::Object*>* local_slots; // 0x0
		::System::Runtime::Remoting::Messaging::IMessageSink* default_server_context_sink; // 0x8
		::System::Runtime::Remoting::Messaging::IMessageSink* server_context_sink_chain; // 0x28
		::System::Runtime::Remoting::Messaging::IMessageSink* client_context_sink_chain; // 0x30
		Il2CppObject* context_properties; // 0x38
		::System::Int32 global_count; // 0x10
		::System::LocalDataStoreHolder* _localDataStore; // 0x40
		::System::LocalDataStoreMgr* _localDataStoreMgr; // 0x18
		::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* global_dynamic_properties; // 0x20
		::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* context_dynamic_properties; // 0x48
		::System::Runtime::Remoting::Contexts::ContextCallbackObject* callback_object; // 0x50

		::System::Void RegisterContext(::System::Runtime::Remoting::Contexts::Context* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Contexts::Context*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_REGISTERCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void ReleaseContext(::System::Runtime::Remoting::Contexts::Context* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Contexts::Context*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_RELEASECONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_FINALIZE_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Contexts::Context* get_DefaultContext()
		{
			return (return (::System::Runtime::Remoting::Contexts::Context*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_DEFAULTCONTEXT_OFFSET))(nullptr);
		}

		::System::Int32 get_ContextID()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_CONTEXTID_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ContextProperties()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_CONTEXTPROPERTIES_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDefaultContext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_ISDEFAULTCONTEXT_OFFSET))(nullptr);
		}

		::System::Boolean get_NeedsContextSink()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_NEEDSCONTEXTSINK_OFFSET))(nullptr);
		}

		::System::Boolean RegisterDynamicProperty(::System::Runtime::Remoting::Contexts::IDynamicProperty* arg, ::System::ContextBoundObject* arg, ::System::Runtime::Remoting::Contexts::Context* arg)
		{
			return (return (::System::Boolean(*)(::System::Runtime::Remoting::Contexts::IDynamicProperty*, ::System::ContextBoundObject*, ::System::Runtime::Remoting::Contexts::Context*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_REGISTERDYNAMICPROPERTY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean UnregisterDynamicProperty(::System::String* str, ::System::ContextBoundObject* arg, ::System::Runtime::Remoting::Contexts::Context* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::ContextBoundObject*, ::System::Runtime::Remoting::Contexts::Context*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_UNREGISTERDYNAMICPROPERTY_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* GetDynamicPropertyCollection(::System::ContextBoundObject* arg, ::System::Runtime::Remoting::Contexts::Context* arg)
		{
			return (return (::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*(*)(::System::ContextBoundObject*, ::System::Runtime::Remoting::Contexts::Context*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETDYNAMICPROPERTYCOLLECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void NotifyGlobalDynamicSinks(::System::Boolean arg, ::System::Runtime::Remoting::Messaging::IMessage* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_NOTIFYGLOBALDYNAMICSINKS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_HasGlobalDynamicSinks()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_HASGLOBALDYNAMICSINKS_OFFSET))(nullptr);
		}

		::System::Void NotifyDynamicSinks(::System::Boolean arg, ::System::Runtime::Remoting::Messaging::IMessage* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_NOTIFYDYNAMICSINKS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_HasDynamicSinks()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_HASDYNAMICSINKS_OFFSET))(nullptr);
		}

		::System::Boolean get_HasExitSinks()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_HASEXITSINKS_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Contexts::IContextProperty* GetProperty(::System::String* str)
		{
			return (return (::System::Runtime::Remoting::Contexts::IContextProperty*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETPROPERTY_OFFSET))(str, nullptr);
		}

		::System::Void SetProperty(::System::Runtime::Remoting::Contexts::IContextProperty* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Contexts::IContextProperty*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_SETPROPERTY_OFFSET))(arg, nullptr);
		}

		::System::Void Freeze()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_FREEZE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessageSink* GetServerContextSinkChain()
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETSERVERCONTEXTSINKCHAIN_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessageSink* GetClientContextSinkChain()
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETCLIENTCONTEXTSINKCHAIN_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessageSink* CreateServerObjectSinkChain(::System::MarshalByRefObject* arg, ::System::Boolean arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::System::MarshalByRefObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_CREATESERVEROBJECTSINKCHAIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessageSink* CreateEnvoySink(::System::MarshalByRefObject* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::System::MarshalByRefObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_CREATEENVOYSINK_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Contexts::Context* SwitchToContext(::System::Runtime::Remoting::Contexts::Context* arg)
		{
			return (return (::System::Runtime::Remoting::Contexts::Context*(*)(::System::Runtime::Remoting::Contexts::Context*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_SWITCHTOCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Contexts::Context* CreateNewContext(::System::Runtime::Remoting::Activation::IConstructionCallMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Contexts::Context*(*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_CREATENEWCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void DoCallBack(::System::Runtime::Remoting::Contexts::CrossContextDelegate* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Contexts::CrossContextDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_DOCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::LocalDataStore* get_MyLocalStore()
		{
			return (return (::System::LocalDataStore*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GET_MYLOCALSTORE_OFFSET))(nullptr);
		}

		::System::LocalDataStoreSlot* AllocateDataSlot()
		{
			return (return (::System::LocalDataStoreSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_ALLOCATEDATASLOT_OFFSET))(nullptr);
		}

		::System::LocalDataStoreSlot* AllocateNamedDataSlot(::System::String* str)
		{
			return (return (::System::LocalDataStoreSlot*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_ALLOCATENAMEDDATASLOT_OFFSET))(str, nullptr);
		}

		::System::Void FreeNamedDataSlot(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_FREENAMEDDATASLOT_OFFSET))(str, nullptr);
		}

		::System::LocalDataStoreSlot* GetNamedDataSlot(::System::String* str)
		{
			return (return (::System::LocalDataStoreSlot*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETNAMEDDATASLOT_OFFSET))(str, nullptr);
		}

		::System::Object* GetData(::System::LocalDataStoreSlot* arg)
		{
			return (return (::System::Object*(*)(::System::LocalDataStoreSlot*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_GETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::System::LocalDataStoreSlot* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::LocalDataStoreSlot*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_SETDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

