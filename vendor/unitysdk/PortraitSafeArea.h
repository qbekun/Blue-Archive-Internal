#pragma once
#include "unitysdk.h"

#define PORTRAITSAFEAREA_AWAKE_OFFSET UNITYSDK_OFFSET(0x205E8F0)
#define PORTRAITSAFEAREA_.CTOR_OFFSET UNITYSDK_OFFSET(0x205E9D0)

	inline static constexpr unsigned int PortraitSafeArea_TypeDefinitionIndex = 3386;

	class PortraitSafeArea : public Il2CppObject
	{
	public:
		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSAFEAREA_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PORTRAITSAFEAREA_.CTOR_OFFSET))(nullptr);
		}

	};

