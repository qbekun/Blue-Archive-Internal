#pragma once
#include "unitysdk.h"

namespace MX::Audio { class BGMPlayer; }
namespace UnityEngine { class AudioSource; }

#define <CO_FADEINOUT>D__41_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D4DFC0)
#define <CO_FADEINOUT>D__41_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D4F110)
#define <CO_FADEINOUT>D__41_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D4F120)
#define <CO_FADEINOUT>D__41_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D4F330)
#define <CO_FADEINOUT>D__41_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1D4F340)
#define <CO_FADEINOUT>D__41_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D4F390)

	inline static constexpr unsigned int <co_FadeInOut>d__41_TypeDefinitionIndex = 20180;

	class <co_FadeInOut>d__41 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Audio::BGMPlayer* __4__this; // 0x20
		::System::Boolean isIn; // 0x28
		::System::Single duration; // 0x2C
		::UnityEngine::AudioSource* _audioSource_5__2; // 0x30
		::System::Single _startValue_5__3; // 0x38
		::System::Single _endValue_5__4; // 0x3C
		::System::Single _time_5__5; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_FADEINOUT>D__41_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_FADEINOUT>D__41_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_FADEINOUT>D__41_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_FADEINOUT>D__41_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_FADEINOUT>D__41_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_FADEINOUT>D__41_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

