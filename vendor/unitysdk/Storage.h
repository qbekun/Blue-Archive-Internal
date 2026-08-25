#pragma once
#include "unitysdk.h"

#define STORAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9438430)

	inline static constexpr unsigned int Storage_TypeDefinitionIndex = 36851;

	class Storage : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STORAGE_.CTOR_OFFSET))(nullptr);
		}

	};

