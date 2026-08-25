#pragma once
#include "unitysdk.h"

class UILabel;

#define EROSIONPOPUPGROUND_.CTOR_OFFSET UNITYSDK_OFFSET(0x234B830)

	inline static constexpr unsigned int ErosionPopupGround_TypeDefinitionIndex = 5015;

	class ErosionPopupGround : public Il2CppObject
	{
	public:
		Il2CppObject* ErosionTypes; // 0x18
		UILabel* StepNameText; // 0x20
		Il2CppObject* ErosionDescriptions; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EROSIONPOPUPGROUND_.CTOR_OFFSET))(nullptr);
		}

	};

