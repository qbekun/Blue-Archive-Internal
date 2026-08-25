#pragma once
#include "unitysdk.h"

class UIButtonKeys;

#define UIBUTTONKEYS_UPGRADE_OFFSET UNITYSDK_OFFSET(0x9F9CB0)
#define UIBUTTONKEYS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9FA0A0)
#define UIBUTTONKEYS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FA1A0)

	inline static constexpr unsigned int UIButtonKeys_TypeDefinitionIndex = 20;

	class UIButtonKeys : public Il2CppObject
	{
	public:
		UIButtonKeys* selectOnClick; // 0x58
		UIButtonKeys* selectOnUp; // 0x60
		UIButtonKeys* selectOnDown; // 0x68
		UIButtonKeys* selectOnLeft; // 0x70
		UIButtonKeys* selectOnRight; // 0x78

		::System::Void Upgrade()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONKEYS_UPGRADE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONKEYS_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBUTTONKEYS_.CTOR_OFFSET))(nullptr);
		}

	};

