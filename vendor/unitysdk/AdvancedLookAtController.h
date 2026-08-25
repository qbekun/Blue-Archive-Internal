#pragma once
#include "unitysdk.h"

#define ADVANCEDLOOKATCONTROLLER_GET_MAXVERTICALROTATIONDEGREE_OFFSET UNITYSDK_OFFSET(0x10AB260)
#define ADVANCEDLOOKATCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x10AB270)
#define ADVANCEDLOOKATCONTROLLER_GET_RESETWHENNOTAPPLY_OFFSET UNITYSDK_OFFSET(0x10AB290)
#define ADVANCEDLOOKATCONTROLLER_GET_MAXHORIZONTALROTATIONDEGREE_OFFSET UNITYSDK_OFFSET(0x10AB2A0)
#define ADVANCEDLOOKATCONTROLLER_GET_MINHORIZONTALROTATIONDEGREE_OFFSET UNITYSDK_OFFSET(0x10AB2B0)
#define ADVANCEDLOOKATCONTROLLER_GET_MINVERTICALROTATIONDEGREE_OFFSET UNITYSDK_OFFSET(0x10AB2C0)
#define ADVANCEDLOOKATCONTROLLER_CHECKAPPLY_OFFSET UNITYSDK_OFFSET(0x10AB2D0)

	inline static constexpr unsigned int AdvancedLookAtController_TypeDefinitionIndex = 889;

	class AdvancedLookAtController : public Il2CppObject
	{
	public:
		::System::Single minHorizontalRotationDegree; // 0x88
		::System::Single maxHorizontalRotationDegree; // 0x8C
		::System::Single minVerticalRotationDegree; // 0x90
		::System::Single maxVerticalRotationDegree; // 0x94
		::System::Boolean resetWhenNotApply; // 0x98
		Il2CppObject* applyBehaviorType; // 0xA0

		::System::Single get_MaxVerticalRotationDegree()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ADVANCEDLOOKATCONTROLLER_GET_MAXVERTICALROTATIONDEGREE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADVANCEDLOOKATCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_ResetWhenNotApply()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADVANCEDLOOKATCONTROLLER_GET_RESETWHENNOTAPPLY_OFFSET))(nullptr);
		}

		::System::Single get_MaxHorizontalRotationDegree()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ADVANCEDLOOKATCONTROLLER_GET_MAXHORIZONTALROTATIONDEGREE_OFFSET))(nullptr);
		}

		::System::Single get_MinHorizontalRotationDegree()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ADVANCEDLOOKATCONTROLLER_GET_MINHORIZONTALROTATIONDEGREE_OFFSET))(nullptr);
		}

		::System::Single get_MinVerticalRotationDegree()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ADVANCEDLOOKATCONTROLLER_GET_MINVERTICALROTATIONDEGREE_OFFSET))(nullptr);
		}

		::System::Boolean CheckApply()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADVANCEDLOOKATCONTROLLER_CHECKAPPLY_OFFSET))(nullptr);
		}

	};

