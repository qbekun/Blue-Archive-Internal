#pragma once
#include "../../unitysdk.h"

namespace E7::Native { class NativeAudioPointer; }

#define E7_NATIVE_NATIVESOURCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x28A00D0)
#define E7_NATIVE_NATIVESOURCE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x28A00E0)
#define E7_NATIVE_NATIVESOURCE_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x28A00F0)
#define E7_NATIVE_NATIVESOURCE_ASSERTINITIALIZED_OFFSET UNITYSDK_OFFSET(0x28A0100)
#define E7_NATIVE_NATIVESOURCE_STOP_OFFSET UNITYSDK_OFFSET(0x28A0190)
#define E7_NATIVE_NATIVESOURCE_SETVOLUME_OFFSET UNITYSDK_OFFSET(0x28A01A0)
#define E7_NATIVE_NATIVESOURCE_SETPAN_OFFSET UNITYSDK_OFFSET(0x28A01B0)
#define E7_NATIVE_NATIVESOURCE_GETPLAYBACKTIME_OFFSET UNITYSDK_OFFSET(0x28A01C0)
#define E7_NATIVE_NATIVESOURCE_SETPLAYBACKTIME_OFFSET UNITYSDK_OFFSET(0x28A01E0)
#define E7_NATIVE_NATIVESOURCE_PAUSE_OFFSET UNITYSDK_OFFSET(0x28A01F0)
#define E7_NATIVE_NATIVESOURCE_RESUME_OFFSET UNITYSDK_OFFSET(0x28A0200)
#define E7_NATIVE_NATIVESOURCE_PLAY_OFFSET UNITYSDK_OFFSET(0x289FE80)
#define E7_NATIVE_NATIVESOURCE_PLAY_OFFSET UNITYSDK_OFFSET(0x28A0210)
#define E7_NATIVE_NATIVESOURCE_PREPARE_OFFSET UNITYSDK_OFFSET(0x28A0230)
#define E7_NATIVE_NATIVESOURCE_PLAYPREPARED_OFFSET UNITYSDK_OFFSET(0x28A0250)
#define E7_NATIVE_NATIVESOURCE_PLAYPREPARED_OFFSET UNITYSDK_OFFSET(0x28A0290)

namespace E7::Native
{
	inline static constexpr unsigned int NativeSource_TypeDefinitionIndex = 37985;

	class NativeSource : public Il2CppObject
	{
	public:
		::System::Boolean _IsValid_k__BackingField; // 0x10
		::System::Int32 _Index_k__BackingField; // 0x14

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVESOURCE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVESOURCE_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Int32 get_Index()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVESOURCE_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Void AssertInitialized()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVESOURCE_ASSERTINITIALIZED_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVESOURCE_STOP_OFFSET))(nullptr);
		}

		::System::Void SetVolume(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVESOURCE_SETVOLUME_OFFSET))(arg, nullptr);
		}

		::System::Void SetPan(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVESOURCE_SETPAN_OFFSET))(arg, nullptr);
		}

		::System::Single GetPlaybackTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVESOURCE_GETPLAYBACKTIME_OFFSET))(nullptr);
		}

		::System::Void SetPlaybackTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVESOURCE_SETPLAYBACKTIME_OFFSET))(arg, nullptr);
		}

		::System::Void Pause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVESOURCE_PAUSE_OFFSET))(nullptr);
		}

		::System::Void Resume()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVESOURCE_RESUME_OFFSET))(nullptr);
		}

		::System::Void Play(::E7::Native::NativeAudioPointer* arg)
		{
			((::System::Void(*)(::E7::Native::NativeAudioPointer*, ::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVESOURCE_PLAY_OFFSET))(arg, nullptr);
		}

		::System::Void Play(::E7::Native::NativeAudioPointer* arg, PlayOptions* arg)
		{
			((::System::Void(*)(::E7::Native::NativeAudioPointer*, PlayOptions*, ::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVESOURCE_PLAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Prepare(::E7::Native::NativeAudioPointer* arg)
		{
			((::System::Void(*)(::E7::Native::NativeAudioPointer*, ::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVESOURCE_PREPARE_OFFSET))(arg, nullptr);
		}

		::System::Void PlayPrepared()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVESOURCE_PLAYPREPARED_OFFSET))(nullptr);
		}

		::System::Void PlayPrepared(PlayOptions* arg)
		{
			((::System::Void(*)(PlayOptions*, ::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVESOURCE_PLAYPREPARED_OFFSET))(arg, nullptr);
		}

	};
}

