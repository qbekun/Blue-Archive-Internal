#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODREF_GETTYPES_OFFSET UNITYSDK_OFFSET(0x91EA170)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODREF_RESOLVE_OFFSET UNITYSDK_OFFSET(0x91EA2E0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODREF_.CTOR_OFFSET UNITYSDK_OFFSET(0x91EA800)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int CADMethodRef_TypeDefinitionIndex = 24529;

	class CADMethodRef : public Il2CppObject
	{
	public:
		::System::Boolean ctor; // 0x10
		::System::String* typeName; // 0x18
		::System::String* methodName; // 0x20
		::Il2CppArray<::System::Object*>* param_names; // 0x28
		::Il2CppArray<::System::Object*>* generic_arg_names; // 0x30

		::Il2CppArray<::System::Object*>* GetTypes(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODREF_GETTYPES_OFFSET))(arg, nullptr);
		}

		::System::Reflection::MethodBase* Resolve()
		{
			return (return (::System::Reflection::MethodBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODREF_RESOLVE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Messaging::IMethodMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODREF_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

