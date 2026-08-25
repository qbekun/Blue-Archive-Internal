#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ARGINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x91E9970)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ARGINFO_GETINOUTARGS_OFFSET UNITYSDK_OFFSET(0x91E9B30)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int ArgInfo_TypeDefinitionIndex = 24525;

	class ArgInfo : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _paramMap; // 0x10
		::System::Int32 _inoutArgCount; // 0x18
		::System::Reflection::MethodBase* _method; // 0x20

		::System::Void .ctor(::System::Reflection::MethodBase* arg, ::System::Runtime::Remoting::Messaging::ArgInfoType* arg)
		{
			((::System::Void(*)(::System::Reflection::MethodBase*, ::System::Runtime::Remoting::Messaging::ArgInfoType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ARGINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetInOutArgs(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ARGINFO_GETINOUTARGS_OFFSET))(arg, nullptr);
		}

	};
}

