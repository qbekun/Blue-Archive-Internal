#pragma once
#include "unitysdk.h"

class UIPopup_Guide;
namespace UnityEngine::Networking { class UnityWebRequest; }

#define <DOWNLOADGUIDEPOPUPIMAGE>D__15_.CTOR_OFFSET UNITYSDK_OFFSET(0x2768FF0)
#define <DOWNLOADGUIDEPOPUPIMAGE>D__15_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2769430)
#define <DOWNLOADGUIDEPOPUPIMAGE>D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x27694F0)
#define <DOWNLOADGUIDEPOPUPIMAGE>D__15___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x2769880)
#define <DOWNLOADGUIDEPOPUPIMAGE>D__15_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2769930)
#define <DOWNLOADGUIDEPOPUPIMAGE>D__15_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2769940)
#define <DOWNLOADGUIDEPOPUPIMAGE>D__15_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2769990)

	inline static constexpr unsigned int <DownloadGuidePopupImage>d__15_TypeDefinitionIndex = 7323;

	class <DownloadGuidePopupImage>d__15 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::String* url; // 0x20
		::System::String* path; // 0x28
		UIPopup_Guide* __4__this; // 0x30
		::UnityEngine::Networking::UnityWebRequest* _www_5__2; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADGUIDEPOPUPIMAGE>D__15_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADGUIDEPOPUPIMAGE>D__15_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADGUIDEPOPUPIMAGE>D__15_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADGUIDEPOPUPIMAGE>D__15___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADGUIDEPOPUPIMAGE>D__15_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADGUIDEPOPUPIMAGE>D__15_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <DOWNLOADGUIDEPOPUPIMAGE>D__15_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

