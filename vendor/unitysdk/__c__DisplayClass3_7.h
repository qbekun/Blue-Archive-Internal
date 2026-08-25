#pragma once
#include "unitysdk.h"

namespace MX::Data { class MiniGameDefenseStageInfo; }
class UIEnemyInfoPopup;

#define <>C__DISPLAYCLASS3_7_.CTOR_OFFSET UNITYSDK_OFFSET(0x24DD670)
#define <>C__DISPLAYCLASS3_7__ONCLICKENEMYINFO_B__8_OFFSET UNITYSDK_OFFSET(0x24DDA10)

	inline static constexpr unsigned int <>c__DisplayClass3_7_TypeDefinitionIndex = 5991;

	class <>c__DisplayClass3_7 : public Il2CppObject
	{
	public:
		::MX::Data::MiniGameDefenseStageInfo* stageInfo; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS3_7_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickEnemyInfo_b__8(UIEnemyInfoPopup* arg)
		{
			((::System::Void(*)(UIEnemyInfoPopup*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS3_7__ONCLICKENEMYINFO_B__8_OFFSET))(arg, nullptr);
		}

	};

