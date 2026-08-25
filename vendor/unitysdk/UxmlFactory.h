#pragma once
#include "unitysdk.h"

#define UXMLFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3CF670)

	inline static constexpr unsigned int UxmlFactory_TypeDefinitionIndex = 30413;

	class UxmlFactory : public Mode
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UXMLFACTORY_.CTOR_OFFSET))(nullptr);
		}

	};

