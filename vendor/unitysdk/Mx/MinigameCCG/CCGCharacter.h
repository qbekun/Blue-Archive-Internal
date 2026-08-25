#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class ICCGCharacterData; }
namespace MX::MinigameCCG { class CCGSkillData; }
namespace MX::MinigameCCG { class CCGEquipmentCard; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG { class CCGEntityStatType; }

#define MX_MINIGAMECCG_CCGCHARACTER_TRIGGERPASSIVESKILL_OFFSET UNITYSDK_OFFSET(0x1DC7030)
#define MX_MINIGAMECCG_CCGCHARACTER___N__0_OFFSET UNITYSDK_OFFSET(0x1DC70F0)
#define MX_MINIGAMECCG_CCGCHARACTER_GET_ACTIVESKILL_OFFSET UNITYSDK_OFFSET(0x1DC7190)
#define MX_MINIGAMECCG_CCGCHARACTER_GET_CURRENTACTIVECOOLDOWN_OFFSET UNITYSDK_OFFSET(0x1DC7230)
#define MX_MINIGAMECCG_CCGCHARACTER_GET_EQUIPMENTS_OFFSET UNITYSDK_OFFSET(0x1DC7240)
#define MX_MINIGAMECCG_CCGCHARACTER_ATTACH_OFFSET UNITYSDK_OFFSET(0x1DC7250)
#define MX_MINIGAMECCG_CCGCHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DC7310)
#define MX_MINIGAMECCG_CCGCHARACTER_GETSTATBASEVALUE_OFFSET UNITYSDK_OFFSET(0x1DC73C0)
#define MX_MINIGAMECCG_CCGCHARACTER_DETACH_OFFSET UNITYSDK_OFFSET(0x1DC74F0)
#define MX_MINIGAMECCG_CCGCHARACTER_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1DC7560)
#define MX_MINIGAMECCG_CCGCHARACTER_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1DBA3C0)
#define MX_MINIGAMECCG_CCGCHARACTER_GETFIELD_OFFSET UNITYSDK_OFFSET(0x1DC7570)
#define MX_MINIGAMECCG_CCGCHARACTER_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x1DC7750)
#define MX_MINIGAMECCG_CCGCHARACTER_SET_CURRENTACTIVECOOLDOWN_OFFSET UNITYSDK_OFFSET(0x1DC77F0)
#define MX_MINIGAMECCG_CCGCHARACTER_GET_PASSIVESKILLS_OFFSET UNITYSDK_OFFSET(0x1DC7800)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGCharacter_TypeDefinitionIndex = 20503;

	class CCGCharacter : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ICCGCharacterData* _Data_k__BackingField; // 0x38
		::System::Int32 _CurrentActiveCooldown_k__BackingField; // 0x40
		Il2CppObject* _equipments; // 0x48

		Il2CppObject* TriggerPassiveSkill(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTER_TRIGGERPASSIVESKILL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* __n__0(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTER___N__0_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::CCGSkillData* get_ActiveSkill()
		{
			return (return (::MX::MinigameCCG::CCGSkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTER_GET_ACTIVESKILL_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentActiveCooldown()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTER_GET_CURRENTACTIVECOOLDOWN_OFFSET))(nullptr);
		}

		Il2CppObject* get_Equipments()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTER_GET_EQUIPMENTS_OFFSET))(nullptr);
		}

		::System::Void Attach(::MX::MinigameCCG::CCGEquipmentCard* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEquipmentCard*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTER_ATTACH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::CCGPlayer* arg, ::MX::MinigameCCG::ICCGCharacterData* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::CCGPlayer*, ::MX::MinigameCCG::ICCGCharacterData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetStatBaseValue(::MX::MinigameCCG::CCGEntityStatType* arg)
		{
			return (return (::System::Int32(*)(::MX::MinigameCCG::CCGEntityStatType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTER_GETSTATBASEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void Detach(::MX::MinigameCCG::CCGEquipmentCard* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEquipmentCard*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTER_DETACH_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::ICCGCharacterData* get_Data()
		{
			return (return (::MX::MinigameCCG::ICCGCharacterData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTER_GET_DATA_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTER_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Object* GetField(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTER_GETFIELD_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_Tags()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTER_GET_TAGS_OFFSET))(nullptr);
		}

		::System::Void set_CurrentActiveCooldown(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTER_SET_CURRENTACTIVECOOLDOWN_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PassiveSkills()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCHARACTER_GET_PASSIVESKILLS_OFFSET))(nullptr);
		}

	};
}

