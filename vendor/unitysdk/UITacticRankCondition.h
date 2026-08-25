#pragma once
#include "unitysdk.h"

class UISprite;
class UILabel;

#define UITACTICRANKCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0xBAF3F0)
#define UITACTICRANKCONDITION_APPLY_OFFSET UNITYSDK_OFFSET(0xBAF380)

	inline static constexpr unsigned int UITacticRankCondition_TypeDefinitionIndex = 8575;

	class UITacticRankCondition : public Il2CppObject
	{
	public:
		UISprite* StarSprite; // 0x18
		UISprite* EmptyStarSprite; // 0x20
		UILabel* ConditionLabel; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITACTICRANKCONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Apply(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITACTICRANKCONDITION_APPLY_OFFSET))(arg, nullptr);
		}

	};

