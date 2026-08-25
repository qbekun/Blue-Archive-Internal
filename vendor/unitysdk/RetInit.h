#pragma once
#include "unitysdk.h"

#define RETINIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x211D950)

	inline static constexpr unsigned int RetInit_TypeDefinitionIndex = 3873;

	class RetInit : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RETINIT_.CTOR_OFFSET))(nullptr);
		}

	};

