#pragma once
#include "unitysdk.h"

#define LOCALITYNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x90FE260)

	inline static constexpr unsigned int LocalityName_TypeDefinitionIndex = 35762;

	class LocalityName : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALITYNAME_.CTOR_OFFSET))(nullptr);
		}

	};

