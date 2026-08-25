#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class EventContentStageExcel; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }

#define <>C__DISPLAYCLASS295_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x18D5D20)
#define <>C__DISPLAYCLASS295_1__TRYGETPREVDISPLAYSTAGEINFOCLIENT_B__3_OFFSET UNITYSDK_OFFSET(0x18D5D60)

	inline static constexpr unsigned int <>c__DisplayClass295_1_TypeDefinitionIndex = 16090;

	class <>c__DisplayClass295_1 : public Il2CppObject
	{
	public:
		::MX::Data::Excel::EventContentStageExcel* e; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS295_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _TryGetPrevDisplayStageInfoClient_b__3(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			return (return (::System::Boolean(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS295_1__TRYGETPREVDISPLAYSTAGEINFOCLIENT_B__3_OFFSET))(arg, nullptr);
		}

	};

