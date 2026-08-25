#pragma once
#include "unitysdk.h"

class UIAcademyMessangerStudentPopulator;

#define <<SETITEMS>G__YIELDRESETSCROLLVIEW|56_2>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x21AB610)
#define <<SETITEMS>G__YIELDRESETSCROLLVIEW|56_2>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x21AD070)
#define <<SETITEMS>G__YIELDRESETSCROLLVIEW|56_2>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x21AD080)
#define <<SETITEMS>G__YIELDRESETSCROLLVIEW|56_2>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x21AD110)
#define <<SETITEMS>G__YIELDRESETSCROLLVIEW|56_2>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x21AD120)
#define <<SETITEMS>G__YIELDRESETSCROLLVIEW|56_2>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x21AD170)

	inline static constexpr unsigned int <<SetItems>g__YieldResetScrollView|56_2>d_TypeDefinitionIndex = 4172;

	class <<SetItems>g__YieldResetScrollView|56_2>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIAcademyMessangerStudentPopulator* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<SETITEMS>G__YIELDRESETSCROLLVIEW|56_2>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SETITEMS>G__YIELDRESETSCROLLVIEW|56_2>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SETITEMS>G__YIELDRESETSCROLLVIEW|56_2>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SETITEMS>G__YIELDRESETSCROLLVIEW|56_2>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SETITEMS>G__YIELDRESETSCROLLVIEW|56_2>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SETITEMS>G__YIELDRESETSCROLLVIEW|56_2>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

