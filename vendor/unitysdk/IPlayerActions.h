#pragma once
#include "unitysdk.h"

#define IPLAYERACTIONS_ONFIRE_OFFSET UNITYSDK_OFFSET(0x000000)
#define IPLAYERACTIONS_ONLOOK_OFFSET UNITYSDK_OFFSET(0x000000)
#define IPLAYERACTIONS_ONMOVE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IPlayerActions_TypeDefinitionIndex = 28555;

	class IPlayerActions : public Il2CppObject
	{
	public:
		::System::Void OnFire(CallbackContext* arg)
		{
			((::System::Void(*)(CallbackContext*, ::PVOID))((::PBYTE)hIl2Cpp + IPLAYERACTIONS_ONFIRE_OFFSET))(arg, nullptr);
		}

		::System::Void OnLook(CallbackContext* arg)
		{
			((::System::Void(*)(CallbackContext*, ::PVOID))((::PBYTE)hIl2Cpp + IPLAYERACTIONS_ONLOOK_OFFSET))(arg, nullptr);
		}

		::System::Void OnMove(CallbackContext* arg)
		{
			((::System::Void(*)(CallbackContext*, ::PVOID))((::PBYTE)hIl2Cpp + IPLAYERACTIONS_ONMOVE_OFFSET))(arg, nullptr);
		}

	};

