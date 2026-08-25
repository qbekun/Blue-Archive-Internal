#pragma once
#include "../unitysdk.h"

namespace BoardGame { class ConcentrationCardInfo; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }

#define BOARDGAME_CONCENTRATION_FLIPCARDS_SET_SECONDCARDINFO_OFFSET UNITYSDK_OFFSET(0xE0B500)
#define BOARDGAME_CONCENTRATION_FLIPCARDS_.CTOR_OFFSET UNITYSDK_OFFSET(0xE0B510)
#define BOARDGAME_CONCENTRATION_FLIPCARDS_GET_FIRSTCARDINFO_OFFSET UNITYSDK_OFFSET(0xE0B530)
#define BOARDGAME_CONCENTRATION_FLIPCARDS_SET_FIRSTCARDINFO_OFFSET UNITYSDK_OFFSET(0xE0B540)
#define BOARDGAME_CONCENTRATION_FLIPCARDS_GET_SECONDCARDINFO_OFFSET UNITYSDK_OFFSET(0xE0B550)
#define BOARDGAME_CONCENTRATION_FLIPCARDS_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xE0B560)
#define BOARDGAME_CONCENTRATION_FLIPCARDS_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xE0B570)

namespace BoardGame
{
	inline static constexpr unsigned int Concentration_FlipCards_TypeDefinitionIndex = 10268;

	class Concentration_FlipCards : public Il2CppObject
	{
	public:
		::BoardGame::ConcentrationCardInfo* _FirstCardInfo_k__BackingField; // 0x38
		::BoardGame::ConcentrationCardInfo* _SecondCardInfo_k__BackingField; // 0x40
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x48

		::System::Void set_SecondCardInfo(::BoardGame::ConcentrationCardInfo* arg)
		{
			((::System::Void(*)(::BoardGame::ConcentrationCardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_FLIPCARDS_SET_SECONDCARDINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_FLIPCARDS_.CTOR_OFFSET))(nullptr);
		}

		::BoardGame::ConcentrationCardInfo* get_FirstCardInfo()
		{
			return ((::BoardGame::ConcentrationCardInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_FLIPCARDS_GET_FIRSTCARDINFO_OFFSET))(nullptr);
		}

		::System::Void set_FirstCardInfo(::BoardGame::ConcentrationCardInfo* arg)
		{
			((::System::Void(*)(::BoardGame::ConcentrationCardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_FLIPCARDS_SET_FIRSTCARDINFO_OFFSET))(arg, nullptr);
		}

		::BoardGame::ConcentrationCardInfo* get_SecondCardInfo()
		{
			return ((::BoardGame::ConcentrationCardInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_FLIPCARDS_GET_SECONDCARDINFO_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_FLIPCARDS_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_FLIPCARDS_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

	};
}

