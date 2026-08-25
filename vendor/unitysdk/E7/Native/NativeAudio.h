#pragma once
#include "../../unitysdk.h"

namespace E7::Native { class NativeAudioPointer; }
namespace UnityEngine { class AudioClip; }
namespace E7::Native { class NativeSource; }
namespace E7::Native { class INativeSourceSelector; }
namespace E7::Native { class DeviceAudioInformation; }
namespace E7::Native { class NativeAudioAnalyzer; }

#define E7_NATIVE_NATIVEAUDIO_GET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x289EDE0)
#define E7_NATIVE_NATIVEAUDIO_SET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x289EE20)
#define E7_NATIVE_NATIVEAUDIO_GET_ONSUPPORTEDPLATFORM_OFFSET UNITYSDK_OFFSET(0x289EE60)
#define E7_NATIVE_NATIVEAUDIO_ASSERTINITIALIZED_OFFSET UNITYSDK_OFFSET(0x289EE70)
#define E7_NATIVE_NATIVEAUDIO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x289EF00)
#define E7_NATIVE_NATIVEAUDIO_NOTSUPPORTEDTHROW_OFFSET UNITYSDK_OFFSET(0x289EF90)
#define E7_NATIVE_NATIVEAUDIO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x289EF60)
#define E7_NATIVE_NATIVEAUDIO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x289F000)
#define E7_NATIVE_NATIVEAUDIO_LOAD_OFFSET UNITYSDK_OFFSET(0x289F030)
#define E7_NATIVE_NATIVEAUDIO_LOAD_OFFSET UNITYSDK_OFFSET(0x289F0A0)
#define E7_NATIVE_NATIVEAUDIO_LOAD_OFFSET UNITYSDK_OFFSET(0x289F2D0)
#define E7_NATIVE_NATIVEAUDIO_LOAD_OFFSET UNITYSDK_OFFSET(0x289F330)
#define E7_NATIVE_NATIVEAUDIO_ASSERTAUDIOCLIP_OFFSET UNITYSDK_OFFSET(0x289F0D0)
#define E7_NATIVE_NATIVEAUDIO_AUDIOCLIPTOSHORTARRAY_OFFSET UNITYSDK_OFFSET(0x289F400)
#define E7_NATIVE_NATIVEAUDIO_GETNATIVESOURCE_OFFSET UNITYSDK_OFFSET(0x289F5A0)
#define E7_NATIVE_NATIVEAUDIO_GETNATIVESOURCEAUTO_OFFSET UNITYSDK_OFFSET(0x289F5D0)
#define E7_NATIVE_NATIVEAUDIO_GETNATIVESOURCEAUTO_OFFSET UNITYSDK_OFFSET(0x289F600)
#define E7_NATIVE_NATIVEAUDIO_GETNATIVESOURCECOUNT_OFFSET UNITYSDK_OFFSET(0x289F630)
#define E7_NATIVE_NATIVEAUDIO_GETDEVICEAUDIOINFORMATION_OFFSET UNITYSDK_OFFSET(0x289F640)
#define E7_NATIVE_NATIVEAUDIO_SILENTANALYZE_OFFSET UNITYSDK_OFFSET(0x289F650)

namespace E7::Native
{
	inline static constexpr unsigned int NativeAudio_TypeDefinitionIndex = 37978;

	class NativeAudio : public Il2CppObject
	{
	public:
		::System::Boolean _Initialized_k__BackingField; // 0x0

		::System::Boolean get_Initialized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIO_GET_INITIALIZED_OFFSET))(nullptr);
		}

		::System::Void set_Initialized(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIO_SET_INITIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_OnSupportedPlatform()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIO_GET_ONSUPPORTEDPLATFORM_OFFSET))(nullptr);
		}

		::System::Void AssertInitialized()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIO_ASSERTINITIALIZED_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIO_INITIALIZE_OFFSET))(nullptr);
		}

		::System::NotSupportedException* NotSupportedThrow()
		{
			return (return (::System::NotSupportedException*(*)(::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIO_NOTSUPPORTEDTHROW_OFFSET))(nullptr);
		}

		::System::Void Initialize(InitializationOptions* arg)
		{
			((::System::Void(*)(InitializationOptions*, ::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIO_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIO_DISPOSE_OFFSET))(nullptr);
		}

		::E7::Native::NativeAudioPointer* Load(::UnityEngine::AudioClip* arg)
		{
			return (return (::E7::Native::NativeAudioPointer*(*)(::UnityEngine::AudioClip*, ::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIO_LOAD_OFFSET))(arg, nullptr);
		}

		::E7::Native::NativeAudioPointer* Load(::UnityEngine::AudioClip* arg, LoadOptions* arg)
		{
			return (return (::E7::Native::NativeAudioPointer*(*)(::UnityEngine::AudioClip*, LoadOptions*, ::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIO_LOAD_OFFSET))(arg, arg, nullptr);
		}

		::E7::Native::NativeAudioPointer* Load(::System::String* str)
		{
			return (return (::E7::Native::NativeAudioPointer*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIO_LOAD_OFFSET))(str, nullptr);
		}

		::E7::Native::NativeAudioPointer* Load(::System::String* str, LoadOptions* arg)
		{
			return (return (::E7::Native::NativeAudioPointer*(*)(::System::String*, LoadOptions*, ::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIO_LOAD_OFFSET))(str, arg, nullptr);
		}

		::System::Void AssertAudioClip(::UnityEngine::AudioClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioClip*, ::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIO_ASSERTAUDIOCLIP_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* AudioClipToShortArray(::UnityEngine::AudioClip* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::AudioClip*, ::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIO_AUDIOCLIPTOSHORTARRAY_OFFSET))(arg, nullptr);
		}

		::E7::Native::NativeSource* GetNativeSource(::System::Int32 arg)
		{
			return (return (::E7::Native::NativeSource*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIO_GETNATIVESOURCE_OFFSET))(arg, nullptr);
		}

		::E7::Native::NativeSource* GetNativeSourceAuto()
		{
			return (return (::E7::Native::NativeSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIO_GETNATIVESOURCEAUTO_OFFSET))(nullptr);
		}

		::E7::Native::NativeSource* GetNativeSourceAuto(::E7::Native::INativeSourceSelector* arg)
		{
			return (return (::E7::Native::NativeSource*(*)(::E7::Native::INativeSourceSelector*, ::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIO_GETNATIVESOURCEAUTO_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetNativeSourceCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIO_GETNATIVESOURCECOUNT_OFFSET))(nullptr);
		}

		::E7::Native::DeviceAudioInformation* GetDeviceAudioInformation()
		{
			return (return (::E7::Native::DeviceAudioInformation*(*)(::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIO_GETDEVICEAUDIOINFORMATION_OFFSET))(nullptr);
		}

		::E7::Native::NativeAudioAnalyzer* SilentAnalyze()
		{
			return (return (::E7::Native::NativeAudioAnalyzer*(*)(::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIO_SILENTANALYZE_OFFSET))(nullptr);
		}

	};
}

