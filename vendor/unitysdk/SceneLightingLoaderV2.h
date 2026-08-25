#pragma once
#include "unitysdk.h"

class EnvironmentSetting;
namespace UnityEngine::Rendering { class AmbientMode; }
class eAmbientType;

#define SCENELIGHTINGLOADERV2_GETGLOBALENVIRONMENTSETTING_OFFSET UNITYSDK_OFFSET(0x20D8190)
#define SCENELIGHTINGLOADERV2_.CCTOR_OFFSET UNITYSDK_OFFSET(0x20D82A0)
#define SCENELIGHTINGLOADERV2_.CTOR_OFFSET UNITYSDK_OFFSET(0x20D8340)
#define SCENELIGHTINGLOADERV2_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20D8350)
#define SCENELIGHTINGLOADERV2_RESETENVIRONMNETSETTING_OFFSET UNITYSDK_OFFSET(0x20D8710)
#define SCENELIGHTINGLOADERV2_RECOVERYENVIRONMNETSETTING_OFFSET UNITYSDK_OFFSET(0x20D8950)
#define SCENELIGHTINGLOADERV2_AMBIENTTYPETOMODE_OFFSET UNITYSDK_OFFSET(0x20D8930)
#define SCENELIGHTINGLOADERV2_RECOVERYACTION_OFFSET UNITYSDK_OFFSET(0x20D8A10)
#define SCENELIGHTINGLOADERV2_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20D8A30)
#define SCENELIGHTINGLOADERV2_OVERRIDEENVIRONMNETSETTING_OFFSET UNITYSDK_OFFSET(0x20D8650)
#define SCENELIGHTINGLOADERV2_AMBIENTMODETOTYPE_OFFSET UNITYSDK_OFFSET(0x20D8280)

	inline static constexpr unsigned int SceneLightingLoaderV2_TypeDefinitionIndex = 3735;

	class SceneLightingLoaderV2 : public Il2CppObject
	{
	public:
		Il2CppObject* EnvironmentSettingList; // 0x0
		EnvironmentSetting* SceneEnvironmentSetting; // 0x8
		Il2CppObject* RecoveryActionCallback; // 0x50
		EnvironmentSetting* Setting; // 0x18
		::System::Int32 QueueIndex; // 0x5C

		EnvironmentSetting* GetGlobalEnvironmentSetting()
		{
			return ((EnvironmentSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTINGLOADERV2_GETGLOBALENVIRONMENTSETTING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTINGLOADERV2_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTINGLOADERV2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTINGLOADERV2_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void ResetEnvironmnetSetting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTINGLOADERV2_RESETENVIRONMNETSETTING_OFFSET))(nullptr);
		}

		::System::Void RecoveryEnvironmnetSetting(EnvironmentSetting* arg)
		{
			((::System::Void(*)(EnvironmentSetting*, ::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTINGLOADERV2_RECOVERYENVIRONMNETSETTING_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::AmbientMode* AmbientTypeToMode(eAmbientType* arg)
		{
			return ((::UnityEngine::Rendering::AmbientMode*(*)(eAmbientType*, ::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTINGLOADERV2_AMBIENTTYPETOMODE_OFFSET))(arg, nullptr);
		}

		::System::Void RecoveryAction(::System::Int32 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTINGLOADERV2_RECOVERYACTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTINGLOADERV2_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OverrideEnvironmnetSetting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTINGLOADERV2_OVERRIDEENVIRONMNETSETTING_OFFSET))(nullptr);
		}

		eAmbientType* AmbientModeToType(::UnityEngine::Rendering::AmbientMode* arg)
		{
			return ((eAmbientType*(*)(::UnityEngine::Rendering::AmbientMode*, ::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTINGLOADERV2_AMBIENTMODETOTYPE_OFFSET))(arg, nullptr);
		}

	};

