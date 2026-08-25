#pragma once
#include "unitysdk.h"

class ScreenSpaceDecal;

#define DECALFLOATANIMATION_AWAKE_OFFSET UNITYSDK_OFFSET(0x20D13A0)
#define DECALFLOATANIMATION_REFRESHFLOATVALUE_OFFSET UNITYSDK_OFFSET(0x20D13F0)
#define DECALFLOATANIMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x20D1450)
#define DECALFLOATANIMATION_ISINDEXVALID_OFFSET UNITYSDK_OFFSET(0x20D1460)
#define DECALFLOATANIMATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20D14B0)
#define DECALFLOATANIMATION_UPDATE_OFFSET UNITYSDK_OFFSET(0x20D1540)

	inline static constexpr unsigned int DecalFloatAnimation_TypeDefinitionIndex = 3706;

	class DecalFloatAnimation : public Il2CppObject
	{
	public:
		::System::Int32 CustomFloatIndex; // 0x18
		::System::Single CustomFloatValue; // 0x1C
		ScreenSpaceDecal* decal; // 0x20
		::System::Boolean isValid; // 0x28
		::System::Single previousValue; // 0x2C

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECALFLOATANIMATION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void RefreshFloatValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECALFLOATANIMATION_REFRESHFLOATVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECALFLOATANIMATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsIndexValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DECALFLOATANIMATION_ISINDEXVALID_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECALFLOATANIMATION_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECALFLOATANIMATION_UPDATE_OFFSET))(nullptr);
		}

	};

