#pragma once
#include "unitysdk.h"

namespace MX::Data { class ContentsShortcutInfo; }
namespace MX::GameLogic::DBModel { class WorldRaidLocalBossDB; }

#define <>C__DISPLAYCLASS1_2_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D0BC90)
#define <>C__DISPLAYCLASS1_2__SHOWMOVETOSCENARIOSHORTCUTPOPUP_B__4_OFFSET UNITYSDK_OFFSET(0x1D0BD20)

	inline static constexpr unsigned int <>c__DisplayClass1_2_TypeDefinitionIndex = 1583;

	class <>c__DisplayClass1_2 : public Il2CppObject
	{
	public:
		::MX::Data::ContentsShortcutInfo* x; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS1_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ShowMoveToScenarioShortcutPopup_b__4(::MX::GameLogic::DBModel::WorldRaidLocalBossDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::WorldRaidLocalBossDB*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS1_2__SHOWMOVETOSCENARIOSHORTCUTPOPUP_B__4_OFFSET))(arg, nullptr);
		}

	};

