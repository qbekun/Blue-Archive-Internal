#pragma once
#include "../../unitysdk.h"

#define MX_MINIGAMECCG_TURNCHANGELOGDATA_SET_TURNPLAYERID_OFFSET UNITYSDK_OFFSET(0x1DC5580)
#define MX_MINIGAMECCG_TURNCHANGELOGDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DC5590)
#define MX_MINIGAMECCG_TURNCHANGELOGDATA_SET_TURNCOUNT_OFFSET UNITYSDK_OFFSET(0x1DC55A0)
#define MX_MINIGAMECCG_TURNCHANGELOGDATA_GET_TURNPLAYERID_OFFSET UNITYSDK_OFFSET(0x1DC55B0)
#define MX_MINIGAMECCG_TURNCHANGELOGDATA_GET_TURNCOUNT_OFFSET UNITYSDK_OFFSET(0x1DC55C0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int TurnChangeLogData_TypeDefinitionIndex = 20486;

	class TurnChangeLogData : public Il2CppObject
	{
	public:
		::System::Int32 _TurnPlayerId_k__BackingField; // 0x10
		::System::Int32 _TurnCount_k__BackingField; // 0x14

		::System::Void set_TurnPlayerId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_TURNCHANGELOGDATA_SET_TURNPLAYERID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_TURNCHANGELOGDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_TurnCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_TURNCHANGELOGDATA_SET_TURNCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TurnPlayerId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_TURNCHANGELOGDATA_GET_TURNPLAYERID_OFFSET))(nullptr);
		}

		::System::Int32 get_TurnCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_TURNCHANGELOGDATA_GET_TURNCOUNT_OFFSET))(nullptr);
		}

	};
}

