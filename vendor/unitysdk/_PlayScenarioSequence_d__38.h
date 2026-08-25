#pragma once
#include "unitysdk.h"

class MinigameCCGObject;
namespace MX::Data::Excel { class MinigameCCGLevelStageExcel; }
namespace MX::MinigameCCG::Visual { class ScenarioDisplayOption; }

#define <PLAYSCENARIOSEQUENCE>D__38_.CTOR_OFFSET UNITYSDK_OFFSET(0x26F38F0)
#define <PLAYSCENARIOSEQUENCE>D__38_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x26F5BA0)
#define <PLAYSCENARIOSEQUENCE>D__38_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x26F5BB0)
#define <PLAYSCENARIOSEQUENCE>D__38_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x26F5F60)
#define <PLAYSCENARIOSEQUENCE>D__38_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x26F5F70)
#define <PLAYSCENARIOSEQUENCE>D__38_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x26F5FC0)

	inline static constexpr unsigned int <PlayScenarioSequence>d__38_TypeDefinitionIndex = 430;

	class <PlayScenarioSequence>d__38 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		MinigameCCGObject* __4__this; // 0x20
		::MX::Data::Excel::MinigameCCGLevelStageExcel* excel; // 0x28
		::MX::MinigameCCG::Visual::ScenarioDisplayOption* option; // 0x38
		::System::Action* callback; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYSCENARIOSEQUENCE>D__38_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYSCENARIOSEQUENCE>D__38_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYSCENARIOSEQUENCE>D__38_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYSCENARIOSEQUENCE>D__38_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYSCENARIOSEQUENCE>D__38_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYSCENARIOSEQUENCE>D__38_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

