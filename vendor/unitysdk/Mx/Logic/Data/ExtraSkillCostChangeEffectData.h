#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }

#define MX_LOGIC_DATA_EXTRASKILLCOSTCHANGEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4100)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ExtraSkillCostChangeEffectData_TypeDefinitionIndex = 13591;

	class ExtraSkillCostChangeEffectData : public Il2CppObject
	{
	public:
		::System::Int64 BaseAmount; // 0x58
		::System::Int64 Coefficient; // 0x60
		::FlatData::EndCondition* EndCondition; // 0x68
		::System::Int32 EndConditionArgument; // 0x6C
		::System::Boolean Dispellable; // 0x70

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_EXTRASKILLCOSTCHANGEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

