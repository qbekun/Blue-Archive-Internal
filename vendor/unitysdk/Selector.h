#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;

#define SELECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x23BDED0)

	inline static constexpr unsigned int Selector_TypeDefinitionIndex = 5244;

	class Selector : public Il2CppObject
	{
	public:
		UILabel* label; // 0x10
		MXButton* button; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SELECTOR_.CTOR_OFFSET))(nullptr);
		}

	};

