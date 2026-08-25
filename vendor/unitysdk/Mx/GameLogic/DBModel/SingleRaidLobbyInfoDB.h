#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_SINGLERAIDLOBBYINFODB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1008200)
#define MX_GAMELOGIC_DBMODEL_SINGLERAIDLOBBYINFODB_SET_CLEARDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1008210)
#define MX_GAMELOGIC_DBMODEL_SINGLERAIDLOBBYINFODB_GET_CLEARDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1008230)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int SingleRaidLobbyInfoDB_TypeDefinitionIndex = 12690;

	class SingleRaidLobbyInfoDB : public Il2CppObject
	{
	public:
		Il2CppObject* _ClearDifficulty_k__BackingField; // 0xC8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SINGLERAIDLOBBYINFODB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ClearDifficulty(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SINGLERAIDLOBBYINFODB_SET_CLEARDIFFICULTY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ClearDifficulty()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SINGLERAIDLOBBYINFODB_GET_CLEARDIFFICULTY_OFFSET))(nullptr);
		}

	};
}

