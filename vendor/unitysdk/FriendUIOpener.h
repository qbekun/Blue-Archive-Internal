#pragma once
#include "unitysdk.h"

#define FRIENDUIOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26C5770)
#define FRIENDUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C58B0)

	inline static constexpr unsigned int FriendUIOpener_TypeDefinitionIndex = 6975;

	class FriendUIOpener : public Il2CppObject
	{
	public:
		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDUIOPENER_OPENUI_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDUIOPENER_.CTOR_OFFSET))(nullptr);
		}

	};

