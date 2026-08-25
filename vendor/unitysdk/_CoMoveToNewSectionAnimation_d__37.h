#pragma once
#include "unitysdk.h"

class <>c__DisplayClass37_0;
class UIMultiFloorRaid_Floor;

#define <COMOVETONEWSECTIONANIMATION>D__37_.CTOR_OFFSET UNITYSDK_OFFSET(0x26A97F0)
#define <COMOVETONEWSECTIONANIMATION>D__37_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x26AAED0)
#define <COMOVETONEWSECTIONANIMATION>D__37_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x26AAEE0)
#define <COMOVETONEWSECTIONANIMATION>D__37_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x26AB430)
#define <COMOVETONEWSECTIONANIMATION>D__37_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x26AB440)
#define <COMOVETONEWSECTIONANIMATION>D__37_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x26AB490)

	inline static constexpr unsigned int <CoMoveToNewSectionAnimation>d__37_TypeDefinitionIndex = 6866;

	class <CoMoveToNewSectionAnimation>d__37 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 moveTargetSectionIndex; // 0x20
		<>c__DisplayClass37_0* __8__1; // 0x28
		UIMultiFloorRaid_Floor* __4__this; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COMOVETONEWSECTIONANIMATION>D__37_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVETONEWSECTIONANIMATION>D__37_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVETONEWSECTIONANIMATION>D__37_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVETONEWSECTIONANIMATION>D__37_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVETONEWSECTIONANIMATION>D__37_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVETONEWSECTIONANIMATION>D__37_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

