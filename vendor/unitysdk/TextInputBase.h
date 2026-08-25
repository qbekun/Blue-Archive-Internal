#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class IVisualElementScheduledItem; }
namespace UnityEngine { class Color; }
namespace UnityEngine::UIElements { class TextEditorEventHandler; }
namespace UnityEngine::UIElements { class TextEditorEngine; }
namespace UnityEngine::UIElements { class ITextHandle; }
namespace UnityEngine::UIElements { class DropdownMenuAction; }
namespace UnityEngine::UIElements { class CustomStyleResolvedEvent; }
namespace UnityEngine::UIElements { class AttachToPanelEvent; }
namespace UnityEngine::UIElements { class MeshGenerationContext; }
namespace UnityEngine::UIElements { class ContextualMenuPopulateEvent; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class GeometryChangedEvent; }
namespace UnityEngine { class GUIStyle; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine { class RectOffset; }

#define TEXTINPUTBASE_RESETVALUEANDTEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_SAVEVALUEANDTEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_RESTOREVALUEANDTEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_STRINGTOVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_UPDATEVALUEFROMTEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_UPDATETEXTFROMVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_UNITYENGINE.UIELEMENTS.ITEXTINPUTFIELD.GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_SET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_GET_MAXLENGTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_SET_MAXLENGTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_GET_MASKCHAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_SET_MASKCHAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_GET_ISPASSWORDFIELD_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_SET_ISPASSWORDFIELD_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_GET_DOUBLECLICKSELECTSWORD_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_SET_DOUBLECLICKSELECTSWORD_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_GET_TRIPLECLICKSELECTSLINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_SET_TRIPLECLICKSELECTSLINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_GET_ISDELAYED_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_SET_ISDELAYED_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_GET_ISDRAGGING_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_GET_TOUCHSCREENTEXTFIELD_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_GET_TOUCHSCREENTEXTFIELDCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_GET_SELECTIONCOLOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_GET_CURSORCOLOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_GET_HASFOCUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_GET_EDITOREVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_SET_EDITOREVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_GET_EDITORENGINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_SET_EDITORENGINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_INITTEXTEDITOREVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_CUTACTIONSTATUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_COPYACTIONSTATUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_PASTEACTIONSTATUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_PROCESSMENUCOMMAND_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_CUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_COPY_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_PASTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_ONINPUTCUSTOMSTYLERESOLVED_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_ONATTACHTOPANEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_SYNCTEXTENGINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_CULLSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_ONGENERATEVISUALCONTENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_DRAWWITHTEXTSELECTIONANDCURSOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_ACCEPTCHARACTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_BUILDCONTEXTUALMENU_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_ONDETECTFOCUSCHANGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_ONCURSORINDEXCHANGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_DOMEASURE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_EXECUTEDEFAULTACTIONDISABLEDATTARGET_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_EXECUTEDEFAULTACTIONATTARGET_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_PROCESSEVENTATTARGET_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_EXECUTEDEFAULTACTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_UNITYENGINE.UIELEMENTS.ITEXTINPUTFIELD.GET_HASFOCUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_UNITYENGINE.UIELEMENTS.ITEXTINPUTFIELD.SYNCTEXTENGINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_UNITYENGINE.UIELEMENTS.ITEXTINPUTFIELD.ACCEPTCHARACTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_UNITYENGINE.UIELEMENTS.ITEXTINPUTFIELD.CULLSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_UNITYENGINE.UIELEMENTS.ITEXTINPUTFIELD.UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_UNITYENGINE.UIELEMENTS.ITEXTINPUTFIELD.GET_EDITORENGINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_UNITYENGINE.UIELEMENTS.ITEXTINPUTFIELD.GET_ISDELAYED_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_UNITYENGINE.UIELEMENTS.ITEXTINPUTFIELD.UPDATEVALUEFROMTEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_DEFERGUISTYLERECTSYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_ONPERCENTRESOLVED_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_SYNCGUISTYLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_ISLAYOUTUSINGPERCENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE_ASSIGNRECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEXTINPUTBASE__PROCESSEVENTATTARGET_B__99_0_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int TextInputBase_TypeDefinitionIndex = 30395;

	class TextInputBase : public Il2CppObject
	{
	public:
		::System::String* m_OriginalText; // 0x0
		::System::Boolean _isReadOnly_k__BackingField; // 0x0
		::System::Int32 _maxLength_k__BackingField; // 0x0
		::System::Char _maskChar_k__BackingField; // 0x0
		::System::Boolean _isPasswordField_k__BackingField; // 0x0
		::System::Boolean _doubleClickSelectsWord_k__BackingField; // 0x0
		::System::Boolean _tripleClickSelectsLine_k__BackingField; // 0x0
		::System::Boolean _isDelayed_k__BackingField; // 0x0
		::System::Boolean _isDragging_k__BackingField; // 0x0
		::System::Boolean m_TouchScreenTextFieldInitialized; // 0x0
		::UnityEngine::UIElements::IVisualElementScheduledItem* m_HardwareKeyboardPoller; // 0x0
		::UnityEngine::Color* m_SelectionColor; // 0x0
		::UnityEngine::Color* m_CursorColor; // 0x0
		::UnityEngine::UIElements::TextEditorEventHandler* _editorEventHandler_k__BackingField; // 0x0
		::UnityEngine::UIElements::TextEditorEngine* _editorEngine_k__BackingField; // 0x0
		::UnityEngine::UIElements::ITextHandle* m_TextHandle; // 0x0
		::System::String* m_Text; // 0x0

		::System::Void ResetValueAndText()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_RESETVALUEANDTEXT_OFFSET))(nullptr);
		}

		::System::Void SaveValueAndText()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_SAVEVALUEANDTEXT_OFFSET))(nullptr);
		}

		::System::Void RestoreValueAndText()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_RESTOREVALUEANDTEXT_OFFSET))(nullptr);
		}

		::System::Void UpdateText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_UPDATETEXT_OFFSET))(str, nullptr);
		}

		Il2CppObject* StringToValue(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_STRINGTOVALUE_OFFSET))(str, nullptr);
		}

		::System::Void UpdateValueFromText()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_UPDATEVALUEFROMTEXT_OFFSET))(nullptr);
		}

		::System::Void UpdateTextFromValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_UPDATETEXTFROMVALUE_OFFSET))(nullptr);
		}

		::System::Boolean UnityEngine.UIElements.ITextInputField.get_isReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_UNITYENGINE.UIELEMENTS.ITEXTINPUTFIELD.GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Boolean get_isReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Void set_isReadOnly(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_SET_ISREADONLY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_maxLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_GET_MAXLENGTH_OFFSET))(nullptr);
		}

		::System::Void set_maxLength(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_SET_MAXLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Char get_maskChar()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_GET_MASKCHAR_OFFSET))(nullptr);
		}

		::System::Void set_maskChar(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_SET_MASKCHAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isPasswordField()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_GET_ISPASSWORDFIELD_OFFSET))(nullptr);
		}

		::System::Void set_isPasswordField(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_SET_ISPASSWORDFIELD_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_doubleClickSelectsWord()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_GET_DOUBLECLICKSELECTSWORD_OFFSET))(nullptr);
		}

		::System::Void set_doubleClickSelectsWord(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_SET_DOUBLECLICKSELECTSWORD_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_tripleClickSelectsLine()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_GET_TRIPLECLICKSELECTSLINE_OFFSET))(nullptr);
		}

		::System::Void set_tripleClickSelectsLine(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_SET_TRIPLECLICKSELECTSLINE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isDelayed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_GET_ISDELAYED_OFFSET))(nullptr);
		}

		::System::Void set_isDelayed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_SET_ISDELAYED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isDragging()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_GET_ISDRAGGING_OFFSET))(nullptr);
		}

		::System::Boolean get_touchScreenTextField()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_GET_TOUCHSCREENTEXTFIELD_OFFSET))(nullptr);
		}

		::System::Boolean get_touchScreenTextFieldChanged()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_GET_TOUCHSCREENTEXTFIELDCHANGED_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_selectionColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_GET_SELECTIONCOLOR_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_cursorColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_GET_CURSORCOLOR_OFFSET))(nullptr);
		}

		::System::Boolean get_hasFocus()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_GET_HASFOCUS_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::TextEditorEventHandler* get_editorEventHandler()
		{
			return (return (::UnityEngine::UIElements::TextEditorEventHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_GET_EDITOREVENTHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_editorEventHandler(::UnityEngine::UIElements::TextEditorEventHandler* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::TextEditorEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_SET_EDITOREVENTHANDLER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::TextEditorEngine* get_editorEngine()
		{
			return (return (::UnityEngine::UIElements::TextEditorEngine*(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_GET_EDITORENGINE_OFFSET))(nullptr);
		}

		::System::Void set_editorEngine(::UnityEngine::UIElements::TextEditorEngine* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::TextEditorEngine*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_SET_EDITORENGINE_OFFSET))(arg, nullptr);
		}

		::System::String* get_text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Void set_text(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_SET_TEXT_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitTextEditorEventHandler()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_INITTEXTEDITOREVENTHANDLER_OFFSET))(nullptr);
		}

		Status* CutActionStatus(::UnityEngine::UIElements::DropdownMenuAction* arg)
		{
			return (return (Status*(*)(::UnityEngine::UIElements::DropdownMenuAction*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_CUTACTIONSTATUS_OFFSET))(arg, nullptr);
		}

		Status* CopyActionStatus(::UnityEngine::UIElements::DropdownMenuAction* arg)
		{
			return (return (Status*(*)(::UnityEngine::UIElements::DropdownMenuAction*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_COPYACTIONSTATUS_OFFSET))(arg, nullptr);
		}

		Status* PasteActionStatus(::UnityEngine::UIElements::DropdownMenuAction* arg)
		{
			return (return (Status*(*)(::UnityEngine::UIElements::DropdownMenuAction*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_PASTEACTIONSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessMenuCommand(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_PROCESSMENUCOMMAND_OFFSET))(str, nullptr);
		}

		::System::Void Cut(::UnityEngine::UIElements::DropdownMenuAction* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::DropdownMenuAction*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_CUT_OFFSET))(arg, nullptr);
		}

		::System::Void Copy(::UnityEngine::UIElements::DropdownMenuAction* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::DropdownMenuAction*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_COPY_OFFSET))(arg, nullptr);
		}

		::System::Void Paste(::UnityEngine::UIElements::DropdownMenuAction* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::DropdownMenuAction*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_PASTE_OFFSET))(arg, nullptr);
		}

		::System::Void OnInputCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::CustomStyleResolvedEvent*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_ONINPUTCUSTOMSTYLERESOLVED_OFFSET))(arg, nullptr);
		}

		::System::Void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::AttachToPanelEvent*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_ONATTACHTOPANEL_OFFSET))(arg, nullptr);
		}

		::System::Void SyncTextEngine()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_SYNCTEXTENGINE_OFFSET))(nullptr);
		}

		::System::String* CullString(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_CULLSTRING_OFFSET))(str, nullptr);
		}

		::System::Void OnGenerateVisualContent(::UnityEngine::UIElements::MeshGenerationContext* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::MeshGenerationContext*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_ONGENERATEVISUALCONTENT_OFFSET))(arg, nullptr);
		}

		::System::Void DrawWithTextSelectionAndCursor(::UnityEngine::UIElements::MeshGenerationContext* arg, ::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::MeshGenerationContext*, ::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_DRAWWITHTEXTSELECTIONANDCURSOR_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Boolean AcceptCharacter(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_ACCEPTCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void BuildContextualMenu(::UnityEngine::UIElements::ContextualMenuPopulateEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ContextualMenuPopulateEvent*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_BUILDCONTEXTUALMENU_OFFSET))(arg, nullptr);
		}

		::System::Void OnDetectFocusChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_ONDETECTFOCUSCHANGE_OFFSET))(nullptr);
		}

		::System::Void OnCursorIndexChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_ONCURSORINDEXCHANGE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* DoMeasure(::System::Single arg, MeasureMode* arg, ::System::Single arg, MeasureMode* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::Single, MeasureMode*, ::System::Single, MeasureMode*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_DOMEASURE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ExecuteDefaultActionDisabledAtTarget(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_EXECUTEDEFAULTACTIONDISABLEDATTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_EXECUTEDEFAULTACTIONATTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessEventAtTarget(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_PROCESSEVENTATTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_EXECUTEDEFAULTACTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean UnityEngine.UIElements.ITextInputField.get_hasFocus()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_UNITYENGINE.UIELEMENTS.ITEXTINPUTFIELD.GET_HASFOCUS_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.UIElements.ITextInputField.SyncTextEngine()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_UNITYENGINE.UIELEMENTS.ITEXTINPUTFIELD.SYNCTEXTENGINE_OFFSET))(nullptr);
		}

		::System::Boolean UnityEngine.UIElements.ITextInputField.AcceptCharacter(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_UNITYENGINE.UIELEMENTS.ITEXTINPUTFIELD.ACCEPTCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::String* UnityEngine.UIElements.ITextInputField.CullString(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_UNITYENGINE.UIELEMENTS.ITEXTINPUTFIELD.CULLSTRING_OFFSET))(str, nullptr);
		}

		::System::Void UnityEngine.UIElements.ITextInputField.UpdateText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_UNITYENGINE.UIELEMENTS.ITEXTINPUTFIELD.UPDATETEXT_OFFSET))(str, nullptr);
		}

		::UnityEngine::UIElements::TextEditorEngine* UnityEngine.UIElements.ITextInputField.get_editorEngine()
		{
			return (return (::UnityEngine::UIElements::TextEditorEngine*(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_UNITYENGINE.UIELEMENTS.ITEXTINPUTFIELD.GET_EDITORENGINE_OFFSET))(nullptr);
		}

		::System::Boolean UnityEngine.UIElements.ITextInputField.get_isDelayed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_UNITYENGINE.UIELEMENTS.ITEXTINPUTFIELD.GET_ISDELAYED_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.UIElements.ITextInputField.UpdateValueFromText()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_UNITYENGINE.UIELEMENTS.ITEXTINPUTFIELD.UPDATEVALUEFROMTEXT_OFFSET))(nullptr);
		}

		::System::Void DeferGUIStyleRectSync()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_DEFERGUISTYLERECTSYNC_OFFSET))(nullptr);
		}

		::System::Void OnPercentResolved(::UnityEngine::UIElements::GeometryChangedEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::GeometryChangedEvent*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_ONPERCENTRESOLVED_OFFSET))(arg, nullptr);
		}

		::System::Void SyncGUIStyle(Il2CppObject* arg, ::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_SYNCGUISTYLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsLayoutUsingPercent(::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_ISLAYOUTUSINGPERCENT_OFFSET))(arg, nullptr);
		}

		::System::Void AssignRect(::UnityEngine::RectOffset* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::RectOffset*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE_ASSIGNRECT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void _ProcessEventAtTarget_b__99_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTINPUTBASE__PROCESSEVENTATTARGET_B__99_0_OFFSET))(nullptr);
		}

	};

