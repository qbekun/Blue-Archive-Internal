#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
namespace MX::GameLogic::DBModel { class TimeAttackDungeonBattleHistoryDB; }

#define UITIMEATTACKHISTORY_BATTLEUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB63030)
#define UITIMEATTACKHISTORY_BATTLEUNIT_SETCHARACTERCARDS_OFFSET UNITYSDK_OFFSET(0xB63040)
#define UITIMEATTACKHISTORY_BATTLEUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0xB63400)

	inline static constexpr unsigned int UITimeAttackHistory_BattleUnit_TypeDefinitionIndex = 8426;

	class UITimeAttackHistory_BattleUnit : public Il2CppObject
	{
	public:
		UILabel* ScoreLabel; // 0x18
		::UnityEngine::GameObject* PlayedDisplay; // 0x20
		::UnityEngine::GameObject* NotPlayedDisplay; // 0x28
		::Il2CppArray<::System::Object*>* MainCharacters; // 0x30
		::Il2CppArray<::System::Object*>* SupportCharacters; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKHISTORY_BATTLEUNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCharacterCards(::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKHISTORY_BATTLEUNIT_SETCHARACTERCARDS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::TimeAttackDungeonBattleHistoryDB* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::TimeAttackDungeonBattleHistoryDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKHISTORY_BATTLEUNIT_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

	};

