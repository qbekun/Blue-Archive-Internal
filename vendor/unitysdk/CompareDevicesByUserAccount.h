#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::Users { class InputUserAccountHandle; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define COMPAREDEVICESBYUSERACCOUNT_COMPARE_OFFSET UNITYSDK_OFFSET(0x9F2E700)
#define COMPAREDEVICESBYUSERACCOUNT_GETUSERACCOUNTHANDLEFORDEVICE_OFFSET UNITYSDK_OFFSET(0x9F2E740)

	inline static constexpr unsigned int CompareDevicesByUserAccount_TypeDefinitionIndex = 28612;

	class CompareDevicesByUserAccount : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Users::InputUserAccountHandle* platformUserAccountHandle; // 0x10

		::System::Int32 Compare(::UnityEngine::InputSystem::InputDevice* arg, ::UnityEngine::InputSystem::InputDevice* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + COMPAREDEVICESBYUSERACCOUNT_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetUserAccountHandleForDevice(::UnityEngine::InputSystem::InputDevice* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + COMPAREDEVICESBYUSERACCOUNT_GETUSERACCOUNTHANDLEFORDEVICE_OFFSET))(arg, nullptr);
		}

	};

