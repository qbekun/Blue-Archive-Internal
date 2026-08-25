#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class ChangeSkillCardCostBaseType; }

#define MX_LOGIC_DATA_CHANGESKILLCARDTOCOPIEDCARDEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3EA0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ChangeSkillCardToCopiedCardEffectData_TypeDefinitionIndex = 13563;

	class ChangeSkillCardToCopiedCardEffectData : public Il2CppObject
	{
	public:
		::System::Boolean Dispellable; // 0x58
		::MX::Logic::Data::ChangeSkillCardCostBaseType* CopiedCardCostRefer; // 0x5C
		::System::Int64 CopiedCardCostModifyByRatio; // 0x60
		::System::Int32 CopiedCardCostModifyByAmount; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESKILLCARDTOCOPIEDCARDEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

