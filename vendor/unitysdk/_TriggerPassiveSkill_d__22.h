#pragma once
#include "unitysdk.h"

namespace MX::MinigameCCG { class CCGGameState; }
namespace MX::MinigameCCG { class CCGCharacter; }

#define <TRIGGERPASSIVESKILL>D__22_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DC70C0)
#define <TRIGGERPASSIVESKILL>D__22_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DC78A0)
#define <TRIGGERPASSIVESKILL>D__22_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DC79D0)
#define <TRIGGERPASSIVESKILL>D__22___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1DC8050)
#define <TRIGGERPASSIVESKILL>D__22___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1DC8100)
#define <TRIGGERPASSIVESKILL>D__22_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.MINIGAMECCG.CCGGAMESTATE_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DC81B0)
#define <TRIGGERPASSIVESKILL>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1DC81C0)
#define <TRIGGERPASSIVESKILL>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DC8210)
#define <TRIGGERPASSIVESKILL>D__22_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.MINIGAMECCG.CCGGAMESTATE_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DC8220)
#define <TRIGGERPASSIVESKILL>D__22_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DC82D0)

	inline static constexpr unsigned int <TriggerPassiveSkill>d__22_TypeDefinitionIndex = 20502;

	class <TriggerPassiveSkill>d__22 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::MinigameCCG::CCGGameState* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::MX::MinigameCCG::CCGCharacter* __4__this; // 0x28
		::System::Object* args; // 0x30
		::System::Object* __3__args; // 0x38
		::Il2CppArray<::System::Object*>* _equipments_5__2; // 0x40
		Il2CppObject* __7__wrap2; // 0x48
		::System::Int32 _i_5__4; // 0x50

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <TRIGGERPASSIVESKILL>D__22_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <TRIGGERPASSIVESKILL>D__22_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <TRIGGERPASSIVESKILL>D__22_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <TRIGGERPASSIVESKILL>D__22___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Void __m__Finally2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <TRIGGERPASSIVESKILL>D__22___M__FINALLY2_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGGameState* System.Collections.Generic.IEnumerator_MX.MinigameCCG.CCGGameState_.get_Current()
		{
			return (return (::MX::MinigameCCG::CCGGameState*(*)(::PVOID))((::PBYTE)hIl2Cpp + <TRIGGERPASSIVESKILL>D__22_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.MINIGAMECCG.CCGGAMESTATE_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <TRIGGERPASSIVESKILL>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <TRIGGERPASSIVESKILL>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.MinigameCCG.CCGGameState_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <TRIGGERPASSIVESKILL>D__22_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.MINIGAMECCG.CCGGAMESTATE_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <TRIGGERPASSIVESKILL>D__22_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

