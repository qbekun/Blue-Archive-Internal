#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class MiniGameHistoryDB; }
namespace MX::Data { class MiniGameRhythmData; }

#define MINIGAMERHYTHMOBJECT_GET_MINIGAMEHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xD16C80)
#define MINIGAMERHYTHMOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xD16C90)
#define MINIGAMERHYTHMOBJECT_SYNCHISTORY_OFFSET UNITYSDK_OFFSET(0xD16CA0)
#define MINIGAMERHYTHMOBJECT_GETHISTORY_OFFSET UNITYSDK_OFFSET(0xD16CB0)
#define MINIGAMERHYTHMOBJECT_SET_MINIGAMEHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xD16DA0)

	inline static constexpr unsigned int MinigameRhythmObject_TypeDefinitionIndex = 669;

	class MinigameRhythmObject : public Il2CppObject
	{
	public:
		Il2CppObject* _MiniGameHistoryDBs_k__BackingField; // 0x10

		Il2CppObject* get_MiniGameHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMERHYTHMOBJECT_GET_MINIGAMEHISTORYDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMERHYTHMOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SyncHistory(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMERHYTHMOBJECT_SYNCHISTORY_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameHistoryDB* GetHistory(::MX::Data::MiniGameRhythmData* arg)
		{
			return ((::MX::GameLogic::DBModel::MiniGameHistoryDB*(*)(::MX::Data::MiniGameRhythmData*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMERHYTHMOBJECT_GETHISTORY_OFFSET))(arg, nullptr);
		}

		::System::Void set_MiniGameHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMERHYTHMOBJECT_SET_MINIGAMEHISTORYDBS_OFFSET))(arg, nullptr);
		}

	};

