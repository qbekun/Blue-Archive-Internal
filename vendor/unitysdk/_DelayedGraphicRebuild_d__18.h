#pragma once
#include "unitysdk.h"

namespace TMPro { class TextMeshProUGUI; }

#define <DELAYEDGRAPHICREBUILD>D__18_.CTOR_OFFSET UNITYSDK_OFFSET(0xA114E30)
#define <DELAYEDGRAPHICREBUILD>D__18_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xA11DAC0)
#define <DELAYEDGRAPHICREBUILD>D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA11DAD0)
#define <DELAYEDGRAPHICREBUILD>D__18_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA11DBA0)
#define <DELAYEDGRAPHICREBUILD>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xA11DBB0)
#define <DELAYEDGRAPHICREBUILD>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA11DC00)

	inline static constexpr unsigned int <DelayedGraphicRebuild>d__18_TypeDefinitionIndex = 33610;

	class <DelayedGraphicRebuild>d__18 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::TMPro::TextMeshProUGUI* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <DELAYEDGRAPHICREBUILD>D__18_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DELAYEDGRAPHICREBUILD>D__18_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <DELAYEDGRAPHICREBUILD>D__18_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <DELAYEDGRAPHICREBUILD>D__18_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DELAYEDGRAPHICREBUILD>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <DELAYEDGRAPHICREBUILD>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

