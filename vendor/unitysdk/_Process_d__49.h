#pragma once
#include "unitysdk.h"

namespace MX::MinigameCCG { class CCGEvent; }
namespace MX::MinigameCCG { class CCGGame; }

#define <PROCESS>D__49_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DB9890)
#define <PROCESS>D__49_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DBBFB0)
#define <PROCESS>D__49_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DBBFC0)
#define <PROCESS>D__49_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.MINIGAMECCG.CCGEVENT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DBC070)
#define <PROCESS>D__49_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1DBC080)
#define <PROCESS>D__49_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DBC0D0)
#define <PROCESS>D__49_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.MINIGAMECCG.CCGEVENT_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DBC0E0)
#define <PROCESS>D__49_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DBC180)

	inline static constexpr unsigned int <Process>d__49_TypeDefinitionIndex = 20450;

	class <Process>d__49 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::MinigameCCG::CCGEvent* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::MX::MinigameCCG::CCGGame* __4__this; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PROCESS>D__49_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESS>D__49_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESS>D__49_MOVENEXT_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGEvent* System.Collections.Generic.IEnumerator_MX.MinigameCCG.CCGEvent_.get_Current()
		{
			return (return (::MX::MinigameCCG::CCGEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESS>D__49_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.MINIGAMECCG.CCGEVENT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESS>D__49_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESS>D__49_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.MinigameCCG.CCGEvent_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESS>D__49_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.MINIGAMECCG.CCGEVENT_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESS>D__49_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

