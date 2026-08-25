#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_SET_STRIKERS_OFFSET UNITYSDK_OFFSET(0x1001C90)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_SET_RANDOMSEED_OFFSET UNITYSDK_OFFSET(0x1001CA0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_GET_TOTALUSEDCOST_OFFSET UNITYSDK_OFFSET(0x1001CB0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_GET_RANDOMSEED_OFFSET UNITYSDK_OFFSET(0x1001CC0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1001CD0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_GET_INPUTLOGS_OFFSET UNITYSDK_OFFSET(0x1001DA0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_SET_TOTALDAMAGEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1001DB0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_GET_TOTALKILLCOUNT_OFFSET UNITYSDK_OFFSET(0x1001DC0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_SET_TOTALSKILLCOUNT_OFFSET UNITYSDK_OFFSET(0x1001DD0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_GET_TOTALDAMAGEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1001DE0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_SET_ISPLAYERWIN_OFFSET UNITYSDK_OFFSET(0x1001DF0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_GET_STRIKERS_OFFSET UNITYSDK_OFFSET(0x1001E00)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_GET_TOTALSKILLCOUNT_OFFSET UNITYSDK_OFFSET(0x1001E10)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_SET_INPUTLOGS_OFFSET UNITYSDK_OFFSET(0x1001E20)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_SET_TOTALKILLCOUNT_OFFSET UNITYSDK_OFFSET(0x1001E30)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_SET_TOTALUSEDCOST_OFFSET UNITYSDK_OFFSET(0x1001E40)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_GET_ISPLAYERWIN_OFFSET UNITYSDK_OFFSET(0x1001E50)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int MiniGameCCGSummary_TypeDefinitionIndex = 12643;

	class MiniGameCCGSummary : public Il2CppObject
	{
	public:
		::System::Int32 _RandomSeed_k__BackingField; // 0x10
		::System::Boolean _IsPlayerWin_k__BackingField; // 0x14
		Il2CppObject* _Strikers_k__BackingField; // 0x18
		::System::Int32 _TotalUsedCost_k__BackingField; // 0x20
		::System::Int32 _TotalDamageAmount_k__BackingField; // 0x24
		::System::Int32 _TotalKillCount_k__BackingField; // 0x28
		Il2CppObject* _TotalSkillCount_k__BackingField; // 0x30
		Il2CppObject* _InputLogs_k__BackingField; // 0x38

		::System::Void set_Strikers(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_SET_STRIKERS_OFFSET))(arg, nullptr);
		}

		::System::Void set_RandomSeed(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_SET_RANDOMSEED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TotalUsedCost()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_GET_TOTALUSEDCOST_OFFSET))(nullptr);
		}

		::System::Int32 get_RandomSeed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_GET_RANDOMSEED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_InputLogs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_GET_INPUTLOGS_OFFSET))(nullptr);
		}

		::System::Void set_TotalDamageAmount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_SET_TOTALDAMAGEAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TotalKillCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_GET_TOTALKILLCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_TotalSkillCount(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_SET_TOTALSKILLCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TotalDamageAmount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_GET_TOTALDAMAGEAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_IsPlayerWin(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_SET_ISPLAYERWIN_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Strikers()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_GET_STRIKERS_OFFSET))(nullptr);
		}

		Il2CppObject* get_TotalSkillCount()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_GET_TOTALSKILLCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_InputLogs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_SET_INPUTLOGS_OFFSET))(arg, nullptr);
		}

		::System::Void set_TotalKillCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_SET_TOTALKILLCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_TotalUsedCost(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_SET_TOTALUSEDCOST_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPlayerWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGSUMMARY_GET_ISPLAYERWIN_OFFSET))(nullptr);
		}

	};
}

