#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
namespace FlatData { class WeekDungeonType; }

#define CHASECONTENTINFO_SET_OFFSET UNITYSDK_OFFSET(0xBCFE90)
#define CHASECONTENTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xBD06D0)

	inline static constexpr unsigned int ChaseContentInfo_TypeDefinitionIndex = 8661;

	class ChaseContentInfo : public Il2CppObject
	{
	public:
		UILabel* OpenWeekDaysLabel; // 0x20
		::UnityEngine::GameObject* LockObject; // 0x28
		::Il2CppArray<::System::Object*>* SchoolBuffs; // 0x30

		::System::Void Set(::FlatData::WeekDungeonType* arg)
		{
			((::System::Void(*)(::FlatData::WeekDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + CHASECONTENTINFO_SET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHASECONTENTINFO_.CTOR_OFFSET))(nullptr);
		}

	};

