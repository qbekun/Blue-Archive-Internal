#pragma once
#include "unitysdk.h"

class CharacterVisual;
class BattleGroundCamera;

#define FOCUSCAMERA_SETDISTANCE_OFFSET UNITYSDK_OFFSET(0xE43AA0)
#define FOCUSCAMERA_UPDATECAMERATARGETS_OFFSET UNITYSDK_OFFSET(0xE4C8D0)
#define FOCUSCAMERA_CALCTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0xE4C8E0)
#define FOCUSCAMERA_REGISTERCHARACTER_OFFSET UNITYSDK_OFFSET(0xE43A40)
#define FOCUSCAMERA_GET_MAXDISTANCE_OFFSET UNITYSDK_OFFSET(0xE4C9B0)
#define FOCUSCAMERA_UPDATE_OFFSET UNITYSDK_OFFSET(0xE4C9C0)
#define FOCUSCAMERA_GET_MINDISTANCE_OFFSET UNITYSDK_OFFSET(0xE4CAA0)
#define FOCUSCAMERA_.CTOR_OFFSET UNITYSDK_OFFSET(0xE43A10)
#define FOCUSCAMERA_APPLY_OFFSET UNITYSDK_OFFSET(0xE4CAB0)

	inline static constexpr unsigned int FocusCamera_TypeDefinitionIndex = 750;

	class FocusCamera : public Il2CppObject
	{
	public:
		::System::Single minDistance; // 0x50
		::System::Single maxDistance; // 0x54

		::System::Void SetDistance(::System::Single arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FOCUSCAMERA_SETDISTANCE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateCameraTargets()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCUSCAMERA_UPDATECAMERATARGETS_OFFSET))(nullptr);
		}

		::System::Void CalcTargetPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCUSCAMERA_CALCTARGETPOSITION_OFFSET))(nullptr);
		}

		::System::Void RegisterCharacter(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + FOCUSCAMERA_REGISTERCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Single get_MaxDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCUSCAMERA_GET_MAXDISTANCE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCUSCAMERA_UPDATE_OFFSET))(nullptr);
		}

		::System::Single get_MinDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCUSCAMERA_GET_MINDISTANCE_OFFSET))(nullptr);
		}

		::System::Void .ctor(BattleGroundCamera* arg)
		{
			((::System::Void(*)(BattleGroundCamera*, ::PVOID))((::PBYTE)hIl2Cpp + FOCUSCAMERA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCUSCAMERA_APPLY_OFFSET))(nullptr);
		}

	};

