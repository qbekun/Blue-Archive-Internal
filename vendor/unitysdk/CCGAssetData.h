#pragma once
#include "unitysdk.h"

#define CCGASSETDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA58050)

	inline static constexpr unsigned int CCGAssetData_TypeDefinitionIndex = 493;

	class CCGAssetData : public Il2CppObject
	{
	public:
		Il2CppObject* Assets; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGASSETDATA_.CTOR_OFFSET))(nullptr);
		}

	};

