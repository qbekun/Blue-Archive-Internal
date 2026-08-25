#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AndroidJavaClass; }
namespace UnityEngine { class AndroidJavaObject; }

#define ANDROIDTAPTIC_VIB_OFFSET UNITYSDK_OFFSET(0xA11890)
#define ANDROIDTAPTIC_VIBRATE_OFFSET UNITYSDK_OFFSET(0xA118A0)
#define ANDROIDTAPTIC_HAPTIC_OFFSET UNITYSDK_OFFSET(0xA11A50)
#define ANDROIDTAPTIC_ANDROIDVIBRATE_OFFSET UNITYSDK_OFFSET(0xA118F0)
#define ANDROIDTAPTIC_ANDROIDVIBRATE_OFFSET UNITYSDK_OFFSET(0xA11CE0)
#define ANDROIDTAPTIC_ANDROIDVIBRATE_OFFSET UNITYSDK_OFFSET(0xA126D0)
#define ANDROIDTAPTIC_ANDROIDVIBRATE_OFFSET UNITYSDK_OFFSET(0xA12040)
#define ANDROIDTAPTIC_ANDROIDCANCELVIBRATIONS_OFFSET UNITYSDK_OFFSET(0xA12AE0)
#define ANDROIDTAPTIC_VIBRATIONEFFECTCLASSINITIALIZATION_OFFSET UNITYSDK_OFFSET(0xA125D0)
#define ANDROIDTAPTIC_ANDROIDSDKVERSION_OFFSET UNITYSDK_OFFSET(0xA124A0)
#define ANDROIDTAPTIC_.CTOR_OFFSET UNITYSDK_OFFSET(0xA12BE0)
#define ANDROIDTAPTIC_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA12BF0)

	inline static constexpr unsigned int AndroidTaptic_TypeDefinitionIndex = 36568;

	class AndroidTaptic : public Il2CppObject
	{
	public:
		::System::Int64 LightDuration; // 0x0
		::System::Int64 MediumDuration; // 0x8
		::System::Int64 HeavyDuration; // 0x10
		::System::Int32 LightAmplitude; // 0x18
		::System::Int32 MediumAmplitude; // 0x1C
		::System::Int32 HeavyAmplitude; // 0x20
		::System::Int32 _sdkVersion; // 0x24
		::Il2CppArray<::System::Object*>* _successPattern; // 0x28
		::Il2CppArray<::System::Object*>* _successPatternAmplitude; // 0x30
		::Il2CppArray<::System::Object*>* _warningPattern; // 0x38
		::Il2CppArray<::System::Object*>* _warningPatternAmplitude; // 0x40
		::Il2CppArray<::System::Object*>* _failurePattern; // 0x48
		::Il2CppArray<::System::Object*>* _failurePatternAmplitude; // 0x50
		::UnityEngine::AndroidJavaClass* UnityPlayer; // 0x58
		::UnityEngine::AndroidJavaObject* CurrentActivity; // 0x60
		::UnityEngine::AndroidJavaObject* AndroidVibrator; // 0x68
		::UnityEngine::AndroidJavaClass* VibrationEffectClass; // 0x70
		::UnityEngine::AndroidJavaObject* VibrationEffect; // 0x78
		::System::Int32 DefaultAmplitude; // 0x80

		::System::Void Vib()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDROIDTAPTIC_VIB_OFFSET))(nullptr);
		}

		::System::Void Vibrate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDROIDTAPTIC_VIBRATE_OFFSET))(nullptr);
		}

		::System::Void Haptic(HapticTypes* arg)
		{
			((::System::Void(*)(HapticTypes*, ::PVOID))((::PBYTE)hIl2Cpp + ANDROIDTAPTIC_HAPTIC_OFFSET))(arg, nullptr);
		}

		::System::Void AndroidVibrate(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ANDROIDTAPTIC_ANDROIDVIBRATE_OFFSET))(arg, nullptr);
		}

		::System::Void AndroidVibrate(::System::Int64 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANDROIDTAPTIC_ANDROIDVIBRATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AndroidVibrate(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANDROIDTAPTIC_ANDROIDVIBRATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AndroidVibrate(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANDROIDTAPTIC_ANDROIDVIBRATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AndroidCancelVibrations()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDROIDTAPTIC_ANDROIDCANCELVIBRATIONS_OFFSET))(nullptr);
		}

		::System::Void VibrationEffectClassInitialization()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDROIDTAPTIC_VIBRATIONEFFECTCLASSINITIALIZATION_OFFSET))(nullptr);
		}

		::System::Int32 AndroidSDKVersion()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDROIDTAPTIC_ANDROIDSDKVERSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDROIDTAPTIC_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDROIDTAPTIC_.CCTOR_OFFSET))(nullptr);
		}

	};

