#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
namespace MX::GameLogic::DBModel { class RaidDB; }
namespace MX::GameLogic::DBModel { class TimeAttackDungeonRoomDB; }

#define UIPAUSE_ROOMTIME_UPDATE_OFFSET UNITYSDK_OFFSET(0x26D56F0)
#define UIPAUSE_ROOMTIME_SETDATA_OFFSET UNITYSDK_OFFSET(0x26D2E50)
#define UIPAUSE_ROOMTIME_SETDATA_OFFSET UNITYSDK_OFFSET(0x26D2F40)
#define UIPAUSE_ROOMTIME_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x26D2D10)
#define UIPAUSE_ROOMTIME_SETTIMEOVER_OFFSET UNITYSDK_OFFSET(0x26D59D0)
#define UIPAUSE_ROOMTIME_.CTOR_OFFSET UNITYSDK_OFFSET(0x26D5A10)

	inline static constexpr unsigned int UIPause_Roomtime_TypeDefinitionIndex = 7026;

	class UIPause_Roomtime : public Il2CppObject
	{
	public:
		UILabel* TimeNum; // 0x18
		UILabel* TimeNumRed; // 0x20
		::UnityEngine::GameObject* NormalObject; // 0x28
		::UnityEngine::GameObject* TimeoverObject; // 0x30
		::System::Boolean isActive; // 0x38
		::System::Boolean isTimeEnd; // 0x39
		::System::DateTime* endTime; // 0x40
		::System::Int32 lastRemainTimeSec; // 0x48

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_ROOMTIME_UPDATE_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::RaidDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_ROOMTIME_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_ROOMTIME_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Activate(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_ROOMTIME_ACTIVATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetTimeover()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_ROOMTIME_SETTIMEOVER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPAUSE_ROOMTIME_.CTOR_OFFSET))(nullptr);
		}

	};

