#pragma once
#include "unitysdk.h"

class MXButton;
class IntTabController;
class UICVCollectionListScrollViewController;
class UIGrid;
class CharacterObject;
namespace FlatData { class CVCollectionType; }
class CVCollectionInfo;
namespace UnityEngine { class Coroutine; }
class UIPopup_CVCollectionPlayText;

#define UIPOPUP_CVCOLLECTION_CLEARSUBTITLE_OFFSET UNITYSDK_OFFSET(0x2326DA0)
#define UIPOPUP_CVCOLLECTION_ADDCVINFOTOLIST_OFFSET UNITYSDK_OFFSET(0x2326E70)
#define UIPOPUP_CVCOLLECTION_ONSTOPVOICE_OFFSET UNITYSDK_OFFSET(0x2326CE0)
#define UIPOPUP_CVCOLLECTION_INITIALIZEDICTIONARY_OFFSET UNITYSDK_OFFSET(0x2327520)
#define UIPOPUP_CVCOLLECTION_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x232AEC0)
#define UIPOPUP_CVCOLLECTION__COPLAYSUBTITLEINTERNAL_B__33_1_OFFSET UNITYSDK_OFFSET(0x232AFB0)
#define UIPOPUP_CVCOLLECTION_AWAKE_OFFSET UNITYSDK_OFFSET(0x232AFC0)
#define UIPOPUP_CVCOLLECTION_SET_PLAYINGCV_OFFSET UNITYSDK_OFFSET(0x232B2B0)
#define UIPOPUP_CVCOLLECTION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x232B2D0)
#define UIPOPUP_CVCOLLECTION_ONOPENED_OFFSET UNITYSDK_OFFSET(0x232B310)
#define UIPOPUP_CVCOLLECTION_ADD_CHANGEDPLAYINGCV_OFFSET UNITYSDK_OFFSET(0x2326690)
#define UIPOPUP_CVCOLLECTION_ONTABCHANGEDTHREE_OFFSET UNITYSDK_OFFSET(0x232B470)
#define UIPOPUP_CVCOLLECTION_PLAYSUBTITLE_OFFSET UNITYSDK_OFFSET(0x232B7A0)
#define UIPOPUP_CVCOLLECTION_REMOVE_CHANGEDPLAYINGCV_OFFSET UNITYSDK_OFFSET(0x232BC10)
#define UIPOPUP_CVCOLLECTION_REFRESHCVLIST_OFFSET UNITYSDK_OFFSET(0x232B520)
#define UIPOPUP_CVCOLLECTION_GET_PLAYINGCV_OFFSET UNITYSDK_OFFSET(0x232BCB0)
#define UIPOPUP_CVCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x232BCC0)
#define UIPOPUP_CVCOLLECTION_COPLAYSUBTITLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x232BB70)
#define UIPOPUP_CVCOLLECTION_ONBACK_OFFSET UNITYSDK_OFFSET(0x232BE30)
#define UIPOPUP_CVCOLLECTION_SETCVOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x2327340)
#define UIPOPUP_CVCOLLECTION_ONTABCHANGEDTWO_OFFSET UNITYSDK_OFFSET(0x232BE40)
#define UIPOPUP_CVCOLLECTION_ONPLAYVOICE_OFFSET UNITYSDK_OFFSET(0x2326CA0)

	inline static constexpr unsigned int UIPopup_CVCollection_TypeDefinitionIndex = 4927;

	class UIPopup_CVCollection : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		IntTabController* tabControllerThree; // 0xE0
		IntTabController* tabControllerTwo; // 0xE8
		UICVCollectionListScrollViewController* cvListScrollView; // 0xF0
		UIGrid* cvGrid; // 0xF8
		Il2CppObject* cvListDict; // 0x100
		CharacterObject* characterObject; // 0x108
		Il2CppObject* normalCVInfoList; // 0x110
		Il2CppObject* eventCVInfoList; // 0x118
		Il2CppObject* etcCVInfoList; // 0x120
		::FlatData::CVCollectionType* currentTabType; // 0x128
		CVCollectionInfo* _PlayingCV_k__BackingField; // 0x130
		::System::Action* ChangedPlayingCV; // 0x138
		::UnityEngine::Coroutine* coroutineSubtitle; // 0x140

		::System::Void ClearSubtitle(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CVCOLLECTION_CLEARSUBTITLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddCVInfoToList(CVCollectionInfo* arg)
		{
			((::System::Void(*)(CVCollectionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CVCOLLECTION_ADDCVINFOTOLIST_OFFSET))(arg, nullptr);
		}

		::System::Void OnStopVoice()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CVCOLLECTION_ONSTOPVOICE_OFFSET))(nullptr);
		}

		::System::Void InitializeDictionary()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CVCOLLECTION_INITIALIZEDICTIONARY_OFFSET))(nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CVCOLLECTION_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Boolean _coPlaySubtitleInternal_b__33_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CVCOLLECTION__COPLAYSUBTITLEINTERNAL_B__33_1_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CVCOLLECTION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_PlayingCV(CVCollectionInfo* arg)
		{
			((::System::Void(*)(CVCollectionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CVCOLLECTION_SET_PLAYINGCV_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CVCOLLECTION_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CVCOLLECTION_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void add_ChangedPlayingCV(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CVCOLLECTION_ADD_CHANGEDPLAYINGCV_OFFSET))(arg, nullptr);
		}

		::System::Void OnTabChangedThree(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CVCOLLECTION_ONTABCHANGEDTHREE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PlaySubtitle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CVCOLLECTION_PLAYSUBTITLE_OFFSET))(nullptr);
		}

		::System::Void remove_ChangedPlayingCV(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CVCOLLECTION_REMOVE_CHANGEDPLAYINGCV_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshCVList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CVCOLLECTION_REFRESHCVLIST_OFFSET))(nullptr);
		}

		CVCollectionInfo* get_PlayingCV()
		{
			return ((CVCollectionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CVCOLLECTION_GET_PLAYINGCV_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CVCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* coPlaySubtitleInternal(UIPopup_CVCollectionPlayText* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(UIPopup_CVCollectionPlayText*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CVCOLLECTION_COPLAYSUBTITLEINTERNAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CVCOLLECTION_ONBACK_OFFSET))(nullptr);
		}

		::System::Void SetCVOpenCondition(CVCollectionInfo* arg)
		{
			((::System::Void(*)(CVCollectionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CVCOLLECTION_SETCVOPENCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void OnTabChangedTwo(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CVCOLLECTION_ONTABCHANGEDTWO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnPlayVoice(CVCollectionInfo* arg)
		{
			((::System::Void(*)(CVCollectionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CVCOLLECTION_ONPLAYVOICE_OFFSET))(arg, nullptr);
		}

	};

