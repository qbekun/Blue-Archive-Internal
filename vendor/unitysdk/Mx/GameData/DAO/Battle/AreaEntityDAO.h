#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class MovingAreaOptions; }
namespace MX::Logic::Data { class AreaCollisionProperty; }

#define MX_GAMEDATA_DAO_BATTLE_AREAENTITYDAO_SHOULDSERIALIZEAREAABILITIES_OFFSET UNITYSDK_OFFSET(0x1706110)
#define MX_GAMEDATA_DAO_BATTLE_AREAENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1706160)
#define MX_GAMEDATA_DAO_BATTLE_AREAENTITYDAO_SORTANDREMOVEDUPLICATEDHITFRAMES_OFFSET UNITYSDK_OFFSET(0x1706360)
#define MX_GAMEDATA_DAO_BATTLE_AREAENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17064F0)
#define MX_GAMEDATA_DAO_BATTLE_AREAENTITYDAO_GETSKILLABILITY_OFFSET UNITYSDK_OFFSET(0x1706500)
#define MX_GAMEDATA_DAO_BATTLE_AREAENTITYDAO_SHOULDSERIALIZEHITCHECKCOUPLINGKEY_OFFSET UNITYSDK_OFFSET(0x1706510)
#define MX_GAMEDATA_DAO_BATTLE_AREAENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1706530)
#define MX_GAMEDATA_DAO_BATTLE_AREAENTITYDAO_SHOULDSERIALIZEHITFRAMES_OFFSET UNITYSDK_OFFSET(0x1706580)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int AreaEntityDAO_TypeDefinitionIndex = 15483;

	class AreaEntityDAO : public Il2CppObject
	{
	public:
		::System::Boolean AttachTarget; // 0x158
		::System::Boolean AllowDuplicateHit; // 0x159
		::System::Boolean RemoveEntityIfSkillCancel; // 0x15A
		::System::Int32 Duration; // 0x15C
		::System::Boolean RotateEntityDirectionEveryFrame; // 0x160
		::System::Boolean ApplyOffsetRotateEntityDirection; // 0x161
		::MX::Logic::Skills::MovingAreaOptions* MovingAreaOption; // 0x164
		Il2CppObject* HitFrames; // 0x168
		::MX::Logic::Data::AreaCollisionProperty* CollisionProperty; // 0x170
		::System::Boolean CheckBlockHit; // 0x178
		Il2CppObject* AreaAbilities; // 0x180
		::System::String* HitCheckCouplingKey; // 0x188

		::System::Boolean ShouldSerializeAreaAbilities()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AREAENTITYDAO_SHOULDSERIALIZEAREAABILITIES_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AREAENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void SortAndRemoveDuplicatedHitFrames()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AREAENTITYDAO_SORTANDREMOVEDUPLICATEDHITFRAMES_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AREAENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetSkillAbility()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AREAENTITYDAO_GETSKILLABILITY_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeHitCheckCouplingKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AREAENTITYDAO_SHOULDSERIALIZEHITCHECKCOUPLINGKEY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AREAENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeHitFrames()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AREAENTITYDAO_SHOULDSERIALIZEHITFRAMES_OFFSET))(nullptr);
		}

	};
}

