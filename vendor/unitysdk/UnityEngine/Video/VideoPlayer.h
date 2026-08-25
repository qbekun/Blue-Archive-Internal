#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Video { class VideoSource; }
namespace UnityEngine::Video { class VideoClip; }
namespace UnityEngine::Video { class VideoRenderMode; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Video { class VideoAspectRatio; }
namespace UnityEngine::Video { class Video3DLayout; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Video { class VideoTimeSource; }
namespace UnityEngine::Video { class VideoTimeReference; }
namespace UnityEngine::Video { class VideoAudioOutputMode; }
namespace UnityEngine { class AudioSource; }
namespace UnityEngine::Video { class VideoPlayer; }

#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0xA4A8A10)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0xA4A8A50)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_URL_OFFSET UNITYSDK_OFFSET(0xA4A8A90)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_URL_OFFSET UNITYSDK_OFFSET(0xA4A8AD0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xA4A8B10)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xA4A8B50)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0xA4A8B90)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0xA4A8BD0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETCAMERA_OFFSET UNITYSDK_OFFSET(0xA4A8C10)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETCAMERA_OFFSET UNITYSDK_OFFSET(0xA4A8C50)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0xA4A8C90)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0xA4A8CD0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETMATERIALRENDERER_OFFSET UNITYSDK_OFFSET(0xA4A8D10)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETMATERIALRENDERER_OFFSET UNITYSDK_OFFSET(0xA4A8D50)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETMATERIALPROPERTY_OFFSET UNITYSDK_OFFSET(0xA4A8D90)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETMATERIALPROPERTY_OFFSET UNITYSDK_OFFSET(0xA4A8DD0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_ASPECTRATIO_OFFSET UNITYSDK_OFFSET(0xA4A8E10)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_ASPECTRATIO_OFFSET UNITYSDK_OFFSET(0xA4A8E50)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETCAMERAALPHA_OFFSET UNITYSDK_OFFSET(0xA4A8E90)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETCAMERAALPHA_OFFSET UNITYSDK_OFFSET(0xA4A8ED0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETCAMERA3DLAYOUT_OFFSET UNITYSDK_OFFSET(0xA4A8F20)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETCAMERA3DLAYOUT_OFFSET UNITYSDK_OFFSET(0xA4A8F60)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0xA4A8FA0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_PREPARE_OFFSET UNITYSDK_OFFSET(0xA4A8FE0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_ISPREPARED_OFFSET UNITYSDK_OFFSET(0xA4A9020)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_WAITFORFIRSTFRAME_OFFSET UNITYSDK_OFFSET(0xA4A9060)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_WAITFORFIRSTFRAME_OFFSET UNITYSDK_OFFSET(0xA4A90A0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0xA4A90E0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0xA4A9120)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0xA4A9160)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_PAUSE_OFFSET UNITYSDK_OFFSET(0xA4A91A0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_STOP_OFFSET UNITYSDK_OFFSET(0xA4A91E0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xA4A9220)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0xA4A9260)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CANSETTIME_OFFSET UNITYSDK_OFFSET(0xA4A92A0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TIME_OFFSET UNITYSDK_OFFSET(0xA4A92E0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TIME_OFFSET UNITYSDK_OFFSET(0xA4A9320)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_FRAME_OFFSET UNITYSDK_OFFSET(0xA4A9370)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_FRAME_OFFSET UNITYSDK_OFFSET(0xA4A93B0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CLOCKTIME_OFFSET UNITYSDK_OFFSET(0xA4A93F0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CANSTEP_OFFSET UNITYSDK_OFFSET(0xA4A9430)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_STEPFORWARD_OFFSET UNITYSDK_OFFSET(0xA4A9470)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CANSETPLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0xA4A94B0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_PLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0xA4A94F0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_PLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0xA4A9530)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0xA4A9580)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0xA4A95C0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CANSETTIMESOURCE_OFFSET UNITYSDK_OFFSET(0xA4A9600)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TIMESOURCE_OFFSET UNITYSDK_OFFSET(0xA4A9640)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TIMESOURCE_OFFSET UNITYSDK_OFFSET(0xA4A9680)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TIMEREFERENCE_OFFSET UNITYSDK_OFFSET(0xA4A96C0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TIMEREFERENCE_OFFSET UNITYSDK_OFFSET(0xA4A9700)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_EXTERNALREFERENCETIME_OFFSET UNITYSDK_OFFSET(0xA4A9740)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_EXTERNALREFERENCETIME_OFFSET UNITYSDK_OFFSET(0xA4A9780)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CANSETSKIPONDROP_OFFSET UNITYSDK_OFFSET(0xA4A97D0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_SKIPONDROP_OFFSET UNITYSDK_OFFSET(0xA4A9810)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_SKIPONDROP_OFFSET UNITYSDK_OFFSET(0xA4A9850)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0xA4A9890)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0xA4A98D0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0xA4A9910)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0xA4A9950)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xA4A9990)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_PIXELASPECTRATIONUMERATOR_OFFSET UNITYSDK_OFFSET(0xA4A99D0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_PIXELASPECTRATIODENOMINATOR_OFFSET UNITYSDK_OFFSET(0xA4A9A10)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_AUDIOTRACKCOUNT_OFFSET UNITYSDK_OFFSET(0xA4A9A50)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GETAUDIOLANGUAGECODE_OFFSET UNITYSDK_OFFSET(0xA4A9A90)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GETAUDIOCHANNELCOUNT_OFFSET UNITYSDK_OFFSET(0xA4A9AD0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GETAUDIOSAMPLERATE_OFFSET UNITYSDK_OFFSET(0xA4A9B10)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CONTROLLEDAUDIOTRACKMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xA4A9B50)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CONTROLLEDAUDIOTRACKCOUNT_OFFSET UNITYSDK_OFFSET(0xA4A9B90)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_CONTROLLEDAUDIOTRACKCOUNT_OFFSET UNITYSDK_OFFSET(0xA4A9C10)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GETCONTROLLEDAUDIOTRACKCOUNT_OFFSET UNITYSDK_OFFSET(0xA4A9BD0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SETCONTROLLEDAUDIOTRACKCOUNT_OFFSET UNITYSDK_OFFSET(0xA4A9D10)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ENABLEAUDIOTRACK_OFFSET UNITYSDK_OFFSET(0xA4A9D50)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ISAUDIOTRACKENABLED_OFFSET UNITYSDK_OFFSET(0xA4A9DA0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_AUDIOOUTPUTMODE_OFFSET UNITYSDK_OFFSET(0xA4A9DE0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_AUDIOOUTPUTMODE_OFFSET UNITYSDK_OFFSET(0xA4A9E20)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CANSETDIRECTAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0xA4A9E60)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GETDIRECTAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0xA4A9EA0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SETDIRECTAUDIOVOLUME_OFFSET UNITYSDK_OFFSET(0xA4A9EE0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GETDIRECTAUDIOMUTE_OFFSET UNITYSDK_OFFSET(0xA4A9F30)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SETDIRECTAUDIOMUTE_OFFSET UNITYSDK_OFFSET(0xA4A9F70)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GETTARGETAUDIOSOURCE_OFFSET UNITYSDK_OFFSET(0xA4A9FC0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SETTARGETAUDIOSOURCE_OFFSET UNITYSDK_OFFSET(0xA4AA000)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_PREPARECOMPLETED_OFFSET UNITYSDK_OFFSET(0xA4AA050)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_PREPARECOMPLETED_OFFSET UNITYSDK_OFFSET(0xA4AA0F0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_LOOPPOINTREACHED_OFFSET UNITYSDK_OFFSET(0xA4AA190)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_LOOPPOINTREACHED_OFFSET UNITYSDK_OFFSET(0xA4AA230)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_STARTED_OFFSET UNITYSDK_OFFSET(0xA4AA2D0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_STARTED_OFFSET UNITYSDK_OFFSET(0xA4AA370)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_FRAMEDROPPED_OFFSET UNITYSDK_OFFSET(0xA4AA410)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_FRAMEDROPPED_OFFSET UNITYSDK_OFFSET(0xA4AA4B0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_ERRORRECEIVED_OFFSET UNITYSDK_OFFSET(0xA4AA550)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_ERRORRECEIVED_OFFSET UNITYSDK_OFFSET(0xA4AA5F0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_SEEKCOMPLETED_OFFSET UNITYSDK_OFFSET(0xA4AA690)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_SEEKCOMPLETED_OFFSET UNITYSDK_OFFSET(0xA4AA730)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_CLOCKRESYNCOCCURRED_OFFSET UNITYSDK_OFFSET(0xA4AA7D0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_CLOCKRESYNCOCCURRED_OFFSET UNITYSDK_OFFSET(0xA4AA870)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_GET_SENDFRAMEREADYEVENTS_OFFSET UNITYSDK_OFFSET(0xA4AA910)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_SET_SENDFRAMEREADYEVENTS_OFFSET UNITYSDK_OFFSET(0xA4AA950)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_FRAMEREADY_OFFSET UNITYSDK_OFFSET(0xA4AA990)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_FRAMEREADY_OFFSET UNITYSDK_OFFSET(0xA4AAA30)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKEPREPARECOMPLETEDCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA4AAAD0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKEFRAMEREADYCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA4AAB10)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKELOOPPOINTREACHEDCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA4AAB50)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKESTARTEDCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA4AAB90)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKEFRAMEDROPPEDCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA4AABD0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKEERRORRECEIVEDCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA4AAC10)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKESEEKCOMPLETEDCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA4AAC50)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKECLOCKRESYNCOCCURREDCALLBACK_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA4AAC90)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4AACD0)

namespace UnityEngine::Video
{
	inline static constexpr unsigned int VideoPlayer_TypeDefinitionIndex = 37739;

	class VideoPlayer : public Il2CppObject
	{
	public:
		EventHandler* prepareCompleted; // 0x18
		EventHandler* loopPointReached; // 0x20
		EventHandler* started; // 0x28
		EventHandler* frameDropped; // 0x30
		ErrorEventHandler* errorReceived; // 0x38
		EventHandler* seekCompleted; // 0x40
		TimeEventHandler* clockResyncOccurred; // 0x48
		FrameReadyEventHandler* frameReady; // 0x50

		::UnityEngine::Video::VideoSource* get_source()
		{
			return (return (::UnityEngine::Video::VideoSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_SOURCE_OFFSET))(nullptr);
		}

		::System::Void set_source(::UnityEngine::Video::VideoSource* arg)
		{
			((::System::Void(*)(::UnityEngine::Video::VideoSource*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_SOURCE_OFFSET))(arg, nullptr);
		}

		::System::String* get_url()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_URL_OFFSET))(nullptr);
		}

		::System::Void set_url(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_URL_OFFSET))(str, nullptr);
		}

		::UnityEngine::Video::VideoClip* get_clip()
		{
			return (return (::UnityEngine::Video::VideoClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CLIP_OFFSET))(nullptr);
		}

		::System::Void set_clip(::UnityEngine::Video::VideoClip* arg)
		{
			((::System::Void(*)(::UnityEngine::Video::VideoClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_CLIP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Video::VideoRenderMode* get_renderMode()
		{
			return (return (::UnityEngine::Video::VideoRenderMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_RENDERMODE_OFFSET))(nullptr);
		}

		::System::Void set_renderMode(::UnityEngine::Video::VideoRenderMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Video::VideoRenderMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_RENDERMODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Camera* get_targetCamera()
		{
			return (return (::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETCAMERA_OFFSET))(nullptr);
		}

		::System::Void set_targetCamera(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETCAMERA_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RenderTexture* get_targetTexture()
		{
			return (return (::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETTEXTURE_OFFSET))(nullptr);
		}

		::System::Void set_targetTexture(::UnityEngine::RenderTexture* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTexture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETTEXTURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Renderer* get_targetMaterialRenderer()
		{
			return (return (::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETMATERIALRENDERER_OFFSET))(nullptr);
		}

		::System::Void set_targetMaterialRenderer(::UnityEngine::Renderer* arg)
		{
			((::System::Void(*)(::UnityEngine::Renderer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETMATERIALRENDERER_OFFSET))(arg, nullptr);
		}

		::System::String* get_targetMaterialProperty()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETMATERIALPROPERTY_OFFSET))(nullptr);
		}

		::System::Void set_targetMaterialProperty(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETMATERIALPROPERTY_OFFSET))(str, nullptr);
		}

		::UnityEngine::Video::VideoAspectRatio* get_aspectRatio()
		{
			return (return (::UnityEngine::Video::VideoAspectRatio*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_ASPECTRATIO_OFFSET))(nullptr);
		}

		::System::Void set_aspectRatio(::UnityEngine::Video::VideoAspectRatio* arg)
		{
			((::System::Void(*)(::UnityEngine::Video::VideoAspectRatio*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_ASPECTRATIO_OFFSET))(arg, nullptr);
		}

		::System::Single get_targetCameraAlpha()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETCAMERAALPHA_OFFSET))(nullptr);
		}

		::System::Void set_targetCameraAlpha(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETCAMERAALPHA_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Video::Video3DLayout* get_targetCamera3DLayout()
		{
			return (return (::UnityEngine::Video::Video3DLayout*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TARGETCAMERA3DLAYOUT_OFFSET))(nullptr);
		}

		::System::Void set_targetCamera3DLayout(::UnityEngine::Video::Video3DLayout* arg)
		{
			((::System::Void(*)(::UnityEngine::Video::Video3DLayout*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TARGETCAMERA3DLAYOUT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Texture* get_texture()
		{
			return (return (::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TEXTURE_OFFSET))(nullptr);
		}

		::System::Void Prepare()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_PREPARE_OFFSET))(nullptr);
		}

		::System::Boolean get_isPrepared()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_ISPREPARED_OFFSET))(nullptr);
		}

		::System::Boolean get_waitForFirstFrame()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_WAITFORFIRSTFRAME_OFFSET))(nullptr);
		}

		::System::Void set_waitForFirstFrame(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_WAITFORFIRSTFRAME_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_playOnAwake()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_PLAYONAWAKE_OFFSET))(nullptr);
		}

		::System::Void set_playOnAwake(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_PLAYONAWAKE_OFFSET))(arg, nullptr);
		}

		::System::Void Play()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_PLAY_OFFSET))(nullptr);
		}

		::System::Void Pause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_PAUSE_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_STOP_OFFSET))(nullptr);
		}

		::System::Boolean get_isPlaying()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Boolean get_isPaused()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_ISPAUSED_OFFSET))(nullptr);
		}

		::System::Boolean get_canSetTime()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CANSETTIME_OFFSET))(nullptr);
		}

		::System::Double get_time()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TIME_OFFSET))(nullptr);
		}

		::System::Void set_time(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TIME_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_frame()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_FRAME_OFFSET))(nullptr);
		}

		::System::Void set_frame(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_FRAME_OFFSET))(arg, nullptr);
		}

		::System::Double get_clockTime()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CLOCKTIME_OFFSET))(nullptr);
		}

		::System::Boolean get_canStep()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CANSTEP_OFFSET))(nullptr);
		}

		::System::Void StepForward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_STEPFORWARD_OFFSET))(nullptr);
		}

		::System::Boolean get_canSetPlaybackSpeed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CANSETPLAYBACKSPEED_OFFSET))(nullptr);
		}

		::System::Single get_playbackSpeed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_PLAYBACKSPEED_OFFSET))(nullptr);
		}

		::System::Void set_playbackSpeed(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_PLAYBACKSPEED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isLooping()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_ISLOOPING_OFFSET))(nullptr);
		}

		::System::Void set_isLooping(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_ISLOOPING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_canSetTimeSource()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CANSETTIMESOURCE_OFFSET))(nullptr);
		}

		::UnityEngine::Video::VideoTimeSource* get_timeSource()
		{
			return (return (::UnityEngine::Video::VideoTimeSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TIMESOURCE_OFFSET))(nullptr);
		}

		::System::Void set_timeSource(::UnityEngine::Video::VideoTimeSource* arg)
		{
			((::System::Void(*)(::UnityEngine::Video::VideoTimeSource*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TIMESOURCE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Video::VideoTimeReference* get_timeReference()
		{
			return (return (::UnityEngine::Video::VideoTimeReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_TIMEREFERENCE_OFFSET))(nullptr);
		}

		::System::Void set_timeReference(::UnityEngine::Video::VideoTimeReference* arg)
		{
			((::System::Void(*)(::UnityEngine::Video::VideoTimeReference*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_TIMEREFERENCE_OFFSET))(arg, nullptr);
		}

		::System::Double get_externalReferenceTime()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_EXTERNALREFERENCETIME_OFFSET))(nullptr);
		}

		::System::Void set_externalReferenceTime(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_EXTERNALREFERENCETIME_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_canSetSkipOnDrop()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CANSETSKIPONDROP_OFFSET))(nullptr);
		}

		::System::Boolean get_skipOnDrop()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_SKIPONDROP_OFFSET))(nullptr);
		}

		::System::Void set_skipOnDrop(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_SKIPONDROP_OFFSET))(arg, nullptr);
		}

		::System::UInt64 get_frameCount()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_FRAMECOUNT_OFFSET))(nullptr);
		}

		::System::Single get_frameRate()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_FRAMERATE_OFFSET))(nullptr);
		}

		::System::Double get_length()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::UInt32 get_width()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_WIDTH_OFFSET))(nullptr);
		}

		::System::UInt32 get_height()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_HEIGHT_OFFSET))(nullptr);
		}

		::System::UInt32 get_pixelAspectRatioNumerator()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_PIXELASPECTRATIONUMERATOR_OFFSET))(nullptr);
		}

		::System::UInt32 get_pixelAspectRatioDenominator()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_PIXELASPECTRATIODENOMINATOR_OFFSET))(nullptr);
		}

		::System::UInt16 get_audioTrackCount()
		{
			return (return (::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_AUDIOTRACKCOUNT_OFFSET))(nullptr);
		}

		::System::String* GetAudioLanguageCode(::System::UInt16 arg)
		{
			return (return (::System::String*(*)(::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GETAUDIOLANGUAGECODE_OFFSET))(arg, nullptr);
		}

		::System::UInt16 GetAudioChannelCount(::System::UInt16 arg)
		{
			return (return (::System::UInt16(*)(::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GETAUDIOCHANNELCOUNT_OFFSET))(arg, nullptr);
		}

		::System::UInt32 GetAudioSampleRate(::System::UInt16 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GETAUDIOSAMPLERATE_OFFSET))(arg, nullptr);
		}

		::System::UInt16 get_controlledAudioTrackMaxCount()
		{
			return (return (::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CONTROLLEDAUDIOTRACKMAXCOUNT_OFFSET))(nullptr);
		}

		::System::UInt16 get_controlledAudioTrackCount()
		{
			return (return (::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CONTROLLEDAUDIOTRACKCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_controlledAudioTrackCount(::System::UInt16 arg)
		{
			((::System::Void(*)(::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_CONTROLLEDAUDIOTRACKCOUNT_OFFSET))(arg, nullptr);
		}

		::System::UInt16 GetControlledAudioTrackCount()
		{
			return (return (::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GETCONTROLLEDAUDIOTRACKCOUNT_OFFSET))(nullptr);
		}

		::System::Void SetControlledAudioTrackCount(::System::UInt16 arg)
		{
			((::System::Void(*)(::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SETCONTROLLEDAUDIOTRACKCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void EnableAudioTrack(::System::UInt16 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::UInt16, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ENABLEAUDIOTRACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsAudioTrackEnabled(::System::UInt16 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ISAUDIOTRACKENABLED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Video::VideoAudioOutputMode* get_audioOutputMode()
		{
			return (return (::UnityEngine::Video::VideoAudioOutputMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_AUDIOOUTPUTMODE_OFFSET))(nullptr);
		}

		::System::Void set_audioOutputMode(::UnityEngine::Video::VideoAudioOutputMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Video::VideoAudioOutputMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_AUDIOOUTPUTMODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_canSetDirectAudioVolume()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_CANSETDIRECTAUDIOVOLUME_OFFSET))(nullptr);
		}

		::System::Single GetDirectAudioVolume(::System::UInt16 arg)
		{
			return (return (::System::Single(*)(::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GETDIRECTAUDIOVOLUME_OFFSET))(arg, nullptr);
		}

		::System::Void SetDirectAudioVolume(::System::UInt16 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::UInt16, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SETDIRECTAUDIOVOLUME_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean GetDirectAudioMute(::System::UInt16 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GETDIRECTAUDIOMUTE_OFFSET))(arg, nullptr);
		}

		::System::Void SetDirectAudioMute(::System::UInt16 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::UInt16, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SETDIRECTAUDIOMUTE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::AudioSource* GetTargetAudioSource(::System::UInt16 arg)
		{
			return (return (::UnityEngine::AudioSource*(*)(::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GETTARGETAUDIOSOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void SetTargetAudioSource(::System::UInt16 arg, ::UnityEngine::AudioSource* arg)
		{
			((::System::Void(*)(::System::UInt16, ::UnityEngine::AudioSource*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SETTARGETAUDIOSOURCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void add_prepareCompleted(EventHandler* arg)
		{
			((::System::Void(*)(EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_PREPARECOMPLETED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_prepareCompleted(EventHandler* arg)
		{
			((::System::Void(*)(EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_PREPARECOMPLETED_OFFSET))(arg, nullptr);
		}

		::System::Void add_loopPointReached(EventHandler* arg)
		{
			((::System::Void(*)(EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_LOOPPOINTREACHED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_loopPointReached(EventHandler* arg)
		{
			((::System::Void(*)(EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_LOOPPOINTREACHED_OFFSET))(arg, nullptr);
		}

		::System::Void add_started(EventHandler* arg)
		{
			((::System::Void(*)(EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_STARTED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_started(EventHandler* arg)
		{
			((::System::Void(*)(EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_STARTED_OFFSET))(arg, nullptr);
		}

		::System::Void add_frameDropped(EventHandler* arg)
		{
			((::System::Void(*)(EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_FRAMEDROPPED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_frameDropped(EventHandler* arg)
		{
			((::System::Void(*)(EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_FRAMEDROPPED_OFFSET))(arg, nullptr);
		}

		::System::Void add_errorReceived(ErrorEventHandler* arg)
		{
			((::System::Void(*)(ErrorEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_ERRORRECEIVED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_errorReceived(ErrorEventHandler* arg)
		{
			((::System::Void(*)(ErrorEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_ERRORRECEIVED_OFFSET))(arg, nullptr);
		}

		::System::Void add_seekCompleted(EventHandler* arg)
		{
			((::System::Void(*)(EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_SEEKCOMPLETED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_seekCompleted(EventHandler* arg)
		{
			((::System::Void(*)(EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_SEEKCOMPLETED_OFFSET))(arg, nullptr);
		}

		::System::Void add_clockResyncOccurred(TimeEventHandler* arg)
		{
			((::System::Void(*)(TimeEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_CLOCKRESYNCOCCURRED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_clockResyncOccurred(TimeEventHandler* arg)
		{
			((::System::Void(*)(TimeEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_CLOCKRESYNCOCCURRED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_sendFrameReadyEvents()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_GET_SENDFRAMEREADYEVENTS_OFFSET))(nullptr);
		}

		::System::Void set_sendFrameReadyEvents(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_SET_SENDFRAMEREADYEVENTS_OFFSET))(arg, nullptr);
		}

		::System::Void add_frameReady(FrameReadyEventHandler* arg)
		{
			((::System::Void(*)(FrameReadyEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_ADD_FRAMEREADY_OFFSET))(arg, nullptr);
		}

		::System::Void remove_frameReady(FrameReadyEventHandler* arg)
		{
			((::System::Void(*)(FrameReadyEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_REMOVE_FRAMEREADY_OFFSET))(arg, nullptr);
		}

		::System::Void InvokePrepareCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer* arg)
		{
			((::System::Void(*)(::UnityEngine::Video::VideoPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKEPREPARECOMPLETEDCALLBACK_INTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeFrameReadyCallback_Internal(::UnityEngine::Video::VideoPlayer* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::UnityEngine::Video::VideoPlayer*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKEFRAMEREADYCALLBACK_INTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InvokeLoopPointReachedCallback_Internal(::UnityEngine::Video::VideoPlayer* arg)
		{
			((::System::Void(*)(::UnityEngine::Video::VideoPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKELOOPPOINTREACHEDCALLBACK_INTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeStartedCallback_Internal(::UnityEngine::Video::VideoPlayer* arg)
		{
			((::System::Void(*)(::UnityEngine::Video::VideoPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKESTARTEDCALLBACK_INTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeFrameDroppedCallback_Internal(::UnityEngine::Video::VideoPlayer* arg)
		{
			((::System::Void(*)(::UnityEngine::Video::VideoPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKEFRAMEDROPPEDCALLBACK_INTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeErrorReceivedCallback_Internal(::UnityEngine::Video::VideoPlayer* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Video::VideoPlayer*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKEERRORRECEIVEDCALLBACK_INTERNAL_OFFSET))(arg, str, nullptr);
		}

		::System::Void InvokeSeekCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer* arg)
		{
			((::System::Void(*)(::UnityEngine::Video::VideoPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKESEEKCOMPLETEDCALLBACK_INTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeClockResyncOccurredCallback_Internal(::UnityEngine::Video::VideoPlayer* arg, ::System::Double arg)
		{
			((::System::Void(*)(::UnityEngine::Video::VideoPlayer*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_INVOKECLOCKRESYNCOCCURREDCALLBACK_INTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_.CTOR_OFFSET))(nullptr);
		}

	};
}

