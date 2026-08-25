#pragma once
#include "unitysdk.h"

namespace NPA::Editor { class NXPSelectionGroup; }

#define <ENTERATENDOFFRAME>D__59_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D9A3F0)
#define <ENTERATENDOFFRAME>D__59_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9D9B330)
#define <ENTERATENDOFFRAME>D__59_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9D9B340)
#define <ENTERATENDOFFRAME>D__59_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9D9B3E0)
#define <ENTERATENDOFFRAME>D__59_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9D9B3F0)
#define <ENTERATENDOFFRAME>D__59_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9D9B440)

	inline static constexpr unsigned int <EnterAtEndOfFrame>d__59_TypeDefinitionIndex = 26335;

	class <EnterAtEndOfFrame>d__59 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::NPA::Editor::NXPSelectionGroup* __4__this; // 0x20
		::System::Boolean forceSelectEvent; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <ENTERATENDOFFRAME>D__59_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ENTERATENDOFFRAME>D__59_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <ENTERATENDOFFRAME>D__59_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ENTERATENDOFFRAME>D__59_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ENTERATENDOFFRAME>D__59_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ENTERATENDOFFRAME>D__59_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

