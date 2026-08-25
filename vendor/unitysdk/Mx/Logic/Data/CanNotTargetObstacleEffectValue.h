#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::GameData::DAO::Battle { class CanNotTargetObstacleEffectDAO; }

#define MX_LOGIC_DATA_CANNOTTARGETOBSTACLEEFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1236220)
#define MX_LOGIC_DATA_CANNOTTARGETOBSTACLEEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x1236230)
#define MX_LOGIC_DATA_CANNOTTARGETOBSTACLEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1236240)
#define MX_LOGIC_DATA_CANNOTTARGETOBSTACLEEFFECTVALUE_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x12362F0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CanNotTargetObstacleEffectValue_TypeDefinitionIndex = 13858;

	class CanNotTargetObstacleEffectValue : public Il2CppObject
	{
	public:
		::System::Boolean _Dispellable_k__BackingField; // 0x48
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0x4C
		::System::Int32 _EndConditionArgument_k__BackingField; // 0x50

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CANNOTTARGETOBSTACLEEFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CANNOTTARGETOBSTACLEEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::CanNotTargetObstacleEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::CanNotTargetObstacleEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CANNOTTARGETOBSTACLEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CANNOTTARGETOBSTACLEEFFECTVALUE_GET_ENDCONDITION_OFFSET))(nullptr);
		}

	};
}

