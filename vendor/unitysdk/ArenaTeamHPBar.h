#pragma once
#include "unitysdk.h"

class UISlider;
class UILabel;
namespace MX::Logic::Battles { class CharacterGroup; }

#define ARENATEAMHPBAR_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x25CE6F0)
#define ARENATEAMHPBAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x25CEB50)
#define ARENATEAMHPBAR_SHOWDEBUGPERCENTTEXT_OFFSET UNITYSDK_OFFSET(0x25CEB60)
#define ARENATEAMHPBAR_SETDATA_OFFSET UNITYSDK_OFFSET(0x25CE1C0)

	inline static constexpr unsigned int ArenaTeamHPBar_TypeDefinitionIndex = 6345;

	class ArenaTeamHPBar : public Il2CppObject
	{
	public:
		UISlider* hpBarSlider; // 0x18
		UILabel* levelLabel; // 0x20
		UILabel* nameLabel; // 0x28
		::MX::Logic::Battles::CharacterGroup* myGroup; // 0x30
		::System::Int64 fullHp; // 0x38
		::System::Int64 currentHp; // 0x40

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENATEAMHPBAR_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENATEAMHPBAR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ShowDebugPercentText()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENATEAMHPBAR_SHOWDEBUGPERCENTTEXT_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Logic::Battles::CharacterGroup* arg, ::System::Int64 arg2, ::System::String* str)
		{
			((::System::Void(*)(::MX::Logic::Battles::CharacterGroup*, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ARENATEAMHPBAR_SETDATA_OFFSET))(arg, arg2, str, nullptr);
		}

	};

