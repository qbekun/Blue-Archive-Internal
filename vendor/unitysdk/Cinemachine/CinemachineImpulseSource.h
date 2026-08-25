#pragma once
#include "../unitysdk.h"

namespace Cinemachine { class CinemachineImpulseDefinition; }
namespace UnityEngine { class Vector3; }

#define CINEMACHINE_CINEMACHINEIMPULSESOURCE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x286C100)
#define CINEMACHINE_CINEMACHINEIMPULSESOURCE_RESET_OFFSET UNITYSDK_OFFSET(0x286C120)
#define CINEMACHINE_CINEMACHINEIMPULSESOURCE_GENERATEIMPULSEATPOSITIONWITHVELOCITY_OFFSET UNITYSDK_OFFSET(0x286C230)
#define CINEMACHINE_CINEMACHINEIMPULSESOURCE_GENERATEIMPULSEWITHVELOCITY_OFFSET UNITYSDK_OFFSET(0x286C280)
#define CINEMACHINE_CINEMACHINEIMPULSESOURCE_GENERATEIMPULSEWITHFORCE_OFFSET UNITYSDK_OFFSET(0x286C300)
#define CINEMACHINE_CINEMACHINEIMPULSESOURCE_GENERATEIMPULSE_OFFSET UNITYSDK_OFFSET(0x286C390)
#define CINEMACHINE_CINEMACHINEIMPULSESOURCE_GENERATEIMPULSEAT_OFFSET UNITYSDK_OFFSET(0x286C410)
#define CINEMACHINE_CINEMACHINEIMPULSESOURCE_GENERATEIMPULSE_OFFSET UNITYSDK_OFFSET(0x286C460)
#define CINEMACHINE_CINEMACHINEIMPULSESOURCE_GENERATEIMPULSE_OFFSET UNITYSDK_OFFSET(0x286C4E0)
#define CINEMACHINE_CINEMACHINEIMPULSESOURCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x286C570)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineImpulseSource_TypeDefinitionIndex = 34370;

	class CinemachineImpulseSource : public Il2CppObject
	{
	public:
		::Cinemachine::CinemachineImpulseDefinition* m_ImpulseDefinition; // 0x18
		::UnityEngine::Vector3* m_DefaultVelocity; // 0x20

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSESOURCE_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSESOURCE_RESET_OFFSET))(nullptr);
		}

		::System::Void GenerateImpulseAtPositionWithVelocity(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSESOURCE_GENERATEIMPULSEATPOSITIONWITHVELOCITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GenerateImpulseWithVelocity(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSESOURCE_GENERATEIMPULSEWITHVELOCITY_OFFSET))(arg, nullptr);
		}

		::System::Void GenerateImpulseWithForce(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSESOURCE_GENERATEIMPULSEWITHFORCE_OFFSET))(arg, nullptr);
		}

		::System::Void GenerateImpulse()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSESOURCE_GENERATEIMPULSE_OFFSET))(nullptr);
		}

		::System::Void GenerateImpulseAt(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSESOURCE_GENERATEIMPULSEAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GenerateImpulse(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSESOURCE_GENERATEIMPULSE_OFFSET))(arg, nullptr);
		}

		::System::Void GenerateImpulse(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSESOURCE_GENERATEIMPULSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSESOURCE_.CTOR_OFFSET))(nullptr);
		}

	};
}

