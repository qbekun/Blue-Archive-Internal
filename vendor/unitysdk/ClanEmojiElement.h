#pragma once
#include "unitysdk.h"

class UITexture;
class MXButton;
namespace UnityEngine { class GameObject; }
class MXToggle;
namespace MX::SaveData { class ChatEmojiBookMarkSaveData; }

#define CLANEMOJIELEMENT_EMOJIBOOKMARKSAVE_OFFSET UNITYSDK_OFFSET(0x2331640)
#define CLANEMOJIELEMENT_GET_EMOJIID_OFFSET UNITYSDK_OFFSET(0x2331760)
#define CLANEMOJIELEMENT_SETSELECTEMOJI_OFFSET UNITYSDK_OFFSET(0x232E7E0)
#define CLANEMOJIELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2331770)
#define CLANEMOJIELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2331780)
#define CLANEMOJIELEMENT_SETEMOJIDATA_OFFSET UNITYSDK_OFFSET(0x232E150)
#define CLANEMOJIELEMENT_ONCLICKEMOJI_OFFSET UNITYSDK_OFFSET(0x2331910)
#define CLANEMOJIELEMENT_SET_EMOJIID_OFFSET UNITYSDK_OFFSET(0x2331940)
#define CLANEMOJIELEMENT_ONCHANGEDBOOKMARK_OFFSET UNITYSDK_OFFSET(0x2331950)

	inline static constexpr unsigned int ClanEmojiElement_TypeDefinitionIndex = 4946;

	class ClanEmojiElement : public Il2CppObject
	{
	public:
		UITexture* emojiTexture; // 0x18
		MXButton* emojiObjectButton; // 0x20
		::UnityEngine::GameObject* selectedEmojiObject; // 0x28
		MXToggle* bookMarkToggle; // 0x30
		::System::Int64 _emojiId_k__BackingField; // 0x38
		Il2CppObject* callEmojiSelect; // 0x40
		::MX::SaveData::ChatEmojiBookMarkSaveData* chatEmojiBookMarkSaveData; // 0x48

		::System::Void emojiBookMarkSave(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CLANEMOJIELEMENT_EMOJIBOOKMARKSAVE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_emojiId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANEMOJIELEMENT_GET_EMOJIID_OFFSET))(nullptr);
		}

		::System::Void SetSelectEmoji(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CLANEMOJIELEMENT_SETSELECTEMOJI_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANEMOJIELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANEMOJIELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetEmojiData(::System::Int64 arg, Il2CppObject* arg2, ::MX::SaveData::ChatEmojiBookMarkSaveData* arg3)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::MX::SaveData::ChatEmojiBookMarkSaveData*, ::PVOID))((::PBYTE)hIl2Cpp + CLANEMOJIELEMENT_SETEMOJIDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnClickEmoji()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANEMOJIELEMENT_ONCLICKEMOJI_OFFSET))(nullptr);
		}

		::System::Void set_emojiId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANEMOJIELEMENT_SET_EMOJIID_OFFSET))(arg, nullptr);
		}

		::System::Void OnChangedBookMark(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CLANEMOJIELEMENT_ONCHANGEDBOOKMARK_OFFSET))(arg, arg2, nullptr);
		}

	};

