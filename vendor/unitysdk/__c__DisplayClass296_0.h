#pragma once
#include "unitysdk.h"

namespace MX::Data { class EventContentStageInfo; }
namespace MX::Data::Excel { class EventContentStageExcel; }

#define <>C__DISPLAYCLASS296_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x18D5D90)
#define <>C__DISPLAYCLASS296_0__TRYGETNEXTDISPLAYSTAGEINFOCLIENT_B__0_OFFSET UNITYSDK_OFFSET(0x18D5DA0)
#define <>C__DISPLAYCLASS296_0__TRYGETNEXTDISPLAYSTAGEINFOCLIENT_B__2_OFFSET UNITYSDK_OFFSET(0x18D5EC0)

	inline static constexpr unsigned int <>c__DisplayClass296_0_TypeDefinitionIndex = 16091;

	class <>c__DisplayClass296_0 : public Il2CppObject
	{
	public:
		::MX::Data::EventContentStageInfo* currStageInfo; // 0x10
		Il2CppObject* stageHistoryList; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS296_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _TryGetNextDisplayStageInfoClient_b__0(::MX::Data::Excel::EventContentStageExcel* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::EventContentStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS296_0__TRYGETNEXTDISPLAYSTAGEINFOCLIENT_B__0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _TryGetNextDisplayStageInfoClient_b__2(::MX::Data::EventContentStageInfo* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::EventContentStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS296_0__TRYGETNEXTDISPLAYSTAGEINFOCLIENT_B__2_OFFSET))(arg, nullptr);
		}

	};

