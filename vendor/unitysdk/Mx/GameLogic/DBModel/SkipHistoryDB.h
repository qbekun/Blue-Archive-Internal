#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_SKIPHISTORYDB_SET_TUTORIAL_OFFSET UNITYSDK_OFFSET(0x100EDD0)
#define MX_GAMELOGIC_DBMODEL_SKIPHISTORYDB_GET_PROLOGUE_OFFSET UNITYSDK_OFFSET(0x100EDE0)
#define MX_GAMELOGIC_DBMODEL_SKIPHISTORYDB_SET_PROLOGUE_OFFSET UNITYSDK_OFFSET(0x100EDF0)
#define MX_GAMELOGIC_DBMODEL_SKIPHISTORYDB_GET_TUTORIAL_OFFSET UNITYSDK_OFFSET(0x100EE00)
#define MX_GAMELOGIC_DBMODEL_SKIPHISTORYDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x100EE10)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int SkipHistoryDB_TypeDefinitionIndex = 12729;

	class SkipHistoryDB : public Il2CppObject
	{
	public:
		::System::Int32 _Prologue_k__BackingField; // 0x10
		Il2CppObject* _Tutorial_k__BackingField; // 0x18

		::System::Void set_Tutorial(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SKIPHISTORYDB_SET_TUTORIAL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Prologue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SKIPHISTORYDB_GET_PROLOGUE_OFFSET))(nullptr);
		}

		::System::Void set_Prologue(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SKIPHISTORYDB_SET_PROLOGUE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Tutorial()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SKIPHISTORYDB_GET_TUTORIAL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SKIPHISTORYDB_.CTOR_OFFSET))(nullptr);
		}

	};
}

