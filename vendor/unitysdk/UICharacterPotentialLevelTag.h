#pragma once
#include "unitysdk.h"

namespace FlatData { class PotentialStatBonusRateType; }
class UILabel;
class UISprite;

#define UICHARACTERPOTENTIALLEVELTAG_SETDATA_OFFSET UNITYSDK_OFFSET(0x231D580)
#define UICHARACTERPOTENTIALLEVELTAG_SETDATA_OFFSET UNITYSDK_OFFSET(0x231B120)
#define UICHARACTERPOTENTIALLEVELTAG_.CTOR_OFFSET UNITYSDK_OFFSET(0x231D590)

	inline static constexpr unsigned int UICharacterPotentialLevelTag_TypeDefinitionIndex = 4909;

	class UICharacterPotentialLevelTag : public Il2CppObject
	{
	public:
		::FlatData::PotentialStatBonusRateType* potentialStatType; // 0x18
		UILabel* potentialLevelLabel; // 0x20
		UISprite* potentialLevelMaxTagSprite; // 0x28

		::System::Void SetData(::FlatData::PotentialStatBonusRateType* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatData::PotentialStatBonusRateType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERPOTENTIALLEVELTAG_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERPOTENTIALLEVELTAG_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERPOTENTIALLEVELTAG_.CTOR_OFFSET))(nullptr);
		}

	};

