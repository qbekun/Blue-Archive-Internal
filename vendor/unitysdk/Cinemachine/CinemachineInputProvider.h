#pragma once
#include "../unitysdk.h"

namespace UnityEngine::InputSystem { class InputActionReference; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem::Users { class InputUser&; }

#define CINEMACHINE_CINEMACHINEINPUTPROVIDER_GETAXISVALUE_OFFSET UNITYSDK_OFFSET(0x28659E0)
#define CINEMACHINE_CINEMACHINEINPUTPROVIDER__RESOLVEFORPLAYER_G__GETFIRSTMATCH|7_0_OFFSET UNITYSDK_OFFSET(0x2865E80)
#define CINEMACHINE_CINEMACHINEINPUTPROVIDER_RESOLVEFORPLAYER_OFFSET UNITYSDK_OFFSET(0x2865AE0)
#define CINEMACHINE_CINEMACHINEINPUTPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2865F70)
#define CINEMACHINE_CINEMACHINEINPUTPROVIDER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2865F90)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineInputProvider_TypeDefinitionIndex = 34345;

	class CinemachineInputProvider : public Il2CppObject
	{
	public:
		::System::Int32 PlayerIndex; // 0x18
		::System::Boolean AutoEnableInputs; // 0x1C
		::UnityEngine::InputSystem::InputActionReference* XYAxis; // 0x20
		::UnityEngine::InputSystem::InputActionReference* ZAxis; // 0x28
		::System::Int32 NUM_AXES; // 0x0
		::Il2CppArray<::System::Object*>* m_cachedActions; // 0x30

		::System::Single GetAxisValue(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINPUTPROVIDER_GETAXISVALUE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputAction* _ResolveForPlayer_g__GetFirstMatch|7_0(::UnityEngine::InputSystem::Users::InputUser&* arg, ::UnityEngine::InputSystem::InputActionReference* arg)
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::UnityEngine::InputSystem::Users::InputUser&*, ::UnityEngine::InputSystem::InputActionReference*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINPUTPROVIDER__RESOLVEFORPLAYER_G__GETFIRSTMATCH|7_0_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::InputAction* ResolveForPlayer(::System::Int32 arg, ::UnityEngine::InputSystem::InputActionReference* arg)
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::System::Int32, ::UnityEngine::InputSystem::InputActionReference*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINPUTPROVIDER_RESOLVEFORPLAYER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINPUTPROVIDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINPUTPROVIDER_ONDISABLE_OFFSET))(nullptr);
		}

	};
}

