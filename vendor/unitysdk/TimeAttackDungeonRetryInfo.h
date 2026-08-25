#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class AssistCharacterDB; }
namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }

#define TIMEATTACKDUNGEONRETRYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EEEAA0)

	inline static constexpr unsigned int TimeAttackDungeonRetryInfo_TypeDefinitionIndex = 1884;

	class TimeAttackDungeonRetryInfo : public Il2CppObject
	{
	public:
		::System::Int64 RoomId; // 0x10
		::MX::GameLogic::DBModel::AssistCharacterDB* AssistDB; // 0x18
		::System::Int64 GeasId; // 0x20
		::System::Int64 DungeonId; // 0x28
		::System::Int32 EchelonNumber; // 0x30
		::MX::GameLogic::DBModel::ClanAssistUseInfo* AssistUserInfo; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONRETRYINFO_.CTOR_OFFSET))(nullptr);
		}

	};

