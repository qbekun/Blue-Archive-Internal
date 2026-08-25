#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundConditionAliveCharacterCountCheckBySpawnTemplateId; }
namespace MX::Logic::Battles { class GroundCondition; }

#define GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEIDVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x18134E0)
#define GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEIDVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0x1813500)
#define GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEIDVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0x1813510)

	inline static constexpr unsigned int GroundConditionAliveCharacterCountCheckBySpawnTemplateIdVisual_TypeDefinitionIndex = 1218;

	class GroundConditionAliveCharacterCountCheckBySpawnTemplateIdVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundConditionAliveCharacterCountCheckBySpawnTemplateId* Condition; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEIDVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroundCondition* GetCondition()
		{
			return ((::MX::Logic::Battles::GroundCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEIDVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

		::System::Void SetCondition(::MX::Logic::Battles::GroundCondition* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCondition*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEIDVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

	};

