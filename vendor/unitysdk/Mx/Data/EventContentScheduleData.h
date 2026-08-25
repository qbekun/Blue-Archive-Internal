#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class EventContentLocationRewardExcel; }

#define MX_DATA_EVENTCONTENTSCHEDULEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1845110)
#define MX_DATA_EVENTCONTENTSCHEDULEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1845200)
#define MX_DATA_EVENTCONTENTSCHEDULEDATA_GETVOICEIDHASHRANDOM_OFFSET UNITYSDK_OFFSET(0x18456B0)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentScheduleData_TypeDefinitionIndex = 15804;

	class EventContentScheduleData : public UniTaskLoopRunnerLastYieldEarlyUpdate
	{
	public:
		::Il2CppArray<::System::Object*>* voiceIdHashes; // 0x80

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSCHEDULEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentLocationRewardExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentLocationRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSCHEDULEDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::UInt32 GetVoiceIdHashRandom()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSCHEDULEDATA_GETVOICEIDHASHRANDOM_OFFSET))(nullptr);
		}

	};
}

