#pragma once
#include "unitysdk.h"

namespace MX::MinigameCCG { class CCGEntity; }
namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG { class CCGCharacter; }

#define <GET_ALLACTIVEENTITIES>D__39_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DBF290)
#define <GET_ALLACTIVEENTITIES>D__39_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DBF2E0)
#define <GET_ALLACTIVEENTITIES>D__39_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DBF550)
#define <GET_ALLACTIVEENTITIES>D__39___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1DBFE20)
#define <GET_ALLACTIVEENTITIES>D__39___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1DBFD70)
#define <GET_ALLACTIVEENTITIES>D__39___M__FINALLY3_OFFSET UNITYSDK_OFFSET(0x1DBFED0)
#define <GET_ALLACTIVEENTITIES>D__39_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.MINIGAMECCG.CCGENTITY_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DBFF20)
#define <GET_ALLACTIVEENTITIES>D__39_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1DBFF30)
#define <GET_ALLACTIVEENTITIES>D__39_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DBFF80)
#define <GET_ALLACTIVEENTITIES>D__39_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.MINIGAMECCG.CCGENTITY_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DBFF90)
#define <GET_ALLACTIVEENTITIES>D__39_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DC0030)

	inline static constexpr unsigned int <get_AllActiveEntities>d__39_TypeDefinitionIndex = 20456;

	class <get_AllActiveEntities>d__39 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::MinigameCCG::CCGEntity* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::MX::MinigameCCG::CCGPlayer* __4__this; // 0x28
		Il2CppObject* __7__wrap1; // 0x30
		::MX::MinigameCCG::CCGCharacter* _entity_5__3; // 0x38
		Il2CppObject* __7__wrap3; // 0x40
		Il2CppObject* __7__wrap4; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GET_ALLACTIVEENTITIES>D__39_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_ALLACTIVEENTITIES>D__39_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_ALLACTIVEENTITIES>D__39_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_ALLACTIVEENTITIES>D__39___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Void __m__Finally2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_ALLACTIVEENTITIES>D__39___M__FINALLY2_OFFSET))(nullptr);
		}

		::System::Void __m__Finally3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_ALLACTIVEENTITIES>D__39___M__FINALLY3_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGEntity* System.Collections.Generic.IEnumerator_MX.MinigameCCG.CCGEntity_.get_Current()
		{
			return (return (::MX::MinigameCCG::CCGEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_ALLACTIVEENTITIES>D__39_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.MINIGAMECCG.CCGENTITY_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_ALLACTIVEENTITIES>D__39_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_ALLACTIVEENTITIES>D__39_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.MinigameCCG.CCGEntity_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_ALLACTIVEENTITIES>D__39_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.MINIGAMECCG.CCGENTITY_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_ALLACTIVEENTITIES>D__39_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

