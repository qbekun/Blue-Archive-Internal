#pragma once
#include "unitysdk.h"

namespace NPA::Editor { class NXPVirtualKeyboardHandler; }

#define <DEACTIVATEINPUTFIELD>D__3_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D95A60)
#define <DEACTIVATEINPUTFIELD>D__3_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9D95CF0)
#define <DEACTIVATEINPUTFIELD>D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9D95D00)
#define <DEACTIVATEINPUTFIELD>D__3_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9D95DC0)
#define <DEACTIVATEINPUTFIELD>D__3_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9D95DD0)
#define <DEACTIVATEINPUTFIELD>D__3_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9D95E20)

	inline static constexpr unsigned int <DeactivateInputField>d__3_TypeDefinitionIndex = 26317;

	class <DeactivateInputField>d__3 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Single delay; // 0x20
		::NPA::Editor::NXPVirtualKeyboardHandler* __4__this; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <DEACTIVATEINPUTFIELD>D__3_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DEACTIVATEINPUTFIELD>D__3_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <DEACTIVATEINPUTFIELD>D__3_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <DEACTIVATEINPUTFIELD>D__3_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DEACTIVATEINPUTFIELD>D__3_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <DEACTIVATEINPUTFIELD>D__3_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

