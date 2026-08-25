#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class EventContentScenarioExcel; }

#define <>C__DISPLAYCLASS300_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x18D6140)
#define <>C__DISPLAYCLASS300_1__TRYGETSCENARIOINFOCLIENT_B__2_OFFSET UNITYSDK_OFFSET(0x18D6220)

	inline static constexpr unsigned int <>c__DisplayClass300_1_TypeDefinitionIndex = 16096;

	class <>c__DisplayClass300_1 : public Il2CppObject
	{
	public:
		::MX::Data::Excel::EventContentScenarioExcel* e; // 0x10
		<>c__DisplayClass300_0* CS$__8__locals1; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS300_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _TryGetScenarioInfoClient_b__2(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS300_1__TRYGETSCENARIOINFOCLIENT_B__2_OFFSET))(arg, nullptr);
		}

	};

