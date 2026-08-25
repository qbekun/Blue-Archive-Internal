#pragma once
#include "../../unitysdk.h"

#define BESTHTTP_SIGNALRCORE_CALLBACKDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x6445B0)

namespace BestHTTP::SignalRCore
{
	inline static constexpr unsigned int CallbackDescriptor_TypeDefinitionIndex = 21427;

	class CallbackDescriptor : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* ParamTypes; // 0x10
		Il2CppObject* Callback; // 0x18

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_CALLBACKDESCRIPTOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

