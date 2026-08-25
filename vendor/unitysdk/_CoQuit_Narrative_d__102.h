#pragma once
#include "unitysdk.h"

namespace MXField { class FieldGameManager; }

#define <COQUIT_NARRATIVE>D__102_.CTOR_OFFSET UNITYSDK_OFFSET(0xE69940)
#define <COQUIT_NARRATIVE>D__102_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xE6C5E0)
#define <COQUIT_NARRATIVE>D__102_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE6C5F0)
#define <COQUIT_NARRATIVE>D__102_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE6C980)
#define <COQUIT_NARRATIVE>D__102_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xE6C990)
#define <COQUIT_NARRATIVE>D__102_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE6C9E0)

	inline static constexpr unsigned int <CoQuit_Narrative>d__102_TypeDefinitionIndex = 10509;

	class <CoQuit_Narrative>d__102 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MXField::FieldGameManager* __4__this; // 0x20
		::System::Boolean playNextScenario; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COQUIT_NARRATIVE>D__102_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COQUIT_NARRATIVE>D__102_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COQUIT_NARRATIVE>D__102_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COQUIT_NARRATIVE>D__102_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COQUIT_NARRATIVE>D__102_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COQUIT_NARRATIVE>D__102_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

