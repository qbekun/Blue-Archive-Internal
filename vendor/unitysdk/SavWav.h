#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AudioClip; }

#define SAVWAV_SAVE_OFFSET UNITYSDK_OFFSET(0x2106FD0)
#define SAVWAV_TRIMSILENCE_OFFSET UNITYSDK_OFFSET(0x21078B0)
#define SAVWAV_TRIMSILENCE_OFFSET UNITYSDK_OFFSET(0x21079A0)
#define SAVWAV_TRIMSILENCE_OFFSET UNITYSDK_OFFSET(0x21079C0)
#define SAVWAV_CREATEEMPTY_OFFSET UNITYSDK_OFFSET(0x2107280)
#define SAVWAV_CONVERTANDWRITE_OFFSET UNITYSDK_OFFSET(0x2107310)
#define SAVWAV_WRITEHEADER_OFFSET UNITYSDK_OFFSET(0x21074D0)

	inline static constexpr unsigned int SavWav_TypeDefinitionIndex = 3855;

	class SavWav : public Il2CppObject
	{
	public:
		::System::Int32 HEADER_SIZE; // 0x0

		::System::Boolean Save(::System::String* str, ::UnityEngine::AudioClip* arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::UnityEngine::AudioClip*, ::PVOID))((::PBYTE)hIl2Cpp + SAVWAV_SAVE_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::AudioClip* TrimSilence(::UnityEngine::AudioClip* arg, ::System::Single arg2)
		{
			return ((::UnityEngine::AudioClip*(*)(::UnityEngine::AudioClip*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SAVWAV_TRIMSILENCE_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::AudioClip* TrimSilence(Il2CppObject* arg, ::System::Single arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			return ((::UnityEngine::AudioClip*(*)(Il2CppObject*, ::System::Single, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SAVWAV_TRIMSILENCE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::UnityEngine::AudioClip* TrimSilence(Il2CppObject* arg, ::System::Single arg2, ::System::Int32 arg3, ::System::Int32 arg4, ::System::Boolean arg5, ::System::Boolean arg6)
		{
			return ((::UnityEngine::AudioClip*(*)(Il2CppObject*, ::System::Single, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SAVWAV_TRIMSILENCE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::IO::FileStream* CreateEmpty(::System::String* str)
		{
			return ((::System::IO::FileStream*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SAVWAV_CREATEEMPTY_OFFSET))(str, nullptr);
		}

		::System::Void ConvertAndWrite(::System::IO::FileStream* arg, ::UnityEngine::AudioClip* arg2)
		{
			((::System::Void(*)(::System::IO::FileStream*, ::UnityEngine::AudioClip*, ::PVOID))((::PBYTE)hIl2Cpp + SAVWAV_CONVERTANDWRITE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void WriteHeader(::System::IO::FileStream* arg, ::UnityEngine::AudioClip* arg2)
		{
			((::System::Void(*)(::System::IO::FileStream*, ::UnityEngine::AudioClip*, ::PVOID))((::PBYTE)hIl2Cpp + SAVWAV_WRITEHEADER_OFFSET))(arg, arg2, nullptr);
		}

	};

