#pragma once
#include "unitysdk.h"

#define BOOLTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2053500)

	inline static constexpr unsigned int BoolTabController_TypeDefinitionIndex = 3333;

	class BoolTabController : public Parts
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOLTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

