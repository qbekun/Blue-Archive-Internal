#pragma once
#include "unitysdk.h"

namespace MX::Audio { class BGMPlayer; }
namespace MX::Data { class BGMPlayInfo; }

#define <CO_CHANGE>D__36_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D4DD60)
#define <CO_CHANGE>D__36_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D4ED60)
#define <CO_CHANGE>D__36_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D4ED70)
#define <CO_CHANGE>D__36_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D4EF30)
#define <CO_CHANGE>D__36_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1D4EF40)
#define <CO_CHANGE>D__36_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D4EF90)

	inline static constexpr unsigned int <co_Change>d__36_TypeDefinitionIndex = 20178;

	class <co_Change>d__36 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Audio::BGMPlayer* __4__this; // 0x20
		::System::Single fadeOutTime; // 0x28
		::MX::Data::BGMPlayInfo* playInfo; // 0x30
		::System::Single startTime; // 0x38
		::System::Single fadeInTime; // 0x3C
		Il2CppObject* forceLoopStartTime; // 0x40
		Il2CppObject* forceLoopEndTime; // 0x48
		::System::Boolean useStartFadeIn; // 0x50

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_CHANGE>D__36_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CHANGE>D__36_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CHANGE>D__36_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CHANGE>D__36_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CHANGE>D__36_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CHANGE>D__36_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

