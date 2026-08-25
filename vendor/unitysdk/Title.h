#pragma once
#include "unitysdk.h"

#define TITLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x90FE4A0)

	inline static constexpr unsigned int Title_TypeDefinitionIndex = 35770;

	class Title : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TITLE_.CTOR_OFFSET))(nullptr);
		}

	};

