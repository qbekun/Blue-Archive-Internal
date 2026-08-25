#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class EventContentScenarioExcel; }

#define <>C__DISPLAYCLASS302_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x18D6370)
#define <>C__DISPLAYCLASS302_0__TRYGETSCENARIOCLIENT_B__0_OFFSET UNITYSDK_OFFSET(0x18D6380)

	inline static constexpr unsigned int <>c__DisplayClass302_0_TypeDefinitionIndex = 16098;

	class <>c__DisplayClass302_0 : public Il2CppObject
	{
	public:
		::System::Int64 excelId; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS302_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _TryGetScenarioClient_b__0(::MX::Data::Excel::EventContentScenarioExcel* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::EventContentScenarioExcel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS302_0__TRYGETSCENARIOCLIENT_B__0_OFFSET))(arg, nullptr);
		}

	};

