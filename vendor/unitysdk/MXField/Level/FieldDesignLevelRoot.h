#pragma once
#include "../../unitysdk.h"

namespace MXField::Shared::Data { class FieldSceneInfo; }
namespace MXField { class FieldDesignLevelSoundOption; }
namespace MXField::Events { class AmbienceSoundEnableCondition; }
namespace MXField::Core { class IPreloadRequired; }

#define MXFIELD_LEVEL_FIELDDESIGNLEVELROOT_GETAMBIENCESOUNDTRANSITIONTIME_OFFSET UNITYSDK_OFFSET(0xEC2A30)
#define MXFIELD_LEVEL_FIELDDESIGNLEVELROOT_INITIALIZECONDITIONALS_OFFSET UNITYSDK_OFFSET(0xEC2AC0)
#define MXFIELD_LEVEL_FIELDDESIGNLEVELROOT_SETSCENEINFO_OFFSET UNITYSDK_OFFSET(0xEC2DA0)
#define MXFIELD_LEVEL_FIELDDESIGNLEVELROOT_GET_ONPRELOADCOMPLETE_OFFSET UNITYSDK_OFFSET(0xEC2DB0)
#define MXFIELD_LEVEL_FIELDDESIGNLEVELROOT_SET_SCENEINFO_OFFSET UNITYSDK_OFFSET(0xEC2DC0)
#define MXFIELD_LEVEL_FIELDDESIGNLEVELROOT_START_OFFSET UNITYSDK_OFFSET(0xEC2DD0)
#define MXFIELD_LEVEL_FIELDDESIGNLEVELROOT_SET_PRELOADERS_OFFSET UNITYSDK_OFFSET(0xEC3020)
#define MXFIELD_LEVEL_FIELDDESIGNLEVELROOT_HANDLEPRELOADCOMPLETE_OFFSET UNITYSDK_OFFSET(0xEC3030)
#define MXFIELD_LEVEL_FIELDDESIGNLEVELROOT_PRELOADRESOURCES_OFFSET UNITYSDK_OFFSET(0xEC30E0)
#define MXFIELD_LEVEL_FIELDDESIGNLEVELROOT_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC32E0)
#define MXFIELD_LEVEL_FIELDDESIGNLEVELROOT_AWAKE_OFFSET UNITYSDK_OFFSET(0xEC32F0)
#define MXFIELD_LEVEL_FIELDDESIGNLEVELROOT_GET_SCENEINFO_OFFSET UNITYSDK_OFFSET(0xEC3410)
#define MXFIELD_LEVEL_FIELDDESIGNLEVELROOT_SET_ONPRELOADCOMPLETE_OFFSET UNITYSDK_OFFSET(0xEC3420)
#define MXFIELD_LEVEL_FIELDDESIGNLEVELROOT_GET_PRELOADERS_OFFSET UNITYSDK_OFFSET(0xEC3430)

namespace MXField::Level
{
	inline static constexpr unsigned int FieldDesignLevelRoot_TypeDefinitionIndex = 10857;

	class FieldDesignLevelRoot : public Il2CppObject
	{
	public:
		::MXField::Shared::Data::FieldSceneInfo* _SceneInfo_k__BackingField; // 0x18
		::MXField::FieldDesignLevelSoundOption* _soundOption; // 0x20
		::System::Int64 _sceneEnterInteractionId; // 0x28
		::System::Boolean _conditionalsInitialized; // 0x30
		::MXField::Events::AmbienceSoundEnableCondition* _ambienceCondition; // 0x38
		Il2CppObject* _Preloaders_k__BackingField; // 0x40
		::System::Action* _OnPreloadComplete_k__BackingField; // 0x48

		::System::Single GetAmbienceSoundTransitionTime(::System::Boolean arg)
		{
			return ((::System::Single(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_LEVEL_FIELDDESIGNLEVELROOT_GETAMBIENCESOUNDTRANSITIONTIME_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeConditionals()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_LEVEL_FIELDDESIGNLEVELROOT_INITIALIZECONDITIONALS_OFFSET))(nullptr);
		}

		::System::Void SetSceneInfo(::MXField::Shared::Data::FieldSceneInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldSceneInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_LEVEL_FIELDDESIGNLEVELROOT_SETSCENEINFO_OFFSET))(arg, nullptr);
		}

		::System::Action* get_OnPreloadComplete()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_LEVEL_FIELDDESIGNLEVELROOT_GET_ONPRELOADCOMPLETE_OFFSET))(nullptr);
		}

		::System::Void set_SceneInfo(::MXField::Shared::Data::FieldSceneInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldSceneInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_LEVEL_FIELDDESIGNLEVELROOT_SET_SCENEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_LEVEL_FIELDDESIGNLEVELROOT_START_OFFSET))(nullptr);
		}

		::System::Void set_Preloaders(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_LEVEL_FIELDDESIGNLEVELROOT_SET_PRELOADERS_OFFSET))(arg, nullptr);
		}

		::System::Void HandlePreloadComplete(::MXField::Core::IPreloadRequired* arg)
		{
			((::System::Void(*)(::MXField::Core::IPreloadRequired*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_LEVEL_FIELDDESIGNLEVELROOT_HANDLEPRELOADCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void PreloadResources(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_LEVEL_FIELDDESIGNLEVELROOT_PRELOADRESOURCES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_LEVEL_FIELDDESIGNLEVELROOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_LEVEL_FIELDDESIGNLEVELROOT_AWAKE_OFFSET))(nullptr);
		}

		::MXField::Shared::Data::FieldSceneInfo* get_SceneInfo()
		{
			return ((::MXField::Shared::Data::FieldSceneInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_LEVEL_FIELDDESIGNLEVELROOT_GET_SCENEINFO_OFFSET))(nullptr);
		}

		::System::Void set_OnPreloadComplete(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_LEVEL_FIELDDESIGNLEVELROOT_SET_ONPRELOADCOMPLETE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Preloaders()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_LEVEL_FIELDDESIGNLEVELROOT_GET_PRELOADERS_OFFSET))(nullptr);
		}

	};
}

