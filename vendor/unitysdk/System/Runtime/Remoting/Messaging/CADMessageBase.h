#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x91EAB40)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_GETMETHOD_OFFSET UNITYSDK_OFFSET(0x91EABE0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_GETSIGNATURE_OFFSET UNITYSDK_OFFSET(0x91EAC60)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_MARSHALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x91EAF00)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_UNMARSHALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x91EB8C0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_ISPOSSIBLETOIGNOREMARSHAL_OFFSET UNITYSDK_OFFSET(0x91EBA40)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_MARSHALARGUMENT_OFFSET UNITYSDK_OFFSET(0x91EBC00)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_UNMARSHALARGUMENT_OFFSET UNITYSDK_OFFSET(0x91EBE10)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_MARSHALARGUMENTS_OFFSET UNITYSDK_OFFSET(0x91EC580)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_UNMARSHALARGUMENTS_OFFSET UNITYSDK_OFFSET(0x91EC690)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_SAVELOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x91EC7A0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_GETLOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x91ECA30)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int CADMessageBase_TypeDefinitionIndex = 24530;

	class CADMessageBase : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _args; // 0x10
		::Il2CppArray<::System::Object*>* _serializedArgs; // 0x18
		::System::Int32 _propertyCount; // 0x20
		::System::Runtime::Remoting::Messaging::CADArgHolder* _callContext; // 0x28
		::Il2CppArray<::System::Object*>* serializedMethod; // 0x30

		::System::Void .ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Messaging::IMethodMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Reflection::MethodBase* GetMethod()
		{
			return (return (::System::Reflection::MethodBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_GETMETHOD_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSignature(::System::Reflection::MethodBase* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Reflection::MethodBase*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_GETSIGNATURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 MarshalProperties(::System::Collections::IDictionary* arg, ::System::Collections::ArrayList&* arg)
		{
			return (return (::System::Int32(*)(::System::Collections::IDictionary*, ::System::Collections::ArrayList&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_MARSHALPROPERTIES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UnmarshalProperties(::System::Collections::IDictionary* arg, ::System::Int32 arg, ::System::Collections::ArrayList* arg)
		{
			((::System::Void(*)(::System::Collections::IDictionary*, ::System::Int32, ::System::Collections::ArrayList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_UNMARSHALPROPERTIES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsPossibleToIgnoreMarshal(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_ISPOSSIBLETOIGNOREMARSHAL_OFFSET))(arg, nullptr);
		}

		::System::Object* MarshalArgument(::System::Object* arg, ::System::Collections::ArrayList&* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Collections::ArrayList&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_MARSHALARGUMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* UnmarshalArgument(::System::Object* arg, ::System::Collections::ArrayList* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Collections::ArrayList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_UNMARSHALARGUMENT_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* MarshalArguments(::Il2CppArray<::System::Object*>* arg, ::System::Collections::ArrayList&* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Collections::ArrayList&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_MARSHALARGUMENTS_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* UnmarshalArguments(::Il2CppArray<::System::Object*>* arg, ::System::Collections::ArrayList* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Collections::ArrayList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_UNMARSHALARGUMENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SaveLogicalCallContext(::System::Runtime::Remoting::Messaging::IMethodMessage* arg, ::System::Collections::ArrayList&* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Messaging::IMethodMessage*, ::System::Collections::ArrayList&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_SAVELOGICALCALLCONTEXT_OFFSET))(arg, arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::LogicalCallContext* GetLogicalCallContext(::System::Collections::ArrayList* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::LogicalCallContext*(*)(::System::Collections::ArrayList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMESSAGEBASE_GETLOGICALCALLCONTEXT_OFFSET))(arg, nullptr);
		}

	};
}

