#pragma once
#include "unitysdk.h"

namespace MX::MinigameCCG { class CCGGameState; }
namespace MX::MinigameCCG { class CCGGameState_PrepareActiveSkill; }
namespace MX::MinigameCCG::SkillTriggers { class ActiveTrigger; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define <GET_GRAPH>D__8_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DE80E0)
#define <GET_GRAPH>D__8_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DE8110)
#define <GET_GRAPH>D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DE8120)
#define <GET_GRAPH>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.MINIGAMECCG.CCGGAMESTATE_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DE88B0)
#define <GET_GRAPH>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1DE88C0)
#define <GET_GRAPH>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DE8910)
#define <GET_GRAPH>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.MINIGAMECCG.CCGGAMESTATE_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DE8920)
#define <GET_GRAPH>D__8_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DE89C0)

	inline static constexpr unsigned int <get_Graph>d__8_TypeDefinitionIndex = 20676;

	class <get_Graph>d__8 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::MinigameCCG::CCGGameState* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::MX::MinigameCCG::CCGGameState_PrepareActiveSkill* __4__this; // 0x28
		::MX::MinigameCCG::SkillTriggers::ActiveTrigger* _activeTrigger_5__2; // 0x30
		::MX::MinigameCCG::CCGSkillContext* _skillContext_5__3; // 0x38
		Il2CppObject* _candidates_5__4; // 0x40
		::System::Int32 _selectCount_5__5; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__8_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__8_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__8_MOVENEXT_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGGameState* System.Collections.Generic.IEnumerator_MX.MinigameCCG.CCGGameState_.get_Current()
		{
			return (return (::MX::MinigameCCG::CCGGameState*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.MINIGAMECCG.CCGGAMESTATE_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.MinigameCCG.CCGGameState_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.MINIGAMECCG.CCGGAMESTATE_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__8_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

