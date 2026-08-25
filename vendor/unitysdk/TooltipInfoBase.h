#pragma once
#include "unitysdk.h"

#define TOOLTIPINFOBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x275E2D0)

	inline static constexpr unsigned int TooltipInfoBase_TypeDefinitionIndex = 7285;

	class TooltipInfoBase : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLTIPINFOBASE_.CTOR_OFFSET))(nullptr);
		}

	};

