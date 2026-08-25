#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::GenericCondition { class ReferenceVariable; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_GENERICCONDITION_BATTLEENTITYFILTER_GET_EACHOFFILTERTARGETLIST_OFFSET UNITYSDK_OFFSET(0x108BD10)
#define MX_LOGIC_GENERICCONDITION_BATTLEENTITYFILTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x108BD20)
#define MX_LOGIC_GENERICCONDITION_BATTLEENTITYFILTER_GET_OFFSET UNITYSDK_OFFSET(0x108BD30)
#define MX_LOGIC_GENERICCONDITION_BATTLEENTITYFILTER_COUNT_OFFSET UNITYSDK_OFFSET(0x108BE00)
#define MX_LOGIC_GENERICCONDITION_BATTLEENTITYFILTER__GET_B__6_0_OFFSET UNITYSDK_OFFSET(0x108BE50)
#define MX_LOGIC_GENERICCONDITION_BATTLEENTITYFILTER_SET_EACHOFFILTERTARGETLIST_OFFSET UNITYSDK_OFFSET(0x108BF80)

namespace MX::Logic::GenericCondition
{
	inline static constexpr unsigned int BattleEntityFilter_TypeDefinitionIndex = 12929;

	class BattleEntityFilter : public Il2CppObject
	{
	public:
		::MX::Logic::GenericCondition::ReferenceVariable* FilterTargetList; // 0x10
		Il2CppObject* FilterList; // 0x18
		::MX::Logic::BattleEntities::BattleEntity* _EachOfFilterTargetList_k__BackingField; // 0x20

		::MX::Logic::BattleEntities::BattleEntity* get_EachOfFilterTargetList()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_BATTLEENTITYFILTER_GET_EACHOFFILTERTARGETLIST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_BATTLEENTITYFILTER_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Get()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_BATTLEENTITYFILTER_GET_OFFSET))(nullptr);
		}

		::System::Int32 Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_BATTLEENTITYFILTER_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean _Get_b__6_0(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_BATTLEENTITYFILTER__GET_B__6_0_OFFSET))(arg, nullptr);
		}

		::System::Void set_EachOfFilterTargetList(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_BATTLEENTITYFILTER_SET_EACHOFFILTERTARGETLIST_OFFSET))(arg, nullptr);
		}

	};
}

