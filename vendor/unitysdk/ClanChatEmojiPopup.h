#pragma once
#include "unitysdk.h"

class ClanEmojiElement;
class UIScrollView;
class UIGrid;
class MXButton;
class ClanEmojiTabController;
class MXToggle;
namespace UnityEngine { class Transform; }
namespace UnityEngine { class GameObject; }
namespace MX::SaveData { class ChatEmojiBookMarkSaveData; }

#define CLANCHATEMOJIPOPUP__RESETEMOJISCROLLPOSITION_G__CORESETEMOJISCROLLPOSITION|17_0_OFFSET UNITYSDK_OFFSET(0x232DB30)
#define CLANCHATEMOJIPOPUP_ONCHANGEDEMOJITAB_OFFSET UNITYSDK_OFFSET(0x232DBC0)
#define CLANCHATEMOJIPOPUP_ONCLICKSENDCHATEMOJI_OFFSET UNITYSDK_OFFSET(0x232E3A0)
#define CLANCHATEMOJIPOPUP_ONEMOJISELECT_OFFSET UNITYSDK_OFFSET(0x232E5D0)
#define CLANCHATEMOJIPOPUP__RESETEMOJITABSCROLLPOSITION_G__CORESETEMOJITABSCROLLPOSITION|18_0_OFFSET UNITYSDK_OFFSET(0x232E800)
#define CLANCHATEMOJIPOPUP_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x232E430)
#define CLANCHATEMOJIPOPUP_RESETEMOJITABSCROLLPOSITION_OFFSET UNITYSDK_OFFSET(0x232E890)
#define CLANCHATEMOJIPOPUP_RESETEMOJISCROLLPOSITION_OFFSET UNITYSDK_OFFSET(0x232E320)
#define CLANCHATEMOJIPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x232E910)
#define CLANCHATEMOJIPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x232F4A0)
#define CLANCHATEMOJIPOPUP_SETEMOJITAB_OFFSET UNITYSDK_OFFSET(0x232F570)
#define CLANCHATEMOJIPOPUP_CLANCHATEMOJIPOPUPOPEN_OFFSET UNITYSDK_OFFSET(0x232FC40)

	inline static constexpr unsigned int ClanChatEmojiPopup_TypeDefinitionIndex = 4940;

	class ClanChatEmojiPopup : public Il2CppObject
	{
	public:
		ClanEmojiElement* clanEmojiElementPrefab; // 0x18
		UIScrollView* scrollView; // 0x20
		UIGrid* grid; // 0x28
		MXButton* sendChatEmojiButton; // 0x30
		MXButton* cancelButton; // 0x38
		ClanEmojiTabController* emojiTabController; // 0x40
		MXToggle* emojiTabPrefab; // 0x48
		UIScrollView* emojiTabScrollView; // 0x50
		::UnityEngine::Transform* bookmarkTabTransform; // 0x58
		::UnityEngine::GameObject* bookmarkEmpty; // 0x60
		Il2CppObject* clanEmojiElements; // 0x68
		::System::Int64 selectEmojiId; // 0x70
		Il2CppObject* dicEmoji; // 0x78
		::MX::SaveData::ChatEmojiBookMarkSaveData* chatEmojiBookMarkSaveData; // 0x80

		::System::Collections::IEnumerator* _ResetEmojiScrollPosition_g__CoResetEmojiScrollPosition|17_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCHATEMOJIPOPUP__RESETEMOJISCROLLPOSITION_G__CORESETEMOJISCROLLPOSITION|17_0_OFFSET))(nullptr);
		}

		::System::Void OnChangedEmojiTab(::System::Boolean arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANCHATEMOJIPOPUP_ONCHANGEDEMOJITAB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickSendChatEmoji()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCHATEMOJIPOPUP_ONCLICKSENDCHATEMOJI_OFFSET))(nullptr);
		}

		::System::Void OnEmojiSelect(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANCHATEMOJIPOPUP_ONEMOJISELECT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* _ResetEmojiTabScrollPosition_g__CoResetEmojiTabScrollPosition|18_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCHATEMOJIPOPUP__RESETEMOJITABSCROLLPOSITION_G__CORESETEMOJITABSCROLLPOSITION|18_0_OFFSET))(nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCHATEMOJIPOPUP_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void ResetEmojiTabScrollPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCHATEMOJIPOPUP_RESETEMOJITABSCROLLPOSITION_OFFSET))(nullptr);
		}

		::System::Void ResetEmojiScrollPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCHATEMOJIPOPUP_RESETEMOJISCROLLPOSITION_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCHATEMOJIPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCHATEMOJIPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetEmojiTab()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCHATEMOJIPOPUP_SETEMOJITAB_OFFSET))(nullptr);
		}

		::System::Void ClanChatEmojiPopupOpen()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANCHATEMOJIPOPUP_CLANCHATEMOJIPOPUPOPEN_OFFSET))(nullptr);
		}

	};

