#pragma once
#include "unitysdk.h"

namespace MX::Audio { class AudioSourceObject; }

#define <CO_INTERRUNTANIMATIONBUG>D__25_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B420)
#define <CO_INTERRUNTANIMATIONBUG>D__25_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D4BF30)
#define <CO_INTERRUNTANIMATIONBUG>D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D4BF40)
#define <CO_INTERRUNTANIMATIONBUG>D__25_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D4C120)
#define <CO_INTERRUNTANIMATIONBUG>D__25_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1D4C130)
#define <CO_INTERRUNTANIMATIONBUG>D__25_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D4C180)

	inline static constexpr unsigned int <co_InterruntAnimationBug>d__25_TypeDefinitionIndex = 20171;

	class <co_InterruntAnimationBug>d__25 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Audio::AudioSourceObject* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_INTERRUNTANIMATIONBUG>D__25_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INTERRUNTANIMATIONBUG>D__25_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INTERRUNTANIMATIONBUG>D__25_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INTERRUNTANIMATIONBUG>D__25_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INTERRUNTANIMATIONBUG>D__25_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INTERRUNTANIMATIONBUG>D__25_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

