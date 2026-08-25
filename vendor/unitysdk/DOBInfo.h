#pragma once
#include "unitysdk.h"

class DOBType;

#define DOBINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xC88C20)

	inline static constexpr unsigned int DOBInfo_TypeDefinitionIndex = 9079;

	class DOBInfo : public Il2CppObject
	{
	public:
		DOBType* DOBType; // 0x10
		Il2CppObject* DOBLetterCodes; // 0x18
		::System::Int32 DOBAge; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBINFO_.CTOR_OFFSET))(nullptr);
		}

	};

