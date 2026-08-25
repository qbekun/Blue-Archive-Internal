#pragma once
#include "unitysdk.h"

#define UISHOWFPS_.CTOR_OFFSET UNITYSDK_OFFSET(0xC21AD0)

	inline static constexpr unsigned int UIShowFPS_TypeDefinitionIndex = 8879;

	class UIShowFPS : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOWFPS_.CTOR_OFFSET))(nullptr);
		}

	};

