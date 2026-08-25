#pragma once
#include "unitysdk.h"

class UIVictory;
class <>c__DisplayClass135_0;

#define <<ONENDOPENANIMATION>G__SHOWFRIENDAPPLICANTPOPUP|135_0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0xBB4150)
#define <<ONENDOPENANIMATION>G__SHOWFRIENDAPPLICANTPOPUP|135_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBBD60)
#define <<ONENDOPENANIMATION>G__SHOWFRIENDAPPLICANTPOPUP|135_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBBBD70)
#define <<ONENDOPENANIMATION>G__SHOWFRIENDAPPLICANTPOPUP|135_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBBC100)
#define <<ONENDOPENANIMATION>G__SHOWFRIENDAPPLICANTPOPUP|135_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xBBC110)
#define <<ONENDOPENANIMATION>G__SHOWFRIENDAPPLICANTPOPUP|135_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBBC160)

	inline static constexpr unsigned int <<OnEndOpenAnimation>g__ShowFriendApplicantPopup|135_0>d_TypeDefinitionIndex = 8602;

	class <<OnEndOpenAnimation>g__ShowFriendApplicantPopup|135_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIVictory* __4__this; // 0x20
		<>c__DisplayClass135_0* __8__1; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<ONENDOPENANIMATION>G__SHOWFRIENDAPPLICANTPOPUP|135_0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONENDOPENANIMATION>G__SHOWFRIENDAPPLICANTPOPUP|135_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONENDOPENANIMATION>G__SHOWFRIENDAPPLICANTPOPUP|135_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONENDOPENANIMATION>G__SHOWFRIENDAPPLICANTPOPUP|135_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONENDOPENANIMATION>G__SHOWFRIENDAPPLICANTPOPUP|135_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONENDOPENANIMATION>G__SHOWFRIENDAPPLICANTPOPUP|135_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

