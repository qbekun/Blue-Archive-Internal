#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class SameAuraCheckCondition; }
namespace MX::Logic::Skills { class MovingAreaOptions; }

#define MX_GAMEDATA_DAO_BATTLE_AURAENTITYDAO_SHOULDSERIALIZEAREAABILITIES_OFFSET UNITYSDK_OFFSET(0x1777150)
#define MX_GAMEDATA_DAO_BATTLE_AURAENTITYDAO_GETSKILLABILITY_OFFSET UNITYSDK_OFFSET(0x17771A0)
#define MX_GAMEDATA_DAO_BATTLE_AURAENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17771B0)
#define MX_GAMEDATA_DAO_BATTLE_AURAENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1777200)
#define MX_GAMEDATA_DAO_BATTLE_AURAENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1777210)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int AuraEntityDAO_TypeDefinitionIndex = 15535;

	class AuraEntityDAO : public Il2CppObject
	{
	public:
		::System::Boolean AttachSpawnTarget; // 0x158
		::System::Boolean RotateEntityDirectionEveryFrame; // 0x159
		::System::Boolean ApplyOffsetRotateEntityDirection; // 0x15A
		::System::Boolean RemoveEntityIfAttachSpawnTargetDie; // 0x15B
		::System::Int32 Duration; // 0x15C
		::System::Int32 Interval; // 0x160
		::MX::Logic::Data::SameAuraCheckCondition* RemoveEntityIfSameEntitySpawn; // 0x164
		::System::Boolean RemoveEntityIfSkillCancel; // 0x168
		::MX::Logic::Skills::MovingAreaOptions* MovingAreaOption; // 0x16C
		Il2CppObject* AreaAbilities; // 0x170

		::System::Boolean ShouldSerializeAreaAbilities()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AURAENTITYDAO_SHOULDSERIALIZEAREAABILITIES_OFFSET))(nullptr);
		}

		Il2CppObject* GetSkillAbility()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AURAENTITYDAO_GETSKILLABILITY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AURAENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AURAENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AURAENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

