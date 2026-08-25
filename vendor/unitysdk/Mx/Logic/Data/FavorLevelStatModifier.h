#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class IncludeType; }
namespace MX::GameData::DAO::Battle { class FavorLevelStatModifierDAO; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_DATA_FAVORLEVELSTATMODIFIER_GET_FAVORCOUNTMIN_OFFSET UNITYSDK_OFFSET(0x122DA80)
#define MX_LOGIC_DATA_FAVORLEVELSTATMODIFIER_GET_FAVORCOUNTMAX_OFFSET UNITYSDK_OFFSET(0x122DA90)
#define MX_LOGIC_DATA_FAVORLEVELSTATMODIFIER_GET_INCLUDETYPE_OFFSET UNITYSDK_OFFSET(0x122DAA0)
#define MX_LOGIC_DATA_FAVORLEVELSTATMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x122DAB0)
#define MX_LOGIC_DATA_FAVORLEVELSTATMODIFIER_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x122DAF0)
#define MX_LOGIC_DATA_FAVORLEVELSTATMODIFIER_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x122DC20)
#define MX_LOGIC_DATA_FAVORLEVELSTATMODIFIER__ISSUCCESS_B__10_0_OFFSET UNITYSDK_OFFSET(0x122DCE0)
#define MX_LOGIC_DATA_FAVORLEVELSTATMODIFIER__ISSUCCESS_B__10_1_OFFSET UNITYSDK_OFFSET(0x122DDA0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int FavorLevelStatModifier_TypeDefinitionIndex = 13812;

	class FavorLevelStatModifier : public Il2CppObject
	{
	public:
		::System::Int64 _FavorCountMin_k__BackingField; // 0x18
		::System::Int64 _FavorCountMax_k__BackingField; // 0x20
		::MX::Logic::Data::IncludeType* _IncludeType_k__BackingField; // 0x28

		::System::Int64 get_FavorCountMin()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FAVORLEVELSTATMODIFIER_GET_FAVORCOUNTMIN_OFFSET))(nullptr);
		}

		::System::Int64 get_FavorCountMax()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FAVORLEVELSTATMODIFIER_GET_FAVORCOUNTMAX_OFFSET))(nullptr);
		}

		::MX::Logic::Data::IncludeType* get_IncludeType()
		{
			return ((::MX::Logic::Data::IncludeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FAVORLEVELSTATMODIFIER_GET_INCLUDETYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::FavorLevelStatModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::FavorLevelStatModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FAVORLEVELSTATMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSuccess(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FAVORLEVELSTATMODIFIER_ISSUCCESS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean IsSuccess(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FAVORLEVELSTATMODIFIER_ISSUCCESS_OFFSET))(arg, nullptr);
		}

		::System::Boolean _IsSuccess_b__10_0(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FAVORLEVELSTATMODIFIER__ISSUCCESS_B__10_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _IsSuccess_b__10_1(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FAVORLEVELSTATMODIFIER__ISSUCCESS_B__10_1_OFFSET))(arg, nullptr);
		}

	};
}

