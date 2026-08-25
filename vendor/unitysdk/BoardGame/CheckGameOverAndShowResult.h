#pragma once
#include "../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }

#define BOARDGAME_CHECKGAMEOVERANDSHOWRESULT_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xE13C60)
#define BOARDGAME_CHECKGAMEOVERANDSHOWRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0xE0F5B0)
#define BOARDGAME_CHECKGAMEOVERANDSHOWRESULT_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xE13C70)

namespace BoardGame
{
	inline static constexpr unsigned int CheckGameOverAndShowResult_TypeDefinitionIndex = 10311;

	class CheckGameOverAndShowResult : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x38

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CHECKGAMEOVERANDSHOWRESULT_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CHECKGAMEOVERANDSHOWRESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CHECKGAMEOVERANDSHOWRESULT_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

	};
}

