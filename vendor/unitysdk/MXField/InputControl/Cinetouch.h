#pragma once
#include "../../unitysdk.h"

namespace Cinemachine { class CinemachineFreeLook; }
namespace MXField::InputControl { class TouchField; }

#define MXFIELD_INPUTCONTROL_CINETOUCH_UPDATE_OFFSET UNITYSDK_OFFSET(0xEC3450)
#define MXFIELD_INPUTCONTROL_CINETOUCH_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC3500)
#define MXFIELD_INPUTCONTROL_CINETOUCH_START_OFFSET UNITYSDK_OFFSET(0xEC3520)

namespace MXField::InputControl
{
	inline static constexpr unsigned int Cinetouch_TypeDefinitionIndex = 10859;

	class Cinetouch : public Il2CppObject
	{
	public:
		::Cinemachine::CinemachineFreeLook* cineCam; // 0x18
		::MXField::InputControl::TouchField* touchField; // 0x20
		::System::Single SenstivityX; // 0x28
		::System::Single SenstivityY; // 0x2C

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_INPUTCONTROL_CINETOUCH_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_INPUTCONTROL_CINETOUCH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_INPUTCONTROL_CINETOUCH_START_OFFSET))(nullptr);
		}

	};
}

