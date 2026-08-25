#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AudioSource; }
namespace UnityEngine { class AnimationCurve; }

#define <COCHANGEVOLUMEWITHCURVE>D__37_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D43710)
#define <COCHANGEVOLUMEWITHCURVE>D__37_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D43730)
#define <COCHANGEVOLUMEWITHCURVE>D__37_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D43740)
#define <COCHANGEVOLUMEWITHCURVE>D__37_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D43A00)
#define <COCHANGEVOLUMEWITHCURVE>D__37_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1D43A10)
#define <COCHANGEVOLUMEWITHCURVE>D__37_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D43A60)

	inline static constexpr unsigned int <CoChangeVolumeWithCurve>d__37_TypeDefinitionIndex = 20129;

	class <CoChangeVolumeWithCurve>d__37 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::AudioSource* source; // 0x20
		::System::Single maxVolume; // 0x28
		::UnityEngine::AnimationCurve* curve; // 0x30
		::System::Single duration; // 0x38
		::System::Action* callback; // 0x40
		::System::Single _elapsed_5__2; // 0x48
		::System::Boolean _first_5__3; // 0x4C

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COCHANGEVOLUMEWITHCURVE>D__37_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCHANGEVOLUMEWITHCURVE>D__37_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCHANGEVOLUMEWITHCURVE>D__37_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCHANGEVOLUMEWITHCURVE>D__37_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCHANGEVOLUMEWITHCURVE>D__37_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCHANGEVOLUMEWITHCURVE>D__37_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

