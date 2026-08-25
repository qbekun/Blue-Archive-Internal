#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG { class CCGLogicEffectData; }
namespace MX::MinigameCCG { class CCGEntity; }
namespace MX::MinigameCCG { class CCGEntityStatType; }

#define MX_MINIGAMECCG_CCGLOGICEFFECT_SET_BASEPOWER_OFFSET UNITYSDK_OFFSET(0x1DCF710)
#define MX_MINIGAMECCG_CCGLOGICEFFECT_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1DCF720)
#define MX_MINIGAMECCG_CCGLOGICEFFECT_GET_LOGICEFFECTID_OFFSET UNITYSDK_OFFSET(0x1DCCAB0)
#define MX_MINIGAMECCG_CCGLOGICEFFECT_CHANGESTACK_OFFSET UNITYSDK_OFFSET(0x1DCF730)
#define MX_MINIGAMECCG_CCGLOGICEFFECT_TRIGGERPASSIVESKILL_OFFSET UNITYSDK_OFFSET(0x1DCF740)
#define MX_MINIGAMECCG_CCGLOGICEFFECT_GET_GAME_OFFSET UNITYSDK_OFFSET(0x1DCF800)
#define MX_MINIGAMECCG_CCGLOGICEFFECT_GET_STACK_OFFSET UNITYSDK_OFFSET(0x1DCF810)
#define MX_MINIGAMECCG_CCGLOGICEFFECT_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1DCF820)
#define MX_MINIGAMECCG_CCGLOGICEFFECT_CHANGESOURCE_OFFSET UNITYSDK_OFFSET(0x1DCF830)
#define MX_MINIGAMECCG_CCGLOGICEFFECT_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1DCF860)
#define MX_MINIGAMECCG_CCGLOGICEFFECT_GET_BASEPOWER_OFFSET UNITYSDK_OFFSET(0x1DCF870)
#define MX_MINIGAMECCG_CCGLOGICEFFECT_ONATTACH_OFFSET UNITYSDK_OFFSET(0x1DC87A0)
#define MX_MINIGAMECCG_CCGLOGICEFFECT_ONDETACH_OFFSET UNITYSDK_OFFSET(0x1DC8860)
#define MX_MINIGAMECCG_CCGLOGICEFFECT_GET_ATTACHED_OFFSET UNITYSDK_OFFSET(0x1DCF880)
#define MX_MINIGAMECCG_CCGLOGICEFFECT_ONMODIFYSTATVALUE_OFFSET UNITYSDK_OFFSET(0x1DC8570)
#define MX_MINIGAMECCG_CCGLOGICEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DBEA40)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGLogicEffect_TypeDefinitionIndex = 20597;

	class CCGLogicEffect : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGGame* _Game_k__BackingField; // 0x10
		::MX::MinigameCCG::CCGLogicEffectData* _Data_k__BackingField; // 0x18
		::MX::MinigameCCG::CCGEntity* _Source_k__BackingField; // 0x20
		::System::Int32 _BasePower_k__BackingField; // 0x28
		::MX::MinigameCCG::CCGEntity* _attached; // 0x30
		::System::Int32 _stack; // 0x38

		::System::Void set_BasePower(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGICEFFECT_SET_BASEPOWER_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::CCGLogicEffectData* get_Data()
		{
			return (return (::MX::MinigameCCG::CCGLogicEffectData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGICEFFECT_GET_DATA_OFFSET))(nullptr);
		}

		::System::Int64 get_LogicEffectId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGICEFFECT_GET_LOGICEFFECTID_OFFSET))(nullptr);
		}

		::System::Void ChangeStack(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGICEFFECT_CHANGESTACK_OFFSET))(arg, nullptr);
		}

		Il2CppObject* TriggerPassiveSkill(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGICEFFECT_TRIGGERPASSIVESKILL_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::CCGGame* get_Game()
		{
			return (return (::MX::MinigameCCG::CCGGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGICEFFECT_GET_GAME_OFFSET))(nullptr);
		}

		::System::Int32 get_Stack()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGICEFFECT_GET_STACK_OFFSET))(nullptr);
		}

		::System::Void set_Source(::MX::MinigameCCG::CCGEntity* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGICEFFECT_SET_SOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void ChangeSource(::MX::MinigameCCG::CCGEntity* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEntity*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGICEFFECT_CHANGESOURCE_OFFSET))(arg, arg, nullptr);
		}

		::MX::MinigameCCG::CCGEntity* get_Source()
		{
			return (return (::MX::MinigameCCG::CCGEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGICEFFECT_GET_SOURCE_OFFSET))(nullptr);
		}

		::System::Int32 get_BasePower()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGICEFFECT_GET_BASEPOWER_OFFSET))(nullptr);
		}

		::System::Void OnAttach(::MX::MinigameCCG::CCGEntity* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGICEFFECT_ONATTACH_OFFSET))(arg, nullptr);
		}

		::System::Void OnDetach()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGICEFFECT_ONDETACH_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGEntity* get_Attached()
		{
			return (return (::MX::MinigameCCG::CCGEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGICEFFECT_GET_ATTACHED_OFFSET))(nullptr);
		}

		::System::Void OnModifyStatValue(::MX::MinigameCCG::CCGEntityStatType* arg, int32_t&* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEntityStatType*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGICEFFECT_ONMODIFYSTATVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::CCGLogicEffectData* arg, ::MX::MinigameCCG::CCGEntity* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::CCGLogicEffectData*, ::MX::MinigameCCG::CCGEntity*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGICEFFECT_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

