#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AudioSource; }
namespace MX::Audio { class SoundManager; }

#define <COPLAYDEFAULTUISOURCE>D__92_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D57720)
#define <COPLAYDEFAULTUISOURCE>D__92_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D57740)
#define <COPLAYDEFAULTUISOURCE>D__92_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D57750)
#define <COPLAYDEFAULTUISOURCE>D__92_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D57A30)
#define <COPLAYDEFAULTUISOURCE>D__92_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1D57A40)
#define <COPLAYDEFAULTUISOURCE>D__92_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D57A90)

	inline static constexpr unsigned int <CoPlayDefaultUISource>d__92_TypeDefinitionIndex = 20204;

	class <CoPlayDefaultUISource>d__92 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::AudioSource* audioSource; // 0x20
		::MX::Audio::SoundManager* __4__this; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYDEFAULTUISOURCE>D__92_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYDEFAULTUISOURCE>D__92_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYDEFAULTUISOURCE>D__92_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYDEFAULTUISOURCE>D__92_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYDEFAULTUISOURCE>D__92_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYDEFAULTUISOURCE>D__92_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

