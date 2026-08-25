#pragma once
#include "unitysdk.h"

class UISchoolDungeonStageSelect;
class UIWeekDungeonStageUnit;

#define <COPLAYSTAGEUNLOCKING>D__35_.CTOR_OFFSET UNITYSDK_OFFSET(0xA660D0)
#define <COPLAYSTAGEUNLOCKING>D__35_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xA660F0)
#define <COPLAYSTAGEUNLOCKING>D__35_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA66100)
#define <COPLAYSTAGEUNLOCKING>D__35_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA667B0)
#define <COPLAYSTAGEUNLOCKING>D__35_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xA667C0)
#define <COPLAYSTAGEUNLOCKING>D__35_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA66810)

	inline static constexpr unsigned int <CoPlayStageUnlocking>d__35_TypeDefinitionIndex = 7824;

	class <CoPlayStageUnlocking>d__35 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UISchoolDungeonStageSelect* __4__this; // 0x20
		Il2CppObject* _newStages_5__2; // 0x28
		UIWeekDungeonStageUnit* _first_5__3; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYSTAGEUNLOCKING>D__35_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYSTAGEUNLOCKING>D__35_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYSTAGEUNLOCKING>D__35_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYSTAGEUNLOCKING>D__35_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYSTAGEUNLOCKING>D__35_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYSTAGEUNLOCKING>D__35_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

