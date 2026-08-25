#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class EventContentMeetupExcel; }
namespace MX::Data { class EventContentScenarioInfo; }

#define <>C__DISPLAYCLASS281_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x18D5870)
#define <>C__DISPLAYCLASS281_1__PREPROCESSCOMMON_B__1_OFFSET UNITYSDK_OFFSET(0x18D5880)

	inline static constexpr unsigned int <>c__DisplayClass281_1_TypeDefinitionIndex = 16081;

	class <>c__DisplayClass281_1 : public Il2CppObject
	{
	public:
		::MX::Data::Excel::EventContentMeetupExcel* excel; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS281_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _PreprocessCommon_b__1(::MX::Data::EventContentScenarioInfo* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::EventContentScenarioInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS281_1__PREPROCESSCOMMON_B__1_OFFSET))(arg, nullptr);
		}

	};

