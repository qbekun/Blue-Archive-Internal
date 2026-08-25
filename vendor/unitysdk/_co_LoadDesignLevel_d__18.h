#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCSectionVisual; }
class <>c__DisplayClass18_0;

#define <CO_LOADDESIGNLEVEL>D__18_.CTOR_OFFSET UNITYSDK_OFFSET(0xDADC30)
#define <CO_LOADDESIGNLEVEL>D__18_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xDAE2F0)
#define <CO_LOADDESIGNLEVEL>D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDAE300)
#define <CO_LOADDESIGNLEVEL>D__18_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDAE5B0)
#define <CO_LOADDESIGNLEVEL>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xDAE5C0)
#define <CO_LOADDESIGNLEVEL>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDAE610)

	inline static constexpr unsigned int <co_LoadDesignLevel>d__18_TypeDefinitionIndex = 9917;

	class <co_LoadDesignLevel>d__18 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MXUnderCover::UCSectionVisual* __4__this; // 0x20
		<>c__DisplayClass18_0* __8__1; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADDESIGNLEVEL>D__18_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADDESIGNLEVEL>D__18_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADDESIGNLEVEL>D__18_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADDESIGNLEVEL>D__18_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADDESIGNLEVEL>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADDESIGNLEVEL>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

