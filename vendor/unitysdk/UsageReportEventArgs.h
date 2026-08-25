#pragma once
#include "unitysdk.h"

#define USAGEREPORTEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E8870)

	inline static constexpr unsigned int UsageReportEventArgs_TypeDefinitionIndex = 37217;

	class UsageReportEventArgs : public Il2CppObject
	{
	public:
		::System::Int64 _SmallPoolInUseBytes_k__BackingField; // 0x10
		::System::Int64 _SmallPoolFreeBytes_k__BackingField; // 0x18
		::System::Int64 _LargePoolInUseBytes_k__BackingField; // 0x20
		::System::Int64 _LargePoolFreeBytes_k__BackingField; // 0x28

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + USAGEREPORTEVENTARGS_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

