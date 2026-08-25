#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AudioSource; }
namespace UnityEngine { class AnimationCurve; }

#define <COCROSSFADEVOLUME>D__96_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D580A0)
#define <COCROSSFADEVOLUME>D__96_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D580C0)
#define <COCROSSFADEVOLUME>D__96_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D580D0)
#define <COCROSSFADEVOLUME>D__96_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D58360)
#define <COCROSSFADEVOLUME>D__96_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1D58370)
#define <COCROSSFADEVOLUME>D__96_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D583C0)

	inline static constexpr unsigned int <CoCrossFadeVolume>d__96_TypeDefinitionIndex = 20207;

	class <CoCrossFadeVolume>d__96 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::AudioSource* sourceFrom; // 0x20
		::UnityEngine::AudioSource* sourceTo; // 0x28
		::UnityEngine::AnimationCurve* curve; // 0x30
		::System::Single duration; // 0x38
		::System::Single _volumeSum_5__2; // 0x3C
		::System::Single _elapsed_5__3; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COCROSSFADEVOLUME>D__96_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCROSSFADEVOLUME>D__96_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCROSSFADEVOLUME>D__96_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCROSSFADEVOLUME>D__96_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCROSSFADEVOLUME>D__96_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCROSSFADEVOLUME>D__96_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

