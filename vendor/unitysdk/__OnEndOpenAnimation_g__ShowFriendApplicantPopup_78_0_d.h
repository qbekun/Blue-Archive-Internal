#pragma once
#include "unitysdk.h"

class UIDefeat;
class <>c__DisplayClass78_0;

#define <<ONENDOPENANIMATION>G__SHOWFRIENDAPPLICANTPOPUP|78_0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x23CBC60)
#define <<ONENDOPENANIMATION>G__SHOWFRIENDAPPLICANTPOPUP|78_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x23D1690)
#define <<ONENDOPENANIMATION>G__SHOWFRIENDAPPLICANTPOPUP|78_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x23D16A0)
#define <<ONENDOPENANIMATION>G__SHOWFRIENDAPPLICANTPOPUP|78_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x23D1BF0)
#define <<ONENDOPENANIMATION>G__SHOWFRIENDAPPLICANTPOPUP|78_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x23D1C00)
#define <<ONENDOPENANIMATION>G__SHOWFRIENDAPPLICANTPOPUP|78_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x23D1C50)

	inline static constexpr unsigned int <<OnEndOpenAnimation>g__ShowFriendApplicantPopup|78_0>d_TypeDefinitionIndex = 5306;

	class <<OnEndOpenAnimation>g__ShowFriendApplicantPopup|78_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIDefeat* __4__this; // 0x20
		<>c__DisplayClass78_0* __8__1; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<ONENDOPENANIMATION>G__SHOWFRIENDAPPLICANTPOPUP|78_0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONENDOPENANIMATION>G__SHOWFRIENDAPPLICANTPOPUP|78_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONENDOPENANIMATION>G__SHOWFRIENDAPPLICANTPOPUP|78_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONENDOPENANIMATION>G__SHOWFRIENDAPPLICANTPOPUP|78_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONENDOPENANIMATION>G__SHOWFRIENDAPPLICANTPOPUP|78_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONENDOPENANIMATION>G__SHOWFRIENDAPPLICANTPOPUP|78_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

