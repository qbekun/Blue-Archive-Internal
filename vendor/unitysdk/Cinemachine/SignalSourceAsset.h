#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class Quaternion&; }

#define CINEMACHINE_SIGNALSOURCEASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x2862210)
#define CINEMACHINE_SIGNALSOURCEASSET_GETSIGNAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_SIGNALSOURCEASSET_GET_SIGNALDURATION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cinemachine
{
	inline static constexpr unsigned int SignalSourceAsset_TypeDefinitionIndex = 34333;

	class SignalSourceAsset : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_SIGNALSOURCEASSET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void GetSignal(::System::Single arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::System::Single, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_SIGNALSOURCEASSET_GETSIGNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single get_SignalDuration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_SIGNALSOURCEASSET_GET_SIGNALDURATION_OFFSET))(nullptr);
		}

	};
}

