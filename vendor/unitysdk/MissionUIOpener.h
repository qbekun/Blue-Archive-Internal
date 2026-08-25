#pragma once
#include "unitysdk.h"

#define MISSIONUIOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26C3DD0)
#define MISSIONUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C3FA0)

	inline static constexpr unsigned int MissionUIOpener_TypeDefinitionIndex = 6963;

	class MissionUIOpener : public Il2CppObject
	{
	public:
		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MISSIONUIOPENER_OPENUI_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MISSIONUIOPENER_.CTOR_OFFSET))(arg, nullptr);
		}

	};

