#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Logic::Data { class ComparisonOperator; }
namespace MX::Logic::Data { class IncludeType; }

#define MX_LOGIC_DATA_SKILLLEVELMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA720)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SkillLevelModifierData_TypeDefinitionIndex = 13414;

	class SkillLevelModifierData : public ::Mono::Security::Interface::MonoTlsProvider
	{
	public:
		::MX::Logic::BattleEntities::SkillSlot* SkillSlot; // 0x18
		::MX::Logic::Data::ComparisonOperator* Operator; // 0x1C
		::System::Int32 SkillLevel; // 0x20
		::MX::Logic::Data::IncludeType* IncludeType; // 0x24

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLLEVELMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

