#pragma once
#include "unitysdk.h"

class UIPopup_EliminateRaidNewRecord;
class EliminateRaidObject;

#define <COTOTALPOINTANI>D__18_.CTOR_OFFSET UNITYSDK_OFFSET(0x23E88F0)
#define <COTOTALPOINTANI>D__18_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x23E8B30)
#define <COTOTALPOINTANI>D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x23E8B40)
#define <COTOTALPOINTANI>D__18_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x23E8EE0)
#define <COTOTALPOINTANI>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x23E8EF0)
#define <COTOTALPOINTANI>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x23E8F40)

	inline static constexpr unsigned int <CoTotalPointAni>d__18_TypeDefinitionIndex = 5391;

	class <CoTotalPointAni>d__18 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIPopup_EliminateRaidNewRecord* __4__this; // 0x20
		::System::Single duration; // 0x28
		EliminateRaidObject* _eliminateRaidObject_5__2; // 0x30
		::System::Int64 _start_5__3; // 0x38
		::System::Int64 _end_5__4; // 0x40
		::System::Single _f_5__5; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COTOTALPOINTANI>D__18_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COTOTALPOINTANI>D__18_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COTOTALPOINTANI>D__18_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COTOTALPOINTANI>D__18_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COTOTALPOINTANI>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COTOTALPOINTANI>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

