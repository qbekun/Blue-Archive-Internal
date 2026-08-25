#pragma once
#include "unitysdk.h"

#define AWAKEMONITOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define AWAKEMONITOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int AwakeMonitor_TypeDefinitionIndex = 35973;

	class AwakeMonitor : public Il2CppObject
	{
	public:
		Il2CppObject* trigger; // 0x0

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + AWAKEMONITOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AWAKEMONITOR_MOVENEXT_OFFSET))(nullptr);
		}

	};

