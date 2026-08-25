#pragma once
#include "unitysdk.h"

#define BATTLEPASSUIOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26C6940)
#define BATTLEPASSUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C6A40)

	inline static constexpr unsigned int BattlePassUIOpener_TypeDefinitionIndex = 6984;

	class BattlePassUIOpener : public Il2CppObject
	{
	public:
		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSUIOPENER_OPENUI_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSUIOPENER_.CTOR_OFFSET))(nullptr);
		}

	};

