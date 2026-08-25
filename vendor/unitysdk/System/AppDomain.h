#pragma once
#include "../unitysdk.h"

#define SYSTEM_APPDOMAIN_ISAPPXMODEL_OFFSET UNITYSDK_OFFSET(0x93B0940)
#define SYSTEM_APPDOMAIN_.CTOR_OFFSET UNITYSDK_OFFSET(0x93B0950)
#define SYSTEM_APPDOMAIN_GETFRIENDLYNAME_OFFSET UNITYSDK_OFFSET(0x93B0970)
#define SYSTEM_APPDOMAIN_GETCURDOMAIN_OFFSET UNITYSDK_OFFSET(0x93B0980)
#define SYSTEM_APPDOMAIN_GET_CURRENTDOMAIN_OFFSET UNITYSDK_OFFSET(0x93B0990)
#define SYSTEM_APPDOMAIN_GETASSEMBLIES_OFFSET UNITYSDK_OFFSET(0x93B09A0)
#define SYSTEM_APPDOMAIN_GETASSEMBLIES_OFFSET UNITYSDK_OFFSET(0x93B09B0)
#define SYSTEM_APPDOMAIN_GETDATA_OFFSET UNITYSDK_OFFSET(0x93B09C0)
#define SYSTEM_APPDOMAIN_INITIALIZELIFETIMESERVICE_OFFSET UNITYSDK_OFFSET(0x93B09D0)
#define SYSTEM_APPDOMAIN_LOADASSEMBLY_OFFSET UNITYSDK_OFFSET(0x93B09E0)
#define SYSTEM_APPDOMAIN_LOADSATELLITE_OFFSET UNITYSDK_OFFSET(0x93B09F0)
#define SYSTEM_APPDOMAIN_LOAD_OFFSET UNITYSDK_OFFSET(0x93B0B00)
#define SYSTEM_APPDOMAIN_LOAD_OFFSET UNITYSDK_OFFSET(0x93B0B30)
#define SYSTEM_APPDOMAIN_INTERNALSETDOMAINBYID_OFFSET UNITYSDK_OFFSET(0x93B0C60)
#define SYSTEM_APPDOMAIN_INTERNALSETDOMAIN_OFFSET UNITYSDK_OFFSET(0x93B0C70)
#define SYSTEM_APPDOMAIN_INTERNALPUSHDOMAINREFBYID_OFFSET UNITYSDK_OFFSET(0x93B0C80)
#define SYSTEM_APPDOMAIN_INTERNALPOPDOMAINREF_OFFSET UNITYSDK_OFFSET(0x93B0C90)
#define SYSTEM_APPDOMAIN_INTERNALSETCONTEXT_OFFSET UNITYSDK_OFFSET(0x93B0CA0)
#define SYSTEM_APPDOMAIN_INTERNALGETCONTEXT_OFFSET UNITYSDK_OFFSET(0x93B0CB0)
#define SYSTEM_APPDOMAIN_INTERNALGETDEFAULTCONTEXT_OFFSET UNITYSDK_OFFSET(0x93B0CC0)
#define SYSTEM_APPDOMAIN_INTERNALGETPROCESSGUID_OFFSET UNITYSDK_OFFSET(0x93B0CD0)
#define SYSTEM_APPDOMAIN_INVOKEINDOMAINBYID_OFFSET UNITYSDK_OFFSET(0x93B0CE0)
#define SYSTEM_APPDOMAIN_GETPROCESSGUID_OFFSET UNITYSDK_OFFSET(0x93B0EE0)
#define SYSTEM_APPDOMAIN_INTERNALISFINALIZINGFORUNLOAD_OFFSET UNITYSDK_OFFSET(0x93B0F90)
#define SYSTEM_APPDOMAIN_ISFINALIZINGFORUNLOAD_OFFSET UNITYSDK_OFFSET(0x93B0FA0)
#define SYSTEM_APPDOMAIN_GETDOMAINID_OFFSET UNITYSDK_OFFSET(0x93B0FC0)
#define SYSTEM_APPDOMAIN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x93B0FD0)
#define SYSTEM_APPDOMAIN_DOASSEMBLYLOAD_OFFSET UNITYSDK_OFFSET(0x93B0FE0)
#define SYSTEM_APPDOMAIN_DOASSEMBLYRESOLVE_OFFSET UNITYSDK_OFFSET(0x93B1070)
#define SYSTEM_APPDOMAIN_DOTYPERESOLVE_OFFSET UNITYSDK_OFFSET(0x93B1420)
#define SYSTEM_APPDOMAIN_DORESOURCERESOLVE_OFFSET UNITYSDK_OFFSET(0x93B1760)
#define SYSTEM_APPDOMAIN_DODOMAINUNLOAD_OFFSET UNITYSDK_OFFSET(0x93B1880)
#define SYSTEM_APPDOMAIN_GETMARSHALLEDDOMAINOBJREF_OFFSET UNITYSDK_OFFSET(0x93B18A0)
#define SYSTEM_APPDOMAIN_PROCESSMESSAGEINDOMAIN_OFFSET UNITYSDK_OFFSET(0x93B1970)
#define SYSTEM_APPDOMAIN_ADD_DOMAINUNLOAD_OFFSET UNITYSDK_OFFSET(0x93B1AC0)
#define SYSTEM_APPDOMAIN_REMOVE_DOMAINUNLOAD_OFFSET UNITYSDK_OFFSET(0x93B1CC0)
#define SYSTEM_APPDOMAIN_ADD_UNHANDLEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x93B1EC0)
#define SYSTEM_APPDOMAIN_REMOVE_UNHANDLEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x93B1F50)
#define SYSTEM_APPDOMAIN_GET_ISHOMOGENOUS_OFFSET UNITYSDK_OFFSET(0x93B1FE0)
#define SYSTEM_APPDOMAIN_GET_ISFULLYTRUSTED_OFFSET UNITYSDK_OFFSET(0x93B1FF0)

namespace System
{
	inline static constexpr unsigned int AppDomain_TypeDefinitionIndex = 23948;

	class AppDomain : public Il2CppObject
	{
	public:
		::System::Int32 _mono_app_domain; // 0x18
		::System::String* _process_guid; // 0x0
		Il2CppObject* type_resolve_in_progress;
		Il2CppObject* assembly_resolve_in_progress;
		Il2CppObject* assembly_resolve_in_progress_refonly;
		::System::Object* _evidence; // 0x20
		::System::Object* _granted; // 0x28
		::System::Int32 _principalPolicy; // 0x30
		::System::AssemblyLoadEventHandler* AssemblyLoad; // 0x38
		::System::ResolveEventHandler* AssemblyResolve; // 0x40
		::System::EventHandler* DomainUnload; // 0x48
		::System::EventHandler* ProcessExit; // 0x50
		::System::ResolveEventHandler* ResourceResolve; // 0x58
		::System::ResolveEventHandler* TypeResolve; // 0x60
		::System::UnhandledExceptionEventHandler* UnhandledException; // 0x68
		Il2CppObject* FirstChanceException; // 0x70
		::System::Object* _domain_manager; // 0x78
		::System::ResolveEventHandler* ReflectionOnlyAssemblyResolve; // 0x80
		::System::Object* _activation; // 0x88
		::System::Object* _applicationIdentity; // 0x90
		Il2CppObject* compatibility_switch; // 0x98

		::System::Boolean IsAppXModel()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_ISAPPXMODEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_.CTOR_OFFSET))(nullptr);
		}

		::System::String* getFriendlyName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_GETFRIENDLYNAME_OFFSET))(nullptr);
		}

		::System::AppDomain* getCurDomain()
		{
			return (return (::System::AppDomain*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_GETCURDOMAIN_OFFSET))(nullptr);
		}

		::System::AppDomain* get_CurrentDomain()
		{
			return (return (::System::AppDomain*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_GET_CURRENTDOMAIN_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetAssemblies(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_GETASSEMBLIES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetAssemblies()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_GETASSEMBLIES_OFFSET))(nullptr);
		}

		::System::Object* GetData(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_GETDATA_OFFSET))(str, nullptr);
		}

		::System::Object* InitializeLifetimeService()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_INITIALIZELIFETIMESERVICE_OFFSET))(nullptr);
		}

		::System::Reflection::Assembly* LoadAssembly(::System::String* str, ::System::Security::Policy::Evidence* arg, ::System::Boolean arg, ::System::Threading::StackCrawlMark&* arg)
		{
			return (return (::System::Reflection::Assembly*(*)(::System::String*, ::System::Security::Policy::Evidence*, ::System::Boolean, ::System::Threading::StackCrawlMark&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_LOADASSEMBLY_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Reflection::Assembly* LoadSatellite(::System::Reflection::AssemblyName* arg, ::System::Boolean arg, ::System::Threading::StackCrawlMark&* arg)
		{
			return (return (::System::Reflection::Assembly*(*)(::System::Reflection::AssemblyName*, ::System::Boolean, ::System::Threading::StackCrawlMark&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_LOADSATELLITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Reflection::Assembly* Load(::System::String* str)
		{
			return (return (::System::Reflection::Assembly*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_LOAD_OFFSET))(str, nullptr);
		}

		::System::Reflection::Assembly* Load(::System::String* str, ::System::Security::Policy::Evidence* arg, ::System::Boolean arg, ::System::Threading::StackCrawlMark&* arg)
		{
			return (return (::System::Reflection::Assembly*(*)(::System::String*, ::System::Security::Policy::Evidence*, ::System::Boolean, ::System::Threading::StackCrawlMark&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_LOAD_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::AppDomain* InternalSetDomainByID(::System::Int32 arg)
		{
			return (return (::System::AppDomain*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_INTERNALSETDOMAINBYID_OFFSET))(arg, nullptr);
		}

		::System::AppDomain* InternalSetDomain(::System::AppDomain* arg)
		{
			return (return (::System::AppDomain*(*)(::System::AppDomain*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_INTERNALSETDOMAIN_OFFSET))(arg, nullptr);
		}

		::System::Void InternalPushDomainRefByID(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_INTERNALPUSHDOMAINREFBYID_OFFSET))(arg, nullptr);
		}

		::System::Void InternalPopDomainRef()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_INTERNALPOPDOMAINREF_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Contexts::Context* InternalSetContext(::System::Runtime::Remoting::Contexts::Context* arg)
		{
			return (return (::System::Runtime::Remoting::Contexts::Context*(*)(::System::Runtime::Remoting::Contexts::Context*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_INTERNALSETCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Contexts::Context* InternalGetContext()
		{
			return (return (::System::Runtime::Remoting::Contexts::Context*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_INTERNALGETCONTEXT_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Contexts::Context* InternalGetDefaultContext()
		{
			return (return (::System::Runtime::Remoting::Contexts::Context*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_INTERNALGETDEFAULTCONTEXT_OFFSET))(nullptr);
		}

		::System::String* InternalGetProcessGuid(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_INTERNALGETPROCESSGUID_OFFSET))(str, nullptr);
		}

		::System::Object* InvokeInDomainByID(::System::Int32 arg, ::System::Reflection::MethodInfo* arg, ::System::Object* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::System::Reflection::MethodInfo*, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_INVOKEINDOMAINBYID_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* GetProcessGuid()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_GETPROCESSGUID_OFFSET))(nullptr);
		}

		::System::Boolean InternalIsFinalizingForUnload(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_INTERNALISFINALIZINGFORUNLOAD_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsFinalizingForUnload()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_ISFINALIZINGFORUNLOAD_OFFSET))(nullptr);
		}

		::System::Int32 getDomainID()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_GETDOMAINID_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void DoAssemblyLoad(::System::Reflection::Assembly* arg)
		{
			((::System::Void(*)(::System::Reflection::Assembly*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_DOASSEMBLYLOAD_OFFSET))(arg, nullptr);
		}

		::System::Reflection::Assembly* DoAssemblyResolve(::System::String* str, ::System::Reflection::Assembly* arg, ::System::Boolean arg)
		{
			return (return (::System::Reflection::Assembly*(*)(::System::String*, ::System::Reflection::Assembly*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_DOASSEMBLYRESOLVE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Reflection::Assembly* DoTypeResolve(::System::String* str)
		{
			return (return (::System::Reflection::Assembly*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_DOTYPERESOLVE_OFFSET))(str, nullptr);
		}

		::System::Reflection::Assembly* DoResourceResolve(::System::String* str, ::System::Reflection::Assembly* arg)
		{
			return (return (::System::Reflection::Assembly*(*)(::System::String*, ::System::Reflection::Assembly*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_DORESOURCERESOLVE_OFFSET))(str, arg, nullptr);
		}

		::System::Void DoDomainUnload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_DODOMAINUNLOAD_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetMarshalledDomainObjRef()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_GETMARSHALLEDDOMAINOBJREF_OFFSET))(nullptr);
		}

		::System::Void ProcessMessageInDomain(::Il2CppArray<::System::Object*>* arg, ::System::Runtime::Remoting::Messaging::CADMethodCallMessage* arg, ::System::Object[]&* arg, ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage&* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Runtime::Remoting::Messaging::CADMethodCallMessage*, ::System::Object[]&*, ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_PROCESSMESSAGEINDOMAIN_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void add_DomainUnload(::System::EventHandler* arg)
		{
			((::System::Void(*)(::System::EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_ADD_DOMAINUNLOAD_OFFSET))(arg, nullptr);
		}

		::System::Void remove_DomainUnload(::System::EventHandler* arg)
		{
			((::System::Void(*)(::System::EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_REMOVE_DOMAINUNLOAD_OFFSET))(arg, nullptr);
		}

		::System::Void add_UnhandledException(::System::UnhandledExceptionEventHandler* arg)
		{
			((::System::Void(*)(::System::UnhandledExceptionEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_ADD_UNHANDLEDEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Void remove_UnhandledException(::System::UnhandledExceptionEventHandler* arg)
		{
			((::System::Void(*)(::System::UnhandledExceptionEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_REMOVE_UNHANDLEDEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsHomogenous()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_GET_ISHOMOGENOUS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFullyTrusted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAIN_GET_ISFULLYTRUSTED_OFFSET))(nullptr);
		}

	};
}

