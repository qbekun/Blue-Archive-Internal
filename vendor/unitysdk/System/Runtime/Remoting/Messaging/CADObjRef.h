#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADOBJREF_.CTOR_OFFSET UNITYSDK_OFFSET(0x91EA110)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int CADObjRef_TypeDefinitionIndex = 24528;

	class CADObjRef : public Il2CppObject
	{
	public:
		::System::Runtime::Remoting::ObjRef* objref; // 0x10
		::System::Int32 SourceDomain; // 0x18
		::Il2CppArray<::System::Object*>* TypeInfo; // 0x20

		::System::Void .ctor(::System::Runtime::Remoting::ObjRef* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::ObjRef*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADOBJREF_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

