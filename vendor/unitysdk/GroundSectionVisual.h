#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundSection; }

#define GROUNDSECTIONVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1814AF0)

	inline static constexpr unsigned int GroundSectionVisual_TypeDefinitionIndex = 1247;

	class GroundSectionVisual : public Il2CppObject
	{
	public:
		::System::Int32 SectionID; // 0x18
		::MX::Logic::Battles::GroundSection* Section; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDSECTIONVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

