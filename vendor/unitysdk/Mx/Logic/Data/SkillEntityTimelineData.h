#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class LevelSkillEntityData; }

#define MX_LOGIC_DATA_SKILLENTITYTIMELINEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FAAC0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SkillEntityTimelineData_TypeDefinitionIndex = 13728;

	class SkillEntityTimelineData : public Il2CppObject
	{
	public:
		::System::Int32 Frame; // 0x10
		::System::Int64 DamageDistributeRate; // 0x18
		::MX::Logic::Data::LevelSkillEntityData* Entity; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYTIMELINEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

