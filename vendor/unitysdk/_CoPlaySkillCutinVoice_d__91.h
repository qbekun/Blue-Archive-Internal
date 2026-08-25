#pragma once
#include "unitysdk.h"

namespace MX::Audio { class SoundManager; }
namespace MX::Audio { class AudioSourceData; }
namespace UnityEngine { class AudioClip; }
namespace UnityEngine { class AudioSource; }

#define <COPLAYSKILLCUTINVOICE>D__91_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D574C0)
#define <COPLAYSKILLCUTINVOICE>D__91_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D574E0)
#define <COPLAYSKILLCUTINVOICE>D__91_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D574F0)
#define <COPLAYSKILLCUTINVOICE>D__91_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D576B0)
#define <COPLAYSKILLCUTINVOICE>D__91_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1D576C0)
#define <COPLAYSKILLCUTINVOICE>D__91_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D57710)

	inline static constexpr unsigned int <CoPlaySkillCutinVoice>d__91_TypeDefinitionIndex = 20203;

	class <CoPlaySkillCutinVoice>d__91 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Audio::SoundManager* __4__this; // 0x20
		::MX::Audio::AudioSourceData* data; // 0x28
		::UnityEngine::AudioClip* clip; // 0x30
		::System::Single pitch; // 0x38
		::System::Action* onFinished; // 0x40
		::UnityEngine::AudioSource* _audioSource_5__2; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYSKILLCUTINVOICE>D__91_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYSKILLCUTINVOICE>D__91_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYSKILLCUTINVOICE>D__91_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYSKILLCUTINVOICE>D__91_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYSKILLCUTINVOICE>D__91_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYSKILLCUTINVOICE>D__91_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

