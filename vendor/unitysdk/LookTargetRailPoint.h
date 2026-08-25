#pragma once
#include "unitysdk.h"

class RailPointInfo;
class GroundCommandLocateCameraVisual;

#define LOOKTARGETRAILPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0xE4D140)

	inline static constexpr unsigned int LookTargetRailPoint_TypeDefinitionIndex = 752;

	class LookTargetRailPoint : public Il2CppObject
	{
	public:
		RailPointInfo* railPointInfo; // 0x18
		::System::Boolean FocusThis; // 0x20
		GroundCommandLocateCameraVisual* parent; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOKTARGETRAILPOINT_.CTOR_OFFSET))(nullptr);
		}

	};

