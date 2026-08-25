#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Color32; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class ParticleSystemSimulationSpace; }
namespace UnityEngine { class ParticleSystemScalingMode; }
namespace UnityEngine { class ParticleSystemCustomData; }
namespace UnityEngine { class ParticleSystemStopBehavior; }
namespace Unity::Jobs { class JobHandle; }
namespace UnityEngine::ParticleSystemJobs { class NativeParticleData&; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class Color32&; }
namespace Unity::Jobs { class JobHandle&; }

#define UNITYENGINE_PARTICLESYSTEM_EMIT_OFFSET UNITYSDK_OFFSET(0xA293900)
#define UNITYENGINE_PARTICLESYSTEM_EMIT_OFFSET UNITYSDK_OFFSET(0xA293B90)
#define UNITYENGINE_PARTICLESYSTEM_GET_STARTDELAY_OFFSET UNITYSDK_OFFSET(0xA293BD0)
#define UNITYENGINE_PARTICLESYSTEM_SET_STARTDELAY_OFFSET UNITYSDK_OFFSET(0xA293C80)
#define UNITYENGINE_PARTICLESYSTEM_GET_LOOP_OFFSET UNITYSDK_OFFSET(0xA293D30)
#define UNITYENGINE_PARTICLESYSTEM_SET_LOOP_OFFSET UNITYSDK_OFFSET(0xA293DC0)
#define UNITYENGINE_PARTICLESYSTEM_GET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0xA293E60)
#define UNITYENGINE_PARTICLESYSTEM_SET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0xA293EF0)
#define UNITYENGINE_PARTICLESYSTEM_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xA293F90)
#define UNITYENGINE_PARTICLESYSTEM_GET_PLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0xA294020)
#define UNITYENGINE_PARTICLESYSTEM_SET_PLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0xA2940B0)
#define UNITYENGINE_PARTICLESYSTEM_GET_ENABLEEMISSION_OFFSET UNITYSDK_OFFSET(0xA294160)
#define UNITYENGINE_PARTICLESYSTEM_SET_ENABLEEMISSION_OFFSET UNITYSDK_OFFSET(0xA294210)
#define UNITYENGINE_PARTICLESYSTEM_GET_EMISSIONRATE_OFFSET UNITYSDK_OFFSET(0xA2942B0)
#define UNITYENGINE_PARTICLESYSTEM_SET_EMISSIONRATE_OFFSET UNITYSDK_OFFSET(0xA294340)
#define UNITYENGINE_PARTICLESYSTEM_GET_STARTSPEED_OFFSET UNITYSDK_OFFSET(0xA2944D0)
#define UNITYENGINE_PARTICLESYSTEM_SET_STARTSPEED_OFFSET UNITYSDK_OFFSET(0xA294560)
#define UNITYENGINE_PARTICLESYSTEM_GET_STARTSIZE_OFFSET UNITYSDK_OFFSET(0xA294610)
#define UNITYENGINE_PARTICLESYSTEM_SET_STARTSIZE_OFFSET UNITYSDK_OFFSET(0xA2946A0)
#define UNITYENGINE_PARTICLESYSTEM_GET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0xA294750)
#define UNITYENGINE_PARTICLESYSTEM_SET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0xA2948A0)
#define UNITYENGINE_PARTICLESYSTEM_GET_STARTROTATION_OFFSET UNITYSDK_OFFSET(0xA294A70)
#define UNITYENGINE_PARTICLESYSTEM_SET_STARTROTATION_OFFSET UNITYSDK_OFFSET(0xA294B00)
#define UNITYENGINE_PARTICLESYSTEM_GET_STARTROTATION3D_OFFSET UNITYSDK_OFFSET(0xA294BB0)
#define UNITYENGINE_PARTICLESYSTEM_SET_STARTROTATION3D_OFFSET UNITYSDK_OFFSET(0xA294D80)
#define UNITYENGINE_PARTICLESYSTEM_GET_STARTLIFETIME_OFFSET UNITYSDK_OFFSET(0xA294F30)
#define UNITYENGINE_PARTICLESYSTEM_SET_STARTLIFETIME_OFFSET UNITYSDK_OFFSET(0xA294FC0)
#define UNITYENGINE_PARTICLESYSTEM_GET_GRAVITYMODIFIER_OFFSET UNITYSDK_OFFSET(0xA295070)
#define UNITYENGINE_PARTICLESYSTEM_SET_GRAVITYMODIFIER_OFFSET UNITYSDK_OFFSET(0xA295100)
#define UNITYENGINE_PARTICLESYSTEM_GET_MAXPARTICLES_OFFSET UNITYSDK_OFFSET(0xA2951B0)
#define UNITYENGINE_PARTICLESYSTEM_SET_MAXPARTICLES_OFFSET UNITYSDK_OFFSET(0xA295240)
#define UNITYENGINE_PARTICLESYSTEM_GET_SIMULATIONSPACE_OFFSET UNITYSDK_OFFSET(0xA2952E0)
#define UNITYENGINE_PARTICLESYSTEM_SET_SIMULATIONSPACE_OFFSET UNITYSDK_OFFSET(0xA295370)
#define UNITYENGINE_PARTICLESYSTEM_GET_SCALINGMODE_OFFSET UNITYSDK_OFFSET(0xA295410)
#define UNITYENGINE_PARTICLESYSTEM_SET_SCALINGMODE_OFFSET UNITYSDK_OFFSET(0xA2954A0)
#define UNITYENGINE_PARTICLESYSTEM_GET_AUTOMATICCULLINGENABLED_OFFSET UNITYSDK_OFFSET(0xA295540)
#define UNITYENGINE_PARTICLESYSTEM_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xA2955C0)
#define UNITYENGINE_PARTICLESYSTEM_GET_ISEMITTING_OFFSET UNITYSDK_OFFSET(0xA295600)
#define UNITYENGINE_PARTICLESYSTEM_GET_ISSTOPPED_OFFSET UNITYSDK_OFFSET(0xA295640)
#define UNITYENGINE_PARTICLESYSTEM_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0xA295680)
#define UNITYENGINE_PARTICLESYSTEM_GET_PARTICLECOUNT_OFFSET UNITYSDK_OFFSET(0xA2956C0)
#define UNITYENGINE_PARTICLESYSTEM_GET_TIME_OFFSET UNITYSDK_OFFSET(0xA295700)
#define UNITYENGINE_PARTICLESYSTEM_SET_TIME_OFFSET UNITYSDK_OFFSET(0xA295740)
#define UNITYENGINE_PARTICLESYSTEM_GET_RANDOMSEED_OFFSET UNITYSDK_OFFSET(0xA295790)
#define UNITYENGINE_PARTICLESYSTEM_SET_RANDOMSEED_OFFSET UNITYSDK_OFFSET(0xA2957D0)
#define UNITYENGINE_PARTICLESYSTEM_GET_USEAUTORANDOMSEED_OFFSET UNITYSDK_OFFSET(0xA295810)
#define UNITYENGINE_PARTICLESYSTEM_SET_USEAUTORANDOMSEED_OFFSET UNITYSDK_OFFSET(0xA295850)
#define UNITYENGINE_PARTICLESYSTEM_GET_PROCEDURALSIMULATIONSUPPORTED_OFFSET UNITYSDK_OFFSET(0xA295580)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLECURRENTSIZE_OFFSET UNITYSDK_OFFSET(0xA295890)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLECURRENTSIZE3D_OFFSET UNITYSDK_OFFSET(0xA2958D0)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLECURRENTCOLOR_OFFSET UNITYSDK_OFFSET(0xA295990)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLEMESHINDEX_OFFSET UNITYSDK_OFFSET(0xA295A30)
#define UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_OFFSET UNITYSDK_OFFSET(0xA295A70)
#define UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_OFFSET UNITYSDK_OFFSET(0xA295AC0)
#define UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_OFFSET UNITYSDK_OFFSET(0xA295B10)
#define UNITYENGINE_PARTICLESYSTEM_SETPARTICLESWITHNATIVEARRAY_OFFSET UNITYSDK_OFFSET(0xA295B60)
#define UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_OFFSET UNITYSDK_OFFSET(0xA295BB0)
#define UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_OFFSET UNITYSDK_OFFSET(0xA295C50)
#define UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_OFFSET UNITYSDK_OFFSET(0xA295D00)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_OFFSET UNITYSDK_OFFSET(0xA295DB0)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_OFFSET UNITYSDK_OFFSET(0xA295E00)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_OFFSET UNITYSDK_OFFSET(0xA295E50)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLESWITHNATIVEARRAY_OFFSET UNITYSDK_OFFSET(0xA295EA0)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_OFFSET UNITYSDK_OFFSET(0xA295EF0)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_OFFSET UNITYSDK_OFFSET(0xA295F90)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_OFFSET UNITYSDK_OFFSET(0xA296040)
#define UNITYENGINE_PARTICLESYSTEM_SETCUSTOMPARTICLEDATA_OFFSET UNITYSDK_OFFSET(0xA2960F0)
#define UNITYENGINE_PARTICLESYSTEM_GETCUSTOMPARTICLEDATA_OFFSET UNITYSDK_OFFSET(0xA296140)
#define UNITYENGINE_PARTICLESYSTEM_GETPLAYBACKSTATE_OFFSET UNITYSDK_OFFSET(0xA296190)
#define UNITYENGINE_PARTICLESYSTEM_SETPLAYBACKSTATE_OFFSET UNITYSDK_OFFSET(0xA296240)
#define UNITYENGINE_PARTICLESYSTEM_GETTRAILDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0xA2962C0)
#define UNITYENGINE_PARTICLESYSTEM_GETTRAILS_OFFSET UNITYSDK_OFFSET(0xA296300)
#define UNITYENGINE_PARTICLESYSTEM_GETTRAILS_OFFSET UNITYSDK_OFFSET(0xA296500)
#define UNITYENGINE_PARTICLESYSTEM_SETTRAILS_OFFSET UNITYSDK_OFFSET(0xA296570)
#define UNITYENGINE_PARTICLESYSTEM_SIMULATE_OFFSET UNITYSDK_OFFSET(0xA2965F0)
#define UNITYENGINE_PARTICLESYSTEM_SIMULATE_OFFSET UNITYSDK_OFFSET(0xA296650)
#define UNITYENGINE_PARTICLESYSTEM_SIMULATE_OFFSET UNITYSDK_OFFSET(0xA2966B0)
#define UNITYENGINE_PARTICLESYSTEM_SIMULATE_OFFSET UNITYSDK_OFFSET(0xA296710)
#define UNITYENGINE_PARTICLESYSTEM_PLAY_OFFSET UNITYSDK_OFFSET(0xA296760)
#define UNITYENGINE_PARTICLESYSTEM_PLAY_OFFSET UNITYSDK_OFFSET(0xA2967A0)
#define UNITYENGINE_PARTICLESYSTEM_PAUSE_OFFSET UNITYSDK_OFFSET(0xA2967E0)
#define UNITYENGINE_PARTICLESYSTEM_PAUSE_OFFSET UNITYSDK_OFFSET(0xA296820)
#define UNITYENGINE_PARTICLESYSTEM_STOP_OFFSET UNITYSDK_OFFSET(0xA296860)
#define UNITYENGINE_PARTICLESYSTEM_STOP_OFFSET UNITYSDK_OFFSET(0xA2968B0)
#define UNITYENGINE_PARTICLESYSTEM_STOP_OFFSET UNITYSDK_OFFSET(0xA296900)
#define UNITYENGINE_PARTICLESYSTEM_CLEAR_OFFSET UNITYSDK_OFFSET(0xA296940)
#define UNITYENGINE_PARTICLESYSTEM_CLEAR_OFFSET UNITYSDK_OFFSET(0xA296980)
#define UNITYENGINE_PARTICLESYSTEM_ISALIVE_OFFSET UNITYSDK_OFFSET(0xA2969C0)
#define UNITYENGINE_PARTICLESYSTEM_ISALIVE_OFFSET UNITYSDK_OFFSET(0xA296A00)
#define UNITYENGINE_PARTICLESYSTEM_EMIT_OFFSET UNITYSDK_OFFSET(0xA296A40)
#define UNITYENGINE_PARTICLESYSTEM_EMIT_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA296A80)
#define UNITYENGINE_PARTICLESYSTEM_EMIT_OFFSET UNITYSDK_OFFSET(0xA296AC0)
#define UNITYENGINE_PARTICLESYSTEM_EMITOLD_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA293B50)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERSUBEMITTER_OFFSET UNITYSDK_OFFSET(0xA296B60)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERSUBEMITTER_OFFSET UNITYSDK_OFFSET(0xA296BF0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERSUBEMITTERFORPARTICLE_OFFSET UNITYSDK_OFFSET(0xA296C50)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERSUBEMITTER_OFFSET UNITYSDK_OFFSET(0xA296BA0)
#define UNITYENGINE_PARTICLESYSTEM_RESETPREMAPPEDBUFFERMEMORY_OFFSET UNITYSDK_OFFSET(0xA296CF0)
#define UNITYENGINE_PARTICLESYSTEM_SETMAXIMUMPREMAPPEDBUFFERCOUNTS_OFFSET UNITYSDK_OFFSET(0xA296D30)
#define UNITYENGINE_PARTICLESYSTEM_ALLOCATEAXISOFROTATIONATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xA296D70)
#define UNITYENGINE_PARTICLESYSTEM_ALLOCATEMESHINDEXATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xA296DB0)
#define UNITYENGINE_PARTICLESYSTEM_ALLOCATECUSTOMDATAATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xA296DF0)
#define UNITYENGINE_PARTICLESYSTEM_GETMANAGEDJOBDATA_OFFSET UNITYSDK_OFFSET(0xA296E30)
#define UNITYENGINE_PARTICLESYSTEM_GETMANAGEDJOBHANDLE_OFFSET UNITYSDK_OFFSET(0xA296E70)
#define UNITYENGINE_PARTICLESYSTEM_SETMANAGEDJOBHANDLE_OFFSET UNITYSDK_OFFSET(0xA296F00)
#define UNITYENGINE_PARTICLESYSTEM_SCHEDULEMANAGEDJOB_OFFSET UNITYSDK_OFFSET(0xA296F80)
#define UNITYENGINE_PARTICLESYSTEM_COPYMANAGEDJOBDATA_OFFSET UNITYSDK_OFFSET(0xA297030)
#define UNITYENGINE_PARTICLESYSTEM_GET_MAIN_OFFSET UNITYSDK_OFFSET(0xA293C20)
#define UNITYENGINE_PARTICLESYSTEM_GET_EMISSION_OFFSET UNITYSDK_OFFSET(0xA2941B0)
#define UNITYENGINE_PARTICLESYSTEM_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0xA297090)
#define UNITYENGINE_PARTICLESYSTEM_GET_VELOCITYOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0xA2970C0)
#define UNITYENGINE_PARTICLESYSTEM_GET_LIMITVELOCITYOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0xA2970F0)
#define UNITYENGINE_PARTICLESYSTEM_GET_INHERITVELOCITY_OFFSET UNITYSDK_OFFSET(0xA297120)
#define UNITYENGINE_PARTICLESYSTEM_GET_LIFETIMEBYEMITTERSPEED_OFFSET UNITYSDK_OFFSET(0xA297150)
#define UNITYENGINE_PARTICLESYSTEM_GET_FORCEOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0xA297180)
#define UNITYENGINE_PARTICLESYSTEM_GET_COLOROVERLIFETIME_OFFSET UNITYSDK_OFFSET(0xA2971B0)
#define UNITYENGINE_PARTICLESYSTEM_GET_COLORBYSPEED_OFFSET UNITYSDK_OFFSET(0xA2971E0)
#define UNITYENGINE_PARTICLESYSTEM_GET_SIZEOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0xA297210)
#define UNITYENGINE_PARTICLESYSTEM_GET_SIZEBYSPEED_OFFSET UNITYSDK_OFFSET(0xA297240)
#define UNITYENGINE_PARTICLESYSTEM_GET_ROTATIONOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0xA297270)
#define UNITYENGINE_PARTICLESYSTEM_GET_ROTATIONBYSPEED_OFFSET UNITYSDK_OFFSET(0xA2972A0)
#define UNITYENGINE_PARTICLESYSTEM_GET_EXTERNALFORCES_OFFSET UNITYSDK_OFFSET(0xA2972D0)
#define UNITYENGINE_PARTICLESYSTEM_GET_NOISE_OFFSET UNITYSDK_OFFSET(0xA297300)
#define UNITYENGINE_PARTICLESYSTEM_GET_COLLISION_OFFSET UNITYSDK_OFFSET(0xA297330)
#define UNITYENGINE_PARTICLESYSTEM_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0xA297360)
#define UNITYENGINE_PARTICLESYSTEM_GET_SUBEMITTERS_OFFSET UNITYSDK_OFFSET(0xA297390)
#define UNITYENGINE_PARTICLESYSTEM_GET_TEXTURESHEETANIMATION_OFFSET UNITYSDK_OFFSET(0xA2973C0)
#define UNITYENGINE_PARTICLESYSTEM_GET_LIGHTS_OFFSET UNITYSDK_OFFSET(0xA2973F0)
#define UNITYENGINE_PARTICLESYSTEM_GET_TRAILS_OFFSET UNITYSDK_OFFSET(0xA297420)
#define UNITYENGINE_PARTICLESYSTEM_GET_CUSTOMDATA_OFFSET UNITYSDK_OFFSET(0xA297450)
#define UNITYENGINE_PARTICLESYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA297480)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLECURRENTSIZE3D_INJECTED_OFFSET UNITYSDK_OFFSET(0xA295940)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLECURRENTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2959E0)
#define UNITYENGINE_PARTICLESYSTEM_GETPLAYBACKSTATE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA296200)
#define UNITYENGINE_PARTICLESYSTEM_SETPLAYBACKSTATE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA296280)
#define UNITYENGINE_PARTICLESYSTEM_SETTRAILS_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2965B0)
#define UNITYENGINE_PARTICLESYSTEM_EMIT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA296B10)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERSUBEMITTERFORPARTICLE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA296CA0)
#define UNITYENGINE_PARTICLESYSTEM_GETMANAGEDJOBHANDLE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA296EC0)
#define UNITYENGINE_PARTICLESYSTEM_SETMANAGEDJOBHANDLE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA296F40)
#define UNITYENGINE_PARTICLESYSTEM_SCHEDULEMANAGEDJOB_INJECTED_OFFSET UNITYSDK_OFFSET(0xA296FE0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_TypeDefinitionIndex = 36951;

	class ParticleSystem : public Il2CppObject
	{
	public:
		::System::Void Emit(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Single arg, ::System::Single arg, ::UnityEngine::Color32* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::System::Single, ::UnityEngine::Color32*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMIT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Emit(Particle* arg)
		{
			((::System::Void(*)(Particle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMIT_OFFSET))(arg, nullptr);
		}

		::System::Single get_startDelay()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_STARTDELAY_OFFSET))(nullptr);
		}

		::System::Void set_startDelay(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_STARTDELAY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_loop()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_LOOP_OFFSET))(nullptr);
		}

		::System::Void set_loop(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_LOOP_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_playOnAwake()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_PLAYONAWAKE_OFFSET))(nullptr);
		}

		::System::Void set_playOnAwake(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_PLAYONAWAKE_OFFSET))(arg, nullptr);
		}

		::System::Single get_duration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Single get_playbackSpeed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_PLAYBACKSPEED_OFFSET))(nullptr);
		}

		::System::Void set_playbackSpeed(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_PLAYBACKSPEED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_enableEmission()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_ENABLEEMISSION_OFFSET))(nullptr);
		}

		::System::Void set_enableEmission(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_ENABLEEMISSION_OFFSET))(arg, nullptr);
		}

		::System::Single get_emissionRate()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_EMISSIONRATE_OFFSET))(nullptr);
		}

		::System::Void set_emissionRate(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_EMISSIONRATE_OFFSET))(arg, nullptr);
		}

		::System::Single get_startSpeed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_STARTSPEED_OFFSET))(nullptr);
		}

		::System::Void set_startSpeed(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_STARTSPEED_OFFSET))(arg, nullptr);
		}

		::System::Single get_startSize()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_STARTSIZE_OFFSET))(nullptr);
		}

		::System::Void set_startSize(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_STARTSIZE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_startColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_STARTCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_startColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_STARTCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Single get_startRotation()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_STARTROTATION_OFFSET))(nullptr);
		}

		::System::Void set_startRotation(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_STARTROTATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_startRotation3D()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_STARTROTATION3D_OFFSET))(nullptr);
		}

		::System::Void set_startRotation3D(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_STARTROTATION3D_OFFSET))(arg, nullptr);
		}

		::System::Single get_startLifetime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_STARTLIFETIME_OFFSET))(nullptr);
		}

		::System::Void set_startLifetime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_STARTLIFETIME_OFFSET))(arg, nullptr);
		}

		::System::Single get_gravityModifier()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_GRAVITYMODIFIER_OFFSET))(nullptr);
		}

		::System::Void set_gravityModifier(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_GRAVITYMODIFIER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_maxParticles()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_MAXPARTICLES_OFFSET))(nullptr);
		}

		::System::Void set_maxParticles(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_MAXPARTICLES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ParticleSystemSimulationSpace* get_simulationSpace()
		{
			return (return (::UnityEngine::ParticleSystemSimulationSpace*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_SIMULATIONSPACE_OFFSET))(nullptr);
		}

		::System::Void set_simulationSpace(::UnityEngine::ParticleSystemSimulationSpace* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystemSimulationSpace*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_SIMULATIONSPACE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ParticleSystemScalingMode* get_scalingMode()
		{
			return (return (::UnityEngine::ParticleSystemScalingMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_SCALINGMODE_OFFSET))(nullptr);
		}

		::System::Void set_scalingMode(::UnityEngine::ParticleSystemScalingMode* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystemScalingMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_SCALINGMODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_automaticCullingEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_AUTOMATICCULLINGENABLED_OFFSET))(nullptr);
		}

		::System::Boolean get_isPlaying()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Boolean get_isEmitting()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_ISEMITTING_OFFSET))(nullptr);
		}

		::System::Boolean get_isStopped()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_ISSTOPPED_OFFSET))(nullptr);
		}

		::System::Boolean get_isPaused()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_ISPAUSED_OFFSET))(nullptr);
		}

		::System::Int32 get_particleCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_PARTICLECOUNT_OFFSET))(nullptr);
		}

		::System::Single get_time()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_TIME_OFFSET))(nullptr);
		}

		::System::Void set_time(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_TIME_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_randomSeed()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_RANDOMSEED_OFFSET))(nullptr);
		}

		::System::Void set_randomSeed(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_RANDOMSEED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_useAutoRandomSeed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_USEAUTORANDOMSEED_OFFSET))(nullptr);
		}

		::System::Void set_useAutoRandomSeed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_USEAUTORANDOMSEED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_proceduralSimulationSupported()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_PROCEDURALSIMULATIONSUPPORTED_OFFSET))(nullptr);
		}

		::System::Single GetParticleCurrentSize(Particle&* arg)
		{
			return (return (::System::Single(*)(Particle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLECURRENTSIZE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* GetParticleCurrentSize3D(Particle&* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(Particle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLECURRENTSIZE3D_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color32* GetParticleCurrentColor(Particle&* arg)
		{
			return (return (::UnityEngine::Color32*(*)(Particle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLECURRENTCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetParticleMeshIndex(Particle&* arg)
		{
			return (return (::System::Int32(*)(Particle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLEMESHINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void SetParticles(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetParticles(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetParticles(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_OFFSET))(arg, nullptr);
		}

		::System::Void SetParticlesWithNativeArray(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETPARTICLESWITHNATIVEARRAY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetParticles(Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetParticles(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetParticles(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetParticles(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetParticles(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetParticles(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetParticlesWithNativeArray(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLESWITHNATIVEARRAY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetParticles(Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetParticles(Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetParticles(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_OFFSET))(arg, nullptr);
		}

		::System::Void SetCustomParticleData(Il2CppObject* arg, ::UnityEngine::ParticleSystemCustomData* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::ParticleSystemCustomData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETCUSTOMPARTICLEDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetCustomParticleData(Il2CppObject* arg, ::UnityEngine::ParticleSystemCustomData* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::UnityEngine::ParticleSystemCustomData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETCUSTOMPARTICLEDATA_OFFSET))(arg, arg, nullptr);
		}

		PlaybackState* GetPlaybackState()
		{
			return (return (PlaybackState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPLAYBACKSTATE_OFFSET))(nullptr);
		}

		::System::Void SetPlaybackState(PlaybackState* arg)
		{
			((::System::Void(*)(PlaybackState*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETPLAYBACKSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void GetTrailDataInternal(Trails&* arg)
		{
			((::System::Void(*)(Trails&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETTRAILDATAINTERNAL_OFFSET))(arg, nullptr);
		}

		Trails* GetTrails()
		{
			return (return (Trails*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETTRAILS_OFFSET))(nullptr);
		}

		::System::Int32 GetTrails(Trails&* arg)
		{
			return (return (::System::Int32(*)(Trails&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETTRAILS_OFFSET))(arg, nullptr);
		}

		::System::Void SetTrails(Trails* arg)
		{
			((::System::Void(*)(Trails*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETTRAILS_OFFSET))(arg, nullptr);
		}

		::System::Void Simulate(::System::Single arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIMULATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Simulate(::System::Single arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIMULATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Simulate(::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIMULATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Simulate(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIMULATE_OFFSET))(arg, nullptr);
		}

		::System::Void Play(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PLAY_OFFSET))(arg, nullptr);
		}

		::System::Void Play()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PLAY_OFFSET))(nullptr);
		}

		::System::Void Pause(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PAUSE_OFFSET))(arg, nullptr);
		}

		::System::Void Pause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PAUSE_OFFSET))(nullptr);
		}

		::System::Void Stop(::System::Boolean arg, ::UnityEngine::ParticleSystemStopBehavior* arg)
		{
			((::System::Void(*)(::System::Boolean, ::UnityEngine::ParticleSystemStopBehavior*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_STOP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Stop(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_STOP_OFFSET))(arg, nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_STOP_OFFSET))(nullptr);
		}

		::System::Void Clear(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CLEAR_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean IsAlive(::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ISALIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsAlive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ISALIVE_OFFSET))(nullptr);
		}

		::System::Void Emit(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMIT_OFFSET))(arg, nullptr);
		}

		::System::Void Emit_Internal(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMIT_INTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void Emit(EmitParams* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(EmitParams*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EmitOld_Internal(Particle&* arg)
		{
			((::System::Void(*)(Particle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITOLD_INTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void TriggerSubEmitter(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERSUBEMITTER_OFFSET))(arg, nullptr);
		}

		::System::Void TriggerSubEmitter(::System::Int32 arg, Particle&* arg)
		{
			((::System::Void(*)(::System::Int32, Particle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERSUBEMITTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void TriggerSubEmitterForParticle(::System::Int32 arg, Particle* arg)
		{
			((::System::Void(*)(::System::Int32, Particle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERSUBEMITTERFORPARTICLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void TriggerSubEmitter(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERSUBEMITTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ResetPreMappedBufferMemory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_RESETPREMAPPEDBUFFERMEMORY_OFFSET))(nullptr);
		}

		::System::Void SetMaximumPreMappedBufferCounts(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETMAXIMUMPREMAPPEDBUFFERCOUNTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AllocateAxisOfRotationAttribute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ALLOCATEAXISOFROTATIONATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void AllocateMeshIndexAttribute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ALLOCATEMESHINDEXATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void AllocateCustomDataAttribute(::UnityEngine::ParticleSystemCustomData* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystemCustomData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ALLOCATECUSTOMDATAATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Object** GetManagedJobData()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETMANAGEDJOBDATA_OFFSET))(nullptr);
		}

		::Unity::Jobs::JobHandle* GetManagedJobHandle()
		{
			return (return (::Unity::Jobs::JobHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETMANAGEDJOBHANDLE_OFFSET))(nullptr);
		}

		::System::Void SetManagedJobHandle(::Unity::Jobs::JobHandle* arg)
		{
			((::System::Void(*)(::Unity::Jobs::JobHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETMANAGEDJOBHANDLE_OFFSET))(arg, nullptr);
		}

		::Unity::Jobs::JobHandle* ScheduleManagedJob(JobScheduleParameters&* arg, ::System::Object** arg)
		{
			return (return (::Unity::Jobs::JobHandle*(*)(JobScheduleParameters&*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SCHEDULEMANAGEDJOB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CopyManagedJobData(::System::Object** arg, ::UnityEngine::ParticleSystemJobs::NativeParticleData&* arg)
		{
			((::System::Void(*)(::System::Object**, ::UnityEngine::ParticleSystemJobs::NativeParticleData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COPYMANAGEDJOBDATA_OFFSET))(arg, arg, nullptr);
		}

		MainModule* get_main()
		{
			return (return (MainModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_MAIN_OFFSET))(nullptr);
		}

		EmissionModule* get_emission()
		{
			return (return (EmissionModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_EMISSION_OFFSET))(nullptr);
		}

		ShapeModule* get_shape()
		{
			return (return (ShapeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_SHAPE_OFFSET))(nullptr);
		}

		VelocityOverLifetimeModule* get_velocityOverLifetime()
		{
			return (return (VelocityOverLifetimeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_VELOCITYOVERLIFETIME_OFFSET))(nullptr);
		}

		LimitVelocityOverLifetimeModule* get_limitVelocityOverLifetime()
		{
			return (return (LimitVelocityOverLifetimeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_LIMITVELOCITYOVERLIFETIME_OFFSET))(nullptr);
		}

		InheritVelocityModule* get_inheritVelocity()
		{
			return (return (InheritVelocityModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_INHERITVELOCITY_OFFSET))(nullptr);
		}

		LifetimeByEmitterSpeedModule* get_lifetimeByEmitterSpeed()
		{
			return (return (LifetimeByEmitterSpeedModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_LIFETIMEBYEMITTERSPEED_OFFSET))(nullptr);
		}

		ForceOverLifetimeModule* get_forceOverLifetime()
		{
			return (return (ForceOverLifetimeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_FORCEOVERLIFETIME_OFFSET))(nullptr);
		}

		ColorOverLifetimeModule* get_colorOverLifetime()
		{
			return (return (ColorOverLifetimeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_COLOROVERLIFETIME_OFFSET))(nullptr);
		}

		ColorBySpeedModule* get_colorBySpeed()
		{
			return (return (ColorBySpeedModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_COLORBYSPEED_OFFSET))(nullptr);
		}

		SizeOverLifetimeModule* get_sizeOverLifetime()
		{
			return (return (SizeOverLifetimeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_SIZEOVERLIFETIME_OFFSET))(nullptr);
		}

		SizeBySpeedModule* get_sizeBySpeed()
		{
			return (return (SizeBySpeedModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_SIZEBYSPEED_OFFSET))(nullptr);
		}

		RotationOverLifetimeModule* get_rotationOverLifetime()
		{
			return (return (RotationOverLifetimeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_ROTATIONOVERLIFETIME_OFFSET))(nullptr);
		}

		RotationBySpeedModule* get_rotationBySpeed()
		{
			return (return (RotationBySpeedModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_ROTATIONBYSPEED_OFFSET))(nullptr);
		}

		ExternalForcesModule* get_externalForces()
		{
			return (return (ExternalForcesModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_EXTERNALFORCES_OFFSET))(nullptr);
		}

		NoiseModule* get_noise()
		{
			return (return (NoiseModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_NOISE_OFFSET))(nullptr);
		}

		CollisionModule* get_collision()
		{
			return (return (CollisionModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_COLLISION_OFFSET))(nullptr);
		}

		TriggerModule* get_trigger()
		{
			return (return (TriggerModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_TRIGGER_OFFSET))(nullptr);
		}

		SubEmittersModule* get_subEmitters()
		{
			return (return (SubEmittersModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_SUBEMITTERS_OFFSET))(nullptr);
		}

		TextureSheetAnimationModule* get_textureSheetAnimation()
		{
			return (return (TextureSheetAnimationModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_TEXTURESHEETANIMATION_OFFSET))(nullptr);
		}

		LightsModule* get_lights()
		{
			return (return (LightsModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_LIGHTS_OFFSET))(nullptr);
		}

		TrailModule* get_trails()
		{
			return (return (TrailModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_TRAILS_OFFSET))(nullptr);
		}

		CustomDataModule* get_customData()
		{
			return (return (CustomDataModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_CUSTOMDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void GetParticleCurrentSize3D_Injected(Particle&* arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(Particle&*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLECURRENTSIZE3D_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetParticleCurrentColor_Injected(Particle&* arg, ::UnityEngine::Color32&* arg)
		{
			((::System::Void(*)(Particle&*, ::UnityEngine::Color32&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLECURRENTCOLOR_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetPlaybackState_Injected(PlaybackState&* arg)
		{
			((::System::Void(*)(PlaybackState&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPLAYBACKSTATE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetPlaybackState_Injected(PlaybackState&* arg)
		{
			((::System::Void(*)(PlaybackState&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETPLAYBACKSTATE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetTrails_Injected(Trails&* arg)
		{
			((::System::Void(*)(Trails&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETTRAILS_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void Emit_Injected(EmitParams&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(EmitParams&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMIT_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void TriggerSubEmitterForParticle_Injected(::System::Int32 arg, Particle&* arg)
		{
			((::System::Void(*)(::System::Int32, Particle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERSUBEMITTERFORPARTICLE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetManagedJobHandle_Injected(::Unity::Jobs::JobHandle&* arg)
		{
			((::System::Void(*)(::Unity::Jobs::JobHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETMANAGEDJOBHANDLE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetManagedJobHandle_Injected(::Unity::Jobs::JobHandle&* arg)
		{
			((::System::Void(*)(::Unity::Jobs::JobHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETMANAGEDJOBHANDLE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void ScheduleManagedJob_Injected(JobScheduleParameters&* arg, ::System::Object** arg, ::Unity::Jobs::JobHandle&* arg)
		{
			((::System::Void(*)(JobScheduleParameters&*, ::System::Object**, ::Unity::Jobs::JobHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SCHEDULEMANAGEDJOB_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

