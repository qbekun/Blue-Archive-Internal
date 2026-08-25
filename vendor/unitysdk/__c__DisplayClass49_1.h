#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
class CampaignStageUIOpener;

#define <>C__DISPLAYCLASS49_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x275A9A0)
#define <>C__DISPLAYCLASS49_1__GETTOOLTIPINFO_B__0_OFFSET UNITYSDK_OFFSET(0x275A9B0)
#define <>C__DISPLAYCLASS49_1__GETTOOLTIPINFO_B__1_OFFSET UNITYSDK_OFFSET(0x275AA20)
#define <>C__DISPLAYCLASS49_1__GETTOOLTIPINFO_B__2_OFFSET UNITYSDK_OFFSET(0x275AA70)

	inline static constexpr unsigned int <>c__DisplayClass49_1_TypeDefinitionIndex = 7264;

	class <>c__DisplayClass49_1 : public Il2CppObject
	{
	public:
		Il2CppObject* defaultStageIds; // 0x10
		Il2CppObject* shortcuts; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS49_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _GetTooltipInfo_b__0(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS49_1__GETTOOLTIPINFO_B__0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _GetTooltipInfo_b__1(CampaignStageUIOpener* arg)
		{
			return ((::System::Boolean(*)(CampaignStageUIOpener*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS49_1__GETTOOLTIPINFO_B__1_OFFSET))(arg, nullptr);
		}

		::System::Boolean _GetTooltipInfo_b__2(CampaignStageUIOpener* arg)
		{
			return ((::System::Boolean(*)(CampaignStageUIOpener*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS49_1__GETTOOLTIPINFO_B__2_OFFSET))(arg, nullptr);
		}

	};

