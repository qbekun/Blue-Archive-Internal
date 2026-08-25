#pragma once
#include "unitysdk.h"

namespace MX::Audio { class AudioSourceData; }
namespace MX::Audio { class SoundManager; }

#define <COPLAYBYAUDIODATA>D__89_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D57190)
#define <COPLAYBYAUDIODATA>D__89_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D571B0)
#define <COPLAYBYAUDIODATA>D__89_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D571C0)
#define <COPLAYBYAUDIODATA>D__89_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D57450)
#define <COPLAYBYAUDIODATA>D__89_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1D57460)
#define <COPLAYBYAUDIODATA>D__89_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D574B0)

	inline static constexpr unsigned int <CoPlayByAudioData>d__89_TypeDefinitionIndex = 20202;

	class <CoPlayByAudioData>d__89 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Audio::AudioSourceData* data; // 0x20
		::MX::Audio::SoundManager* __4__this; // 0x28
		::System::Action* onFinished; // 0x30
		::System::Single pitch; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYBYAUDIODATA>D__89_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYBYAUDIODATA>D__89_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYBYAUDIODATA>D__89_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYBYAUDIODATA>D__89_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYBYAUDIODATA>D__89_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYBYAUDIODATA>D__89_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

