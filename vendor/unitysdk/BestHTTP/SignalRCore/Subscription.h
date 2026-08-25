#pragma once
#include "../../unitysdk.h"

#define BESTHTTP_SIGNALRCORE_SUBSCRIPTION_ADD_OFFSET UNITYSDK_OFFSET(0x6445E0)
#define BESTHTTP_SIGNALRCORE_SUBSCRIPTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x6446D0)
#define BESTHTTP_SIGNALRCORE_SUBSCRIPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x6447B0)

namespace BestHTTP::SignalRCore
{
	inline static constexpr unsigned int Subscription_TypeDefinitionIndex = 21429;

	class Subscription : public Il2CppObject
	{
	public:
		Il2CppObject* callbacks; // 0x10

		::System::Void Add(::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_SUBSCRIPTION_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Remove(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_SUBSCRIPTION_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_SUBSCRIPTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

