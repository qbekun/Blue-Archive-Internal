#pragma once
#include "unitysdk.h"

#define HIDPAGEUSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F49730)
#define HIDPAGEUSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F498A0)

	inline static constexpr unsigned int HIDPageUsage_TypeDefinitionIndex = 28676;

	class HIDPageUsage : public Il2CppObject
	{
	public:
		UsagePage* page; // 0x10
		::System::Int32 usage; // 0x14

		::System::Void .ctor(UsagePage* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(UsagePage*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + HIDPAGEUSAGE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(GenericDesktop* arg)
		{
			((::System::Void(*)(GenericDesktop*, ::PVOID))((::PBYTE)hIl2Cpp + HIDPAGEUSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

