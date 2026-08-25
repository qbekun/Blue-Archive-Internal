#pragma once
#include "unitysdk.h"

class NameSearchResult;
class UISearchComponent;
class TweenScale;
class TweenAlpha;
class MXToggle;
class NameSearchService;
class UITweener;

#define UINAMESEARCHBASE_ONSEARCHPANELCLOSING_OFFSET UNITYSDK_OFFSET(0x26AFF00)
#define UINAMESEARCHBASE_REBUILDSEARCHSERVICE_OFFSET UNITYSDK_OFFSET(0x26AFF10)
#define UINAMESEARCHBASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x26AFFF0)
#define UINAMESEARCHBASE_RESETSEARCH_OFFSET UNITYSDK_OFFSET(0x26B03D0)
#define UINAMESEARCHBASE_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x26B0620)
#define UINAMESEARCHBASE_ONSEARCHRESET_OFFSET UNITYSDK_OFFSET(0x26B06B0)
#define UINAMESEARCHBASE_START_OFFSET UNITYSDK_OFFSET(0x26B06C0)
#define UINAMESEARCHBASE_ONSEARCHPANELOPENING_OFFSET UNITYSDK_OFFSET(0x26B07B0)
#define UINAMESEARCHBASE_SET_CURRENTSEARCHRESULT_OFFSET UNITYSDK_OFFSET(0x26B07C0)
#define UINAMESEARCHBASE_PLAYTWEENREVERSE_OFFSET UNITYSDK_OFFSET(0x26B07E0)
#define UINAMESEARCHBASE_REMOVE_SEARCHRESULTUPDATED_OFFSET UNITYSDK_OFFSET(0x26B0810)
#define UINAMESEARCHBASE_CLOSESEARCHPANEL_OFFSET UNITYSDK_OFFSET(0x26B04A0)
#define UINAMESEARCHBASE_GET_CURRENTSEARCHRESULT_OFFSET UNITYSDK_OFFSET(0x26B08B0)
#define UINAMESEARCHBASE_ONTOGGLESEARCHPANEL_OFFSET UNITYSDK_OFFSET(0x26B08C0)
#define UINAMESEARCHBASE_ADD_SEARCHRESULTUPDATED_OFFSET UNITYSDK_OFFSET(0x26B0B20)
#define UINAMESEARCHBASE_CREATESEARCHSERVICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UINAMESEARCHBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x26AFCC0)
#define UINAMESEARCHBASE_PLAYTWEENFORWARD_OFFSET UNITYSDK_OFFSET(0x26B0BC0)
#define UINAMESEARCHBASE_ONSEARCHPANELTOGGLEFINISHED_OFFSET UNITYSDK_OFFSET(0x26B0C00)
#define UINAMESEARCHBASE_APPLYFILTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UINAMESEARCHBASE_SETONALLTWEENSFINISHED_OFFSET UNITYSDK_OFFSET(0x26B0C40)
#define UINAMESEARCHBASE_ONSEARCHTEXT_OFFSET UNITYSDK_OFFSET(0x26B0D40)
#define UINAMESEARCHBASE_OPENSEARCHPANEL_OFFSET UNITYSDK_OFFSET(0x26B0980)
#define UINAMESEARCHBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x26B0DA0)

	inline static constexpr unsigned int UINameSearchBase_TypeDefinitionIndex = 6893;

	class UINameSearchBase : public Il2CppObject
	{
	public:
		NameSearchResult* _CurrentSearchResult_k__BackingField; // 0x18
		Il2CppObject* SearchResultUpdated; // 0x28
		UISearchComponent* SearchComponent; // 0x30
		TweenScale* TweenScale; // 0x38
		TweenAlpha* TweenAlpha; // 0x40
		MXToggle* Toggle; // 0x48
		NameSearchService* _searchService; // 0x50
		::System::Boolean _isFirstOpenPlayed; // 0x58

		::System::Void OnSearchPanelClosing()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINAMESEARCHBASE_ONSEARCHPANELCLOSING_OFFSET))(nullptr);
		}

		::System::Void RebuildSearchService()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINAMESEARCHBASE_REBUILDSEARCHSERVICE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINAMESEARCHBASE_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void ResetSearch()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINAMESEARCHBASE_RESETSEARCH_OFFSET))(nullptr);
		}

		::System::Void OnClear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINAMESEARCHBASE_ONCLEAR_OFFSET))(nullptr);
		}

		::System::Void OnSearchReset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINAMESEARCHBASE_ONSEARCHRESET_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINAMESEARCHBASE_START_OFFSET))(nullptr);
		}

		::System::Void OnSearchPanelOpening()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINAMESEARCHBASE_ONSEARCHPANELOPENING_OFFSET))(nullptr);
		}

		::System::Void set_CurrentSearchResult(NameSearchResult* arg)
		{
			((::System::Void(*)(NameSearchResult*, ::PVOID))((::PBYTE)hIl2Cpp + UINAMESEARCHBASE_SET_CURRENTSEARCHRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void PlayTweenReverse(UITweener* arg)
		{
			((::System::Void(*)(UITweener*, ::PVOID))((::PBYTE)hIl2Cpp + UINAMESEARCHBASE_PLAYTWEENREVERSE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_SearchResultUpdated(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UINAMESEARCHBASE_REMOVE_SEARCHRESULTUPDATED_OFFSET))(arg, nullptr);
		}

		::System::Void CloseSearchPanel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINAMESEARCHBASE_CLOSESEARCHPANEL_OFFSET))(nullptr);
		}

		NameSearchResult* get_CurrentSearchResult()
		{
			return ((NameSearchResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + UINAMESEARCHBASE_GET_CURRENTSEARCHRESULT_OFFSET))(nullptr);
		}

		::System::Void OnToggleSearchPanel(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UINAMESEARCHBASE_ONTOGGLESEARCHPANEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void add_SearchResultUpdated(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UINAMESEARCHBASE_ADD_SEARCHRESULTUPDATED_OFFSET))(arg, nullptr);
		}

		NameSearchService* CreateSearchService()
		{
			return ((NameSearchService*(*)(::PVOID))((::PBYTE)hIl2Cpp + UINAMESEARCHBASE_CREATESEARCHSERVICE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINAMESEARCHBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PlayTweenForward(UITweener* arg)
		{
			((::System::Void(*)(UITweener*, ::PVOID))((::PBYTE)hIl2Cpp + UINAMESEARCHBASE_PLAYTWEENFORWARD_OFFSET))(arg, nullptr);
		}

		::System::Void OnSearchPanelToggleFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINAMESEARCHBASE_ONSEARCHPANELTOGGLEFINISHED_OFFSET))(nullptr);
		}

		Il2CppObject* ApplyFilter(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UINAMESEARCHBASE_APPLYFILTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetOnAllTweensFinished(::System::Action* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			((::System::Void(*)(::System::Action*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UINAMESEARCHBASE_SETONALLTWEENSFINISHED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnSearchText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UINAMESEARCHBASE_ONSEARCHTEXT_OFFSET))(str, nullptr);
		}

		::System::Void OpenSearchPanel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINAMESEARCHBASE_OPENSEARCHPANEL_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINAMESEARCHBASE_AWAKE_OFFSET))(nullptr);
		}

	};

