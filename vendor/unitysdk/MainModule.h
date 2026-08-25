#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class ParticleSystemSimulationSpace; }
namespace UnityEngine { class ParticleSystemScalingMode; }

#define MAINMODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA297070)
#define MAINMODULE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xA293FE0)
#define MAINMODULE_GET_LOOP_OFFSET UNITYSDK_OFFSET(0xA293D80)
#define MAINMODULE_SET_LOOP_OFFSET UNITYSDK_OFFSET(0xA293E20)
#define MAINMODULE_GET_PREWARM_OFFSET UNITYSDK_OFFSET(0xA297550)
#define MAINMODULE_GET_STARTDELAY_OFFSET UNITYSDK_OFFSET(0xA2975D0)
#define MAINMODULE_GET_STARTDELAYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA293C40)
#define MAINMODULE_SET_STARTDELAYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA293CE0)
#define MAINMODULE_GET_STARTLIFETIMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA294F80)
#define MAINMODULE_SET_STARTLIFETIMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA295020)
#define MAINMODULE_GET_STARTSPEEDMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA294520)
#define MAINMODULE_SET_STARTSPEEDMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA2945C0)
#define MAINMODULE_GET_STARTSIZEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA294660)
#define MAINMODULE_SET_STARTSIZEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA294700)
#define MAINMODULE_GET_STARTROTATIONMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA294AC0)
#define MAINMODULE_SET_STARTROTATIONMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA294B60)
#define MAINMODULE_GET_STARTROTATIONXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA294CC0)
#define MAINMODULE_SET_STARTROTATIONXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA294E40)
#define MAINMODULE_GET_STARTROTATIONYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA294D00)
#define MAINMODULE_SET_STARTROTATIONYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA294E90)
#define MAINMODULE_GET_STARTROTATIONZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA294D40)
#define MAINMODULE_SET_STARTROTATIONZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA294EE0)
#define MAINMODULE_GET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0xA294810)
#define MAINMODULE_SET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0xA294A30)
#define MAINMODULE_GET_GRAVITYMODIFIERMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA2950C0)
#define MAINMODULE_SET_GRAVITYMODIFIERMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA295160)
#define MAINMODULE_GET_SIMULATIONSPACE_OFFSET UNITYSDK_OFFSET(0xA295330)
#define MAINMODULE_SET_SIMULATIONSPACE_OFFSET UNITYSDK_OFFSET(0xA2953D0)
#define MAINMODULE_GET_SIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xA294070)
#define MAINMODULE_SET_SIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xA294110)
#define MAINMODULE_SET_USEUNSCALEDTIME_OFFSET UNITYSDK_OFFSET(0xA297D10)
#define MAINMODULE_GET_SCALINGMODE_OFFSET UNITYSDK_OFFSET(0xA295460)
#define MAINMODULE_SET_SCALINGMODE_OFFSET UNITYSDK_OFFSET(0xA295500)
#define MAINMODULE_GET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0xA293EB0)
#define MAINMODULE_SET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0xA293F50)
#define MAINMODULE_GET_MAXPARTICLES_OFFSET UNITYSDK_OFFSET(0xA295200)
#define MAINMODULE_SET_MAXPARTICLES_OFFSET UNITYSDK_OFFSET(0xA2952A0)
#define MAINMODULE_GET_DURATION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297490)
#define MAINMODULE_GET_LOOP_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2974D0)
#define MAINMODULE_SET_LOOP_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297510)
#define MAINMODULE_GET_PREWARM_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297590)
#define MAINMODULE_GET_STARTDELAY_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297630)
#define MAINMODULE_GET_STARTDELAYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297670)
#define MAINMODULE_SET_STARTDELAYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2976B0)
#define MAINMODULE_GET_STARTLIFETIMEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297700)
#define MAINMODULE_SET_STARTLIFETIMEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297740)
#define MAINMODULE_GET_STARTSPEEDMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297790)
#define MAINMODULE_SET_STARTSPEEDMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2977D0)
#define MAINMODULE_GET_STARTSIZEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297820)
#define MAINMODULE_SET_STARTSIZEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297860)
#define MAINMODULE_GET_STARTROTATIONMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2978B0)
#define MAINMODULE_SET_STARTROTATIONMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2978F0)
#define MAINMODULE_GET_STARTROTATIONXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297940)
#define MAINMODULE_SET_STARTROTATIONXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297980)
#define MAINMODULE_GET_STARTROTATIONYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2979D0)
#define MAINMODULE_SET_STARTROTATIONYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297A10)
#define MAINMODULE_GET_STARTROTATIONZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297A60)
#define MAINMODULE_SET_STARTROTATIONZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297AA0)
#define MAINMODULE_GET_STARTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297AF0)
#define MAINMODULE_SET_STARTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297B30)
#define MAINMODULE_GET_GRAVITYMODIFIERMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297B70)
#define MAINMODULE_SET_GRAVITYMODIFIERMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297BB0)
#define MAINMODULE_GET_SIMULATIONSPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297C00)
#define MAINMODULE_SET_SIMULATIONSPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297C40)
#define MAINMODULE_GET_SIMULATIONSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297C80)
#define MAINMODULE_SET_SIMULATIONSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297CC0)
#define MAINMODULE_SET_USEUNSCALEDTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297D50)
#define MAINMODULE_GET_SCALINGMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297D90)
#define MAINMODULE_SET_SCALINGMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297DD0)
#define MAINMODULE_GET_PLAYONAWAKE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297E10)
#define MAINMODULE_SET_PLAYONAWAKE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297E50)
#define MAINMODULE_GET_MAXPARTICLES_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297E90)
#define MAINMODULE_SET_MAXPARTICLES_INJECTED_OFFSET UNITYSDK_OFFSET(0xA297ED0)

	inline static constexpr unsigned int MainModule_TypeDefinitionIndex = 36912;

	class MainModule : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void .ctor(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Single get_duration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Boolean get_loop()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_LOOP_OFFSET))(nullptr);
		}

		::System::Void set_loop(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_LOOP_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_prewarm()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_PREWARM_OFFSET))(nullptr);
		}

		MinMaxCurve* get_startDelay()
		{
			return (return (MinMaxCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_STARTDELAY_OFFSET))(nullptr);
		}

		::System::Single get_startDelayMultiplier()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_STARTDELAYMULTIPLIER_OFFSET))(nullptr);
		}

		::System::Void set_startDelayMultiplier(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_STARTDELAYMULTIPLIER_OFFSET))(arg, nullptr);
		}

		::System::Single get_startLifetimeMultiplier()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_STARTLIFETIMEMULTIPLIER_OFFSET))(nullptr);
		}

		::System::Void set_startLifetimeMultiplier(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_STARTLIFETIMEMULTIPLIER_OFFSET))(arg, nullptr);
		}

		::System::Single get_startSpeedMultiplier()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_STARTSPEEDMULTIPLIER_OFFSET))(nullptr);
		}

		::System::Void set_startSpeedMultiplier(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_STARTSPEEDMULTIPLIER_OFFSET))(arg, nullptr);
		}

		::System::Single get_startSizeMultiplier()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_STARTSIZEMULTIPLIER_OFFSET))(nullptr);
		}

		::System::Void set_startSizeMultiplier(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_STARTSIZEMULTIPLIER_OFFSET))(arg, nullptr);
		}

		::System::Single get_startRotationMultiplier()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_STARTROTATIONMULTIPLIER_OFFSET))(nullptr);
		}

		::System::Void set_startRotationMultiplier(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_STARTROTATIONMULTIPLIER_OFFSET))(arg, nullptr);
		}

		::System::Single get_startRotationXMultiplier()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_STARTROTATIONXMULTIPLIER_OFFSET))(nullptr);
		}

		::System::Void set_startRotationXMultiplier(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_STARTROTATIONXMULTIPLIER_OFFSET))(arg, nullptr);
		}

		::System::Single get_startRotationYMultiplier()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_STARTROTATIONYMULTIPLIER_OFFSET))(nullptr);
		}

		::System::Void set_startRotationYMultiplier(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_STARTROTATIONYMULTIPLIER_OFFSET))(arg, nullptr);
		}

		::System::Single get_startRotationZMultiplier()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_STARTROTATIONZMULTIPLIER_OFFSET))(nullptr);
		}

		::System::Void set_startRotationZMultiplier(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_STARTROTATIONZMULTIPLIER_OFFSET))(arg, nullptr);
		}

		MinMaxGradient* get_startColor()
		{
			return (return (MinMaxGradient*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_STARTCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_startColor(MinMaxGradient* arg)
		{
			((::System::Void(*)(MinMaxGradient*, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_STARTCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Single get_gravityModifierMultiplier()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_GRAVITYMODIFIERMULTIPLIER_OFFSET))(nullptr);
		}

		::System::Void set_gravityModifierMultiplier(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_GRAVITYMODIFIERMULTIPLIER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ParticleSystemSimulationSpace* get_simulationSpace()
		{
			return (return (::UnityEngine::ParticleSystemSimulationSpace*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_SIMULATIONSPACE_OFFSET))(nullptr);
		}

		::System::Void set_simulationSpace(::UnityEngine::ParticleSystemSimulationSpace* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystemSimulationSpace*, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_SIMULATIONSPACE_OFFSET))(arg, nullptr);
		}

		::System::Single get_simulationSpeed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_SIMULATIONSPEED_OFFSET))(nullptr);
		}

		::System::Void set_simulationSpeed(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_SIMULATIONSPEED_OFFSET))(arg, nullptr);
		}

		::System::Void set_useUnscaledTime(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_USEUNSCALEDTIME_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ParticleSystemScalingMode* get_scalingMode()
		{
			return (return (::UnityEngine::ParticleSystemScalingMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_SCALINGMODE_OFFSET))(nullptr);
		}

		::System::Void set_scalingMode(::UnityEngine::ParticleSystemScalingMode* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystemScalingMode*, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_SCALINGMODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_playOnAwake()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_PLAYONAWAKE_OFFSET))(nullptr);
		}

		::System::Void set_playOnAwake(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_PLAYONAWAKE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_maxParticles()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_MAXPARTICLES_OFFSET))(nullptr);
		}

		::System::Void set_maxParticles(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_MAXPARTICLES_OFFSET))(arg, nullptr);
		}

		::System::Single get_duration_Injected(MainModule&* arg)
		{
			return (return (::System::Single(*)(MainModule&*, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_DURATION_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_loop_Injected(MainModule&* arg)
		{
			return (return (::System::Boolean(*)(MainModule&*, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_LOOP_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_loop_Injected(MainModule&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(MainModule&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_LOOP_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_prewarm_Injected(MainModule&* arg)
		{
			return (return (::System::Boolean(*)(MainModule&*, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_PREWARM_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_startDelay_Injected(MainModule&* arg, MinMaxCurve&* arg)
		{
			((::System::Void(*)(MainModule&*, MinMaxCurve&*, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_STARTDELAY_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Single get_startDelayMultiplier_Injected(MainModule&* arg)
		{
			return (return (::System::Single(*)(MainModule&*, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_STARTDELAYMULTIPLIER_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_startDelayMultiplier_Injected(MainModule&* arg, ::System::Single arg)
		{
			((::System::Void(*)(MainModule&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_STARTDELAYMULTIPLIER_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Single get_startLifetimeMultiplier_Injected(MainModule&* arg)
		{
			return (return (::System::Single(*)(MainModule&*, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_STARTLIFETIMEMULTIPLIER_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_startLifetimeMultiplier_Injected(MainModule&* arg, ::System::Single arg)
		{
			((::System::Void(*)(MainModule&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_STARTLIFETIMEMULTIPLIER_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Single get_startSpeedMultiplier_Injected(MainModule&* arg)
		{
			return (return (::System::Single(*)(MainModule&*, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_STARTSPEEDMULTIPLIER_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_startSpeedMultiplier_Injected(MainModule&* arg, ::System::Single arg)
		{
			((::System::Void(*)(MainModule&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_STARTSPEEDMULTIPLIER_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Single get_startSizeMultiplier_Injected(MainModule&* arg)
		{
			return (return (::System::Single(*)(MainModule&*, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_STARTSIZEMULTIPLIER_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_startSizeMultiplier_Injected(MainModule&* arg, ::System::Single arg)
		{
			((::System::Void(*)(MainModule&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_STARTSIZEMULTIPLIER_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Single get_startRotationMultiplier_Injected(MainModule&* arg)
		{
			return (return (::System::Single(*)(MainModule&*, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_STARTROTATIONMULTIPLIER_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_startRotationMultiplier_Injected(MainModule&* arg, ::System::Single arg)
		{
			((::System::Void(*)(MainModule&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_STARTROTATIONMULTIPLIER_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Single get_startRotationXMultiplier_Injected(MainModule&* arg)
		{
			return (return (::System::Single(*)(MainModule&*, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_STARTROTATIONXMULTIPLIER_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_startRotationXMultiplier_Injected(MainModule&* arg, ::System::Single arg)
		{
			((::System::Void(*)(MainModule&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_STARTROTATIONXMULTIPLIER_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Single get_startRotationYMultiplier_Injected(MainModule&* arg)
		{
			return (return (::System::Single(*)(MainModule&*, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_STARTROTATIONYMULTIPLIER_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_startRotationYMultiplier_Injected(MainModule&* arg, ::System::Single arg)
		{
			((::System::Void(*)(MainModule&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_STARTROTATIONYMULTIPLIER_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Single get_startRotationZMultiplier_Injected(MainModule&* arg)
		{
			return (return (::System::Single(*)(MainModule&*, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_STARTROTATIONZMULTIPLIER_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_startRotationZMultiplier_Injected(MainModule&* arg, ::System::Single arg)
		{
			((::System::Void(*)(MainModule&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_STARTROTATIONZMULTIPLIER_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void get_startColor_Injected(MainModule&* arg, MinMaxGradient&* arg)
		{
			((::System::Void(*)(MainModule&*, MinMaxGradient&*, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_STARTCOLOR_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_startColor_Injected(MainModule&* arg, MinMaxGradient&* arg)
		{
			((::System::Void(*)(MainModule&*, MinMaxGradient&*, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_STARTCOLOR_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Single get_gravityModifierMultiplier_Injected(MainModule&* arg)
		{
			return (return (::System::Single(*)(MainModule&*, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_GRAVITYMODIFIERMULTIPLIER_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_gravityModifierMultiplier_Injected(MainModule&* arg, ::System::Single arg)
		{
			((::System::Void(*)(MainModule&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_GRAVITYMODIFIERMULTIPLIER_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::ParticleSystemSimulationSpace* get_simulationSpace_Injected(MainModule&* arg)
		{
			return (return (::UnityEngine::ParticleSystemSimulationSpace*(*)(MainModule&*, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_SIMULATIONSPACE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_simulationSpace_Injected(MainModule&* arg, ::UnityEngine::ParticleSystemSimulationSpace* arg)
		{
			((::System::Void(*)(MainModule&*, ::UnityEngine::ParticleSystemSimulationSpace*, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_SIMULATIONSPACE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Single get_simulationSpeed_Injected(MainModule&* arg)
		{
			return (return (::System::Single(*)(MainModule&*, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_SIMULATIONSPEED_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_simulationSpeed_Injected(MainModule&* arg, ::System::Single arg)
		{
			((::System::Void(*)(MainModule&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_SIMULATIONSPEED_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_useUnscaledTime_Injected(MainModule&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(MainModule&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_USEUNSCALEDTIME_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::ParticleSystemScalingMode* get_scalingMode_Injected(MainModule&* arg)
		{
			return (return (::UnityEngine::ParticleSystemScalingMode*(*)(MainModule&*, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_SCALINGMODE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_scalingMode_Injected(MainModule&* arg, ::UnityEngine::ParticleSystemScalingMode* arg)
		{
			((::System::Void(*)(MainModule&*, ::UnityEngine::ParticleSystemScalingMode*, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_SCALINGMODE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_playOnAwake_Injected(MainModule&* arg)
		{
			return (return (::System::Boolean(*)(MainModule&*, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_PLAYONAWAKE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_playOnAwake_Injected(MainModule&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(MainModule&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_PLAYONAWAKE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_maxParticles_Injected(MainModule&* arg)
		{
			return (return (::System::Int32(*)(MainModule&*, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_GET_MAXPARTICLES_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_maxParticles_Injected(MainModule&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(MainModule&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MAINMODULE_SET_MAXPARTICLES_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};

