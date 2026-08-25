#pragma once
#include "unitysdk.h"

namespace MX::Data { class TimeAttackDungeonGeasInfo; }
class UIEnemyInfoPopup;

#define <>C__DISPLAYCLASS3_5_.CTOR_OFFSET UNITYSDK_OFFSET(0x24DD650)
#define <>C__DISPLAYCLASS3_5__ONCLICKENEMYINFO_B__5_OFFSET UNITYSDK_OFFSET(0x24DD9B0)

	inline static constexpr unsigned int <>c__DisplayClass3_5_TypeDefinitionIndex = 5989;

	class <>c__DisplayClass3_5 : public Il2CppObject
	{
	public:
		::MX::Data::TimeAttackDungeonGeasInfo* geasInfo; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS3_5_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickEnemyInfo_b__5(UIEnemyInfoPopup* arg)
		{
			((::System::Void(*)(UIEnemyInfoPopup*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS3_5__ONCLICKENEMYINFO_B__5_OFFSET))(arg, nullptr);
		}

	};

