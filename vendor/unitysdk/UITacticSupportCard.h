#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class MXBattleTask;
namespace MX::Logic::BattleEntities { class SupportSkillEventArgs; }

#define UITACTICSUPPORTCARD_GET_MXBATTLETASK_OFFSET UNITYSDK_OFFSET(0x2240D20)
#define UITACTICSUPPORTCARD_APPLYSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x2240DD0)
#define UITACTICSUPPORTCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x2240E80)
#define UITACTICSUPPORTCARD_ONCLICKBUTTON_OFFSET UNITYSDK_OFFSET(0x2240E90)
#define UITACTICSUPPORTCARD_AWAKE_OFFSET UNITYSDK_OFFSET(0x2240ED0)
#define UITACTICSUPPORTCARD_INIT_OFFSET UNITYSDK_OFFSET(0x2240FF0)

	inline static constexpr unsigned int UITacticSupportCard_TypeDefinitionIndex = 4483;

	class UITacticSupportCard : public Il2CppObject
	{
	public:
		MXButton* Button; // 0x18
		::UnityEngine::GameObject* DisableButton; // 0x20
		MXBattleTask* task; // 0x28

		MXBattleTask* get_mxBattleTask()
		{
			return ((MXBattleTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITACTICSUPPORTCARD_GET_MXBATTLETASK_OFFSET))(nullptr);
		}

		::System::Void ApplyStateChanged(::MX::Logic::BattleEntities::SupportSkillEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SupportSkillEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + UITACTICSUPPORTCARD_APPLYSTATECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITACTICSUPPORTCARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITACTICSUPPORTCARD_ONCLICKBUTTON_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITACTICSUPPORTCARD_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITACTICSUPPORTCARD_INIT_OFFSET))(nullptr);
		}

	};

