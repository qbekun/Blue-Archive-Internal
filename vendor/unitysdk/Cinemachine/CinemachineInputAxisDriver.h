#pragma once
#include "../unitysdk.h"

namespace Cinemachine { class AxisBase&; }
namespace Cinemachine { class AxisState&; }

#define CINEMACHINE_CINEMACHINEINPUTAXISDRIVER_VALIDATE_OFFSET UNITYSDK_OFFSET(0x285ACF0)
#define CINEMACHINE_CINEMACHINEINPUTAXISDRIVER_UPDATE_OFFSET UNITYSDK_OFFSET(0x285AD00)
#define CINEMACHINE_CINEMACHINEINPUTAXISDRIVER_UPDATE_OFFSET UNITYSDK_OFFSET(0x285B100)
#define CINEMACHINE_CINEMACHINEINPUTAXISDRIVER_CLAMPVALUE_OFFSET UNITYSDK_OFFSET(0x285B070)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineInputAxisDriver_TypeDefinitionIndex = 34298;

	class CinemachineInputAxisDriver : public Il2CppObject
	{
	public:
		::System::Single multiplier; // 0x10
		::System::Single accelTime; // 0x14
		::System::Single decelTime; // 0x18
		::System::String* name; // 0x20
		::System::Single inputValue; // 0x28
		::System::Single mCurrentSpeed; // 0x2C
		::System::Single Epsilon; // 0x0

		::System::Void Validate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINPUTAXISDRIVER_VALIDATE_OFFSET))(nullptr);
		}

		::System::Boolean Update(::System::Single arg, ::Cinemachine::AxisBase&* arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::Cinemachine::AxisBase&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINPUTAXISDRIVER_UPDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Update(::System::Single arg, ::Cinemachine::AxisState&* arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::Cinemachine::AxisState&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINPUTAXISDRIVER_UPDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Single ClampValue(::Cinemachine::AxisBase&* arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::Cinemachine::AxisBase&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINPUTAXISDRIVER_CLAMPVALUE_OFFSET))(arg, arg, nullptr);
		}

	};
}

