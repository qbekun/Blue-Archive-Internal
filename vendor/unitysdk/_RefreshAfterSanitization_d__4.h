#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering::UI { class DebugUIHandlerToggleHistory; }

#define <REFRESHAFTERSANITIZATION>D__4_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FEEB00)
#define <REFRESHAFTERSANITIZATION>D__4_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FEF170)
#define <REFRESHAFTERSANITIZATION>D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9FEF180)
#define <REFRESHAFTERSANITIZATION>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9FEF230)
#define <REFRESHAFTERSANITIZATION>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9FEF240)
#define <REFRESHAFTERSANITIZATION>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9FEF290)

	inline static constexpr unsigned int <RefreshAfterSanitization>d__4_TypeDefinitionIndex = 34165;

	class <RefreshAfterSanitization>d__4 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::Rendering::UI::DebugUIHandlerToggleHistory* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <REFRESHAFTERSANITIZATION>D__4_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REFRESHAFTERSANITIZATION>D__4_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <REFRESHAFTERSANITIZATION>D__4_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <REFRESHAFTERSANITIZATION>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REFRESHAFTERSANITIZATION>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <REFRESHAFTERSANITIZATION>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

