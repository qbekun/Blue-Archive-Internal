#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CharacterDB; }
namespace MX::GameLogic::DBModel { class ItemDB; }

#define MX_NETWORKPROTOCOL_GACHARESULT_GET_CHARACTER_OFFSET UNITYSDK_OFFSET(0xF4EA50)
#define MX_NETWORKPROTOCOL_GACHARESULT_SET_CHARACTER_OFFSET UNITYSDK_OFFSET(0xF4EA60)
#define MX_NETWORKPROTOCOL_GACHARESULT_SETCHARACTERDB_OFFSET UNITYSDK_OFFSET(0xF4EA70)
#define MX_NETWORKPROTOCOL_GACHARESULT_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0xF4EAA0)
#define MX_NETWORKPROTOCOL_GACHARESULT_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0xF4EAB0)
#define MX_NETWORKPROTOCOL_GACHARESULT_GET_STONE_OFFSET UNITYSDK_OFFSET(0xF4EAC0)
#define MX_NETWORKPROTOCOL_GACHARESULT_SETSTONE_OFFSET UNITYSDK_OFFSET(0xF4EAD0)
#define MX_NETWORKPROTOCOL_GACHARESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4EB00)
#define MX_NETWORKPROTOCOL_GACHARESULT_SET_STONE_OFFSET UNITYSDK_OFFSET(0xF4EB50)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int GachaResult_TypeDefinitionIndex = 12112;

	class GachaResult : public Il2CppObject
	{
	public:
		::System::Int64 _CharacterId_k__BackingField; // 0x10
		::MX::GameLogic::DBModel::CharacterDB* _Character_k__BackingField; // 0x18
		::MX::GameLogic::DBModel::ItemDB* _Stone_k__BackingField; // 0x20

		::MX::GameLogic::DBModel::CharacterDB* get_Character()
		{
			return ((::MX::GameLogic::DBModel::CharacterDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_GACHARESULT_GET_CHARACTER_OFFSET))(nullptr);
		}

		::System::Void set_Character(::MX::GameLogic::DBModel::CharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_GACHARESULT_SET_CHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void SetCharacterDB(::MX::GameLogic::DBModel::CharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_GACHARESULT_SETCHARACTERDB_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_GACHARESULT_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_GACHARESULT_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ItemDB* get_Stone()
		{
			return ((::MX::GameLogic::DBModel::ItemDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_GACHARESULT_GET_STONE_OFFSET))(nullptr);
		}

		::System::Void SetStone(::MX::GameLogic::DBModel::ItemDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ItemDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_GACHARESULT_SETSTONE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_GACHARESULT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_Stone(::MX::GameLogic::DBModel::ItemDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ItemDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_GACHARESULT_SET_STONE_OFFSET))(arg, nullptr);
		}

	};
}

