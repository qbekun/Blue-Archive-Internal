#pragma once
#include "unitysdk.h"

namespace MX::Data { class CampaignStageInfo; }
class UIEnemyInfoPopup;

#define <>C__DISPLAYCLASS3_6_.CTOR_OFFSET UNITYSDK_OFFSET(0x24DD660)
#define <>C__DISPLAYCLASS3_6__ONCLICKENEMYINFO_B__7_OFFSET UNITYSDK_OFFSET(0x24DD9E0)

	inline static constexpr unsigned int <>c__DisplayClass3_6_TypeDefinitionIndex = 5990;

	class <>c__DisplayClass3_6 : public Il2CppObject
	{
	public:
		::MX::Data::CampaignStageInfo* stageInfo; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS3_6_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickEnemyInfo_b__7(UIEnemyInfoPopup* arg)
		{
			((::System::Void(*)(UIEnemyInfoPopup*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS3_6__ONCLICKENEMYINFO_B__7_OFFSET))(arg, nullptr);
		}

	};

