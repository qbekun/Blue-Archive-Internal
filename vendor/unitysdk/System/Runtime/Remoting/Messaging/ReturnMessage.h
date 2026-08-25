#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x91D71F0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x91D7090)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_ARGCOUNT_OFFSET UNITYSDK_OFFSET(0x91F5D20)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_ARGS_OFFSET UNITYSDK_OFFSET(0x91F5D40)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_LOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x91F5D50)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_METHODBASE_OFFSET UNITYSDK_OFFSET(0x91F5DC0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_METHODNAME_OFFSET UNITYSDK_OFFSET(0x91F5DD0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_METHODSIGNATURE_OFFSET UNITYSDK_OFFSET(0x91F5E30)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x91F5F80)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x91F6000)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_URI_OFFSET UNITYSDK_OFFSET(0x91F6080)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_SET_URI_OFFSET UNITYSDK_OFFSET(0x91F6090)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_SYSTEM.RUNTIME.REMOTING.MESSAGING.IINTERNALMESSAGE.GET_URI_OFFSET UNITYSDK_OFFSET(0x91F60A0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_SYSTEM.RUNTIME.REMOTING.MESSAGING.IINTERNALMESSAGE.SET_URI_OFFSET UNITYSDK_OFFSET(0x91F60B0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GETARG_OFFSET UNITYSDK_OFFSET(0x91F60C0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x91F60F0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_OUTARGS_OFFSET UNITYSDK_OFFSET(0x91F6100)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_RETURNVALUE_OFFSET UNITYSDK_OFFSET(0x91F61C0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_SYSTEM.RUNTIME.REMOTING.MESSAGING.IINTERNALMESSAGE.GET_TARGETIDENTITY_OFFSET UNITYSDK_OFFSET(0x91F61D0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_SYSTEM.RUNTIME.REMOTING.MESSAGING.IINTERNALMESSAGE.SET_TARGETIDENTITY_OFFSET UNITYSDK_OFFSET(0x91F61E0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int ReturnMessage_TypeDefinitionIndex = 24561;

	class ReturnMessage : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _outArgs; // 0x10
		::Il2CppArray<::System::Object*>* _args; // 0x18
		::System::Runtime::Remoting::Messaging::LogicalCallContext* _callCtx; // 0x20
		::System::Object* _returnValue; // 0x28
		::System::String* _uri; // 0x30
		::System::Exception* _exception; // 0x38
		::System::Reflection::MethodBase* _methodBase; // 0x40
		::System::String* _methodName; // 0x48
		::Il2CppArray<::System::Object*>* _methodSignature; // 0x50
		::System::String* _typeName; // 0x58
		::System::Runtime::Remoting::Messaging::MethodReturnDictionary* _properties; // 0x60
		::System::Runtime::Remoting::Identity* _targetIdentity; // 0x68
		::System::Runtime::Remoting::Messaging::ArgInfo* _inArgInfo; // 0x70

		::System::Void .ctor(::System::Object* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Runtime::Remoting::Messaging::LogicalCallContext* arg, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* arg)
		{
			((::System::Void(*)(::System::Object*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Runtime::Remoting::Messaging::LogicalCallContext*, ::System::Runtime::Remoting::Messaging::IMethodCallMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Exception* arg, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* arg)
		{
			((::System::Void(*)(::System::Exception*, ::System::Runtime::Remoting::Messaging::IMethodCallMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_ArgCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_ARGCOUNT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Args()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_ARGS_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext()
		{
			return (return (::System::Runtime::Remoting::Messaging::LogicalCallContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_LOGICALCALLCONTEXT_OFFSET))(nullptr);
		}

		::System::Reflection::MethodBase* get_MethodBase()
		{
			return (return (::System::Reflection::MethodBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_METHODBASE_OFFSET))(nullptr);
		}

		::System::String* get_MethodName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_METHODNAME_OFFSET))(nullptr);
		}

		::System::Object* get_MethodSignature()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_METHODSIGNATURE_OFFSET))(nullptr);
		}

		::System::Collections::IDictionary* get_Properties()
		{
			return (return (::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::String* get_TypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_TYPENAME_OFFSET))(nullptr);
		}

		::System::String* get_Uri()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_URI_OFFSET))(nullptr);
		}

		::System::Void set_Uri(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_SET_URI_OFFSET))(str, nullptr);
		}

		::System::String* System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_SYSTEM.RUNTIME.REMOTING.MESSAGING.IINTERNALMESSAGE.GET_URI_OFFSET))(nullptr);
		}

		::System::Void System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_SYSTEM.RUNTIME.REMOTING.MESSAGING.IINTERNALMESSAGE.SET_URI_OFFSET))(str, nullptr);
		}

		::System::Object* GetArg(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GETARG_OFFSET))(arg, nullptr);
		}

		::System::Exception* get_Exception()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_EXCEPTION_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_OutArgs()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_OUTARGS_OFFSET))(nullptr);
		}

		::System::Object* get_ReturnValue()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_GET_RETURNVALUE_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Identity* System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity()
		{
			return (return (::System::Runtime::Remoting::Identity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_SYSTEM.RUNTIME.REMOTING.MESSAGING.IINTERNALMESSAGE.GET_TARGETIDENTITY_OFFSET))(nullptr);
		}

		::System::Void System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity(::System::Runtime::Remoting::Identity* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Identity*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_RETURNMESSAGE_SYSTEM.RUNTIME.REMOTING.MESSAGING.IINTERNALMESSAGE.SET_TARGETIDENTITY_OFFSET))(arg, nullptr);
		}

	};
}

