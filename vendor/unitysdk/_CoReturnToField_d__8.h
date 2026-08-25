#pragma once
#include "unitysdk.h"

namespace MXField::Actions { class PlayUnderCoverStageAction; }
class <>c__DisplayClass8_0;
namespace MXField::Core::Save { class FieldSaveSO; }
namespace MXField { class FieldBridge; }
namespace MXField::Core::Save { class FieldSaveRepository; }

#define <CORETURNTOFIELD>D__8_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF6BF0)
#define <CORETURNTOFIELD>D__8_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xEF7270)
#define <CORETURNTOFIELD>D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xEF7280)
#define <CORETURNTOFIELD>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xEF78A0)
#define <CORETURNTOFIELD>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xEF78B0)
#define <CORETURNTOFIELD>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xEF7900)

	inline static constexpr unsigned int <CoReturnToField>d__8_TypeDefinitionIndex = 11134;

	class <CoReturnToField>d__8 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MXField::Actions::PlayUnderCoverStageAction* __4__this; // 0x20
		<>c__DisplayClass8_0* __8__1; // 0x28
		::System::Boolean isWin; // 0x30
		::MXField::Core::Save::FieldSaveSO* playingSaveSO; // 0x38
		::MXField::FieldBridge* _fieldBridge_5__2; // 0x40
		::MXField::Core::Save::FieldSaveRepository* _repo_5__3; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CORETURNTOFIELD>D__8_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CORETURNTOFIELD>D__8_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CORETURNTOFIELD>D__8_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CORETURNTOFIELD>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CORETURNTOFIELD>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CORETURNTOFIELD>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

