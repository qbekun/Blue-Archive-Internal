#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class EventContentStageExcel; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }

#define <>C__DISPLAYCLASS296_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x18D5EB0)
#define <>C__DISPLAYCLASS296_1__TRYGETNEXTDISPLAYSTAGEINFOCLIENT_B__3_OFFSET UNITYSDK_OFFSET(0x18D5EF0)

	inline static constexpr unsigned int <>c__DisplayClass296_1_TypeDefinitionIndex = 16092;

	class <>c__DisplayClass296_1 : public Il2CppObject
	{
	public:
		::MX::Data::Excel::EventContentStageExcel* e; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS296_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _TryGetNextDisplayStageInfoClient_b__3(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			return (return (::System::Boolean(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS296_1__TRYGETNEXTDISPLAYSTAGEINFOCLIENT_B__3_OFFSET))(arg, nullptr);
		}

	};

