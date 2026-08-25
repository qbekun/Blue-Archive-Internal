#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class Quaternion&; }
namespace UnityEngine { class Vector3; }

#define CINEMACHINE_NOISESETTINGS_GETSIGNAL_OFFSET UNITYSDK_OFFSET(0x2861CE0)
#define CINEMACHINE_NOISESETTINGS_GET_SIGNALDURATION_OFFSET UNITYSDK_OFFSET(0x2862030)
#define CINEMACHINE_NOISESETTINGS_GETCOMBINEDFILTERRESULTS_OFFSET UNITYSDK_OFFSET(0x2861F40)
#define CINEMACHINE_NOISESETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x28621A0)

namespace Cinemachine
{
	inline static constexpr unsigned int NoiseSettings_TypeDefinitionIndex = 34330;

	class NoiseSettings : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* PositionNoise; // 0x18
		::Il2CppArray<::System::Object*>* OrientationNoise; // 0x20

		::System::Void GetSignal(::System::Single arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::System::Single, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NOISESETTINGS_GETSIGNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single get_SignalDuration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NOISESETTINGS_GET_SIGNALDURATION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* GetCombinedFilterResults(::Il2CppArray<::System::Object*>* arg, ::System::Single arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::Il2CppArray<::System::Object*>*, ::System::Single, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NOISESETTINGS_GETCOMBINEDFILTERRESULTS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_NOISESETTINGS_.CTOR_OFFSET))(nullptr);
		}

	};
}

