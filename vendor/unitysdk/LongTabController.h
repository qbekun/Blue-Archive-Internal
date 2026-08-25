#pragma once
#include "unitysdk.h"

#define LONGTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2057F00)

	inline static constexpr unsigned int LongTabController_TypeDefinitionIndex = 3351;

	class LongTabController : public AxisType
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LONGTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

