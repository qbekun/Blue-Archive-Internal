#pragma once
#include "unitysdk.h"

#define SHORTCUTTOOLTIPINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x275E410)
#define SHORTCUTTOOLTIPINFO_GET_SHORTCUTS_OFFSET UNITYSDK_OFFSET(0x275E440)
#define SHORTCUTTOOLTIPINFO_SET_SHORTCUTS_OFFSET UNITYSDK_OFFSET(0x275E450)

	inline static constexpr unsigned int ShortcutTooltipInfo_TypeDefinitionIndex = 7288;

	class ShortcutTooltipInfo : public Il2CppObject
	{
	public:
		Il2CppObject* _Shortcuts_k__BackingField; // 0x10

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SHORTCUTTOOLTIPINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Shortcuts()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHORTCUTTOOLTIPINFO_GET_SHORTCUTS_OFFSET))(nullptr);
		}

		::System::Void set_Shortcuts(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SHORTCUTTOOLTIPINFO_SET_SHORTCUTS_OFFSET))(arg, nullptr);
		}

	};

