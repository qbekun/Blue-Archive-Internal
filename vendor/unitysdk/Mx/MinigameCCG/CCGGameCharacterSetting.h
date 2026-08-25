#pragma once
#include "../../unitysdk.h"

namespace FlatData { class CCGCharacterType; }
namespace MX::GameLogic::DBModel { class MiniGameCCGCharacterDB; }

#define MX_MINIGAMECCG_CCGGAMECHARACTERSETTING_GET_CHARACTERTYPE_OFFSET UNITYSDK_OFFSET(0x1DBD570)
#define MX_MINIGAMECCG_CCGGAMECHARACTERSETTING_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1DBD580)
#define MX_MINIGAMECCG_CCGGAMECHARACTERSETTING_GET_INITIALHEALTH_OFFSET UNITYSDK_OFFSET(0x1DBD590)
#define MX_MINIGAMECCG_CCGGAMECHARACTERSETTING_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1DBD5A0)
#define MX_MINIGAMECCG_CCGGAMECHARACTERSETTING_GET_FORCEDSLOT_OFFSET UNITYSDK_OFFSET(0x1DBD5B0)
#define MX_MINIGAMECCG_CCGGAMECHARACTERSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DBD5C0)
#define MX_MINIGAMECCG_CCGGAMECHARACTERSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DBD600)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameCharacterSetting_TypeDefinitionIndex = 20453;

	class CCGGameCharacterSetting : public Il2CppObject
	{
	public:
		::FlatData::CCGCharacterType* _CharacterType_k__BackingField; // 0x10
		::System::Int64 _CharacterId_k__BackingField; // 0x18
		::System::Int32 _InitialHealth_k__BackingField; // 0x20
		::System::Int32 _Order_k__BackingField; // 0x24
		Il2CppObject* _ForcedSlot_k__BackingField; // 0x28

		::FlatData::CCGCharacterType* get_CharacterType()
		{
			return (return (::FlatData::CCGCharacterType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMECHARACTERSETTING_GET_CHARACTERTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMECHARACTERSETTING_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Int32 get_InitialHealth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMECHARACTERSETTING_GET_INITIALHEALTH_OFFSET))(nullptr);
		}

		::System::Int32 get_Order()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMECHARACTERSETTING_GET_ORDER_OFFSET))(nullptr);
		}

		Il2CppObject* get_ForcedSlot()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMECHARACTERSETTING_GET_FORCEDSLOT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::FlatData::CCGCharacterType* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatData::CCGCharacterType*, ::System::Int64, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMECHARACTERSETTING_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::FlatData::CCGCharacterType* arg, ::MX::GameLogic::DBModel::MiniGameCCGCharacterDB* arg)
		{
			((::System::Void(*)(::FlatData::CCGCharacterType*, ::MX::GameLogic::DBModel::MiniGameCCGCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMECHARACTERSETTING_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

