#pragma once
#include "unitysdk.h"

#define CHARACTERCOLLECTIONUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C5FF0)
#define CHARACTERCOLLECTIONUIOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26C6000)

	inline static constexpr unsigned int CharacterCollectionUIOpener_TypeDefinitionIndex = 6979;

	class CharacterCollectionUIOpener : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERCOLLECTIONUIOPENER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERCOLLECTIONUIOPENER_OPENUI_OFFSET))(nullptr);
		}

	};

