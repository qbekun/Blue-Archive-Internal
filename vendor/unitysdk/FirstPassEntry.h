#pragma once
#include "unitysdk.h"

#define FIRSTPASSENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA11870)

	inline static constexpr unsigned int FirstPassEntry_TypeDefinitionIndex = 36565;

	class FirstPassEntry : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIRSTPASSENTRY_.CTOR_OFFSET))(nullptr);
		}

	};

