#pragma once
#include "unitysdk.h"

#define MATERIALPRESETSWITCHER_LOADPRESETINDEX_OFFSET UNITYSDK_OFFSET(0x20C14A0)
#define MATERIALPRESETSWITCHER_LOADDEFAULTPRESET_OFFSET UNITYSDK_OFFSET(0x20C1A50)
#define MATERIALPRESETSWITCHER_ONSWITCHFINISHED_OFFSET UNITYSDK_OFFSET(0x20C1A60)
#define MATERIALPRESETSWITCHER_GETPRESETCOUNT_OFFSET UNITYSDK_OFFSET(0x20C1A70)
#define MATERIALPRESETSWITCHER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20C1A90)
#define MATERIALPRESETSWITCHER_ONSWITCHSTART_OFFSET UNITYSDK_OFFSET(0x20C1AA0)
#define MATERIALPRESETSWITCHER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20C1AB0)
#define MATERIALPRESETSWITCHER_SETSTATETOINSTANTIATEDINDEX_OFFSET UNITYSDK_OFFSET(0x20C16D0)

	inline static constexpr unsigned int MaterialPresetSwitcher_TypeDefinitionIndex = 3645;

	class MaterialPresetSwitcher : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* presets; // 0x18
		::System::Int32 defaultIndex; // 0x20
		::System::Boolean InstantiateOnSwitch; // 0x24
		::System::Boolean SetToDefaultOnEnable; // 0x25
		::System::Action* onSwitchStart; // 0x28
		::System::Action* onSwitchFinished; // 0x30

		::System::Void LoadPresetIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MATERIALPRESETSWITCHER_LOADPRESETINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void LoadDefaultPreset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPRESETSWITCHER_LOADDEFAULTPRESET_OFFSET))(nullptr);
		}

		::System::Void OnSwitchFinished(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MATERIALPRESETSWITCHER_ONSWITCHFINISHED_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetPresetCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPRESETSWITCHER_GETPRESETCOUNT_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPRESETSWITCHER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnSwitchStart(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MATERIALPRESETSWITCHER_ONSWITCHSTART_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPRESETSWITCHER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetStateToInstantiatedIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MATERIALPRESETSWITCHER_SETSTATETOINSTANTIATEDINDEX_OFFSET))(arg, nullptr);
		}

	};

