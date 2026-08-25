#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_INITMESSAGE_OFFSET UNITYSDK_OFFSET(0x91F4A30)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x91F4DE0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x91D5870)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GETMETHODINFO_OFFSET UNITYSDK_OFFSET(0x91F4EA0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x91F4F60)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x91F4F90)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_ARGCOUNT_OFFSET UNITYSDK_OFFSET(0x91F5070)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_ARGS_OFFSET UNITYSDK_OFFSET(0x91F5110)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_LOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x91F5120)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_SET_LOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x91F5130)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_METHODBASE_OFFSET UNITYSDK_OFFSET(0x91F5140)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_METHODNAME_OFFSET UNITYSDK_OFFSET(0x91F5150)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_METHODSIGNATURE_OFFSET UNITYSDK_OFFSET(0x91F51D0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x91F5300)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_URI_OFFSET UNITYSDK_OFFSET(0x91F5390)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_SET_URI_OFFSET UNITYSDK_OFFSET(0x91F53A0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GETARG_OFFSET UNITYSDK_OFFSET(0x91D8290)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x91F53B0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_OUTARGCOUNT_OFFSET UNITYSDK_OFFSET(0x91F53C0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_OUTARGS_OFFSET UNITYSDK_OFFSET(0x91F54C0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_RETURNVALUE_OFFSET UNITYSDK_OFFSET(0x91F56E0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_SYSTEM.RUNTIME.REMOTING.MESSAGING.IINTERNALMESSAGE.GET_TARGETIDENTITY_OFFSET UNITYSDK_OFFSET(0x91F56F0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_SYSTEM.RUNTIME.REMOTING.MESSAGING.IINTERNALMESSAGE.SET_TARGETIDENTITY_OFFSET UNITYSDK_OFFSET(0x91F5700)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_ASYNCRESULT_OFFSET UNITYSDK_OFFSET(0x91F5710)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_CALLTYPE_OFFSET UNITYSDK_OFFSET(0x91D6D70)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_NEEDSOUTPROCESSING_OFFSET UNITYSDK_OFFSET(0x91D8200)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int MonoMethodMessage_TypeDefinitionIndex = 24555;

	class MonoMethodMessage : public Il2CppObject
	{
	public:
		::System::Reflection::RuntimeMethodInfo* method; // 0x10
		::Il2CppArray<::System::Object*>* args; // 0x18
		::Il2CppArray<::System::Object*>* names; // 0x20
		::Il2CppArray<::System::Object*>* arg_types; // 0x28
		::System::Runtime::Remoting::Messaging::LogicalCallContext* ctx; // 0x30
		::System::Object* rval; // 0x38
		::System::Exception* exc; // 0x40
		::System::Runtime::Remoting::Messaging::AsyncResult* asyncResult; // 0x48
		::System::Runtime::Remoting::Messaging::CallType* call_type; // 0x50
		::System::String* uri; // 0x58
		::System::Runtime::Remoting::Messaging::MCMDictionary* properties; // 0x60
		::System::Runtime::Remoting::Identity* identity; // 0x68
		::Il2CppArray<::System::Object*>* methodSignature; // 0x70

		::System::Void InitMessage(::System::Reflection::RuntimeMethodInfo* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Reflection::RuntimeMethodInfo*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_INITMESSAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Reflection::MethodBase* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Reflection::MethodBase*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Reflection::MethodInfo* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Reflection::MethodInfo* GetMethodInfo(::System::Type* arg, ::System::String* str)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GETMETHODINFO_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_.CTOR_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Collections::IDictionary* get_Properties()
		{
			return (return (::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::Int32 get_ArgCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_ARGCOUNT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Args()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_ARGS_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext()
		{
			return (return (::System::Runtime::Remoting::Messaging::LogicalCallContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_LOGICALCALLCONTEXT_OFFSET))(nullptr);
		}

		::System::Void set_LogicalCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Messaging::LogicalCallContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_SET_LOGICALCALLCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Reflection::MethodBase* get_MethodBase()
		{
			return (return (::System::Reflection::MethodBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_METHODBASE_OFFSET))(nullptr);
		}

		::System::String* get_MethodName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_METHODNAME_OFFSET))(nullptr);
		}

		::System::Object* get_MethodSignature()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_METHODSIGNATURE_OFFSET))(nullptr);
		}

		::System::String* get_TypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_TYPENAME_OFFSET))(nullptr);
		}

		::System::String* get_Uri()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_URI_OFFSET))(nullptr);
		}

		::System::Void set_Uri(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_SET_URI_OFFSET))(str, nullptr);
		}

		::System::Object* GetArg(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GETARG_OFFSET))(arg, nullptr);
		}

		::System::Exception* get_Exception()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_EXCEPTION_OFFSET))(nullptr);
		}

		::System::Int32 get_OutArgCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_OUTARGCOUNT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_OutArgs()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_OUTARGS_OFFSET))(nullptr);
		}

		::System::Object* get_ReturnValue()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_RETURNVALUE_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Identity* System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity()
		{
			return (return (::System::Runtime::Remoting::Identity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_SYSTEM.RUNTIME.REMOTING.MESSAGING.IINTERNALMESSAGE.GET_TARGETIDENTITY_OFFSET))(nullptr);
		}

		::System::Void System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity(::System::Runtime::Remoting::Identity* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Identity*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_SYSTEM.RUNTIME.REMOTING.MESSAGING.IINTERNALMESSAGE.SET_TARGETIDENTITY_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::AsyncResult* get_AsyncResult()
		{
			return (return (::System::Runtime::Remoting::Messaging::AsyncResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_ASYNCRESULT_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Messaging::CallType* get_CallType()
		{
			return (return (::System::Runtime::Remoting::Messaging::CallType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_GET_CALLTYPE_OFFSET))(nullptr);
		}

		::System::Boolean NeedsOutProcessing(int32_t&* arg)
		{
			return (return (::System::Boolean(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MONOMETHODMESSAGE_NEEDSOUTPROCESSING_OFFSET))(arg, nullptr);
		}

	};
}

