#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x91E3690)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x91D94C0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x91E51A0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x91F02C0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_INITMETHODPROPERTY_OFFSET UNITYSDK_OFFSET(0x91F3520)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_ARGCOUNT_OFFSET UNITYSDK_OFFSET(0x91F3A70)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_ARGS_OFFSET UNITYSDK_OFFSET(0x91F3A80)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x91F3A90)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_LOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x91F3AA0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_METHODBASE_OFFSET UNITYSDK_OFFSET(0x91F3B10)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_METHODNAME_OFFSET UNITYSDK_OFFSET(0x91F3C20)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_METHODSIGNATURE_OFFSET UNITYSDK_OFFSET(0x91F3DA0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_OUTARGS_OFFSET UNITYSDK_OFFSET(0x91F3EC0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x91F0350)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_RETURNVALUE_OFFSET UNITYSDK_OFFSET(0x91F40A0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x91F3CE0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_URI_OFFSET UNITYSDK_OFFSET(0x91F40B0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_SET_URI_OFFSET UNITYSDK_OFFSET(0x91F4170)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_SYSTEM.RUNTIME.REMOTING.MESSAGING.IINTERNALMESSAGE.GET_URI_OFFSET UNITYSDK_OFFSET(0x91F4180)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_SYSTEM.RUNTIME.REMOTING.MESSAGING.IINTERNALMESSAGE.SET_URI_OFFSET UNITYSDK_OFFSET(0x91F4190)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GETARG_OFFSET UNITYSDK_OFFSET(0x91F41A0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x91F41D0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_SYSTEM.RUNTIME.REMOTING.MESSAGING.IINTERNALMESSAGE.GET_TARGETIDENTITY_OFFSET UNITYSDK_OFFSET(0x91F4680)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_SYSTEM.RUNTIME.REMOTING.MESSAGING.IINTERNALMESSAGE.SET_TARGETIDENTITY_OFFSET UNITYSDK_OFFSET(0x91F4690)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int MethodResponse_TypeDefinitionIndex = 24553;

	class MethodResponse : public Il2CppObject
	{
	public:
		::System::String* _methodName; // 0x10
		::System::String* _uri; // 0x18
		::System::String* _typeName; // 0x20
		::System::Reflection::MethodBase* _methodBase; // 0x28
		::System::Object* _returnValue; // 0x30
		::System::Exception* _exception; // 0x38
		::Il2CppArray<::System::Object*>* _methodSignature; // 0x40
		::System::Runtime::Remoting::Messaging::ArgInfo* _inArgInfo; // 0x48
		::Il2CppArray<::System::Object*>* _args; // 0x50
		::Il2CppArray<::System::Object*>* _outArgs; // 0x58
		::System::Runtime::Remoting::Messaging::IMethodCallMessage* _callMsg; // 0x60
		::System::Runtime::Remoting::Messaging::LogicalCallContext* _callContext; // 0x68
		::System::Runtime::Remoting::Identity* _targetIdentity; // 0x70
		::System::Collections::IDictionary* ExternalProperties; // 0x78
		::System::Collections::IDictionary* InternalProperties; // 0x80

		::System::Void .ctor(::System::Exception* arg, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* arg)
		{
			((::System::Void(*)(::System::Exception*, ::System::Runtime::Remoting::Messaging::IMethodCallMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Runtime::Remoting::Messaging::LogicalCallContext* arg, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* arg)
		{
			((::System::Void(*)(::System::Object*, ::Il2CppArray<::System::Object*>*, ::System::Runtime::Remoting::Messaging::LogicalCallContext*, ::System::Runtime::Remoting::Messaging::IMethodCallMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Remoting::Messaging::IMethodCallMessage* arg, ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Messaging::IMethodCallMessage*, ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitMethodProperty(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_INITMETHODPROPERTY_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 get_ArgCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_ARGCOUNT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Args()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_ARGS_OFFSET))(nullptr);
		}

		::System::Exception* get_Exception()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_EXCEPTION_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext()
		{
			return (return (::System::Runtime::Remoting::Messaging::LogicalCallContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_LOGICALCALLCONTEXT_OFFSET))(nullptr);
		}

		::System::Reflection::MethodBase* get_MethodBase()
		{
			return (return (::System::Reflection::MethodBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_METHODBASE_OFFSET))(nullptr);
		}

		::System::String* get_MethodName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_METHODNAME_OFFSET))(nullptr);
		}

		::System::Object* get_MethodSignature()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_METHODSIGNATURE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_OutArgs()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_OUTARGS_OFFSET))(nullptr);
		}

		::System::Collections::IDictionary* get_Properties()
		{
			return (return (::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::Object* get_ReturnValue()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_RETURNVALUE_OFFSET))(nullptr);
		}

		::System::String* get_TypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_TYPENAME_OFFSET))(nullptr);
		}

		::System::String* get_Uri()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GET_URI_OFFSET))(nullptr);
		}

		::System::Void set_Uri(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_SET_URI_OFFSET))(str, nullptr);
		}

		::System::String* System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_SYSTEM.RUNTIME.REMOTING.MESSAGING.IINTERNALMESSAGE.GET_URI_OFFSET))(nullptr);
		}

		::System::Void System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_SYSTEM.RUNTIME.REMOTING.MESSAGING.IINTERNALMESSAGE.SET_URI_OFFSET))(str, nullptr);
		}

		::System::Object* GetArg(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GETARG_OFFSET))(arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Runtime::Remoting::Identity* System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity()
		{
			return (return (::System::Runtime::Remoting::Identity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_SYSTEM.RUNTIME.REMOTING.MESSAGING.IINTERNALMESSAGE.GET_TARGETIDENTITY_OFFSET))(nullptr);
		}

		::System::Void System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity(::System::Runtime::Remoting::Identity* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Identity*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRESPONSE_SYSTEM.RUNTIME.REMOTING.MESSAGING.IINTERNALMESSAGE.SET_TARGETIDENTITY_OFFSET))(arg, nullptr);
		}

	};
}

