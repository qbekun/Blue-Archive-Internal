#pragma once
#include "unitysdk.h"

class SpineClip;
class SpineBase;
namespace Spine { class AnimationState; }

#define <COPLAYMASKEDRANDOMTIMING>D__69_.CTOR_OFFSET UNITYSDK_OFFSET(0x20E63A0)
#define <COPLAYMASKEDRANDOMTIMING>D__69_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x20E63C0)
#define <COPLAYMASKEDRANDOMTIMING>D__69_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x20E63D0)
#define <COPLAYMASKEDRANDOMTIMING>D__69_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20E65C0)
#define <COPLAYMASKEDRANDOMTIMING>D__69_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x20E65D0)
#define <COPLAYMASKEDRANDOMTIMING>D__69_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20E6620)

	inline static constexpr unsigned int <CoPlayMaskedRandomTiming>d__69_TypeDefinitionIndex = 3775;

	class <CoPlayMaskedRandomTiming>d__69 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		SpineClip* sc; // 0x20
		SpineBase* __4__this; // 0x28
		::Spine::AnimationState* state; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYMASKEDRANDOMTIMING>D__69_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYMASKEDRANDOMTIMING>D__69_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYMASKEDRANDOMTIMING>D__69_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYMASKEDRANDOMTIMING>D__69_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYMASKEDRANDOMTIMING>D__69_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYMASKEDRANDOMTIMING>D__69_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

