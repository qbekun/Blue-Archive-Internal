#pragma once
#include "../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }

#define BOARDGAME_CONCENTRATION_SKIP_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xE0B720)
#define BOARDGAME_CONCENTRATION_SKIP_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xE0B730)
#define BOARDGAME_CONCENTRATION_SKIP_.CTOR_OFFSET UNITYSDK_OFFSET(0xE0B740)

namespace BoardGame
{
	inline static constexpr unsigned int Concentration_Skip_TypeDefinitionIndex = 10272;

	class Concentration_Skip : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x38

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_SKIP_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_SKIP_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_SKIP_.CTOR_OFFSET))(nullptr);
		}

	};
}

