#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTER_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0xFED720)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTER_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xFED730)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xFED740)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTER_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0xFED750)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTER_SET_STARGRADE_OFFSET UNITYSDK_OFFSET(0xFED760)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTER_GET_STARGRADE_OFFSET UNITYSDK_OFFSET(0xFED770)
#define MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTER_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xFED780)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ClearDeckCharacter_TypeDefinitionIndex = 12530;

	class ClearDeckCharacter : public Il2CppObject
	{
	public:
		::System::Int64 _CharacterId_k__BackingField; // 0x10
		::System::Int32 _Level_k__BackingField; // 0x18
		::System::Int32 _StarGrade_k__BackingField; // 0x1C

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTER_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTER_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTER_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_StarGrade(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTER_SET_STARGRADE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StarGrade()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTER_GET_STARGRADE_OFFSET))(nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CLEARDECKCHARACTER_GET_LEVEL_OFFSET))(nullptr);
		}

	};
}

