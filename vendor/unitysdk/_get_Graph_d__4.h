#pragma once
#include "unitysdk.h"

namespace MX::MinigameCCG { class CCGGameState; }
namespace MX::MinigameCCG { class CCGGameState_PlayerTurn; }
namespace MX::MinigameCCG { class CCGGameState_UseCharacterActiveSkill; }
namespace MX::MinigameCCG { class CCGStriker; }

#define <GET_GRAPH>D__4_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DE4F50)
#define <GET_GRAPH>D__4_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DE5050)
#define <GET_GRAPH>D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DE5600)
#define <GET_GRAPH>D__4___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1DE7C40)
#define <GET_GRAPH>D__4___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1DE7B90)
#define <GET_GRAPH>D__4___M__FINALLY3_OFFSET UNITYSDK_OFFSET(0x1DE7D40)
#define <GET_GRAPH>D__4___M__FINALLY4_OFFSET UNITYSDK_OFFSET(0x1DE7C90)
#define <GET_GRAPH>D__4___M__FINALLY5_OFFSET UNITYSDK_OFFSET(0x1DE7E40)
#define <GET_GRAPH>D__4___M__FINALLY6_OFFSET UNITYSDK_OFFSET(0x1DE7D90)
#define <GET_GRAPH>D__4___M__FINALLY7_OFFSET UNITYSDK_OFFSET(0x1DE7EE0)
#define <GET_GRAPH>D__4___M__FINALLY8_OFFSET UNITYSDK_OFFSET(0x1DE7E90)
#define <GET_GRAPH>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.MINIGAMECCG.CCGGAMESTATE_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DE7F30)
#define <GET_GRAPH>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1DE7F40)
#define <GET_GRAPH>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DE7F90)
#define <GET_GRAPH>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.MINIGAMECCG.CCGGAMESTATE_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DE7FA0)
#define <GET_GRAPH>D__4_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DE8040)

	inline static constexpr unsigned int <get_Graph>d__4_TypeDefinitionIndex = 20674;

	class <get_Graph>d__4 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::MinigameCCG::CCGGameState* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::MX::MinigameCCG::CCGGameState_PlayerTurn* __4__this; // 0x28
		::System::Int32 _drawCount_5__2; // 0x30
		::System::Boolean _loop_5__3; // 0x34
		::System::Int32 _i_5__4; // 0x38
		Il2CppObject* __7__wrap4; // 0x40
		Il2CppObject* __7__wrap5; // 0x58
		::MX::MinigameCCG::CCGGameState_UseCharacterActiveSkill* _state_5__7; // 0x60
		::MX::MinigameCCG::CCGStriker* _targetStriker_5__8; // 0x68
		Il2CppObject* __7__wrap8; // 0x70
		Il2CppObject* __7__wrap9; // 0x88

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__4_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__4_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__4_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__4___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Void __m__Finally2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__4___M__FINALLY2_OFFSET))(nullptr);
		}

		::System::Void __m__Finally3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__4___M__FINALLY3_OFFSET))(nullptr);
		}

		::System::Void __m__Finally4()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__4___M__FINALLY4_OFFSET))(nullptr);
		}

		::System::Void __m__Finally5()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__4___M__FINALLY5_OFFSET))(nullptr);
		}

		::System::Void __m__Finally6()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__4___M__FINALLY6_OFFSET))(nullptr);
		}

		::System::Void __m__Finally7()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__4___M__FINALLY7_OFFSET))(nullptr);
		}

		::System::Void __m__Finally8()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__4___M__FINALLY8_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGGameState* System.Collections.Generic.IEnumerator_MX.MinigameCCG.CCGGameState_.get_Current()
		{
			return (return (::MX::MinigameCCG::CCGGameState*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.MINIGAMECCG.CCGGAMESTATE_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.MinigameCCG.CCGGameState_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.MINIGAMECCG.CCGGAMESTATE_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__4_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

