#pragma once
#include "unitysdk.h"

namespace MX::Audio { class AudioLoopController; }
namespace UnityEngine { class AudioSource; }

#define <PLAYLOOPAUDIOSOURCE>D__40_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D45D20)
#define <PLAYLOOPAUDIOSOURCE>D__40_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D47280)
#define <PLAYLOOPAUDIOSOURCE>D__40_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D47290)
#define <PLAYLOOPAUDIOSOURCE>D__40_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D47740)
#define <PLAYLOOPAUDIOSOURCE>D__40_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1D47750)
#define <PLAYLOOPAUDIOSOURCE>D__40_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D477A0)

	inline static constexpr unsigned int <PlayLoopAudioSource>d__40_TypeDefinitionIndex = 20149;

	class <PlayLoopAudioSource>d__40 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Boolean playOriginal; // 0x20
		::MX::Audio::AudioLoopController* __4__this; // 0x28
		::UnityEngine::AudioSource* _audioSource_5__2; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYLOOPAUDIOSOURCE>D__40_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYLOOPAUDIOSOURCE>D__40_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYLOOPAUDIOSOURCE>D__40_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYLOOPAUDIOSOURCE>D__40_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYLOOPAUDIOSOURCE>D__40_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYLOOPAUDIOSOURCE>D__40_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

