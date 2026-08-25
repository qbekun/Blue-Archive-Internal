#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG { class CCGCardStack; }
namespace MX::MinigameCCG { class CCGStriker; }
namespace MX::MinigameCCG { class CCGZoneCard; }
namespace MX::MinigameCCG { class CCGPlayerEnvironment; }
namespace MX::MinigameCCG { class CCGCard; }
namespace MX::MinigameCCG { class CCGEntityLocation; }
namespace MX::MinigameCCG { class CCGGamePlayerSetting; }
namespace MX::MinigameCCG { class CCGTargetCategoryRule; }
namespace MX::MinigameCCG { class CCGCharacter; }
namespace MX::MinigameCCG { class CCGPlayer; }

#define MX_MINIGAMECCG_CCGPLAYER_MOVECARD_OFFSET UNITYSDK_OFFSET(0x1DBD900)
#define MX_MINIGAMECCG_CCGPLAYER_GET_COST_OFFSET UNITYSDK_OFFSET(0x1DBDA60)
#define MX_MINIGAMECCG_CCGPLAYER_GET_ZONE_OFFSET UNITYSDK_OFFSET(0x1DBDA70)
#define MX_MINIGAMECCG_CCGPLAYER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1DBDA80)
#define MX_MINIGAMECCG_CCGPLAYER_TRYFINDEMPTYSTRIKERSLOTINDEX_OFFSET UNITYSDK_OFFSET(0x1DBE7E0)
#define MX_MINIGAMECCG_CCGPLAYER_GET_SPECIALCHARS_OFFSET UNITYSDK_OFFSET(0x1DBEB80)
#define MX_MINIGAMECCG_CCGPLAYER_GET_ALLCHARACTERSINBATTLEFIELD_OFFSET UNITYSDK_OFFSET(0x1DBEB90)
#define MX_MINIGAMECCG_CCGPLAYER_GET_GRAVE_OFFSET UNITYSDK_OFFSET(0x1DBEC40)
#define MX_MINIGAMECCG_CCGPLAYER_FINDTARGETCANDIDATES_OFFSET UNITYSDK_OFFSET(0x1DBACE0)
#define MX_MINIGAMECCG_CCGPLAYER_SET_ENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1DBEC80)
#define MX_MINIGAMECCG_CCGPLAYER_SPAWNCHARACTER_OFFSET UNITYSDK_OFFSET(0x1DBE870)
#define MX_MINIGAMECCG_CCGPLAYER_GET_QUEUEDSTRIKERSETTINGS_OFFSET UNITYSDK_OFFSET(0x1DBEC90)
#define MX_MINIGAMECCG_CCGPLAYER_GET_ALLCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1DBECA0)
#define MX_MINIGAMECCG_CCGPLAYER_GET_PASSIVESKILLTRIGGERABLES_OFFSET UNITYSDK_OFFSET(0x1DBD270)
#define MX_MINIGAMECCG_CCGPLAYER_GET_PLAYERID_OFFSET UNITYSDK_OFFSET(0x1DBECE0)
#define MX_MINIGAMECCG_CCGPLAYER_GET_FRONTSTRIKER_OFFSET UNITYSDK_OFFSET(0x1DBECF0)
#define MX_MINIGAMECCG_CCGPLAYER_GET_DECK_OFFSET UNITYSDK_OFFSET(0x1DBED00)
#define MX_MINIGAMECCG_CCGPLAYER_TRYFINDEMPTYSPECIALSLOTINDEX_OFFSET UNITYSDK_OFFSET(0x1DBED10)
#define MX_MINIGAMECCG_CCGPLAYER_GET_STRIKERCHARS_OFFSET UNITYSDK_OFFSET(0x1DBED60)
#define MX_MINIGAMECCG_CCGPLAYER_GET_HAND_OFFSET UNITYSDK_OFFSET(0x1DBED70)
#define MX_MINIGAMECCG_CCGPLAYER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DBED80)
#define MX_MINIGAMECCG_CCGPLAYER_SET_FRONTSTRIKER_OFFSET UNITYSDK_OFFSET(0x1DBEDF0)
#define MX_MINIGAMECCG_CCGPLAYER_GET_GAME_OFFSET UNITYSDK_OFFSET(0x1DBEE00)
#define MX_MINIGAMECCG_CCGPLAYER_GET_DRAWABLECOUNT_OFFSET UNITYSDK_OFFSET(0x1DBEE10)
#define MX_MINIGAMECCG_CCGPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DB9D30)
#define MX_MINIGAMECCG_CCGPLAYER_GET_ENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1DBEE90)
#define MX_MINIGAMECCG_CCGPLAYER_GET_ALLALIVECHARACTERS_OFFSET UNITYSDK_OFFSET(0x1DBEEA0)
#define MX_MINIGAMECCG_CCGPLAYER_GET_OPPONENT_OFFSET UNITYSDK_OFFSET(0x1DBAD60)
#define MX_MINIGAMECCG_CCGPLAYER_GETFIELD_OFFSET UNITYSDK_OFFSET(0x1DBEF50)
#define MX_MINIGAMECCG_CCGPLAYER_GET_ALLACTIVEENTITIES_OFFSET UNITYSDK_OFFSET(0x1DBF210)
#define MX_MINIGAMECCG_CCGPLAYER_SET_ZONE_OFFSET UNITYSDK_OFFSET(0x1DBF2C0)
#define MX_MINIGAMECCG_CCGPLAYER_SET_COST_OFFSET UNITYSDK_OFFSET(0x1DBF2D0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGPlayer_TypeDefinitionIndex = 20462;

	class CCGPlayer : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGGame* _Game_k__BackingField; // 0x10
		::System::Int32 _PlayerId_k__BackingField; // 0x18
		::MX::MinigameCCG::CCGCardStack* _Deck_k__BackingField; // 0x20
		::MX::MinigameCCG::CCGCardStack* _Grave_k__BackingField; // 0x28
		Il2CppObject* _Hand_k__BackingField; // 0x30
		::MX::MinigameCCG::CCGStriker* _FrontStriker_k__BackingField; // 0x38
		::Il2CppArray<::System::Object*>* _StrikerChars_k__BackingField; // 0x40
		::Il2CppArray<::System::Object*>* _SpecialChars_k__BackingField; // 0x48
		::MX::MinigameCCG::CCGZoneCard* _Zone_k__BackingField; // 0x50
		::MX::MinigameCCG::CCGPlayerEnvironment* _Environment_k__BackingField; // 0x58
		Il2CppObject* _QueuedStrikerSettings_k__BackingField; // 0x60
		Il2CppObject* _characters; // 0x68
		::System::Int32 _Cost_k__BackingField; // 0x70

		::System::Void MoveCard(::MX::MinigameCCG::CCGCard* arg, ::MX::MinigameCCG::CCGEntityLocation* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGCard*, ::MX::MinigameCCG::CCGEntityLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYER_MOVECARD_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Cost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYER_GET_COST_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGZoneCard* get_Zone()
		{
			return (return (::MX::MinigameCCG::CCGZoneCard*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYER_GET_ZONE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::MinigameCCG::CCGGamePlayerSetting* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGamePlayerSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYER_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryFindEmptyStrikerSlotIndex(int32_t&* arg)
		{
			return (return (::System::Boolean(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYER_TRYFINDEMPTYSTRIKERSLOTINDEX_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_SpecialChars()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYER_GET_SPECIALCHARS_OFFSET))(nullptr);
		}

		Il2CppObject* get_AllCharactersInBattleField()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYER_GET_ALLCHARACTERSINBATTLEFIELD_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGCardStack* get_Grave()
		{
			return (return (::MX::MinigameCCG::CCGCardStack*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYER_GET_GRAVE_OFFSET))(nullptr);
		}

		Il2CppObject* FindTargetCandidates(::MX::MinigameCCG::CCGTargetCategoryRule* arg)
		{
			return (return (Il2CppObject*(*)(::MX::MinigameCCG::CCGTargetCategoryRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYER_FINDTARGETCANDIDATES_OFFSET))(arg, nullptr);
		}

		::System::Void set_Environment(::MX::MinigameCCG::CCGPlayerEnvironment* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayerEnvironment*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYER_SET_ENVIRONMENT_OFFSET))(arg, nullptr);
		}

		::System::Void SpawnCharacter(::MX::MinigameCCG::CCGCharacter* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGCharacter*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYER_SPAWNCHARACTER_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_QueuedStrikerSettings()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYER_GET_QUEUEDSTRIKERSETTINGS_OFFSET))(nullptr);
		}

		Il2CppObject* get_AllCharacters()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYER_GET_ALLCHARACTERS_OFFSET))(nullptr);
		}

		Il2CppObject* get_PassiveSkillTriggerables()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYER_GET_PASSIVESKILLTRIGGERABLES_OFFSET))(nullptr);
		}

		::System::Int32 get_PlayerId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYER_GET_PLAYERID_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGStriker* get_FrontStriker()
		{
			return (return (::MX::MinigameCCG::CCGStriker*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYER_GET_FRONTSTRIKER_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGCardStack* get_Deck()
		{
			return (return (::MX::MinigameCCG::CCGCardStack*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYER_GET_DECK_OFFSET))(nullptr);
		}

		::System::Boolean TryFindEmptySpecialSlotIndex(int32_t&* arg)
		{
			return (return (::System::Boolean(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYER_TRYFINDEMPTYSPECIALSLOTINDEX_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_StrikerChars()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYER_GET_STRIKERCHARS_OFFSET))(nullptr);
		}

		Il2CppObject* get_Hand()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYER_GET_HAND_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYER_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void set_FrontStriker(::MX::MinigameCCG::CCGStriker* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGStriker*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYER_SET_FRONTSTRIKER_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::CCGGame* get_Game()
		{
			return (return (::MX::MinigameCCG::CCGGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYER_GET_GAME_OFFSET))(nullptr);
		}

		::System::Int32 get_DrawableCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYER_GET_DRAWABLECOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::System::Byte arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::MX::MinigameCCG::CCGPlayerEnvironment* get_Environment()
		{
			return (return (::MX::MinigameCCG::CCGPlayerEnvironment*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYER_GET_ENVIRONMENT_OFFSET))(nullptr);
		}

		Il2CppObject* get_AllAliveCharacters()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYER_GET_ALLALIVECHARACTERS_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGPlayer* get_Opponent()
		{
			return (return (::MX::MinigameCCG::CCGPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYER_GET_OPPONENT_OFFSET))(nullptr);
		}

		::System::Object* GetField(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYER_GETFIELD_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_AllActiveEntities()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYER_GET_ALLACTIVEENTITIES_OFFSET))(nullptr);
		}

		::System::Void set_Zone(::MX::MinigameCCG::CCGZoneCard* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGZoneCard*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYER_SET_ZONE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Cost(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYER_SET_COST_OFFSET))(arg, nullptr);
		}

	};
}

