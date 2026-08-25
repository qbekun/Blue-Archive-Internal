#pragma once
#include "unitysdk.h"

#define USINGENTRYCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0xA429A30)
#define USINGENTRYCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA429A20)

	inline static constexpr unsigned int UsingEntryComparer_TypeDefinitionIndex = 30703;

	class UsingEntryComparer : public Il2CppObject
	{
	public:
		::System::Int32 Compare(UsingEntry* arg, UsingEntry* arg)
		{
			return (return (::System::Int32(*)(UsingEntry*, UsingEntry*, ::PVOID))((::PBYTE)hIl2Cpp + USINGENTRYCOMPARER_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + USINGENTRYCOMPARER_.CTOR_OFFSET))(nullptr);
		}

	};

