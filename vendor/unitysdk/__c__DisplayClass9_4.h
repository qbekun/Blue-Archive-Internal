#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class ScenarioModeExcel; }
class <>c__DisplayClass9_2;
class UIScenario_EpisodeContinuePopup;

#define <>C__DISPLAYCLASS9_4_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F95340)
#define <>C__DISPLAYCLASS9_4__HANDLEMESSAGE_B__6_OFFSET UNITYSDK_OFFSET(0x1F954C0)

	inline static constexpr unsigned int <>c__DisplayClass9_4_TypeDefinitionIndex = 2740;

	class <>c__DisplayClass9_4 : public Il2CppObject
	{
	public:
		::MX::Data::Excel::ScenarioModeExcel* nextExcel; // 0x10
		<>c__DisplayClass9_2* CS$__8__locals4; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS9_4_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _HandleMessage_b__6(UIScenario_EpisodeContinuePopup* arg)
		{
			((::System::Void(*)(UIScenario_EpisodeContinuePopup*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS9_4__HANDLEMESSAGE_B__6_OFFSET))(arg, nullptr);
		}

	};

