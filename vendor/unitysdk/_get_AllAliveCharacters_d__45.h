#pragma once
#include "unitysdk.h"

namespace MX::MinigameCCG { class CCGCharacter; }
namespace MX::MinigameCCG { class CCGPlayer; }

#define <GET_ALLALIVECHARACTERS>D__45_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DBEF20)
#define <GET_ALLALIVECHARACTERS>D__45_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DC0D40)
#define <GET_ALLALIVECHARACTERS>D__45_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DC0E70)
#define <GET_ALLALIVECHARACTERS>D__45___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1DC1690)
#define <GET_ALLALIVECHARACTERS>D__45___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1DC1740)
#define <GET_ALLALIVECHARACTERS>D__45_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.MINIGAMECCG.CCGCHARACTER_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DC17F0)
#define <GET_ALLALIVECHARACTERS>D__45_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1DC1800)
#define <GET_ALLALIVECHARACTERS>D__45_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DC1850)
#define <GET_ALLALIVECHARACTERS>D__45_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.MINIGAMECCG.CCGCHARACTER_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DC1860)
#define <GET_ALLALIVECHARACTERS>D__45_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DC1900)

	inline static constexpr unsigned int <get_AllAliveCharacters>d__45_TypeDefinitionIndex = 20459;

	class <get_AllAliveCharacters>d__45 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::MinigameCCG::CCGCharacter* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::MX::MinigameCCG::CCGPlayer* __4__this; // 0x28
		Il2CppObject* __7__wrap1; // 0x30
		Il2CppObject* __7__wrap2; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GET_ALLALIVECHARACTERS>D__45_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_ALLALIVECHARACTERS>D__45_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_ALLALIVECHARACTERS>D__45_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_ALLALIVECHARACTERS>D__45___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Void __m__Finally2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_ALLALIVECHARACTERS>D__45___M__FINALLY2_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGCharacter* System.Collections.Generic.IEnumerator_MX.MinigameCCG.CCGCharacter_.get_Current()
		{
			return (return (::MX::MinigameCCG::CCGCharacter*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_ALLALIVECHARACTERS>D__45_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.MINIGAMECCG.CCGCHARACTER_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_ALLALIVECHARACTERS>D__45_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_ALLALIVECHARACTERS>D__45_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.MinigameCCG.CCGCharacter_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_ALLALIVECHARACTERS>D__45_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.MINIGAMECCG.CCGCHARACTER_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GET_ALLALIVECHARACTERS>D__45_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

