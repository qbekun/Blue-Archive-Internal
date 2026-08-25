#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG { class CCGEntityLocation; }
namespace MX::MinigameCCG { class CCGSkillData; }
namespace MX::MinigameCCG { class CCGTargetCategoryRule; }
namespace MX::MinigameCCG { class CCGEntityStatType; }
namespace MX::MinigameCCG { class CCGLogicEffect; }

#define MX_MINIGAMECCG_CCGENTITY_GET_GAME_OFFSET UNITYSDK_OFFSET(0x1DC82E0)
#define MX_MINIGAMECCG_CCGENTITY_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x1DC82F0)
#define MX_MINIGAMECCG_CCGENTITY_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x1DC8300)
#define MX_MINIGAMECCG_CCGENTITY_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x1DC8310)
#define MX_MINIGAMECCG_CCGENTITY_SET_LOCATION_OFFSET UNITYSDK_OFFSET(0x1DC8320)
#define MX_MINIGAMECCG_CCGENTITY_GET_ACTIVESKILL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_CCGENTITY_GET_ACTIVECOST_OFFSET UNITYSDK_OFFSET(0x1DC53F0)
#define MX_MINIGAMECCG_CCGENTITY_GET_PASSIVESKILLS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_CCGENTITY_GET_LOGICEFFECTS_OFFSET UNITYSDK_OFFSET(0x1DC8330)
#define MX_MINIGAMECCG_CCGENTITY_GET_ACTIVESKILLPOWER_OFFSET UNITYSDK_OFFSET(0x1DC8340)
#define MX_MINIGAMECCG_CCGENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6A70)
#define MX_MINIGAMECCG_CCGENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6C90)
#define MX_MINIGAMECCG_CCGENTITY_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_CCGENTITY_CHECKTARGETCATEGORYRULE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_CCGENTITY_RESET_OFFSET UNITYSDK_OFFSET(0x1DC8390)
#define MX_MINIGAMECCG_CCGENTITY_GETSTATBASEVALUE_OFFSET UNITYSDK_OFFSET(0x1DC6F10)
#define MX_MINIGAMECCG_CCGENTITY_GETSTATVALUE_OFFSET UNITYSDK_OFFSET(0x1DC83A0)
#define MX_MINIGAMECCG_CCGENTITY_ADDLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1DBEAA0)
#define MX_MINIGAMECCG_CCGENTITY_REMOVELOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1DC87C0)
#define MX_MINIGAMECCG_CCGENTITY_GET_ALIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_CCGENTITY_TRIGGERPASSIVESKILL_OFFSET UNITYSDK_OFFSET(0x1DC7100)
#define MX_MINIGAMECCG_CCGENTITY_GETFIELD_OFFSET UNITYSDK_OFFSET(0x1DC6FE0)
#define MX_MINIGAMECCG_CCGENTITY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DC88B0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEntity_TypeDefinitionIndex = 20507;

	class CCGEntity : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGGame* _Game_k__BackingField; // 0x10
		::System::Int32 _EntityId_k__BackingField; // 0x18
		::MX::MinigameCCG::CCGPlayer* _Owner_k__BackingField; // 0x20
		::MX::MinigameCCG::CCGEntityLocation* _Location_k__BackingField; // 0x28
		Il2CppObject* _logicEffects; // 0x30

		::MX::MinigameCCG::CCGGame* get_Game()
		{
			return (return (::MX::MinigameCCG::CCGGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGENTITY_GET_GAME_OFFSET))(nullptr);
		}

		::System::Int32 get_EntityId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGENTITY_GET_ENTITYID_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGPlayer* get_Owner()
		{
			return (return (::MX::MinigameCCG::CCGPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGENTITY_GET_OWNER_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGEntityLocation* get_Location()
		{
			return (return (::MX::MinigameCCG::CCGEntityLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGENTITY_GET_LOCATION_OFFSET))(nullptr);
		}

		::System::Void set_Location(::MX::MinigameCCG::CCGEntityLocation* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEntityLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGENTITY_SET_LOCATION_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::CCGSkillData* get_ActiveSkill()
		{
			return (return (::MX::MinigameCCG::CCGSkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGENTITY_GET_ACTIVESKILL_OFFSET))(nullptr);
		}

		::System::Int32 get_ActiveCost()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGENTITY_GET_ACTIVECOST_OFFSET))(nullptr);
		}

		Il2CppObject* get_PassiveSkills()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGENTITY_GET_PASSIVESKILLS_OFFSET))(nullptr);
		}

		Il2CppObject* get_LogicEffects()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGENTITY_GET_LOGICEFFECTS_OFFSET))(nullptr);
		}

		::System::Int32 get_ActiveSkillPower()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGENTITY_GET_ACTIVESKILLPOWER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::CCGPlayer* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGENTITY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::CCGPlayer* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::CCGPlayer*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGENTITY_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* get_Tags()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGENTITY_GET_TAGS_OFFSET))(nullptr);
		}

		::System::Boolean CheckTargetCategoryRule(::MX::MinigameCCG::CCGTargetCategoryRule* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGTargetCategoryRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGENTITY_CHECKTARGETCATEGORYRULE_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGENTITY_RESET_OFFSET))(nullptr);
		}

		::System::Int32 GetStatBaseValue(::MX::MinigameCCG::CCGEntityStatType* arg)
		{
			return (return (::System::Int32(*)(::MX::MinigameCCG::CCGEntityStatType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGENTITY_GETSTATBASEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetStatValue(::MX::MinigameCCG::CCGEntityStatType* arg)
		{
			return (return (::System::Int32(*)(::MX::MinigameCCG::CCGEntityStatType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGENTITY_GETSTATVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void AddLogicEffect(::MX::MinigameCCG::CCGLogicEffect* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGLogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGENTITY_ADDLOGICEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveLogicEffect(::MX::MinigameCCG::CCGLogicEffect* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGLogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGENTITY_REMOVELOGICEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Alive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGENTITY_GET_ALIVE_OFFSET))(nullptr);
		}

		Il2CppObject* TriggerPassiveSkill(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGENTITY_TRIGGERPASSIVESKILL_OFFSET))(arg, nullptr);
		}

		::System::Object* GetField(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGENTITY_GETFIELD_OFFSET))(str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGENTITY_TOSTRING_OFFSET))(nullptr);
		}

	};
}

