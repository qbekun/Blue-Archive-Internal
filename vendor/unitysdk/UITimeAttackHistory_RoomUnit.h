#pragma once
#include "unitysdk.h"

class UISprite;
class UILabel;
namespace UnityEngine { class GameObject; }
namespace MX::GameLogic::DBModel { class TimeAttackDungeonRewardHistoryDB; }

#define UITIMEATTACKHISTORY_ROOMUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB635D0)
#define UITIMEATTACKHISTORY_ROOMUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0xB63610)

	inline static constexpr unsigned int UITimeAttackHistory_RoomUnit_TypeDefinitionIndex = 8428;

	class UITimeAttackHistory_RoomUnit : public ::System::Xml::Serialization::TypeTranslator
	{
	public:
		UISprite* TicketIcon; // 0x28
		UILabel* RoomOrderLabel; // 0x30
		::UnityEngine::GameObject* IsSweep; // 0x38
		UILabel* TotalScoreLabel; // 0x40
		::Il2CppArray<::System::Object*>* BattleHistories; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKHISTORY_ROOMUNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::TimeAttackDungeonRewardHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::TimeAttackDungeonRewardHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKHISTORY_ROOMUNIT_SETDATA_OFFSET))(arg, nullptr);
		}

	};

