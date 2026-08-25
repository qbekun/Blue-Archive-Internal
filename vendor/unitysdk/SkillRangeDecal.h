#pragma once
#include "unitysdk.h"

namespace MX::Visual::Battles { class SkillRangeDecalShapeType; }

#define SKILLRANGEDECAL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10A8840)
#define SKILLRANGEDECAL_REFRESHFIXEDHEIGHT_OFFSET UNITYSDK_OFFSET(0x10A8860)
#define SKILLRANGEDECAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x10A8920)

	inline static constexpr unsigned int SkillRangeDecal_TypeDefinitionIndex = 873;

	class SkillRangeDecal : public Il2CppObject
	{
	public:
		::System::Single rectHeight; // 0x0
		::System::Single circleHeight; // 0x0
		::System::Single fanHeight; // 0x0
		::System::Single donutHeight; // 0x0
		::MX::Visual::Battles::SkillRangeDecalShapeType* ShapeType; // 0x40
		::System::Single CustomHeight; // 0x44

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLRANGEDECAL_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void RefreshFixedHeight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLRANGEDECAL_REFRESHFIXEDHEIGHT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLRANGEDECAL_.CTOR_OFFSET))(nullptr);
		}

	};

