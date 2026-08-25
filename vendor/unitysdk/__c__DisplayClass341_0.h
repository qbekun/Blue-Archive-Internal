#pragma once
#include "unitysdk.h"

namespace FlatData { class EventChangeType; }
namespace MX::Data::Excel { class EventContentChangeScenarioExcel; }

#define <>C__DISPLAYCLASS341_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x18D6860)
#define <>C__DISPLAYCLASS341_0__TRYGETEVENTCHANGESCENARIOINFOCLIENT_B__0_OFFSET UNITYSDK_OFFSET(0x18D6870)

	inline static constexpr unsigned int <>c__DisplayClass341_0_TypeDefinitionIndex = 16110;

	class <>c__DisplayClass341_0 : public Il2CppObject
	{
	public:
		::FlatData::EventChangeType* changeType; // 0x10
		::System::Int64 changeCount; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS341_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _TryGetEventChangeScenarioInfoClient_b__0(::MX::Data::Excel::EventContentChangeScenarioExcel* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::EventContentChangeScenarioExcel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS341_0__TRYGETEVENTCHANGESCENARIOINFOCLIENT_B__0_OFFSET))(arg, nullptr);
		}

	};

