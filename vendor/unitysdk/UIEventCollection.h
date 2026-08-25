#pragma once
#include "unitysdk.h"

class MXButton;
class UIScrollView;
class UIEventCollectionPhotoDetailPopup;
namespace MX::Data { class EventContentSeasonInfo; }
class UIEventCollectionCGObject;

#define UIEVENTCOLLECTION_SETDATA_OFFSET UNITYSDK_OFFSET(0x249F8C0)
#define UIEVENTCOLLECTION_SETOPENSEQUENCE_OFFSET UNITYSDK_OFFSET(0x249FF20)
#define UIEVENTCOLLECTION_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x24A0030)
#define UIEVENTCOLLECTION___N__0_OFFSET UNITYSDK_OFFSET(0x24A00C0)
#define UIEVENTCOLLECTION_CO_SHOWUNLOCKBGOBJECTS_OFFSET UNITYSDK_OFFSET(0x24A00D0)
#define UIEVENTCOLLECTION_HASNEWLYUNLOCKEDCOLLECTION_OFFSET UNITYSDK_OFFSET(0x249FC30)
#define UIEVENTCOLLECTION_CO_SHOWUNLOCKCGOBJECTS_OFFSET UNITYSDK_OFFSET(0x24A0160)
#define UIEVENTCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x24A01F0)
#define UIEVENTCOLLECTION_ONOPENED_OFFSET UNITYSDK_OFFSET(0x24A0200)
#define UIEVENTCOLLECTION_AWAKE_OFFSET UNITYSDK_OFFSET(0x24A04E0)
#define UIEVENTCOLLECTION_INITOPENSEQUENCE_OFFSET UNITYSDK_OFFSET(0x24A0850)
#define UIEVENTCOLLECTION_ONCGOBJECTFOCUSED_OFFSET UNITYSDK_OFFSET(0x24A0880)
#define UIEVENTCOLLECTION_CO_SETSCROLLPOSITION_OFFSET UNITYSDK_OFFSET(0x24A0AE0)
#define UIEVENTCOLLECTION_OPENEVENTCOLLECTION_OFFSET UNITYSDK_OFFSET(0x249F6F0)
#define UIEVENTCOLLECTION_ONCLICKBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x24A0B90)

	inline static constexpr unsigned int UIEventCollection_TypeDefinitionIndex = 5788;

	class UIEventCollection : public Il2CppObject
	{
	public:
		MXButton* backButton; // 0xD8
		UIScrollView* bgScrollView; // 0xE0
		UIEventCollectionPhotoDetailPopup* photoDetailPopup; // 0xE8
		::Il2CppArray<::System::Object*>* bgObjects; // 0xF0
		::Il2CppArray<::System::Object*>* cgObjects; // 0xF8
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x100
		::System::Boolean forceOpen; // 0x108
		::System::Boolean isUnlockNewCollection; // 0x109

		::System::Void SetData(::MX::Data::EventContentSeasonInfo* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTION_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetOpenSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTION_SETOPENSEQUENCE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTION_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTION___N__0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_ShowUnlockBgObjects()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTION_CO_SHOWUNLOCKBGOBJECTS_OFFSET))(nullptr);
		}

		::System::Boolean HasNewlyUnlockedCollection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTION_HASNEWLYUNLOCKEDCOLLECTION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_ShowUnlockCgObjects()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTION_CO_SHOWUNLOCKCGOBJECTS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTION_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void InitOpenSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTION_INITOPENSEQUENCE_OFFSET))(nullptr);
		}

		::System::Void OnCGObjectFocused(UIEventCollectionCGObject* arg)
		{
			((::System::Void(*)(UIEventCollectionCGObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTION_ONCGOBJECTFOCUSED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_SetScrollPosition(::System::Int64 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTION_CO_SETSCROLLPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void OpenEventCollection(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTION_OPENEVENTCOLLECTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTION_ONCLICKBACKBUTTON_OFFSET))(nullptr);
		}

	};

