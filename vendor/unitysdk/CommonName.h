#pragma once
#include "unitysdk.h"

#define COMMONNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x90FE200)

	inline static constexpr unsigned int CommonName_TypeDefinitionIndex = 35760;

	class CommonName : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMMONNAME_.CTOR_OFFSET))(nullptr);
		}

	};

