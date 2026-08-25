#pragma once
#include "unitysdk.h"

#define WORLDSPACEUIROOT_ONSCALECHANGED_OFFSET UNITYSDK_OFFSET(0xC289C0)
#define WORLDSPACEUIROOT_.CCTOR_OFFSET UNITYSDK_OFFSET(0xC28BA0)
#define WORLDSPACEUIROOT_START_OFFSET UNITYSDK_OFFSET(0xC28C40)
#define WORLDSPACEUIROOT_REFRESH_OFFSET UNITYSDK_OFFSET(0xC28D00)
#define WORLDSPACEUIROOT_.CTOR_OFFSET UNITYSDK_OFFSET(0xC28DC0)

	inline static constexpr unsigned int WorldSpaceUIRoot_TypeDefinitionIndex = 8902;

	class WorldSpaceUIRoot : public Il2CppObject
	{
	public:
		::System::Single defaultFOV; // 0x0
		::System::Single defaultFOVTan; // 0x4
		::System::Single defaultZ; // 0x8
		::System::Single defaultScale; // 0xC
		::System::Single coefficient; // 0x18

		::System::Void OnScaleChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDSPACEUIROOT_ONSCALECHANGED_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDSPACEUIROOT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDSPACEUIROOT_START_OFFSET))(nullptr);
		}

		::System::Void Refresh(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + WORLDSPACEUIROOT_REFRESH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDSPACEUIROOT_.CTOR_OFFSET))(nullptr);
		}

	};

