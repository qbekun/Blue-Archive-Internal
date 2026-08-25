#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADARGHOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x91EA0F0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int CADArgHolder_TypeDefinitionIndex = 24527;

	class CADArgHolder : public Il2CppObject
	{
	public:
		::System::Int32 index; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADARGHOLDER_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

