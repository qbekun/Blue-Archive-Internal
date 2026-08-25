#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class MiniGameShootingHistoryDB; }

#define MINIGAMESHOOTINGOBJECT_GET_MINIGAMEHISTORYDBS_OFFSET UNITYSDK_OFFSET(0x205E7A0)
#define MINIGAMESHOOTINGOBJECT_GETHISTORY_OFFSET UNITYSDK_OFFSET(0x205E7B0)
#define MINIGAMESHOOTINGOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x205E890)
#define MINIGAMESHOOTINGOBJECT_SET_MINIGAMEHISTORYDBS_OFFSET UNITYSDK_OFFSET(0x205E8A0)
#define MINIGAMESHOOTINGOBJECT_SYNCHISTORY_OFFSET UNITYSDK_OFFSET(0x205E8B0)

	inline static constexpr unsigned int MiniGameShootingObject_TypeDefinitionIndex = 3385;

	class MiniGameShootingObject : public Il2CppObject
	{
	public:
		Il2CppObject* _MiniGameHistoryDBs_k__BackingField; // 0x10

		Il2CppObject* get_MiniGameHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMESHOOTINGOBJECT_GET_MINIGAMEHISTORYDBS_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameShootingHistoryDB* GetHistory(::System::Int64 arg)
		{
			return ((::MX::GameLogic::DBModel::MiniGameShootingHistoryDB*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMESHOOTINGOBJECT_GETHISTORY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMESHOOTINGOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_MiniGameHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMESHOOTINGOBJECT_SET_MINIGAMEHISTORYDBS_OFFSET))(arg, nullptr);
		}

		::System::Void SyncHistory(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMESHOOTINGOBJECT_SYNCHISTORY_OFFSET))(arg, nullptr);
		}

	};

