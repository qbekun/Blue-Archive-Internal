#pragma once
#include "../../unitysdk.h"

namespace MXField::UI { class FieldDialogElement; }
namespace MXField::UI { class FieldInteractableEmoji; }
class UIPanel;
namespace FlatData { class FieldDialogType; }
namespace MXField::Talk { class FieldAIConversant; }

#define MXFIELD_UI_UIFIELDDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0xE8B5C0)
#define MXFIELD_UI_UIFIELDDIALOG_RELEASEINTERACTABLEEMOJI_OFFSET UNITYSDK_OFFSET(0xE8AF60)
#define MXFIELD_UI_UIFIELDDIALOG_SORTELEMENTS_OFFSET UNITYSDK_OFFSET(0xE88470)
#define MXFIELD_UI_UIFIELDDIALOG_SETVISIBILITY_OFFSET UNITYSDK_OFFSET(0xE8B630)
#define MXFIELD_UI_UIFIELDDIALOG_GETELEMENT_OFFSET UNITYSDK_OFFSET(0xE8A390)
#define MXFIELD_UI_UIFIELDDIALOG__AWAKE_B__9_0_OFFSET UNITYSDK_OFFSET(0xE8B640)
#define MXFIELD_UI_UIFIELDDIALOG_PLAYEMOJIONESHOT_OFFSET UNITYSDK_OFFSET(0xE8B6F0)
#define MXFIELD_UI_UIFIELDDIALOG_PLAYINTERACTABLEEMOJI_OFFSET UNITYSDK_OFFSET(0xE8B840)
#define MXFIELD_UI_UIFIELDDIALOG_GET_DIALOGELEMENTPOOL_OFFSET UNITYSDK_OFFSET(0xE8B8A0)
#define MXFIELD_UI_UIFIELDDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0xE8B8B0)
#define MXFIELD_UI_UIFIELDDIALOG_GET_BLOCKPLAYERINPUT_OFFSET UNITYSDK_OFFSET(0xE8BC60)
#define MXFIELD_UI_UIFIELDDIALOG_RELEASEELEMENTS_OFFSET UNITYSDK_OFFSET(0xE8A3F0)
#define MXFIELD_UI_UIFIELDDIALOG_RELEASEELEMENT_OFFSET UNITYSDK_OFFSET(0xE8BC70)
#define MXFIELD_UI_UIFIELDDIALOG__AWAKE_B__9_2_OFFSET UNITYSDK_OFFSET(0xE8BCC0)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldDialog_TypeDefinitionIndex = 10671;

	class UIFieldDialog : public Il2CppObject
	{
	public:
		::MXField::UI::FieldDialogElement* dialogElementPrefab; // 0xE8
		::MXField::UI::FieldInteractableEmoji* interactableEmojiPrefab; // 0xF0
		Il2CppObject* dialogElementPool; // 0xF8
		Il2CppObject* interactableEmojiPool; // 0x100
		UIPanel* panel; // 0x108

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDIALOG_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ReleaseInteractableEmoji(::MXField::UI::FieldInteractableEmoji* arg)
		{
			((::System::Void(*)(::MXField::UI::FieldInteractableEmoji*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDIALOG_RELEASEINTERACTABLEEMOJI_OFFSET))(arg, nullptr);
		}

		::System::Void SortElements()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDIALOG_SORTELEMENTS_OFFSET))(nullptr);
		}

		::System::Void SetVisibility(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDIALOG_SETVISIBILITY_OFFSET))(arg, nullptr);
		}

		::MXField::UI::FieldDialogElement* GetElement()
		{
			return ((::MXField::UI::FieldDialogElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDIALOG_GETELEMENT_OFFSET))(nullptr);
		}

		::MXField::UI::FieldDialogElement* _Awake_b__9_0()
		{
			return ((::MXField::UI::FieldDialogElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDIALOG__AWAKE_B__9_0_OFFSET))(nullptr);
		}

		::System::Void PlayEmojiOneShot(::FlatData::FieldDialogType* arg)
		{
			((::System::Void(*)(::FlatData::FieldDialogType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDIALOG_PLAYEMOJIONESHOT_OFFSET))(arg, nullptr);
		}

		::System::Void PlayInteractableEmoji(::MXField::Talk::FieldAIConversant* arg)
		{
			((::System::Void(*)(::MXField::Talk::FieldAIConversant*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDIALOG_PLAYINTERACTABLEEMOJI_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DialogElementPool()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDIALOG_GET_DIALOGELEMENTPOOL_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDIALOG_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean get_BlockPlayerInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDIALOG_GET_BLOCKPLAYERINPUT_OFFSET))(nullptr);
		}

		::System::Void ReleaseElements(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDIALOG_RELEASEELEMENTS_OFFSET))(arg, nullptr);
		}

		::System::Void ReleaseElement(::MXField::UI::FieldDialogElement* arg)
		{
			((::System::Void(*)(::MXField::UI::FieldDialogElement*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDIALOG_RELEASEELEMENT_OFFSET))(arg, nullptr);
		}

		::MXField::UI::FieldInteractableEmoji* _Awake_b__9_2()
		{
			return ((::MXField::UI::FieldInteractableEmoji*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDIALOG__AWAKE_B__9_2_OFFSET))(nullptr);
		}

	};
}

