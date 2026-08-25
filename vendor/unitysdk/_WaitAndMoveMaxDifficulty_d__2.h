#pragma once
#include "unitysdk.h"

class RaidListScollViewController;

#define <WAITANDMOVEMAXDIFFICULTY>D__2_.CTOR_OFFSET UNITYSDK_OFFSET(0x2786880)
#define <WAITANDMOVEMAXDIFFICULTY>D__2_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x27868A0)
#define <WAITANDMOVEMAXDIFFICULTY>D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x27868B0)
#define <WAITANDMOVEMAXDIFFICULTY>D__2_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x27869E0)
#define <WAITANDMOVEMAXDIFFICULTY>D__2_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x27869F0)
#define <WAITANDMOVEMAXDIFFICULTY>D__2_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2786A40)

	inline static constexpr unsigned int <WaitAndMoveMaxDifficulty>d__2_TypeDefinitionIndex = 7400;

	class <WaitAndMoveMaxDifficulty>d__2 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		RaidListScollViewController* __4__this; // 0x20
		::System::Single offset; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <WAITANDMOVEMAXDIFFICULTY>D__2_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITANDMOVEMAXDIFFICULTY>D__2_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITANDMOVEMAXDIFFICULTY>D__2_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITANDMOVEMAXDIFFICULTY>D__2_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITANDMOVEMAXDIFFICULTY>D__2_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITANDMOVEMAXDIFFICULTY>D__2_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

