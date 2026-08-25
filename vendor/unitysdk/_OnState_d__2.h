#pragma once
#include "unitysdk.h"

namespace MX::MinigameCCG { class CCGGameState; }
namespace MX::MinigameCCG::Procedures { class RunProceduresWithLoop; }
namespace MX::MinigameCCG { class CCGSkillContext; }

#define <ONSTATE>D__2_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E35F10)
#define <ONSTATE>D__2_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E35F50)
#define <ONSTATE>D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E360E0)
#define <ONSTATE>D__2___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1E366E0)
#define <ONSTATE>D__2___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1E36630)
#define <ONSTATE>D__2_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.MINIGAMECCG.CCGGAMESTATE_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E36730)
#define <ONSTATE>D__2_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1E36740)
#define <ONSTATE>D__2_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E36790)
#define <ONSTATE>D__2_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.MINIGAMECCG.CCGGAMESTATE_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E367A0)
#define <ONSTATE>D__2_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E36850)

	inline static constexpr unsigned int <OnState>d__2_TypeDefinitionIndex = 21035;

	class <OnState>d__2 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::MinigameCCG::CCGGameState* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::MX::MinigameCCG::Procedures::RunProceduresWithLoop* __4__this; // 0x28
		::MX::MinigameCCG::CCGSkillContext* context; // 0x30
		::MX::MinigameCCG::CCGSkillContext* __3__context; // 0x38
		::System::Int32 _loopCount_5__2; // 0x40
		::System::Int32 _i_5__3; // 0x44
		Il2CppObject* __7__wrap3; // 0x48
		Il2CppObject* __7__wrap4; // 0x60

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <ONSTATE>D__2_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ONSTATE>D__2_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <ONSTATE>D__2_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ONSTATE>D__2___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Void __m__Finally2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ONSTATE>D__2___M__FINALLY2_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGGameState* System.Collections.Generic.IEnumerator_MX.MinigameCCG.CCGGameState_.get_Current()
		{
			return (return (::MX::MinigameCCG::CCGGameState*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ONSTATE>D__2_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.MINIGAMECCG.CCGGAMESTATE_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ONSTATE>D__2_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ONSTATE>D__2_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.MinigameCCG.CCGGameState_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ONSTATE>D__2_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.MINIGAMECCG.CCGGAMESTATE_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ONSTATE>D__2_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

