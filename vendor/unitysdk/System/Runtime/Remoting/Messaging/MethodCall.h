#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_.CTOR_OFFSET UNITYSDK_OFFSET(0x91EDC80)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_.CTOR_OFFSET UNITYSDK_OFFSET(0x91F0920)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_.CTOR_OFFSET UNITYSDK_OFFSET(0x91EDC60)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_COPYFROM_OFFSET UNITYSDK_OFFSET(0x91D9BE0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_INITMETHODPROPERTY_OFFSET UNITYSDK_OFFSET(0x91EE3E0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x91EEA20)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_ARGCOUNT_OFFSET UNITYSDK_OFFSET(0x91F0B50)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_ARGS_OFFSET UNITYSDK_OFFSET(0x91F0B70)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_LOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x91F0B80)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_METHODBASE_OFFSET UNITYSDK_OFFSET(0x91F0BF0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_METHODNAME_OFFSET UNITYSDK_OFFSET(0x91F1320)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_METHODSIGNATURE_OFFSET UNITYSDK_OFFSET(0x91F1380)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x91EEEE0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_INITDICTIONARY_OFFSET UNITYSDK_OFFSET(0x91F14D0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x91F1660)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_URI_OFFSET UNITYSDK_OFFSET(0x91F16D0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_SET_URI_OFFSET UNITYSDK_OFFSET(0x91F16E0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_SYSTEM.RUNTIME.REMOTING.MESSAGING.IINTERNALMESSAGE.GET_URI_OFFSET UNITYSDK_OFFSET(0x91F16F0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_SYSTEM.RUNTIME.REMOTING.MESSAGING.IINTERNALMESSAGE.SET_URI_OFFSET UNITYSDK_OFFSET(0x91F1700)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GETARG_OFFSET UNITYSDK_OFFSET(0x91F1710)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_INIT_OFFSET UNITYSDK_OFFSET(0x91F1740)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_RESOLVEMETHOD_OFFSET UNITYSDK_OFFSET(0x91F0C20)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_CASTTO_OFFSET UNITYSDK_OFFSET(0x91F1750)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GETTYPENAMEFROMASSEMBLYQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x91F1930)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_SYSTEM.RUNTIME.REMOTING.MESSAGING.IINTERNALMESSAGE.GET_TARGETIDENTITY_OFFSET UNITYSDK_OFFSET(0x91F19D0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_SYSTEM.RUNTIME.REMOTING.MESSAGING.IINTERNALMESSAGE.SET_TARGETIDENTITY_OFFSET UNITYSDK_OFFSET(0x91F19E0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_GENERICARGUMENTS_OFFSET UNITYSDK_OFFSET(0x91F18C0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int MethodCall_TypeDefinitionIndex = 24549;

	class MethodCall : public Il2CppObject
	{
	public:
		::System::String* _uri; // 0x10
		::System::String* _typeName; // 0x18
		::System::String* _methodName; // 0x20
		::Il2CppArray<::System::Object*>* _args; // 0x28
		::Il2CppArray<::System::Object*>* _methodSignature; // 0x30
		::System::Reflection::MethodBase* _methodBase; // 0x38
		::System::Runtime::Remoting::Messaging::LogicalCallContext* _callContext; // 0x40
		::System::Runtime::Remoting::Identity* _targetIdentity; // 0x48
		::Il2CppArray<::System::Object*>* _genericArguments; // 0x50
		::System::Collections::IDictionary* ExternalProperties; // 0x58
		::System::Collections::IDictionary* InternalProperties; // 0x60

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Remoting::Messaging::CADMethodCallMessage* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Messaging::CADMethodCallMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CopyFrom(::System::Runtime::Remoting::Messaging::IMethodMessage* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Messaging::IMethodMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Void InitMethodProperty(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_INITMETHODPROPERTY_OFFSET))(str, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_ArgCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_ARGCOUNT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Args()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_ARGS_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext()
		{
			return (return (::System::Runtime::Remoting::Messaging::LogicalCallContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_LOGICALCALLCONTEXT_OFFSET))(nullptr);
		}

		::System::Reflection::MethodBase* get_MethodBase()
		{
			return (return (::System::Reflection::MethodBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_METHODBASE_OFFSET))(nullptr);
		}

		::System::String* get_MethodName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_METHODNAME_OFFSET))(nullptr);
		}

		::System::Object* get_MethodSignature()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_METHODSIGNATURE_OFFSET))(nullptr);
		}

		::System::Collections::IDictionary* get_Properties()
		{
			return (return (::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::Void InitDictionary()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_INITDICTIONARY_OFFSET))(nullptr);
		}

		::System::String* get_TypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_TYPENAME_OFFSET))(nullptr);
		}

		::System::String* get_Uri()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_URI_OFFSET))(nullptr);
		}

		::System::Void set_Uri(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_SET_URI_OFFSET))(str, nullptr);
		}

		::System::String* System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_SYSTEM.RUNTIME.REMOTING.MESSAGING.IINTERNALMESSAGE.GET_URI_OFFSET))(nullptr);
		}

		::System::Void System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_SYSTEM.RUNTIME.REMOTING.MESSAGING.IINTERNALMESSAGE.SET_URI_OFFSET))(str, nullptr);
		}

		::System::Object* GetArg(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GETARG_OFFSET))(arg, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_INIT_OFFSET))(nullptr);
		}

		::System::Void ResolveMethod()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_RESOLVEMETHOD_OFFSET))(nullptr);
		}

		::System::Type* CastTo(::System::String* str, ::System::Type* arg)
		{
			return (return (::System::Type*(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_CASTTO_OFFSET))(str, arg, nullptr);
		}

		::System::String* GetTypeNameFromAssemblyQualifiedName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GETTYPENAMEFROMASSEMBLYQUALIFIEDNAME_OFFSET))(str, nullptr);
		}

		::System::Runtime::Remoting::Identity* System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity()
		{
			return (return (::System::Runtime::Remoting::Identity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_SYSTEM.RUNTIME.REMOTING.MESSAGING.IINTERNALMESSAGE.GET_TARGETIDENTITY_OFFSET))(nullptr);
		}

		::System::Void System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity(::System::Runtime::Remoting::Identity* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Identity*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_SYSTEM.RUNTIME.REMOTING.MESSAGING.IINTERNALMESSAGE.SET_TARGETIDENTITY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_GenericArguments()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODCALL_GET_GENERICARGUMENTS_OFFSET))(nullptr);
		}

	};
}

