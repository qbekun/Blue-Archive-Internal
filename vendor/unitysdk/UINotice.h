#pragma once
#include "unitysdk.h"

#define UINOTICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x26B9ED0)

	inline static constexpr unsigned int UINotice_TypeDefinitionIndex = 6914;

	class UINotice : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINOTICE_.CTOR_OFFSET))(nullptr);
		}

	};

