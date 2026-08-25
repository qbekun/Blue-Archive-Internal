#pragma once
#include "unitysdk.h"

#define SURNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x90FE500)

	inline static constexpr unsigned int Surname_TypeDefinitionIndex = 35773;

	class Surname : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SURNAME_.CTOR_OFFSET))(nullptr);
		}

	};

