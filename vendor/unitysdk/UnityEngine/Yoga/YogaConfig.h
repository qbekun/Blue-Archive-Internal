#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Yoga { class YogaConfig; }
namespace UnityEngine::Yoga { class Logger; }

#define UNITYENGINE_YOGA_YOGACONFIG_.CTOR_OFFSET UNITYSDK_OFFSET(0xA44C330)
#define UNITYENGINE_YOGA_YOGACONFIG_.CTOR_OFFSET UNITYSDK_OFFSET(0xA44C3E0)
#define UNITYENGINE_YOGA_YOGACONFIG_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA44C460)
#define UNITYENGINE_YOGA_YOGACONFIG_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0xA44C600)
#define UNITYENGINE_YOGA_YOGACONFIG_GET_USEWEBDEFAULTS_OFFSET UNITYSDK_OFFSET(0xA44C690)
#define UNITYENGINE_YOGA_YOGACONFIG_SET_USEWEBDEFAULTS_OFFSET UNITYSDK_OFFSET(0xA44C710)
#define UNITYENGINE_YOGA_YOGACONFIG_SET_POINTSCALEFACTOR_OFFSET UNITYSDK_OFFSET(0xA44C790)
#define UNITYENGINE_YOGA_YOGACONFIG_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA44C830)

namespace UnityEngine::Yoga
{
	inline static constexpr unsigned int YogaConfig_TypeDefinitionIndex = 37348;

	class YogaConfig : public Il2CppObject
	{
	public:
		::UnityEngine::Yoga::YogaConfig* Default; // 0x0
		::System::Int32 _ygConfig; // 0x10
		::UnityEngine::Yoga::Logger* _logger; // 0x18

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGACONFIG_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGACONFIG_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGACONFIG_FINALIZE_OFFSET))(nullptr);
		}

		::System::Int32 get_Handle()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGACONFIG_GET_HANDLE_OFFSET))(nullptr);
		}

		::System::Boolean get_UseWebDefaults()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGACONFIG_GET_USEWEBDEFAULTS_OFFSET))(nullptr);
		}

		::System::Void set_UseWebDefaults(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGACONFIG_SET_USEWEBDEFAULTS_OFFSET))(arg, nullptr);
		}

		::System::Void set_PointScaleFactor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGACONFIG_SET_POINTSCALEFACTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGACONFIG_.CCTOR_OFFSET))(nullptr);
		}

	};
}

