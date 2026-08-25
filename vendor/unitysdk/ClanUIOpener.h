#pragma once
#include "unitysdk.h"

#define CLANUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C5210)
#define CLANUIOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26C5220)

	inline static constexpr unsigned int ClanUIOpener_TypeDefinitionIndex = 6973;

	class ClanUIOpener : public Il2CppObject
	{
	public:
		::System::String* IconSprite; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANUIOPENER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANUIOPENER_OPENUI_OFFSET))(nullptr);
		}

	};

