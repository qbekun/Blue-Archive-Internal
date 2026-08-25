#pragma once
#include "unitysdk.h"

class AutoScroller;
class UILobbyBannerIndicator;
namespace UnityEngine { class GameObject; }
class SmallBannerBase;

#define UISMALLBANNERSCROLLVIEWCONTROLLER_UPDATEBANNERITEMS_OFFSET UNITYSDK_OFFSET(0x267E980)
#define UISMALLBANNERSCROLLVIEWCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x267ECC0)
#define UISMALLBANNERSCROLLVIEWCONTROLLER_CO_UPDATEBANNER_OFFSET UNITYSDK_OFFSET(0x267ED90)
#define UISMALLBANNERSCROLLVIEWCONTROLLER__AWAKE_B__7_0_OFFSET UNITYSDK_OFFSET(0x267EE20)
#define UISMALLBANNERSCROLLVIEWCONTROLLER_APPLYCHANGES_OFFSET UNITYSDK_OFFSET(0x267F070)
#define UISMALLBANNERSCROLLVIEWCONTROLLER__REFRESHBANNERITEMS_G__COMPARISONBYICONORDER|9_8_OFFSET UNITYSDK_OFFSET(0x267F260)
#define UISMALLBANNERSCROLLVIEWCONTROLLER_GETWEBEVENTMISSIONBANNERLIST_OFFSET UNITYSDK_OFFSET(0x267F2C0)
#define UISMALLBANNERSCROLLVIEWCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x267F760)
#define UISMALLBANNERSCROLLVIEWCONTROLLER_REFRESHBANNERITEMS_OFFSET UNITYSDK_OFFSET(0x267F800)
#define UISMALLBANNERSCROLLVIEWCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x267F890)

	inline static constexpr unsigned int UISmallBannerScrollViewController_TypeDefinitionIndex = 6746;

	class UISmallBannerScrollViewController : public ::System::Xml::XmlText
	{
	public:
		AutoScroller* autoScroller; // 0x90
		UILobbyBannerIndicator* bannerIndicator; // 0x98
		Il2CppObject* bannerList; // 0xA0
		Il2CppObject* activeBannerList; // 0xA8
		::System::Single elapsedTime; // 0xB0
		::System::Single updatePeriod; // 0xB4
		::System::Boolean includeGuideMission; // 0xB8

		::System::Void UpdateBannerItems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISMALLBANNERSCROLLVIEWCONTROLLER_UPDATEBANNERITEMS_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISMALLBANNERSCROLLVIEWCONTROLLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_UpdateBanner()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISMALLBANNERSCROLLVIEWCONTROLLER_CO_UPDATEBANNER_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__7_0(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISMALLBANNERSCROLLVIEWCONTROLLER__AWAKE_B__7_0_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyChanges()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISMALLBANNERSCROLLVIEWCONTROLLER_APPLYCHANGES_OFFSET))(nullptr);
		}

		::System::Int32 _RefreshBannerItems_g__ComparisonByIconOrder|9_8(SmallBannerBase* arg, SmallBannerBase* arg2)
		{
			return ((::System::Int32(*)(SmallBannerBase*, SmallBannerBase*, ::PVOID))((::PBYTE)hIl2Cpp + UISMALLBANNERSCROLLVIEWCONTROLLER__REFRESHBANNERITEMS_G__COMPARISONBYICONORDER|9_8_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetWebEventMissionBannerList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISMALLBANNERSCROLLVIEWCONTROLLER_GETWEBEVENTMISSIONBANNERLIST_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Initialize(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISMALLBANNERSCROLLVIEWCONTROLLER_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* RefreshBannerItems()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISMALLBANNERSCROLLVIEWCONTROLLER_REFRESHBANNERITEMS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISMALLBANNERSCROLLVIEWCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

