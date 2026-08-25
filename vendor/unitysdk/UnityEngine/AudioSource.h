#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AudioSource; }
namespace UnityEngine { class AudioClip; }
namespace UnityEngine { class AudioSourceCurveType; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class FFTWindow; }
namespace UnityEngine::Audio { class AudioMixerGroup; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class AudioVelocityUpdateMode; }
namespace UnityEngine { class AudioRolloffMode; }

#define UNITYENGINE_AUDIOSOURCE_GETPITCH_OFFSET UNITYSDK_OFFSET(0xA1DBE50)
#define UNITYENGINE_AUDIOSOURCE_SETPITCH_OFFSET UNITYSDK_OFFSET(0xA1DBE90)
#define UNITYENGINE_AUDIOSOURCE_PLAYHELPER_OFFSET UNITYSDK_OFFSET(0xA1DBEE0)
#define UNITYENGINE_AUDIOSOURCE_PLAY_OFFSET UNITYSDK_OFFSET(0xA1DBF20)
#define UNITYENGINE_AUDIOSOURCE_PLAYONESHOTHELPER_OFFSET UNITYSDK_OFFSET(0xA1DBF70)
#define UNITYENGINE_AUDIOSOURCE_STOP_OFFSET UNITYSDK_OFFSET(0xA1DBFC0)
#define UNITYENGINE_AUDIOSOURCE_SETCUSTOMCURVEHELPER_OFFSET UNITYSDK_OFFSET(0xA1DC000)
#define UNITYENGINE_AUDIOSOURCE_GETCUSTOMCURVEHELPER_OFFSET UNITYSDK_OFFSET(0xA1DC050)
#define UNITYENGINE_AUDIOSOURCE_GETOUTPUTDATAHELPER_OFFSET UNITYSDK_OFFSET(0xA1DC090)
#define UNITYENGINE_AUDIOSOURCE_GETSPECTRUMDATAHELPER_OFFSET UNITYSDK_OFFSET(0xA1DC0E0)
#define UNITYENGINE_AUDIOSOURCE_GET_VOLUME_OFFSET UNITYSDK_OFFSET(0xA1DC130)
#define UNITYENGINE_AUDIOSOURCE_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0xA1DC170)
#define UNITYENGINE_AUDIOSOURCE_GET_PITCH_OFFSET UNITYSDK_OFFSET(0xA1DC1C0)
#define UNITYENGINE_AUDIOSOURCE_SET_PITCH_OFFSET UNITYSDK_OFFSET(0xA1DC200)
#define UNITYENGINE_AUDIOSOURCE_GET_TIME_OFFSET UNITYSDK_OFFSET(0xA1DC250)
#define UNITYENGINE_AUDIOSOURCE_SET_TIME_OFFSET UNITYSDK_OFFSET(0xA1DC290)
#define UNITYENGINE_AUDIOSOURCE_GET_TIMESAMPLES_OFFSET UNITYSDK_OFFSET(0xA1DC2E0)
#define UNITYENGINE_AUDIOSOURCE_SET_TIMESAMPLES_OFFSET UNITYSDK_OFFSET(0xA1DC320)
#define UNITYENGINE_AUDIOSOURCE_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xA1DC360)
#define UNITYENGINE_AUDIOSOURCE_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xA1DC3A0)
#define UNITYENGINE_AUDIOSOURCE_GET_OUTPUTAUDIOMIXERGROUP_OFFSET UNITYSDK_OFFSET(0xA1DC3E0)
#define UNITYENGINE_AUDIOSOURCE_SET_OUTPUTAUDIOMIXERGROUP_OFFSET UNITYSDK_OFFSET(0xA1DC420)
#define UNITYENGINE_AUDIOSOURCE_PLAY_OFFSET UNITYSDK_OFFSET(0xA1DC460)
#define UNITYENGINE_AUDIOSOURCE_PLAY_OFFSET UNITYSDK_OFFSET(0xA1DC4A0)
#define UNITYENGINE_AUDIOSOURCE_PLAYDELAYED_OFFSET UNITYSDK_OFFSET(0xA1DC4E0)
#define UNITYENGINE_AUDIOSOURCE_PLAYSCHEDULED_OFFSET UNITYSDK_OFFSET(0xA1DC550)
#define UNITYENGINE_AUDIOSOURCE_PLAYONESHOT_OFFSET UNITYSDK_OFFSET(0xA1DC5B0)
#define UNITYENGINE_AUDIOSOURCE_PLAYONESHOT_OFFSET UNITYSDK_OFFSET(0xA1DC5C0)
#define UNITYENGINE_AUDIOSOURCE_SETSCHEDULEDSTARTTIME_OFFSET UNITYSDK_OFFSET(0xA1DC6A0)
#define UNITYENGINE_AUDIOSOURCE_SETSCHEDULEDENDTIME_OFFSET UNITYSDK_OFFSET(0xA1DC6F0)
#define UNITYENGINE_AUDIOSOURCE_STOP_OFFSET UNITYSDK_OFFSET(0xA1DC740)
#define UNITYENGINE_AUDIOSOURCE_PAUSE_OFFSET UNITYSDK_OFFSET(0xA1DC780)
#define UNITYENGINE_AUDIOSOURCE_UNPAUSE_OFFSET UNITYSDK_OFFSET(0xA1DC7C0)
#define UNITYENGINE_AUDIOSOURCE_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xA1DC800)
#define UNITYENGINE_AUDIOSOURCE_GET_ISVIRTUAL_OFFSET UNITYSDK_OFFSET(0xA1DC840)
#define UNITYENGINE_AUDIOSOURCE_PLAYCLIPATPOINT_OFFSET UNITYSDK_OFFSET(0xA1DC880)
#define UNITYENGINE_AUDIOSOURCE_PLAYCLIPATPOINT_OFFSET UNITYSDK_OFFSET(0xA1DC8B0)
#define UNITYENGINE_AUDIOSOURCE_GET_LOOP_OFFSET UNITYSDK_OFFSET(0xA1DCB90)
#define UNITYENGINE_AUDIOSOURCE_SET_LOOP_OFFSET UNITYSDK_OFFSET(0xA1DCBD0)
#define UNITYENGINE_AUDIOSOURCE_GET_IGNORELISTENERVOLUME_OFFSET UNITYSDK_OFFSET(0xA1DCC10)
#define UNITYENGINE_AUDIOSOURCE_SET_IGNORELISTENERVOLUME_OFFSET UNITYSDK_OFFSET(0xA1DCC50)
#define UNITYENGINE_AUDIOSOURCE_GET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0xA1DCC90)
#define UNITYENGINE_AUDIOSOURCE_SET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0xA1DCCD0)
#define UNITYENGINE_AUDIOSOURCE_GET_IGNORELISTENERPAUSE_OFFSET UNITYSDK_OFFSET(0xA1DCD10)
#define UNITYENGINE_AUDIOSOURCE_SET_IGNORELISTENERPAUSE_OFFSET UNITYSDK_OFFSET(0xA1DCD50)
#define UNITYENGINE_AUDIOSOURCE_GET_VELOCITYUPDATEMODE_OFFSET UNITYSDK_OFFSET(0xA1DCD90)
#define UNITYENGINE_AUDIOSOURCE_SET_VELOCITYUPDATEMODE_OFFSET UNITYSDK_OFFSET(0xA1DCDD0)
#define UNITYENGINE_AUDIOSOURCE_GET_PANSTEREO_OFFSET UNITYSDK_OFFSET(0xA1DCE10)
#define UNITYENGINE_AUDIOSOURCE_SET_PANSTEREO_OFFSET UNITYSDK_OFFSET(0xA1DCE50)
#define UNITYENGINE_AUDIOSOURCE_GET_SPATIALBLEND_OFFSET UNITYSDK_OFFSET(0xA1DCEA0)
#define UNITYENGINE_AUDIOSOURCE_SET_SPATIALBLEND_OFFSET UNITYSDK_OFFSET(0xA1DCB40)
#define UNITYENGINE_AUDIOSOURCE_GET_SPATIALIZE_OFFSET UNITYSDK_OFFSET(0xA1DCEE0)
#define UNITYENGINE_AUDIOSOURCE_SET_SPATIALIZE_OFFSET UNITYSDK_OFFSET(0xA1DCF20)
#define UNITYENGINE_AUDIOSOURCE_GET_SPATIALIZEPOSTEFFECTS_OFFSET UNITYSDK_OFFSET(0xA1DCF60)
#define UNITYENGINE_AUDIOSOURCE_SET_SPATIALIZEPOSTEFFECTS_OFFSET UNITYSDK_OFFSET(0xA1DCFA0)
#define UNITYENGINE_AUDIOSOURCE_SETCUSTOMCURVE_OFFSET UNITYSDK_OFFSET(0xA1DCFE0)
#define UNITYENGINE_AUDIOSOURCE_GETCUSTOMCURVE_OFFSET UNITYSDK_OFFSET(0xA1DD030)
#define UNITYENGINE_AUDIOSOURCE_GET_REVERBZONEMIX_OFFSET UNITYSDK_OFFSET(0xA1DD070)
#define UNITYENGINE_AUDIOSOURCE_SET_REVERBZONEMIX_OFFSET UNITYSDK_OFFSET(0xA1DD0B0)
#define UNITYENGINE_AUDIOSOURCE_GET_BYPASSEFFECTS_OFFSET UNITYSDK_OFFSET(0xA1DD100)
#define UNITYENGINE_AUDIOSOURCE_SET_BYPASSEFFECTS_OFFSET UNITYSDK_OFFSET(0xA1DD140)
#define UNITYENGINE_AUDIOSOURCE_GET_BYPASSLISTENEREFFECTS_OFFSET UNITYSDK_OFFSET(0xA1DD180)
#define UNITYENGINE_AUDIOSOURCE_SET_BYPASSLISTENEREFFECTS_OFFSET UNITYSDK_OFFSET(0xA1DD1C0)
#define UNITYENGINE_AUDIOSOURCE_GET_BYPASSREVERBZONES_OFFSET UNITYSDK_OFFSET(0xA1DD200)
#define UNITYENGINE_AUDIOSOURCE_SET_BYPASSREVERBZONES_OFFSET UNITYSDK_OFFSET(0xA1DD240)
#define UNITYENGINE_AUDIOSOURCE_GET_DOPPLERLEVEL_OFFSET UNITYSDK_OFFSET(0xA1DD280)
#define UNITYENGINE_AUDIOSOURCE_SET_DOPPLERLEVEL_OFFSET UNITYSDK_OFFSET(0xA1DD2C0)
#define UNITYENGINE_AUDIOSOURCE_GET_SPREAD_OFFSET UNITYSDK_OFFSET(0xA1DD310)
#define UNITYENGINE_AUDIOSOURCE_SET_SPREAD_OFFSET UNITYSDK_OFFSET(0xA1DD350)
#define UNITYENGINE_AUDIOSOURCE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xA1DD3A0)
#define UNITYENGINE_AUDIOSOURCE_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xA1DD3E0)
#define UNITYENGINE_AUDIOSOURCE_GET_MUTE_OFFSET UNITYSDK_OFFSET(0xA1DD420)
#define UNITYENGINE_AUDIOSOURCE_SET_MUTE_OFFSET UNITYSDK_OFFSET(0xA1DD460)
#define UNITYENGINE_AUDIOSOURCE_GET_MINDISTANCE_OFFSET UNITYSDK_OFFSET(0xA1DD4A0)
#define UNITYENGINE_AUDIOSOURCE_SET_MINDISTANCE_OFFSET UNITYSDK_OFFSET(0xA1DD4E0)
#define UNITYENGINE_AUDIOSOURCE_GET_MAXDISTANCE_OFFSET UNITYSDK_OFFSET(0xA1DD530)
#define UNITYENGINE_AUDIOSOURCE_SET_MAXDISTANCE_OFFSET UNITYSDK_OFFSET(0xA1DD570)
#define UNITYENGINE_AUDIOSOURCE_GET_ROLLOFFMODE_OFFSET UNITYSDK_OFFSET(0xA1DD5C0)
#define UNITYENGINE_AUDIOSOURCE_SET_ROLLOFFMODE_OFFSET UNITYSDK_OFFSET(0xA1DD600)
#define UNITYENGINE_AUDIOSOURCE_GETOUTPUTDATA_OFFSET UNITYSDK_OFFSET(0xA1DD640)
#define UNITYENGINE_AUDIOSOURCE_GETOUTPUTDATA_OFFSET UNITYSDK_OFFSET(0xA1DD6C0)
#define UNITYENGINE_AUDIOSOURCE_GETSPECTRUMDATA_OFFSET UNITYSDK_OFFSET(0xA1DD710)
#define UNITYENGINE_AUDIOSOURCE_GETSPECTRUMDATA_OFFSET UNITYSDK_OFFSET(0xA1DD790)
#define UNITYENGINE_AUDIOSOURCE_GET_MINVOLUME_OFFSET UNITYSDK_OFFSET(0xA1DD7E0)
#define UNITYENGINE_AUDIOSOURCE_SET_MINVOLUME_OFFSET UNITYSDK_OFFSET(0xA1DD840)
#define UNITYENGINE_AUDIOSOURCE_GET_MAXVOLUME_OFFSET UNITYSDK_OFFSET(0xA1DD8A0)
#define UNITYENGINE_AUDIOSOURCE_SET_MAXVOLUME_OFFSET UNITYSDK_OFFSET(0xA1DD900)
#define UNITYENGINE_AUDIOSOURCE_GET_ROLLOFFFACTOR_OFFSET UNITYSDK_OFFSET(0xA1DD960)
#define UNITYENGINE_AUDIOSOURCE_SET_ROLLOFFFACTOR_OFFSET UNITYSDK_OFFSET(0xA1DD9C0)
#define UNITYENGINE_AUDIOSOURCE_SETSPATIALIZERFLOAT_OFFSET UNITYSDK_OFFSET(0xA1DDA20)
#define UNITYENGINE_AUDIOSOURCE_GETSPATIALIZERFLOAT_OFFSET UNITYSDK_OFFSET(0xA1DDA70)
#define UNITYENGINE_AUDIOSOURCE_GETAMBISONICDECODERFLOAT_OFFSET UNITYSDK_OFFSET(0xA1DDAC0)
#define UNITYENGINE_AUDIOSOURCE_SETAMBISONICDECODERFLOAT_OFFSET UNITYSDK_OFFSET(0xA1DDB10)
#define UNITYENGINE_AUDIOSOURCE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1DDB60)

namespace UnityEngine
{
	inline static constexpr unsigned int AudioSource_TypeDefinitionIndex = 37472;

	class AudioSource : public ::UnityEngine::TextCore::Glyph
	{
	public:
		::System::Single GetPitch(::UnityEngine::AudioSource* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::AudioSource*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GETPITCH_OFFSET))(arg, nullptr);
		}

		::System::Void SetPitch(::UnityEngine::AudioSource* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::AudioSource*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SETPITCH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PlayHelper(::UnityEngine::AudioSource* arg, ::System::UInt64 arg)
		{
			((::System::Void(*)(::UnityEngine::AudioSource*, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_PLAYHELPER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Play(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_PLAY_OFFSET))(arg, nullptr);
		}

		::System::Void PlayOneShotHelper(::UnityEngine::AudioSource* arg, ::UnityEngine::AudioClip* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::AudioSource*, ::UnityEngine::AudioClip*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_PLAYONESHOTHELPER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Stop(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_STOP_OFFSET))(arg, nullptr);
		}

		::System::Void SetCustomCurveHelper(::UnityEngine::AudioSource* arg, ::UnityEngine::AudioSourceCurveType* arg, ::UnityEngine::AnimationCurve* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioSource*, ::UnityEngine::AudioSourceCurveType*, ::UnityEngine::AnimationCurve*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SETCUSTOMCURVEHELPER_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::AnimationCurve* GetCustomCurveHelper(::UnityEngine::AudioSource* arg, ::UnityEngine::AudioSourceCurveType* arg)
		{
			return (return (::UnityEngine::AnimationCurve*(*)(::UnityEngine::AudioSource*, ::UnityEngine::AudioSourceCurveType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GETCUSTOMCURVEHELPER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetOutputDataHelper(::UnityEngine::AudioSource* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::AudioSource*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GETOUTPUTDATAHELPER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetSpectrumDataHelper(::UnityEngine::AudioSource* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::UnityEngine::FFTWindow* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioSource*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::UnityEngine::FFTWindow*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GETSPECTRUMDATAHELPER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Single get_volume()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_VOLUME_OFFSET))(nullptr);
		}

		::System::Void set_volume(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_VOLUME_OFFSET))(arg, nullptr);
		}

		::System::Single get_pitch()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_PITCH_OFFSET))(nullptr);
		}

		::System::Void set_pitch(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_PITCH_OFFSET))(arg, nullptr);
		}

		::System::Single get_time()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_TIME_OFFSET))(nullptr);
		}

		::System::Void set_time(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_TIME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_timeSamples()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_TIMESAMPLES_OFFSET))(nullptr);
		}

		::System::Void set_timeSamples(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_TIMESAMPLES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AudioClip* get_clip()
		{
			return (return (::UnityEngine::AudioClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_CLIP_OFFSET))(nullptr);
		}

		::System::Void set_clip(::UnityEngine::AudioClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_CLIP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Audio::AudioMixerGroup* get_outputAudioMixerGroup()
		{
			return (return (::UnityEngine::Audio::AudioMixerGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_OUTPUTAUDIOMIXERGROUP_OFFSET))(nullptr);
		}

		::System::Void set_outputAudioMixerGroup(::UnityEngine::Audio::AudioMixerGroup* arg)
		{
			((::System::Void(*)(::UnityEngine::Audio::AudioMixerGroup*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_OUTPUTAUDIOMIXERGROUP_OFFSET))(arg, nullptr);
		}

		::System::Void Play()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_PLAY_OFFSET))(nullptr);
		}

		::System::Void Play(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_PLAY_OFFSET))(arg, nullptr);
		}

		::System::Void PlayDelayed(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_PLAYDELAYED_OFFSET))(arg, nullptr);
		}

		::System::Void PlayScheduled(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_PLAYSCHEDULED_OFFSET))(arg, nullptr);
		}

		::System::Void PlayOneShot(::UnityEngine::AudioClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_PLAYONESHOT_OFFSET))(arg, nullptr);
		}

		::System::Void PlayOneShot(::UnityEngine::AudioClip* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::AudioClip*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_PLAYONESHOT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetScheduledStartTime(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SETSCHEDULEDSTARTTIME_OFFSET))(arg, nullptr);
		}

		::System::Void SetScheduledEndTime(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SETSCHEDULEDENDTIME_OFFSET))(arg, nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_STOP_OFFSET))(nullptr);
		}

		::System::Void Pause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_PAUSE_OFFSET))(nullptr);
		}

		::System::Void UnPause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_UNPAUSE_OFFSET))(nullptr);
		}

		::System::Boolean get_isPlaying()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Boolean get_isVirtual()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_ISVIRTUAL_OFFSET))(nullptr);
		}

		::System::Void PlayClipAtPoint(::UnityEngine::AudioClip* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioClip*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_PLAYCLIPATPOINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PlayClipAtPoint(::UnityEngine::AudioClip* arg, ::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::AudioClip*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_PLAYCLIPATPOINT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_loop()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_LOOP_OFFSET))(nullptr);
		}

		::System::Void set_loop(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_LOOP_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ignoreListenerVolume()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_IGNORELISTENERVOLUME_OFFSET))(nullptr);
		}

		::System::Void set_ignoreListenerVolume(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_IGNORELISTENERVOLUME_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_playOnAwake()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_PLAYONAWAKE_OFFSET))(nullptr);
		}

		::System::Void set_playOnAwake(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_PLAYONAWAKE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ignoreListenerPause()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_IGNORELISTENERPAUSE_OFFSET))(nullptr);
		}

		::System::Void set_ignoreListenerPause(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_IGNORELISTENERPAUSE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AudioVelocityUpdateMode* get_velocityUpdateMode()
		{
			return (return (::UnityEngine::AudioVelocityUpdateMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_VELOCITYUPDATEMODE_OFFSET))(nullptr);
		}

		::System::Void set_velocityUpdateMode(::UnityEngine::AudioVelocityUpdateMode* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioVelocityUpdateMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_VELOCITYUPDATEMODE_OFFSET))(arg, nullptr);
		}

		::System::Single get_panStereo()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_PANSTEREO_OFFSET))(nullptr);
		}

		::System::Void set_panStereo(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_PANSTEREO_OFFSET))(arg, nullptr);
		}

		::System::Single get_spatialBlend()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_SPATIALBLEND_OFFSET))(nullptr);
		}

		::System::Void set_spatialBlend(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_SPATIALBLEND_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_spatialize()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_SPATIALIZE_OFFSET))(nullptr);
		}

		::System::Void set_spatialize(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_SPATIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_spatializePostEffects()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_SPATIALIZEPOSTEFFECTS_OFFSET))(nullptr);
		}

		::System::Void set_spatializePostEffects(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_SPATIALIZEPOSTEFFECTS_OFFSET))(arg, nullptr);
		}

		::System::Void SetCustomCurve(::UnityEngine::AudioSourceCurveType* arg, ::UnityEngine::AnimationCurve* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioSourceCurveType*, ::UnityEngine::AnimationCurve*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SETCUSTOMCURVE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::AnimationCurve* GetCustomCurve(::UnityEngine::AudioSourceCurveType* arg)
		{
			return (return (::UnityEngine::AnimationCurve*(*)(::UnityEngine::AudioSourceCurveType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GETCUSTOMCURVE_OFFSET))(arg, nullptr);
		}

		::System::Single get_reverbZoneMix()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_REVERBZONEMIX_OFFSET))(nullptr);
		}

		::System::Void set_reverbZoneMix(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_REVERBZONEMIX_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_bypassEffects()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_BYPASSEFFECTS_OFFSET))(nullptr);
		}

		::System::Void set_bypassEffects(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_BYPASSEFFECTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_bypassListenerEffects()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_BYPASSLISTENEREFFECTS_OFFSET))(nullptr);
		}

		::System::Void set_bypassListenerEffects(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_BYPASSLISTENEREFFECTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_bypassReverbZones()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_BYPASSREVERBZONES_OFFSET))(nullptr);
		}

		::System::Void set_bypassReverbZones(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_BYPASSREVERBZONES_OFFSET))(arg, nullptr);
		}

		::System::Single get_dopplerLevel()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_DOPPLERLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_dopplerLevel(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_DOPPLERLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Single get_spread()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_SPREAD_OFFSET))(nullptr);
		}

		::System::Void set_spread(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_SPREAD_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_priority()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_PRIORITY_OFFSET))(nullptr);
		}

		::System::Void set_priority(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_PRIORITY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_mute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_MUTE_OFFSET))(nullptr);
		}

		::System::Void set_mute(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_MUTE_OFFSET))(arg, nullptr);
		}

		::System::Single get_minDistance()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_MINDISTANCE_OFFSET))(nullptr);
		}

		::System::Void set_minDistance(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_MINDISTANCE_OFFSET))(arg, nullptr);
		}

		::System::Single get_maxDistance()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_MAXDISTANCE_OFFSET))(nullptr);
		}

		::System::Void set_maxDistance(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_MAXDISTANCE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AudioRolloffMode* get_rolloffMode()
		{
			return (return (::UnityEngine::AudioRolloffMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_ROLLOFFMODE_OFFSET))(nullptr);
		}

		::System::Void set_rolloffMode(::UnityEngine::AudioRolloffMode* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioRolloffMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_ROLLOFFMODE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetOutputData(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GETOUTPUTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetOutputData(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GETOUTPUTDATA_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSpectrumData(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::FFTWindow* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::System::Int32, ::UnityEngine::FFTWindow*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GETSPECTRUMDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetSpectrumData(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::UnityEngine::FFTWindow* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::UnityEngine::FFTWindow*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GETSPECTRUMDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single get_minVolume()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_MINVOLUME_OFFSET))(nullptr);
		}

		::System::Void set_minVolume(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_MINVOLUME_OFFSET))(arg, nullptr);
		}

		::System::Single get_maxVolume()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_MAXVOLUME_OFFSET))(nullptr);
		}

		::System::Void set_maxVolume(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_MAXVOLUME_OFFSET))(arg, nullptr);
		}

		::System::Single get_rolloffFactor()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GET_ROLLOFFFACTOR_OFFSET))(nullptr);
		}

		::System::Void set_rolloffFactor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SET_ROLLOFFFACTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean SetSpatializerFloat(::System::Int32 arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SETSPATIALIZERFLOAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean GetSpatializerFloat(::System::Int32 arg, float&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, float&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GETSPATIALIZERFLOAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean GetAmbisonicDecoderFloat(::System::Int32 arg, float&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, float&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_GETAMBISONICDECODERFLOAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SetAmbisonicDecoderFloat(::System::Int32 arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_SETAMBISONICDECODERFLOAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSOURCE_.CTOR_OFFSET))(nullptr);
		}

	};
}

