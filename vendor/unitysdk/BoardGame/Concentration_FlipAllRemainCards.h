#pragma once
#include "../unitysdk.h"

#define BOARDGAME_CONCENTRATION_FLIPALLREMAINCARDS_.CTOR_OFFSET UNITYSDK_OFFSET(0xE096A0)
#define BOARDGAME_CONCENTRATION_FLIPALLREMAINCARDS_SET_CARDINFOS_OFFSET UNITYSDK_OFFSET(0xE0B580)
#define BOARDGAME_CONCENTRATION_FLIPALLREMAINCARDS_GET_CARDINFOS_OFFSET UNITYSDK_OFFSET(0xE0B590)

namespace BoardGame
{
	inline static constexpr unsigned int Concentration_FlipAllRemainCards_TypeDefinitionIndex = 10269;

	class Concentration_FlipAllRemainCards : public Il2CppObject
	{
	public:
		Il2CppObject* _CardInfos_k__BackingField; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_FLIPALLREMAINCARDS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CardInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_FLIPALLREMAINCARDS_SET_CARDINFOS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CardInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_FLIPALLREMAINCARDS_GET_CARDINFOS_OFFSET))(nullptr);
		}

	};
}

