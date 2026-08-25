#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Audio { class AudioMixer; }
namespace Cysharp::Threading::Tasks { class UniTaskVoid; }

#define MXFIELD_CORE_FIELDSOUNDHANDLER_SETMUTEFX3DMIXER_OFFSET UNITYSDK_OFFSET(0xEDA1D0)
#define MXFIELD_CORE_FIELDSOUNDHANDLER_GET_AUDIOMIXER_OFFSET UNITYSDK_OFFSET(0xEDA490)
#define MXFIELD_CORE_FIELDSOUNDHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xEDA5E0)
#define MXFIELD_CORE_FIELDSOUNDHANDLER_ONQUITOPERATION_OFFSET UNITYSDK_OFFSET(0xEDA5F0)
#define MXFIELD_CORE_FIELDSOUNDHANDLER_FADEVOLUMEASYNC_OFFSET UNITYSDK_OFFSET(0xEDA520)

namespace MXField::Core
{
	inline static constexpr unsigned int FieldSoundHandler_TypeDefinitionIndex = 10971;

	class FieldSoundHandler : public Il2CppObject
	{
	public:
		::System::String* FX3DVolumeParam; // 0x0
		::System::Single MutedVolume; // 0x0
		::System::Boolean _muted; // 0x10
		::System::Single _savedVolume; // 0x14
		::System::Threading::CancellationTokenSource* _fadeCts; // 0x18

		::System::Void SetMuteFX3DMixer(::System::Boolean arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSOUNDHANDLER_SETMUTEFX3DMIXER_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Audio::AudioMixer* get_audioMixer()
		{
			return ((::UnityEngine::Audio::AudioMixer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSOUNDHANDLER_GET_AUDIOMIXER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSOUNDHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnQuitOperation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSOUNDHANDLER_ONQUITOPERATION_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid* FadeVolumeAsync(::System::Boolean arg, ::System::Single arg2, ::System::Threading::CancellationToken* arg3)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid*(*)(::System::Boolean, ::System::Single, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDSOUNDHANDLER_FADEVOLUMEASYNC_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

