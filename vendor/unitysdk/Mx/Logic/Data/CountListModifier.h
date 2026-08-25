#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class IncludeType; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::GameData::DAO::Battle { class CountListModifierDAO; }

#define MX_LOGIC_DATA_COUNTLISTMODIFIER_GET_INCLUDETYPE_OFFSET UNITYSDK_OFFSET(0x122C150)
#define MX_LOGIC_DATA_COUNTLISTMODIFIER_GETCHECKCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_DATA_COUNTLISTMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1222C70)
#define MX_LOGIC_DATA_COUNTLISTMODIFIER_GET_COUNTMIN_OFFSET UNITYSDK_OFFSET(0x122C160)
#define MX_LOGIC_DATA_COUNTLISTMODIFIER_GET_COUNTMAX_OFFSET UNITYSDK_OFFSET(0x122C170)
#define MX_LOGIC_DATA_COUNTLISTMODIFIER_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x122C180)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CountListModifier_TypeDefinitionIndex = 13795;

	class CountListModifier : public Il2CppObject
	{
	public:
		::System::Int32 _CountMin_k__BackingField; // 0x18
		::System::Int32 _CountMax_k__BackingField; // 0x1C
		::MX::Logic::Data::IncludeType* _IncludeType_k__BackingField; // 0x20

		::MX::Logic::Data::IncludeType* get_IncludeType()
		{
			return ((::MX::Logic::Data::IncludeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTMODIFIER_GET_INCLUDETYPE_OFFSET))(nullptr);
		}

		::System::Int32 GetCheckCount(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Int32(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTMODIFIER_GETCHECKCOUNT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::CountListModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::CountListModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CountMin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTMODIFIER_GET_COUNTMIN_OFFSET))(nullptr);
		}

		::System::Int32 get_CountMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTMODIFIER_GET_COUNTMAX_OFFSET))(nullptr);
		}

		::System::Boolean IsSuccess(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLISTMODIFIER_ISSUCCESS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

