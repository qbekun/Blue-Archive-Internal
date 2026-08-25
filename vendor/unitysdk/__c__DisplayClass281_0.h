#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class EventContentLocationExcel; }
namespace MX::Data::Excel { class EventContentZoneVisitRewardExcel; }

#define <>C__DISPLAYCLASS281_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x18D5800)
#define <>C__DISPLAYCLASS281_0__PREPROCESSCOMMON_B__0_OFFSET UNITYSDK_OFFSET(0x18D5810)

	inline static constexpr unsigned int <>c__DisplayClass281_0_TypeDefinitionIndex = 16080;

	class <>c__DisplayClass281_0 : public Il2CppObject
	{
	public:
		::MX::Data::Excel::EventContentLocationExcel* locationExcel; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS281_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _PreprocessCommon_b__0(::MX::Data::Excel::EventContentZoneVisitRewardExcel* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::EventContentZoneVisitRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS281_0__PREPROCESSCOMMON_B__0_OFFSET))(arg, nullptr);
		}

	};

