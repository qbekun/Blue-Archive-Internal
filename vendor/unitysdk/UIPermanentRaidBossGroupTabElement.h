#pragma once
#include "unitysdk.h"

class MXToggle;
class UILabel;
namespace UnityEngine { class Color; }
namespace FlatData { class StageTopography; }

#define UIPERMANENTRAIDBOSSGROUPTABELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x26D6250)
#define UIPERMANENTRAIDBOSSGROUPTABELEMENT_ONTOGGLECHANGED_OFFSET UNITYSDK_OFFSET(0x26D6380)
#define UIPERMANENTRAIDBOSSGROUPTABELEMENT_SETSTAGETOPOGRAPHYDATA_OFFSET UNITYSDK_OFFSET(0x26D5EA0)
#define UIPERMANENTRAIDBOSSGROUPTABELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x26D6420)

	inline static constexpr unsigned int UIPermanentRaidBossGroupTabElement_TypeDefinitionIndex = 7029;

	class UIPermanentRaidBossGroupTabElement : public Il2CppObject
	{
	public:
		MXToggle* toggle; // 0x18
		Il2CppObject* topographyIcons; // 0x20
		UILabel* tabText; // 0x28
		::UnityEngine::Color* activateColor; // 0x30
		::UnityEngine::Color* deactivateColor; // 0x40

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDBOSSGROUPTABELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnToggleChanged(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDBOSSGROUPTABELEMENT_ONTOGGLECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetStageTopographyData(::FlatData::StageTopography* arg)
		{
			((::System::Void(*)(::FlatData::StageTopography*, ::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDBOSSGROUPTABELEMENT_SETSTAGETOPOGRAPHYDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDBOSSGROUPTABELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};

