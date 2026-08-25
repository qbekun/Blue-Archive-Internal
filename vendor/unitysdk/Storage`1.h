#pragma once
#include "unitysdk.h"

#define STORAGE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int Storage`1_TypeDefinitionIndex = 36855;

	class Storage`1 : public Il2CppObject
	{
	public:
		Il2CppObject* data; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STORAGE`1_.CTOR_OFFSET))(nullptr);
		}

	};

