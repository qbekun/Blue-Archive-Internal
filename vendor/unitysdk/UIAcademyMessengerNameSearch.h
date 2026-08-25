#pragma once
#include "unitysdk.h"

class UIScrollView;
namespace UnityEngine { class Transform; }
class NameSearchService;

#define UIACADEMYMESSENGERNAMESEARCH_CREATESEARCHSERVICE_OFFSET UNITYSDK_OFFSET(0x21ADC90)
#define UIACADEMYMESSENGERNAMESEARCH_ONSEARCHPANELCLOSING_OFFSET UNITYSDK_OFFSET(0x21ADD70)
#define UIACADEMYMESSENGERNAMESEARCH_ONSEARCHPANELOPENING_OFFSET UNITYSDK_OFFSET(0x21ADEE0)
#define UIACADEMYMESSENGERNAMESEARCH_SYNCSCROLLVIEWPOSITIONS_OFFSET UNITYSDK_OFFSET(0x21ADFB0)
#define UIACADEMYMESSENGERNAMESEARCH_CO_RESETCONTENTCONTAINER_OFFSET UNITYSDK_OFFSET(0x21ADE70)
#define UIACADEMYMESSENGERNAMESEARCH_GETPANELEDGE_OFFSET UNITYSDK_OFFSET(0x21ADF50)
#define UIACADEMYMESSENGERNAMESEARCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x21ADFF0)
#define UIACADEMYMESSENGERNAMESEARCH_SETDATA_OFFSET UNITYSDK_OFFSET(0x21ABEC0)

	inline static constexpr unsigned int UIAcademyMessengerNameSearch_TypeDefinitionIndex = 4177;

	class UIAcademyMessengerNameSearch : public Il2CppObject
	{
	public:
		UIScrollView* scrollView; // 0x70
		::UnityEngine::Transform* contentContainer; // 0x78
		NameSearchService* _cachedSearchService; // 0x80
		::System::Single _initialPanelEdge; // 0x88

		NameSearchService* CreateSearchService()
		{
			return ((NameSearchService*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSENGERNAMESEARCH_CREATESEARCHSERVICE_OFFSET))(nullptr);
		}

		::System::Void OnSearchPanelClosing()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSENGERNAMESEARCH_ONSEARCHPANELCLOSING_OFFSET))(nullptr);
		}

		::System::Void OnSearchPanelOpening()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSENGERNAMESEARCH_ONSEARCHPANELOPENING_OFFSET))(nullptr);
		}

		::System::Void SyncScrollViewPositions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSENGERNAMESEARCH_SYNCSCROLLVIEWPOSITIONS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_ResetContentContainer()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSENGERNAMESEARCH_CO_RESETCONTENTCONTAINER_OFFSET))(nullptr);
		}

		::System::Single GetPanelEdge()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSENGERNAMESEARCH_GETPANELEDGE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSENGERNAMESEARCH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSENGERNAMESEARCH_SETDATA_OFFSET))(arg, nullptr);
		}

	};

