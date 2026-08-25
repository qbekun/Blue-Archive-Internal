#pragma once
#include "unitysdk.h"

class FeedItemData;
class UISNS_Post;
class UIPopup_SNS;

#define <COPLAYREPOSTFAVOREFFECT>D__28_.CTOR_OFFSET UNITYSDK_OFFSET(0xAE64A0)
#define <COPLAYREPOSTFAVOREFFECT>D__28_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xAE64C0)
#define <COPLAYREPOSTFAVOREFFECT>D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAE64D0)
#define <COPLAYREPOSTFAVOREFFECT>D__28_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAE6970)
#define <COPLAYREPOSTFAVOREFFECT>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xAE6980)
#define <COPLAYREPOSTFAVOREFFECT>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAE69D0)

	inline static constexpr unsigned int <CoPlayRepostFavorEffect>d__28_TypeDefinitionIndex = 8092;

	class <CoPlayRepostFavorEffect>d__28 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		FeedItemData* data; // 0x20
		UISNS_Post* __4__this; // 0x28
		::System::Action* onAnimationFinished; // 0x30
		::System::Int64 _repostMin_5__2; // 0x38
		::System::Int64 _repostMax_5__3; // 0x40
		::System::Int64 _favorMin_5__4; // 0x48
		::System::Int64 _favorMax_5__5; // 0x50
		UIPopup_SNS* _uiPopupSns_5__6; // 0x58
		::System::Single _timer_5__7; // 0x60

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYREPOSTFAVOREFFECT>D__28_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYREPOSTFAVOREFFECT>D__28_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYREPOSTFAVOREFFECT>D__28_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYREPOSTFAVOREFFECT>D__28_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYREPOSTFAVOREFFECT>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYREPOSTFAVOREFFECT>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

