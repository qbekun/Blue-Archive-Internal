#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class ConquestUnitExcel; }
class UIEnemyInfoPopup;

#define <>C__DISPLAYCLASS3_4_.CTOR_OFFSET UNITYSDK_OFFSET(0x24DD640)
#define <>C__DISPLAYCLASS3_4__ONCLICKENEMYINFO_B__4_OFFSET UNITYSDK_OFFSET(0x24DD970)

	inline static constexpr unsigned int <>c__DisplayClass3_4_TypeDefinitionIndex = 5988;

	class <>c__DisplayClass3_4 : public Il2CppObject
	{
	public:
		::MX::Data::Excel::ConquestUnitExcel* excel; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS3_4_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickEnemyInfo_b__4(UIEnemyInfoPopup* arg)
		{
			((::System::Void(*)(UIEnemyInfoPopup*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS3_4__ONCLICKENEMYINFO_B__4_OFFSET))(arg, nullptr);
		}

	};

