#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGCharacter; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG { class ICCGCardData; }
namespace MX::MinigameCCG { class CCGCard; }
namespace MX::MinigameCCG { class CCGTargetCategoryRule; }
namespace MX::MinigameCCG { class CCGEntityStatType; }

#define MX_MINIGAMECCG_CCGEQUIPMENTCARD_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1DC9340)
#define MX_MINIGAMECCG_CCGEQUIPMENTCARD_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x1DC9350)
#define MX_MINIGAMECCG_CCGEQUIPMENTCARD_GET_LASTACTIVATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1DC9360)
#define MX_MINIGAMECCG_CCGEQUIPMENTCARD_SET_LASTACTIVATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1DC9370)
#define MX_MINIGAMECCG_CCGEQUIPMENTCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6D80)
#define MX_MINIGAMECCG_CCGEQUIPMENTCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9380)
#define MX_MINIGAMECCG_CCGEQUIPMENTCARD_CLONECARD_OFFSET UNITYSDK_OFFSET(0x1DC93D0)
#define MX_MINIGAMECCG_CCGEQUIPMENTCARD_CHECKTARGETCATEGORYRULE_OFFSET UNITYSDK_OFFSET(0x1DC96E0)
#define MX_MINIGAMECCG_CCGEQUIPMENTCARD_RESET_OFFSET UNITYSDK_OFFSET(0x1DC96F0)
#define MX_MINIGAMECCG_CCGEQUIPMENTCARD_GETSTATBASEVALUE_OFFSET UNITYSDK_OFFSET(0x1DC9720)
#define MX_MINIGAMECCG_CCGEQUIPMENTCARD_TRIGGERPASSIVESKILL_OFFSET UNITYSDK_OFFSET(0x1DC97E0)
#define MX_MINIGAMECCG_CCGEQUIPMENTCARD_GETFIELD_OFFSET UNITYSDK_OFFSET(0x1DC98A0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEquipmentCard_TypeDefinitionIndex = 20510;

	class CCGEquipmentCard : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGCharacter* _Parent_k__BackingField; // 0x48
		::System::Int32 _LastActivationCount_k__BackingField; // 0x50

		::MX::MinigameCCG::CCGCharacter* get_Parent()
		{
			return (return (::MX::MinigameCCG::CCGCharacter*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEQUIPMENTCARD_GET_PARENT_OFFSET))(nullptr);
		}

		::System::Void set_Parent(::MX::MinigameCCG::CCGCharacter* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEQUIPMENTCARD_SET_PARENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LastActivationCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEQUIPMENTCARD_GET_LASTACTIVATIONCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_LastActivationCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEQUIPMENTCARD_SET_LASTACTIVATIONCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::CCGPlayer* arg, ::MX::MinigameCCG::ICCGCardData* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::CCGPlayer*, ::MX::MinigameCCG::ICCGCardData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEQUIPMENTCARD_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::CCGPlayer* arg, ::MX::MinigameCCG::ICCGCardData* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::CCGPlayer*, ::MX::MinigameCCG::ICCGCardData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEQUIPMENTCARD_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::MX::MinigameCCG::CCGCard* CloneCard(::MX::MinigameCCG::CCGPlayer* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::MX::MinigameCCG::CCGCard*(*)(::MX::MinigameCCG::CCGPlayer*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEQUIPMENTCARD_CLONECARD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean CheckTargetCategoryRule(::MX::MinigameCCG::CCGTargetCategoryRule* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGTargetCategoryRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEQUIPMENTCARD_CHECKTARGETCATEGORYRULE_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEQUIPMENTCARD_RESET_OFFSET))(nullptr);
		}

		::System::Int32 GetStatBaseValue(::MX::MinigameCCG::CCGEntityStatType* arg)
		{
			return (return (::System::Int32(*)(::MX::MinigameCCG::CCGEntityStatType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEQUIPMENTCARD_GETSTATBASEVALUE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* TriggerPassiveSkill(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEQUIPMENTCARD_TRIGGERPASSIVESKILL_OFFSET))(arg, nullptr);
		}

		::System::Object* GetField(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEQUIPMENTCARD_GETFIELD_OFFSET))(str, nullptr);
		}

	};
}

