#pragma once
#include "unitysdk.h"

class UIGrid;
namespace UnityEngine { class Animation; }
class UITweener;
class TweenPosition;
namespace UnityEngine { class Transform; }
class ButtonActivator;
class UIEventBoxGacha;
namespace UnityEngine { class GameObject; }
class MXButton;
class SpineChatDialogContainerEvent;
namespace UnityEngine { class WaitForSeconds; }
namespace MX::Data { class EventContentSeasonInfo; }

#define UIEVENTBOXGACHARESULT_RESETANI_OFFSET UNITYSDK_OFFSET(0x24814D0)
#define UIEVENTBOXGACHARESULT_GET_GACHABLECOUNT_OFFSET UNITYSDK_OFFSET(0x2481590)
#define UIEVENTBOXGACHARESULT_SETRETRY_OFFSET UNITYSDK_OFFSET(0x247F170)
#define UIEVENTBOXGACHARESULT_ONCLICKNEXT_OFFSET UNITYSDK_OFFSET(0x24815A0)
#define UIEVENTBOXGACHARESULT_SET_ENABLERETRY_OFFSET UNITYSDK_OFFSET(0x2481AE0)
#define UIEVENTBOXGACHARESULT_SETRESULTS_OFFSET UNITYSDK_OFFSET(0x24815E0)
#define UIEVENTBOXGACHARESULT_SETNAVIGATIONBUTTONS_OFFSET UNITYSDK_OFFSET(0x2481B70)
#define UIEVENTBOXGACHARESULT_PLAYRESULTALL_OFFSET UNITYSDK_OFFSET(0x2480B00)
#define UIEVENTBOXGACHARESULT_GET_BUTTONROOT_OFFSET UNITYSDK_OFFSET(0x2481C90)
#define UIEVENTBOXGACHARESULT_GET_ENABLERETRY_OFFSET UNITYSDK_OFFSET(0x2481D10)
#define UIEVENTBOXGACHARESULT_GET_OPENTWEEN_OFFSET UNITYSDK_OFFSET(0x2481D20)
#define UIEVENTBOXGACHARESULT_ONCLICKPREV_OFFSET UNITYSDK_OFFSET(0x2481E10)
#define UIEVENTBOXGACHARESULT_GET_RESULTS_OFFSET UNITYSDK_OFFSET(0x2481AF0)
#define UIEVENTBOXGACHARESULT_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x2481E40)
#define UIEVENTBOXGACHARESULT_PLAYRESULTS_OFFSET UNITYSDK_OFFSET(0x2480940)
#define UIEVENTBOXGACHARESULT_COLOADSPINE_OFFSET UNITYSDK_OFFSET(0x2481FE0)
#define UIEVENTBOXGACHARESULT_TRYGETBOXGACHARESULTCOSTUMEID_OFFSET UNITYSDK_OFFSET(0x2482070)
#define UIEVENTBOXGACHARESULT_SET_GACHABLECOUNT_OFFSET UNITYSDK_OFFSET(0x2482160)
#define UIEVENTBOXGACHARESULT_GET_TITLEIMAGES_OFFSET UNITYSDK_OFFSET(0x2482170)
#define UIEVENTBOXGACHARESULT_PLAYDIALOG_OFFSET UNITYSDK_OFFSET(0x2482180)
#define UIEVENTBOXGACHARESULT_AWAKE_OFFSET UNITYSDK_OFFSET(0x24823C0)
#define UIEVENTBOXGACHARESULT_PLAYOPENITEM_OFFSET UNITYSDK_OFFSET(0x2480780)
#define UIEVENTBOXGACHARESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x24828E0)
#define UIEVENTBOXGACHARESULT_SUMMERIZEELEMENTS_OFFSET UNITYSDK_OFFSET(0x2482900)
#define UIEVENTBOXGACHARESULT_SETDATA_OFFSET UNITYSDK_OFFSET(0x247EB60)
#define UIEVENTBOXGACHARESULT_SETSLOTSFORNAVIGATION_OFFSET UNITYSDK_OFFSET(0x2481930)
#define UIEVENTBOXGACHARESULT_PLAYSTART_OFFSET UNITYSDK_OFFSET(0x24805B0)
#define UIEVENTBOXGACHARESULT_ONCLICKRETRY_OFFSET UNITYSDK_OFFSET(0x2482EB0)
#define UIEVENTBOXGACHARESULT_GET_PAGEBUTTONPARENT_OFFSET UNITYSDK_OFFSET(0x2482F20)

	inline static constexpr unsigned int UIEventBoxGachaResult_TypeDefinitionIndex = 5695;

	class UIEventBoxGachaResult : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* titleImages; // 0x18
		UIGrid* grid; // 0x20
		::UnityEngine::Animation* startAni; // 0x28
		UITweener* openSpineTween; // 0x30
		TweenPosition* openTween; // 0x38
		::UnityEngine::Animation* buttonRootAni; // 0x40
		::UnityEngine::Transform* buttonRoot; // 0x48
		ButtonActivator* closeButton; // 0x50
		ButtonActivator* retryButton; // 0x58
		::System::Single delayDuringItem; // 0x60
		::System::Single delayBeforeResult; // 0x64
		UIEventBoxGacha* boxGachaUI; // 0x68
		::UnityEngine::GameObject* pageButtonParent; // 0x70
		MXButton* prevPage; // 0x78
		MXButton* nextPage; // 0x80
		SpineChatDialogContainerEvent* spineChatContainerEvent; // 0x88
		::Il2CppArray<::System::Object*>* results; // 0x90
		::UnityEngine::WaitForSeconds* waitDuringItem; // 0x98
		::UnityEngine::WaitForSeconds* waitBeforeItemResult; // 0xA0
		::System::Boolean isSingle; // 0xA8
		Il2CppObject* resultElements; // 0xB0
		::System::Int32 currentPage; // 0xB8
		::System::Int32 maxPage; // 0xBC
		::System::Int64 costumeId; // 0xC0
		::UnityEngine::Transform* spineOffsetTransform; // 0xC8
		::UnityEngine::Transform* dialogOffsetTransform; // 0xD0
		::System::Boolean _EnableRetry_k__BackingField; // 0xD8
		::System::Int64 _GachableCount_k__BackingField; // 0xE0

		::System::Void ResetAni(::UnityEngine::Animation* arg)
		{
			((::System::Void(*)(::UnityEngine::Animation*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHARESULT_RESETANI_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GachableCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHARESULT_GET_GACHABLECOUNT_OFFSET))(nullptr);
		}

		::System::Void SetRetry(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHARESULT_SETRETRY_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHARESULT_ONCLICKNEXT_OFFSET))(nullptr);
		}

		::System::Void set_EnableRetry(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHARESULT_SET_ENABLERETRY_OFFSET))(arg, nullptr);
		}

		::System::Void SetResults()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHARESULT_SETRESULTS_OFFSET))(nullptr);
		}

		::System::Void SetNavigationButtons()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHARESULT_SETNAVIGATIONBUTTONS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* PlayResultAll()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHARESULT_PLAYRESULTALL_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_ButtonRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHARESULT_GET_BUTTONROOT_OFFSET))(nullptr);
		}

		::System::Boolean get_EnableRetry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHARESULT_GET_ENABLERETRY_OFFSET))(nullptr);
		}

		TweenPosition* get_OpenTween()
		{
			return ((TweenPosition*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHARESULT_GET_OPENTWEEN_OFFSET))(nullptr);
		}

		::System::Void OnClickPrev()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHARESULT_ONCLICKPREV_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Results()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHARESULT_GET_RESULTS_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHARESULT_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* PlayResults()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHARESULT_PLAYRESULTS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoLoadSpine()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHARESULT_COLOADSPINE_OFFSET))(nullptr);
		}

		::System::Int64 TryGetBoxGachaResultCostumeId(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHARESULT_TRYGETBOXGACHARESULTCOSTUMEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_GachableCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHARESULT_SET_GACHABLECOUNT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_TitleImages()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHARESULT_GET_TITLEIMAGES_OFFSET))(nullptr);
		}

		::System::Void PlayDialog(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHARESULT_PLAYDIALOG_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHARESULT_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* PlayOpenItem()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHARESULT_PLAYOPENITEM_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHARESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SummerizeElements(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHARESULT_SUMMERIZEELEMENTS_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentSeasonInfo* arg, Il2CppObject* arg2, ::System::Boolean arg3, ::System::Int64 arg4, ::System::Int64 arg5)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, Il2CppObject*, ::System::Boolean, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHARESULT_SETDATA_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void SetSlotsForNavigation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHARESULT_SETSLOTSFORNAVIGATION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* PlayStart(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHARESULT_PLAYSTART_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickRetry()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHARESULT_ONCLICKRETRY_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_PageButtonParent()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBOXGACHARESULT_GET_PAGEBUTTONPARENT_OFFSET))(nullptr);
		}

	};

