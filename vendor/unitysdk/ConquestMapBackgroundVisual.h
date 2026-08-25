#pragma once
#include "unitysdk.h"

#define CONQUESTMAPBACKGROUNDVISUAL_PLAYCOMPLETEPROPANIMATION_OFFSET UNITYSDK_OFFSET(0x1BEA290)
#define CONQUESTMAPBACKGROUNDVISUAL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BEA2A0)
#define CONQUESTMAPBACKGROUNDVISUAL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1BEA460)
#define CONQUESTMAPBACKGROUNDVISUAL_REMOVEFOG_OFFSET UNITYSDK_OFFSET(0x1BEA940)
#define CONQUESTMAPBACKGROUNDVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BEA9E0)
#define CONQUESTMAPBACKGROUNDVISUAL_HIDECOMPLETEPROP_OFFSET UNITYSDK_OFFSET(0x1BEA9F0)
#define CONQUESTMAPBACKGROUNDVISUAL_SETFOG_OFFSET UNITYSDK_OFFSET(0x1BEAA00)

	inline static constexpr unsigned int ConquestMapBackgroundVisual_TypeDefinitionIndex = 1539;

	class ConquestMapBackgroundVisual : public Il2CppObject
	{
	public:
		Il2CppObject* fogs; // 0x18

		::System::Void PlayCompletePropAnimation(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAPBACKGROUNDVISUAL_PLAYCOMPLETEPROPANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAPBACKGROUNDVISUAL_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAPBACKGROUNDVISUAL_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* RemoveFog(::System::Int32 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAPBACKGROUNDVISUAL_REMOVEFOG_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAPBACKGROUNDVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void HideCompleteProp(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAPBACKGROUNDVISUAL_HIDECOMPLETEPROP_OFFSET))(arg, nullptr);
		}

		::System::Void SetFog(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAPBACKGROUNDVISUAL_SETFOG_OFFSET))(arg, nullptr);
		}

	};

