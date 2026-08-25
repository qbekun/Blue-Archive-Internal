#pragma once
#include "unitysdk.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define CINEMACHINESHOTPLAYABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x281DC40)
#define CINEMACHINESHOTPLAYABLE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x281D0F0)

	inline static constexpr unsigned int CinemachineShotPlayable_TypeDefinitionIndex = 34189;

	class CinemachineShotPlayable : public Il2CppObject
	{
	public:
		::Cinemachine::CinemachineVirtualCameraBase* VirtualCamera; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINESHOTPLAYABLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINESHOTPLAYABLE_GET_ISVALID_OFFSET))(nullptr);
		}

	};

