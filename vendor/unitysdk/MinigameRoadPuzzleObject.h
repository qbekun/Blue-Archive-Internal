#pragma once
#include "unitysdk.h"

class RoadPuzzleBoardSaveDB;

#define MINIGAMEROADPUZZLEOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2084E60)
#define MINIGAMEROADPUZZLEOBJECT_SYNCSAVEDB_OFFSET UNITYSDK_OFFSET(0x2084ED0)

	inline static constexpr unsigned int MinigameRoadPuzzleObject_TypeDefinitionIndex = 3435;

	class MinigameRoadPuzzleObject : public Il2CppObject
	{
	public:
		RoadPuzzleBoardSaveDB* SaveDB; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEROADPUZZLEOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SyncSaveDB(RoadPuzzleBoardSaveDB* arg)
		{
			((::System::Void(*)(RoadPuzzleBoardSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEROADPUZZLEOBJECT_SYNCSAVEDB_OFFSET))(arg, nullptr);
		}

	};

