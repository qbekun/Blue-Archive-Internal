#pragma once
#include "../unitysdk.h"

#define SYSTEM_IOBSERVABLE`1_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int IObservable`1_TypeDefinitionIndex = 23776;

	class IObservable`1 : public Il2CppObject
	{
	public:
		::System::IDisposable* Subscribe(Il2CppObject* arg)
		{
			return (return (::System::IDisposable*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IOBSERVABLE`1_SUBSCRIBE_OFFSET))(arg, nullptr);
		}

	};
}

