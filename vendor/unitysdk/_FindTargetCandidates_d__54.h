#pragma once
#include "unitysdk.h"

namespace MX::MinigameCCG { class CCGEntity; }
namespace MX::MinigameCCG { class CCGTargetCategoryRule; }
namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG { class CCGStriker; }
namespace MX::MinigameCCG { class CCGSpecial; }

#define <FINDTARGETCANDIDATES>D__54_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DBEC50)
#define <FINDTARGETCANDIDATES>D__54_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DC1910)
#define <FINDTARGETCANDIDATES>D__54_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DC1E50)
#define <FINDTARGETCANDIDATES>D__54___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1DC3260)
#define <FINDTARGETCANDIDATES>D__54___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1DC3310)
#define <FINDTARGETCANDIDATES>D__54___M__FINALLY3_OFFSET UNITYSDK_OFFSET(0x1DC3360)
#define <FINDTARGETCANDIDATES>D__54___M__FINALLY4_OFFSET UNITYSDK_OFFSET(0x1DC34C0)
#define <FINDTARGETCANDIDATES>D__54___M__FINALLY5_OFFSET UNITYSDK_OFFSET(0x1DC3410)
#define <FINDTARGETCANDIDATES>D__54___M__FINALLY6_OFFSET UNITYSDK_OFFSET(0x1DC3620)
#define <FINDTARGETCANDIDATES>D__54___M__FINALLY7_OFFSET UNITYSDK_OFFSET(0x1DC3570)
#define <FINDTARGETCANDIDATES>D__54_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.MINIGAMECCG.CCGENTITY_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DC36D0)
#define <FINDTARGETCANDIDATES>D__54_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1DC36E0)
#define <FINDTARGETCANDIDATES>D__54_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DC3730)
#define <FINDTARGETCANDIDATES>D__54_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.MINIGAMECCG.CCGENTITY_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DC3740)
#define <FINDTARGETCANDIDATES>D__54_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DC37E0)

	inline static constexpr unsigned int <FindTargetCandidates>d__54_TypeDefinitionIndex = 20460;

	class <FindTargetCandidates>d__54 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::MinigameCCG::CCGEntity* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::MX::MinigameCCG::CCGTargetCategoryRule* categoryRule; // 0x24
		::MX::MinigameCCG::CCGTargetCategoryRule* __3__categoryRule; // 0x28
		::MX::MinigameCCG::CCGPlayer* __4__this; // 0x30
		Il2CppObject* __7__wrap1; // 0x38
		Il2CppObject* __7__wrap2; // 0x40
		Il2CppObject* __7__wrap3; // 0x58
		::MX::MinigameCCG::CCGStriker* _character_5__5; // 0x60
		Il2CppObject* __7__wrap5; // 0x68
		Il2CppObject* __7__wrap6; // 0x70
		::MX::MinigameCCG::CCGSpecial* _character_5__8; // 0x78

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <FINDTARGETCANDIDATES>D__54_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDTARGETCANDIDATES>D__54_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDTARGETCANDIDATES>D__54_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDTARGETCANDIDATES>D__54___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Void __m__Finally2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDTARGETCANDIDATES>D__54___M__FINALLY2_OFFSET))(nullptr);
		}

		::System::Void __m__Finally3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDTARGETCANDIDATES>D__54___M__FINALLY3_OFFSET))(nullptr);
		}

		::System::Void __m__Finally4()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDTARGETCANDIDATES>D__54___M__FINALLY4_OFFSET))(nullptr);
		}

		::System::Void __m__Finally5()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDTARGETCANDIDATES>D__54___M__FINALLY5_OFFSET))(nullptr);
		}

		::System::Void __m__Finally6()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDTARGETCANDIDATES>D__54___M__FINALLY6_OFFSET))(nullptr);
		}

		::System::Void __m__Finally7()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDTARGETCANDIDATES>D__54___M__FINALLY7_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGEntity* System.Collections.Generic.IEnumerator_MX.MinigameCCG.CCGEntity_.get_Current()
		{
			return (return (::MX::MinigameCCG::CCGEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDTARGETCANDIDATES>D__54_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.MINIGAMECCG.CCGENTITY_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDTARGETCANDIDATES>D__54_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDTARGETCANDIDATES>D__54_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.MinigameCCG.CCGEntity_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDTARGETCANDIDATES>D__54_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.MINIGAMECCG.CCGENTITY_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINDTARGETCANDIDATES>D__54_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

