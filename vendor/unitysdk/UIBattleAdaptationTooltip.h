#pragma once
#include "unitysdk.h"

class UILabel;
class BattleAdaptationInfo;

#define UIBATTLEADAPTATIONTOOLTIP_.CTOR_OFFSET UNITYSDK_OFFSET(0x274CE90)
#define UIBATTLEADAPTATIONTOOLTIP_SETDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x274CED0)

	inline static constexpr unsigned int UIBattleAdaptationTooltip_TypeDefinitionIndex = 7247;

	class UIBattleAdaptationTooltip : public ::UnityEngine::InputSystem::LowLevel::KeyboardState
	{
	public:
		UILabel* terrainNameLabel; // 0x48
		UILabel* terrainAdaptationGrade; // 0x50
		UILabel* terrainAdaptationDescriptionLabel; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADAPTATIONTOOLTIP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetDataInternal(BattleAdaptationInfo* arg)
		{
			((::System::Void(*)(BattleAdaptationInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEADAPTATIONTOOLTIP_SETDATAINTERNAL_OFFSET))(arg, nullptr);
		}

	};

