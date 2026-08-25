#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }

#define MX_LOGIC_DATA_CANNOTTARGETOBSTACLEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3E60)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CanNotTargetObstacleEffectData_TypeDefinitionIndex = 13559;

	class CanNotTargetObstacleEffectData : public Il2CppObject
	{
	public:
		::System::Boolean Dispellable; // 0x58
		::FlatData::EndCondition* EndCondition; // 0x5C
		::System::Int32 EndConditionArgument; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CANNOTTARGETOBSTACLEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

