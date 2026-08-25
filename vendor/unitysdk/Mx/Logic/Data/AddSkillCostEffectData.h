#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_ADDSKILLCOSTEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3DC0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AddSkillCostEffectData_TypeDefinitionIndex = 13549;

	class AddSkillCostEffectData : public Il2CppObject
	{
	public:
		::System::Int64 Amount; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ADDSKILLCOSTEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

