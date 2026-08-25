#pragma once
#include "unitysdk.h"

#define OBJECTTOGGLEPRESETSWITCHER_LOADPRESETINDEX_OFFSET UNITYSDK_OFFSET(0x20C1C10)
#define OBJECTTOGGLEPRESETSWITCHER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20C1E60)
#define OBJECTTOGGLEPRESETSWITCHER_ONSWITCHFINISHED_OFFSET UNITYSDK_OFFSET(0x20C1E70)
#define OBJECTTOGGLEPRESETSWITCHER_SETGAMEOBJECTSACTIVE_OFFSET UNITYSDK_OFFSET(0x20C1CB0)
#define OBJECTTOGGLEPRESETSWITCHER_LOADDEFAULTPRESET_OFFSET UNITYSDK_OFFSET(0x20C1E80)
#define OBJECTTOGGLEPRESETSWITCHER_ONSWITCHSTART_OFFSET UNITYSDK_OFFSET(0x20C1E90)
#define OBJECTTOGGLEPRESETSWITCHER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20C1EA0)
#define OBJECTTOGGLEPRESETSWITCHER_GETPRESETCOUNT_OFFSET UNITYSDK_OFFSET(0x20C1EB0)

	inline static constexpr unsigned int ObjectTogglePresetSwitcher_TypeDefinitionIndex = 3648;

	class ObjectTogglePresetSwitcher : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* presets; // 0x18
		::System::Int32 defaultIndex; // 0x20
		::System::Boolean SetToDefaultOnEnable; // 0x24
		::System::Action* onSwitchStart; // 0x28
		::System::Action* onSwitchFinished; // 0x30

		::System::Void LoadPresetIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + OBJECTTOGGLEPRESETSWITCHER_LOADPRESETINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTTOGGLEPRESETSWITCHER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnSwitchFinished(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + OBJECTTOGGLEPRESETSWITCHER_ONSWITCHFINISHED_OFFSET))(arg, nullptr);
		}

		::System::Void SetGameObjectsActive(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + OBJECTTOGGLEPRESETSWITCHER_SETGAMEOBJECTSACTIVE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void LoadDefaultPreset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTTOGGLEPRESETSWITCHER_LOADDEFAULTPRESET_OFFSET))(nullptr);
		}

		::System::Void OnSwitchStart(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + OBJECTTOGGLEPRESETSWITCHER_ONSWITCHSTART_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTTOGGLEPRESETSWITCHER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Int32 GetPresetCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTTOGGLEPRESETSWITCHER_GETPRESETCOUNT_OFFSET))(nullptr);
		}

	};

