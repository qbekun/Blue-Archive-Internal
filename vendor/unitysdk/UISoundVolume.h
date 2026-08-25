#pragma once
#include "unitysdk.h"

#define UISOUNDVOLUME_ONCHANGE_OFFSET UNITYSDK_OFFSET(0xA3E550)
#define UISOUNDVOLUME_AWAKE_OFFSET UNITYSDK_OFFSET(0xA3E6B0)
#define UISOUNDVOLUME_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3E800)

	inline static constexpr unsigned int UISoundVolume_TypeDefinitionIndex = 78;

	class UISoundVolume : public Il2CppObject
	{
	public:
		::System::Void OnChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISOUNDVOLUME_ONCHANGE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISOUNDVOLUME_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISOUNDVOLUME_.CTOR_OFFSET))(nullptr);
		}

	};

