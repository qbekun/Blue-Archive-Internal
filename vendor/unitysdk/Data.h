#pragma once
#include "unitysdk.h"

#define DATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9435F60)

	inline static constexpr unsigned int Data_TypeDefinitionIndex = 37991;

	class Data : public Il2CppObject
	{
	public:
		::System::Single distace; // 0x10
		::System::Single normalizedDistance; // 0x14
		::System::Single normalizedT; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DATA_.CTOR_OFFSET))(nullptr);
		}

	};

