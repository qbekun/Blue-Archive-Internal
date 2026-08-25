#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGLogicEffectDecayFlag; }
namespace MX::MinigameCCG { class CCGLogicEffectStackOverwriteRule; }
namespace MX::MinigameCCG { class CCGLogicEffectSourceOverwriteRule; }
namespace MX::MinigameCCG { class CCGBuffType; }
namespace MX::MinigameCCG { class CCGSkillData; }

#define MX_MINIGAMECCG_CCGLOGICEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DC4F10)
#define MX_MINIGAMECCG_CCGLOGICEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DC4F20)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGLogicEffectData_TypeDefinitionIndex = 20478;

	class CCGLogicEffectData : public Il2CppObject
	{
	public:
		::System::Int64 logicEffectId; // 0x18
		::System::Int32 maxStack; // 0x20
		::MX::MinigameCCG::CCGLogicEffectDecayFlag* decayFlag; // 0x24
		::MX::MinigameCCG::CCGLogicEffectStackOverwriteRule* stackOverwriteRule; // 0x28
		::MX::MinigameCCG::CCGLogicEffectSourceOverwriteRule* sourceOverwriteRule; // 0x2C
		Il2CppObject* statChanges; // 0x30
		::MX::MinigameCCG::CCGBuffType* buffType; // 0x38
		::MX::MinigameCCG::CCGSkillData* passiveSkill; // 0x40
		::MX::MinigameCCG::CCGSkillData* displaySkill; // 0x48
		::System::Boolean blockSwapStriker; // 0x50
		::System::Boolean dontDestroyIfParentKilled; // 0x51

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGICEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int32 arg, ::MX::MinigameCCG::CCGLogicEffectDecayFlag* arg, ::MX::MinigameCCG::CCGLogicEffectStackOverwriteRule* arg, ::MX::MinigameCCG::CCGLogicEffectSourceOverwriteRule* arg, Il2CppObject* arg, ::MX::MinigameCCG::CCGSkillData* arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::MX::MinigameCCG::CCGLogicEffectDecayFlag*, ::MX::MinigameCCG::CCGLogicEffectStackOverwriteRule*, ::MX::MinigameCCG::CCGLogicEffectSourceOverwriteRule*, Il2CppObject*, ::MX::MinigameCCG::CCGSkillData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGLOGICEFFECTDATA_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

