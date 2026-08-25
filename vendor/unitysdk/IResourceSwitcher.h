#pragma once
#include "unitysdk.h"

#define IRESOURCESWITCHER_LOADPRESETINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define IRESOURCESWITCHER_LOADDEFAULTPRESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define IRESOURCESWITCHER_ONSWITCHSTART_OFFSET UNITYSDK_OFFSET(0x000000)
#define IRESOURCESWITCHER_ONSWITCHFINISHED_OFFSET UNITYSDK_OFFSET(0x000000)
#define IRESOURCESWITCHER_GETPRESETCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IResourceSwitcher_TypeDefinitionIndex = 3641;

	class IResourceSwitcher : public Il2CppObject
	{
	public:
		::System::Void LoadPresetIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + IRESOURCESWITCHER_LOADPRESETINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void LoadDefaultPreset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRESOURCESWITCHER_LOADDEFAULTPRESET_OFFSET))(nullptr);
		}

		::System::Void OnSwitchStart(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + IRESOURCESWITCHER_ONSWITCHSTART_OFFSET))(arg, nullptr);
		}

		::System::Void OnSwitchFinished(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + IRESOURCESWITCHER_ONSWITCHFINISHED_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetPresetCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IRESOURCESWITCHER_GETPRESETCOUNT_OFFSET))(nullptr);
		}

	};

