#pragma once
#include "unitysdk.h"

#define SIMPLEMONITOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SIMPLEMONITOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int SimpleMonitor_TypeDefinitionIndex = 29556;

	class SimpleMonitor : public Il2CppObject
	{
	public:
		::System::Int32 _busyCount; // 0x0
		Il2CppObject* _collection; // 0x0

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SIMPLEMONITOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEMONITOR_DISPOSE_OFFSET))(nullptr);
		}

	};

