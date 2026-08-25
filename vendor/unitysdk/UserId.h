#pragma once
#include "unitysdk.h"

#define USERID_.CTOR_OFFSET UNITYSDK_OFFSET(0x90FE3E0)

	inline static constexpr unsigned int UserId_TypeDefinitionIndex = 35768;

	class UserId : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + USERID_.CTOR_OFFSET))(nullptr);
		}

	};

