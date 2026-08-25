#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }

#define EMISSIONMODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA297080)
#define EMISSIONMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA2941D0)
#define EMISSIONMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA294270)
#define EMISSIONMODULE_SET_RATEOVERTIME_OFFSET UNITYSDK_OFFSET(0xA294490)
#define EMISSIONMODULE_GET_RATEOVERTIMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA294300)
#define EMISSIONMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297F10)
#define EMISSIONMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297F50)
#define EMISSIONMODULE_SET_RATEOVERTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297F90)
#define EMISSIONMODULE_GET_RATEOVERTIMEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297FD0)

	inline static constexpr unsigned int EmissionModule_TypeDefinitionIndex = 36913;

	class EmissionModule : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void .ctor(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + EMISSIONMODULE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMISSIONMODULE_GET_ENABLED_OFFSET))(nullptr);
		}

		::System::Void set_enabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EMISSIONMODULE_SET_ENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void set_rateOverTime(MinMaxCurve* arg)
		{
			((::System::Void(*)(MinMaxCurve*, ::PVOID))((::PBYTE)hIl2Cpp + EMISSIONMODULE_SET_RATEOVERTIME_OFFSET))(arg, nullptr);
		}

		::System::Single get_rateOverTimeMultiplier()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EMISSIONMODULE_GET_RATEOVERTIMEMULTIPLIER_OFFSET))(nullptr);
		}

		::System::Boolean get_enabled_Injected(EmissionModule&* arg)
		{
			return (return (::System::Boolean(*)(EmissionModule&*, ::PVOID))((::PBYTE)hIl2Cpp + EMISSIONMODULE_GET_ENABLED_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_enabled_Injected(EmissionModule&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(EmissionModule&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EMISSIONMODULE_SET_ENABLED_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_rateOverTime_Injected(EmissionModule&* arg, MinMaxCurve&* arg)
		{
			((::System::Void(*)(EmissionModule&*, MinMaxCurve&*, ::PVOID))((::PBYTE)hIl2Cpp + EMISSIONMODULE_SET_RATEOVERTIME_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Single get_rateOverTimeMultiplier_Injected(EmissionModule&* arg)
		{
			return (return (::System::Single(*)(EmissionModule&*, ::PVOID))((::PBYTE)hIl2Cpp + EMISSIONMODULE_GET_RATEOVERTIMEMULTIPLIER_INJECTED_OFFSET))(arg, nullptr);
		}

	};

