#pragma once
#include "unitysdk.h"

namespace MX::MinigameCCG { class CCGGameState; }
namespace MX::MinigameCCG { class CCGGameState_GamePrepare; }

#define <GET_GRAPH>D__5_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DDE3D0)
#define <GET_GRAPH>D__5_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DDE480)
#define <GET_GRAPH>D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DDE5E0)
#define <GET_GRAPH>D__5___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1DDF370)
#define <GET_GRAPH>D__5___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1DDF420)
#define <GET_GRAPH>D__5_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.MINIGAMECCG.CCGGAMESTATE_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DDF4D0)
#define <GET_GRAPH>D__5_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1DDF4E0)
#define <GET_GRAPH>D__5_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DDF530)
#define <GET_GRAPH>D__5_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.MINIGAMECCG.CCGGAMESTATE_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DDF540)
#define <GET_GRAPH>D__5_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DDF5E0)

	inline static constexpr unsigned int <get_Graph>d__5_TypeDefinitionIndex = 20650;

	class <get_Graph>d__5 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::MinigameCCG::CCGGameState* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::MX::MinigameCCG::CCGGameState_GamePrepare* __4__this; // 0x28
		::System::Int32 _playerADrawableCount_5__2; // 0x30
		::System::Int32 _playerBDrawableCount_5__3; // 0x34
		::System::Int32 _i_5__4; // 0x38
		Il2CppObject* __7__wrap4; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__5_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__5_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__5_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__5___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Void __m__Finally2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__5___M__FINALLY2_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGGameState* System.Collections.Generic.IEnumerator_MX.MinigameCCG.CCGGameState_.get_Current()
		{
			return (return (::MX::MinigameCCG::CCGGameState*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__5_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.MINIGAMECCG.CCGGAMESTATE_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__5_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__5_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.MinigameCCG.CCGGameState_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__5_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.MINIGAMECCG.CCGGAMESTATE_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_GRAPH>D__5_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

