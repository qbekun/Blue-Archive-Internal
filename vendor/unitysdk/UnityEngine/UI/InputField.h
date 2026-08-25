#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class TouchScreenKeyboard; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine { class TouchScreenKeyboardType; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class TextGenerator; }
namespace UnityEngine { class CanvasRenderer; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class WaitForSecondsRealtime; }
namespace UnityEngine { class Event; }
namespace UnityEngine::EventSystems { class BaseInput; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::UI { class CanvasUpdate; }
namespace UnityEngine::UI { class VertexHelper; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_UI_INPUTFIELD_GET_INPUT_OFFSET UNITYSDK_OFFSET(0xA4567D0)
#define UNITYENGINE_UI_INPUTFIELD_GET_COMPOSITIONSTRING_OFFSET UNITYSDK_OFFSET(0xA4568D0)
#define UNITYENGINE_UI_INPUTFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0xA456960)
#define UNITYENGINE_UI_INPUTFIELD_GET_MESH_OFFSET UNITYSDK_OFFSET(0xA456D10)
#define UNITYENGINE_UI_INPUTFIELD_GET_CACHEDINPUTTEXTGENERATOR_OFFSET UNITYSDK_OFFSET(0xA456DC0)
#define UNITYENGINE_UI_INPUTFIELD_SET_SHOULDHIDEMOBILEINPUT_OFFSET UNITYSDK_OFFSET(0xA456E40)
#define UNITYENGINE_UI_INPUTFIELD_GET_SHOULDHIDEMOBILEINPUT_OFFSET UNITYSDK_OFFSET(0xA456E90)
#define UNITYENGINE_UI_INPUTFIELD_SET_SHOULDACTIVATEONSELECT_OFFSET UNITYSDK_OFFSET(0xA456EC0)
#define UNITYENGINE_UI_INPUTFIELD_GET_SHOULDACTIVATEONSELECT_OFFSET UNITYSDK_OFFSET(0xA456ED0)
#define UNITYENGINE_UI_INPUTFIELD_GET_TEXT_OFFSET UNITYSDK_OFFSET(0xA456F00)
#define UNITYENGINE_UI_INPUTFIELD_SET_TEXT_OFFSET UNITYSDK_OFFSET(0xA456F10)
#define UNITYENGINE_UI_INPUTFIELD_SETTEXTWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0xA457310)
#define UNITYENGINE_UI_INPUTFIELD_SETTEXT_OFFSET UNITYSDK_OFFSET(0xA456F20)
#define UNITYENGINE_UI_INPUTFIELD_GET_ISFOCUSED_OFFSET UNITYSDK_OFFSET(0xA457A20)
#define UNITYENGINE_UI_INPUTFIELD_GET_CARETBLINKRATE_OFFSET UNITYSDK_OFFSET(0xA457A30)
#define UNITYENGINE_UI_INPUTFIELD_SET_CARETBLINKRATE_OFFSET UNITYSDK_OFFSET(0xA457A40)
#define UNITYENGINE_UI_INPUTFIELD_GET_CARETWIDTH_OFFSET UNITYSDK_OFFSET(0xA457B80)
#define UNITYENGINE_UI_INPUTFIELD_SET_CARETWIDTH_OFFSET UNITYSDK_OFFSET(0xA457B90)
#define UNITYENGINE_UI_INPUTFIELD_GET_TEXTCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA457C70)
#define UNITYENGINE_UI_INPUTFIELD_SET_TEXTCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA457C80)
#define UNITYENGINE_UI_INPUTFIELD_GET_PLACEHOLDER_OFFSET UNITYSDK_OFFSET(0xA457F40)
#define UNITYENGINE_UI_INPUTFIELD_SET_PLACEHOLDER_OFFSET UNITYSDK_OFFSET(0xA457F50)
#define UNITYENGINE_UI_INPUTFIELD_GET_CARETCOLOR_OFFSET UNITYSDK_OFFSET(0xA457FA0)
#define UNITYENGINE_UI_INPUTFIELD_SET_CARETCOLOR_OFFSET UNITYSDK_OFFSET(0xA457FF0)
#define UNITYENGINE_UI_INPUTFIELD_GET_CUSTOMCARETCOLOR_OFFSET UNITYSDK_OFFSET(0xA458060)
#define UNITYENGINE_UI_INPUTFIELD_SET_CUSTOMCARETCOLOR_OFFSET UNITYSDK_OFFSET(0xA458070)
#define UNITYENGINE_UI_INPUTFIELD_GET_SELECTIONCOLOR_OFFSET UNITYSDK_OFFSET(0xA4580E0)
#define UNITYENGINE_UI_INPUTFIELD_SET_SELECTIONCOLOR_OFFSET UNITYSDK_OFFSET(0xA4580F0)
#define UNITYENGINE_UI_INPUTFIELD_GET_ONENDEDIT_OFFSET UNITYSDK_OFFSET(0xA458160)
#define UNITYENGINE_UI_INPUTFIELD_SET_ONENDEDIT_OFFSET UNITYSDK_OFFSET(0xA458170)
#define UNITYENGINE_UI_INPUTFIELD_GET_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0xA4581C0)
#define UNITYENGINE_UI_INPUTFIELD_SET_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0xA4581D0)
#define UNITYENGINE_UI_INPUTFIELD_GET_ONVALUECHANGE_OFFSET UNITYSDK_OFFSET(0xA458220)
#define UNITYENGINE_UI_INPUTFIELD_SET_ONVALUECHANGE_OFFSET UNITYSDK_OFFSET(0xA458230)
#define UNITYENGINE_UI_INPUTFIELD_GET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0xA4582D0)
#define UNITYENGINE_UI_INPUTFIELD_SET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0xA458280)
#define UNITYENGINE_UI_INPUTFIELD_GET_ONVALIDATEINPUT_OFFSET UNITYSDK_OFFSET(0xA4582E0)
#define UNITYENGINE_UI_INPUTFIELD_SET_ONVALIDATEINPUT_OFFSET UNITYSDK_OFFSET(0xA4582F0)
#define UNITYENGINE_UI_INPUTFIELD_GET_CHARACTERLIMIT_OFFSET UNITYSDK_OFFSET(0xA458340)
#define UNITYENGINE_UI_INPUTFIELD_SET_CHARACTERLIMIT_OFFSET UNITYSDK_OFFSET(0xA458350)
#define UNITYENGINE_UI_INPUTFIELD_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xA4583F0)
#define UNITYENGINE_UI_INPUTFIELD_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xA458400)
#define UNITYENGINE_UI_INPUTFIELD_GET_LINETYPE_OFFSET UNITYSDK_OFFSET(0xA458690)
#define UNITYENGINE_UI_INPUTFIELD_SET_LINETYPE_OFFSET UNITYSDK_OFFSET(0xA4586A0)
#define UNITYENGINE_UI_INPUTFIELD_GET_INPUTTYPE_OFFSET UNITYSDK_OFFSET(0xA4588F0)
#define UNITYENGINE_UI_INPUTFIELD_SET_INPUTTYPE_OFFSET UNITYSDK_OFFSET(0xA458900)
#define UNITYENGINE_UI_INPUTFIELD_GET_TOUCHSCREENKEYBOARD_OFFSET UNITYSDK_OFFSET(0xA458BD0)
#define UNITYENGINE_UI_INPUTFIELD_GET_KEYBOARDTYPE_OFFSET UNITYSDK_OFFSET(0xA458BE0)
#define UNITYENGINE_UI_INPUTFIELD_SET_KEYBOARDTYPE_OFFSET UNITYSDK_OFFSET(0xA458BF0)
#define UNITYENGINE_UI_INPUTFIELD_GET_CHARACTERVALIDATION_OFFSET UNITYSDK_OFFSET(0xA458D70)
#define UNITYENGINE_UI_INPUTFIELD_SET_CHARACTERVALIDATION_OFFSET UNITYSDK_OFFSET(0xA458D80)
#define UNITYENGINE_UI_INPUTFIELD_GET_READONLY_OFFSET UNITYSDK_OFFSET(0xA458F00)
#define UNITYENGINE_UI_INPUTFIELD_SET_READONLY_OFFSET UNITYSDK_OFFSET(0xA458F10)
#define UNITYENGINE_UI_INPUTFIELD_GET_MULTILINE_OFFSET UNITYSDK_OFFSET(0xA458F20)
#define UNITYENGINE_UI_INPUTFIELD_GET_ASTERISKCHAR_OFFSET UNITYSDK_OFFSET(0xA458F40)
#define UNITYENGINE_UI_INPUTFIELD_SET_ASTERISKCHAR_OFFSET UNITYSDK_OFFSET(0xA458F50)
#define UNITYENGINE_UI_INPUTFIELD_GET_WASCANCELED_OFFSET UNITYSDK_OFFSET(0xA458FB0)
#define UNITYENGINE_UI_INPUTFIELD_CLAMPPOS_OFFSET UNITYSDK_OFFSET(0xA458FC0)
#define UNITYENGINE_UI_INPUTFIELD_GET_CARETPOSITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0xA458FF0)
#define UNITYENGINE_UI_INPUTFIELD_SET_CARETPOSITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0xA459020)
#define UNITYENGINE_UI_INPUTFIELD_GET_CARETSELECTPOSITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0xA459060)
#define UNITYENGINE_UI_INPUTFIELD_SET_CARETSELECTPOSITIONINTERNAL_OFFSET UNITYSDK_OFFSET(0xA459090)
#define UNITYENGINE_UI_INPUTFIELD_GET_HASSELECTION_OFFSET UNITYSDK_OFFSET(0xA4590D0)
#define UNITYENGINE_UI_INPUTFIELD_GET_CARETPOSITION_OFFSET UNITYSDK_OFFSET(0xA459120)
#define UNITYENGINE_UI_INPUTFIELD_SET_CARETPOSITION_OFFSET UNITYSDK_OFFSET(0xA459150)
#define UNITYENGINE_UI_INPUTFIELD_GET_SELECTIONANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0xA459280)
#define UNITYENGINE_UI_INPUTFIELD_SET_SELECTIONANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0xA4591E0)
#define UNITYENGINE_UI_INPUTFIELD_GET_SELECTIONFOCUSPOSITION_OFFSET UNITYSDK_OFFSET(0xA4592B0)
#define UNITYENGINE_UI_INPUTFIELD_SET_SELECTIONFOCUSPOSITION_OFFSET UNITYSDK_OFFSET(0xA459230)
#define UNITYENGINE_UI_INPUTFIELD_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA4592E0)
#define UNITYENGINE_UI_INPUTFIELD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA459580)
#define UNITYENGINE_UI_INPUTFIELD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA459A40)
#define UNITYENGINE_UI_INPUTFIELD_CARETBLINK_OFFSET UNITYSDK_OFFSET(0xA459AA0)
#define UNITYENGINE_UI_INPUTFIELD_SETCARETVISIBLE_OFFSET UNITYSDK_OFFSET(0xA459B30)
#define UNITYENGINE_UI_INPUTFIELD_SETCARETACTIVE_OFFSET UNITYSDK_OFFSET(0xA457AB0)
#define UNITYENGINE_UI_INPUTFIELD_UPDATECARETMATERIAL_OFFSET UNITYSDK_OFFSET(0xA459B70)
#define UNITYENGINE_UI_INPUTFIELD_ONFOCUS_OFFSET UNITYSDK_OFFSET(0xA459C80)
#define UNITYENGINE_UI_INPUTFIELD_SELECTALL_OFFSET UNITYSDK_OFFSET(0xA459CD0)
#define UNITYENGINE_UI_INPUTFIELD_MOVETEXTEND_OFFSET UNITYSDK_OFFSET(0xA459D20)
#define UNITYENGINE_UI_INPUTFIELD_MOVETEXTSTART_OFFSET UNITYSDK_OFFSET(0xA459DB0)
#define UNITYENGINE_UI_INPUTFIELD_GET_CLIPBOARD_OFFSET UNITYSDK_OFFSET(0xA459E50)
#define UNITYENGINE_UI_INPUTFIELD_SET_CLIPBOARD_OFFSET UNITYSDK_OFFSET(0xA459E60)
#define UNITYENGINE_UI_INPUTFIELD_TOUCHSCREENKEYBOARDSHOULDBEUSED_OFFSET UNITYSDK_OFFSET(0xA459E70)
#define UNITYENGINE_UI_INPUTFIELD_INPLACEEDITING_OFFSET UNITYSDK_OFFSET(0xA459EF0)
#define UNITYENGINE_UI_INPUTFIELD_INPLACEEDITINGCHANGED_OFFSET UNITYSDK_OFFSET(0xA459F20)
#define UNITYENGINE_UI_INPUTFIELD_UPDATECARETFROMKEYBOARD_OFFSET UNITYSDK_OFFSET(0xA459FB0)
#define UNITYENGINE_UI_INPUTFIELD_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA45A0B0)
#define UNITYENGINE_UI_INPUTFIELD_SCREENTOLOCAL_OFFSET UNITYSDK_OFFSET(0xA45BCD0)
#define UNITYENGINE_UI_INPUTFIELD_GETUNCLAMPEDCHARACTERLINEFROMPOSITION_OFFSET UNITYSDK_OFFSET(0xA45C050)
#define UNITYENGINE_UI_INPUTFIELD_GETCHARACTERINDEXFROMPOSITION_OFFSET UNITYSDK_OFFSET(0xA45C290)
#define UNITYENGINE_UI_INPUTFIELD_MAYDRAG_OFFSET UNITYSDK_OFFSET(0xA45C6E0)
#define UNITYENGINE_UI_INPUTFIELD_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xA45C7B0)
#define UNITYENGINE_UI_INPUTFIELD_ONDRAG_OFFSET UNITYSDK_OFFSET(0xA45C7D0)
#define UNITYENGINE_UI_INPUTFIELD_MOUSEDRAGOUTSIDERECT_OFFSET UNITYSDK_OFFSET(0xA45CA90)
#define UNITYENGINE_UI_INPUTFIELD_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xA45CB40)
#define UNITYENGINE_UI_INPUTFIELD_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xA45CB60)
#define UNITYENGINE_UI_INPUTFIELD_KEYPRESSED_OFFSET UNITYSDK_OFFSET(0xA45CD80)
#define UNITYENGINE_UI_INPUTFIELD_ISVALIDCHAR_OFFSET UNITYSDK_OFFSET(0xA45DE70)
#define UNITYENGINE_UI_INPUTFIELD_PROCESSEVENT_OFFSET UNITYSDK_OFFSET(0xA45DED0)
#define UNITYENGINE_UI_INPUTFIELD_ONUPDATESELECTED_OFFSET UNITYSDK_OFFSET(0xA45DEE0)
#define UNITYENGINE_UI_INPUTFIELD_GETSELECTEDSTRING_OFFSET UNITYSDK_OFFSET(0xA45D770)
#define UNITYENGINE_UI_INPUTFIELD_FINDTNEXTWORDBEGIN_OFFSET UNITYSDK_OFFSET(0xA45E160)
#define UNITYENGINE_UI_INPUTFIELD_MOVERIGHT_OFFSET UNITYSDK_OFFSET(0xA45DCC0)
#define UNITYENGINE_UI_INPUTFIELD_FINDTPREVWORDBEGIN_OFFSET UNITYSDK_OFFSET(0xA45E230)
#define UNITYENGINE_UI_INPUTFIELD_MOVELEFT_OFFSET UNITYSDK_OFFSET(0xA45DB30)
#define UNITYENGINE_UI_INPUTFIELD_DETERMINECHARACTERLINE_OFFSET UNITYSDK_OFFSET(0xA45E2F0)
#define UNITYENGINE_UI_INPUTFIELD_LINEUPCHARACTERPOSITION_OFFSET UNITYSDK_OFFSET(0xA45E400)
#define UNITYENGINE_UI_INPUTFIELD_LINEDOWNCHARACTERPOSITION_OFFSET UNITYSDK_OFFSET(0xA45E9A0)
#define UNITYENGINE_UI_INPUTFIELD_MOVEDOWN_OFFSET UNITYSDK_OFFSET(0xA45DE60)
#define UNITYENGINE_UI_INPUTFIELD_MOVEDOWN_OFFSET UNITYSDK_OFFSET(0xA45EF10)
#define UNITYENGINE_UI_INPUTFIELD_MOVEUP_OFFSET UNITYSDK_OFFSET(0xA45DE50)
#define UNITYENGINE_UI_INPUTFIELD_MOVEUP_OFFSET UNITYSDK_OFFSET(0xA45F0D0)
#define UNITYENGINE_UI_INPUTFIELD_DELETE_OFFSET UNITYSDK_OFFSET(0xA45D830)
#define UNITYENGINE_UI_INPUTFIELD_FORWARDSPACE_OFFSET UNITYSDK_OFFSET(0xA45D560)
#define UNITYENGINE_UI_INPUTFIELD_BACKSPACE_OFFSET UNITYSDK_OFFSET(0xA45D2A0)
#define UNITYENGINE_UI_INPUTFIELD_INSERT_OFFSET UNITYSDK_OFFSET(0xA45F280)
#define UNITYENGINE_UI_INPUTFIELD_UPDATETOUCHKEYBOARDFROMEDITCHANGES_OFFSET UNITYSDK_OFFSET(0xA45DAD0)
#define UNITYENGINE_UI_INPUTFIELD_SENDONVALUECHANGEDANDUPDATELABEL_OFFSET UNITYSDK_OFFSET(0xA45BC60)
#define UNITYENGINE_UI_INPUTFIELD_SENDONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0xA4573F0)
#define UNITYENGINE_UI_INPUTFIELD_SENDONENDEDIT_OFFSET UNITYSDK_OFFSET(0xA45F490)
#define UNITYENGINE_UI_INPUTFIELD_SENDONSUBMIT_OFFSET UNITYSDK_OFFSET(0xA45B430)
#define UNITYENGINE_UI_INPUTFIELD_APPEND_OFFSET UNITYSDK_OFFSET(0xA45F500)
#define UNITYENGINE_UI_INPUTFIELD_APPEND_OFFSET UNITYSDK_OFFSET(0xA45F5A0)
#define UNITYENGINE_UI_INPUTFIELD_UPDATELABEL_OFFSET UNITYSDK_OFFSET(0xA457460)
#define UNITYENGINE_UI_INPUTFIELD_ISSELECTIONVISIBLE_OFFSET UNITYSDK_OFFSET(0xA460A90)
#define UNITYENGINE_UI_INPUTFIELD_GETLINESTARTPOSITION_OFFSET UNITYSDK_OFFSET(0xA460B30)
#define UNITYENGINE_UI_INPUTFIELD_GETLINEENDPOSITION_OFFSET UNITYSDK_OFFSET(0xA45C580)
#define UNITYENGINE_UI_INPUTFIELD_SETDRAWRANGETOCONTAINCARETPOSITION_OFFSET UNITYSDK_OFFSET(0xA45F870)
#define UNITYENGINE_UI_INPUTFIELD_FORCELABELUPDATE_OFFSET UNITYSDK_OFFSET(0xA460C80)
#define UNITYENGINE_UI_INPUTFIELD_MARKGEOMETRYASDIRTY_OFFSET UNITYSDK_OFFSET(0xA457C20)
#define UNITYENGINE_UI_INPUTFIELD_REBUILD_OFFSET UNITYSDK_OFFSET(0xA460C90)
#define UNITYENGINE_UI_INPUTFIELD_LAYOUTCOMPLETE_OFFSET UNITYSDK_OFFSET(0xA461140)
#define UNITYENGINE_UI_INPUTFIELD_GRAPHICUPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0xA461150)
#define UNITYENGINE_UI_INPUTFIELD_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0xA460CA0)
#define UNITYENGINE_UI_INPUTFIELD_ASSIGNPOSITIONINGIFNEEDED_OFFSET UNITYSDK_OFFSET(0xA45AD00)
#define UNITYENGINE_UI_INPUTFIELD_ONFILLVBO_OFFSET UNITYSDK_OFFSET(0xA461160)
#define UNITYENGINE_UI_INPUTFIELD_GENERATECARET_OFFSET UNITYSDK_OFFSET(0xA4613D0)
#define UNITYENGINE_UI_INPUTFIELD_CREATECURSORVERTS_OFFSET UNITYSDK_OFFSET(0xA462F70)
#define UNITYENGINE_UI_INPUTFIELD_GENERATEHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xA4621E0)
#define UNITYENGINE_UI_INPUTFIELD_VALIDATE_OFFSET UNITYSDK_OFFSET(0xA45B4A0)
#define UNITYENGINE_UI_INPUTFIELD_ACTIVATEINPUTFIELD_OFFSET UNITYSDK_OFFSET(0xA463110)
#define UNITYENGINE_UI_INPUTFIELD_ACTIVATEINPUTFIELDINTERNAL_OFFSET UNITYSDK_OFFSET(0xA45A890)
#define UNITYENGINE_UI_INPUTFIELD_ONSELECT_OFFSET UNITYSDK_OFFSET(0xA463240)
#define UNITYENGINE_UI_INPUTFIELD_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0xA463280)
#define UNITYENGINE_UI_INPUTFIELD_DEACTIVATEINPUTFIELD_OFFSET UNITYSDK_OFFSET(0xA459810)
#define UNITYENGINE_UI_INPUTFIELD_ONDESELECT_OFFSET UNITYSDK_OFFSET(0xA4632B0)
#define UNITYENGINE_UI_INPUTFIELD_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0xA4632E0)
#define UNITYENGINE_UI_INPUTFIELD_ENFORCECONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xA458540)
#define UNITYENGINE_UI_INPUTFIELD_ENFORCETEXTHOVERFLOW_OFFSET UNITYSDK_OFFSET(0xA456C80)
#define UNITYENGINE_UI_INPUTFIELD_SETTOCUSTOMIFCONTENTTYPEISNOT_OFFSET UNITYSDK_OFFSET(0xA458740)
#define UNITYENGINE_UI_INPUTFIELD_SETTOCUSTOM_OFFSET UNITYSDK_OFFSET(0xA458A80)
#define UNITYENGINE_UI_INPUTFIELD_DOSTATETRANSITION_OFFSET UNITYSDK_OFFSET(0xA463330)
#define UNITYENGINE_UI_INPUTFIELD_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0xA463360)
#define UNITYENGINE_UI_INPUTFIELD_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0xA463370)
#define UNITYENGINE_UI_INPUTFIELD_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0xA463380)
#define UNITYENGINE_UI_INPUTFIELD_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0xA463390)
#define UNITYENGINE_UI_INPUTFIELD_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0xA463560)
#define UNITYENGINE_UI_INPUTFIELD_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0xA463570)
#define UNITYENGINE_UI_INPUTFIELD_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0xA463580)
#define UNITYENGINE_UI_INPUTFIELD_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0xA463770)
#define UNITYENGINE_UI_INPUTFIELD_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0xA463780)
#define UNITYENGINE_UI_INPUTFIELD_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA463790)
#define UNITYENGINE_UI_INPUTFIELD_UNITYENGINE.UI.ICANVASELEMENT.GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xA463830)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int InputField_TypeDefinitionIndex = 34794;

	class InputField : public Il2CppObject
	{
	public:
		::UnityEngine::TouchScreenKeyboard* m_Keyboard; // 0xF8
		::Il2CppArray<::System::Object*>* kSeparators; // 0x0
		::System::Boolean s_IsQuestDevice; // 0x8
		::UnityEngine::UI::Text* m_TextComponent; // 0x100
		::UnityEngine::UI::Graphic* m_Placeholder; // 0x108
		ContentType* m_ContentType; // 0x110
		InputType* m_InputType; // 0x114
		::System::Char m_AsteriskChar; // 0x118
		::UnityEngine::TouchScreenKeyboardType* m_KeyboardType; // 0x11C
		LineType* m_LineType; // 0x120
		::System::Boolean m_HideMobileInput; // 0x124
		CharacterValidation* m_CharacterValidation; // 0x128
		::System::Int32 m_CharacterLimit; // 0x12C
		SubmitEvent* m_OnSubmit; // 0x130
		EndEditEvent* m_OnDidEndEdit; // 0x138
		OnChangeEvent* m_OnValueChanged; // 0x140
		OnValidateInput* m_OnValidateInput; // 0x148
		::UnityEngine::Color* m_CaretColor; // 0x150
		::System::Boolean m_CustomCaretColor; // 0x160
		::UnityEngine::Color* m_SelectionColor; // 0x164
		::System::String* m_Text; // 0x178
		::System::Single m_CaretBlinkRate; // 0x180
		::System::Int32 m_CaretWidth; // 0x184
		::System::Boolean m_ReadOnly; // 0x188
		::System::Boolean m_ShouldActivateOnSelect; // 0x189
		::System::Int32 m_CaretPosition; // 0x18C
		::System::Int32 m_CaretSelectPosition; // 0x190
		::UnityEngine::RectTransform* caretRectTrans; // 0x198
		::Il2CppArray<::System::Object*>* m_CursorVerts; // 0x1A0
		::UnityEngine::TextGenerator* m_InputTextCache; // 0x1A8
		::UnityEngine::CanvasRenderer* m_CachedInputRenderer; // 0x1B0
		::System::Boolean m_PreventFontCallback; // 0x1B8
		::UnityEngine::Mesh* m_Mesh; // 0x1C0
		::System::Boolean m_AllowInput; // 0x1C8
		::System::Boolean m_ShouldActivateNextUpdate; // 0x1C9
		::System::Boolean m_UpdateDrag; // 0x1CA
		::System::Boolean m_DragPositionOutOfBounds; // 0x1CB
		::System::Single kHScrollSpeed; // 0x0
		::System::Single kVScrollSpeed; // 0x0
		::System::Boolean m_CaretVisible; // 0x1CC
		::UnityEngine::Coroutine* m_BlinkCoroutine; // 0x1D0
		::System::Single m_BlinkStartTime; // 0x1D8
		::System::Int32 m_DrawStart; // 0x1DC
		::System::Int32 m_DrawEnd; // 0x1E0
		::UnityEngine::Coroutine* m_DragCoroutine; // 0x1E8
		::System::String* m_OriginalText; // 0x1F0
		::System::Boolean m_WasCanceled; // 0x1F8
		::System::Boolean m_HasDoneFocusTransition; // 0x1F9
		::UnityEngine::WaitForSecondsRealtime* m_WaitForSecondsRealtime; // 0x200
		::System::Boolean m_TouchKeyboardAllowsInPlaceEditing; // 0x208
		::System::Boolean m_IsCompositionActive; // 0x209
		::System::String* kEmailSpecialCharacters; // 0x0
		::System::String* kOculusQuestDeviceModel; // 0x0
		::UnityEngine::Event* m_ProcessingEvent; // 0x210
		::System::Int32 k_MaxTextLength; // 0x0

		::UnityEngine::EventSystems::BaseInput* get_input()
		{
			return (return (::UnityEngine::EventSystems::BaseInput*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_INPUT_OFFSET))(nullptr);
		}

		::System::String* get_compositionString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_COMPOSITIONSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Mesh* get_mesh()
		{
			return (return (::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_MESH_OFFSET))(nullptr);
		}

		::UnityEngine::TextGenerator* get_cachedInputTextGenerator()
		{
			return (return (::UnityEngine::TextGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CACHEDINPUTTEXTGENERATOR_OFFSET))(nullptr);
		}

		::System::Void set_shouldHideMobileInput(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_SHOULDHIDEMOBILEINPUT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_shouldHideMobileInput()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_SHOULDHIDEMOBILEINPUT_OFFSET))(nullptr);
		}

		::System::Void set_shouldActivateOnSelect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_SHOULDACTIVATEONSELECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_shouldActivateOnSelect()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_SHOULDACTIVATEONSELECT_OFFSET))(nullptr);
		}

		::System::String* get_text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Void set_text(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_TEXT_OFFSET))(str, nullptr);
		}

		::System::Void SetTextWithoutNotify(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SETTEXTWITHOUTNOTIFY_OFFSET))(str, nullptr);
		}

		::System::Void SetText(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SETTEXT_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean get_isFocused()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_ISFOCUSED_OFFSET))(nullptr);
		}

		::System::Single get_caretBlinkRate()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CARETBLINKRATE_OFFSET))(nullptr);
		}

		::System::Void set_caretBlinkRate(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_CARETBLINKRATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_caretWidth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CARETWIDTH_OFFSET))(nullptr);
		}

		::System::Void set_caretWidth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_CARETWIDTH_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UI::Text* get_textComponent()
		{
			return (return (::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_TEXTCOMPONENT_OFFSET))(nullptr);
		}

		::System::Void set_textComponent(::UnityEngine::UI::Text* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Text*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_TEXTCOMPONENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UI::Graphic* get_placeholder()
		{
			return (return (::UnityEngine::UI::Graphic*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_PLACEHOLDER_OFFSET))(nullptr);
		}

		::System::Void set_placeholder(::UnityEngine::UI::Graphic* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Graphic*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_PLACEHOLDER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_caretColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CARETCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_caretColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_CARETCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_customCaretColor()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CUSTOMCARETCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_customCaretColor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_CUSTOMCARETCOLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_selectionColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_SELECTIONCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_selectionColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_SELECTIONCOLOR_OFFSET))(arg, nullptr);
		}

		EndEditEvent* get_onEndEdit()
		{
			return (return (EndEditEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_ONENDEDIT_OFFSET))(nullptr);
		}

		::System::Void set_onEndEdit(EndEditEvent* arg)
		{
			((::System::Void(*)(EndEditEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_ONENDEDIT_OFFSET))(arg, nullptr);
		}

		SubmitEvent* get_onSubmit()
		{
			return (return (SubmitEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_ONSUBMIT_OFFSET))(nullptr);
		}

		::System::Void set_onSubmit(SubmitEvent* arg)
		{
			((::System::Void(*)(SubmitEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_ONSUBMIT_OFFSET))(arg, nullptr);
		}

		OnChangeEvent* get_onValueChange()
		{
			return (return (OnChangeEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_ONVALUECHANGE_OFFSET))(nullptr);
		}

		::System::Void set_onValueChange(OnChangeEvent* arg)
		{
			((::System::Void(*)(OnChangeEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_ONVALUECHANGE_OFFSET))(arg, nullptr);
		}

		OnChangeEvent* get_onValueChanged()
		{
			return (return (OnChangeEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_ONVALUECHANGED_OFFSET))(nullptr);
		}

		::System::Void set_onValueChanged(OnChangeEvent* arg)
		{
			((::System::Void(*)(OnChangeEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_ONVALUECHANGED_OFFSET))(arg, nullptr);
		}

		OnValidateInput* get_onValidateInput()
		{
			return (return (OnValidateInput*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_ONVALIDATEINPUT_OFFSET))(nullptr);
		}

		::System::Void set_onValidateInput(OnValidateInput* arg)
		{
			((::System::Void(*)(OnValidateInput*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_ONVALIDATEINPUT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_characterLimit()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CHARACTERLIMIT_OFFSET))(nullptr);
		}

		::System::Void set_characterLimit(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_CHARACTERLIMIT_OFFSET))(arg, nullptr);
		}

		ContentType* get_contentType()
		{
			return (return (ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_contentType(ContentType* arg)
		{
			((::System::Void(*)(ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_CONTENTTYPE_OFFSET))(arg, nullptr);
		}

		LineType* get_lineType()
		{
			return (return (LineType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_LINETYPE_OFFSET))(nullptr);
		}

		::System::Void set_lineType(LineType* arg)
		{
			((::System::Void(*)(LineType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_LINETYPE_OFFSET))(arg, nullptr);
		}

		InputType* get_inputType()
		{
			return (return (InputType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_INPUTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_inputType(InputType* arg)
		{
			((::System::Void(*)(InputType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_INPUTTYPE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::TouchScreenKeyboard* get_touchScreenKeyboard()
		{
			return (return (::UnityEngine::TouchScreenKeyboard*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_TOUCHSCREENKEYBOARD_OFFSET))(nullptr);
		}

		::UnityEngine::TouchScreenKeyboardType* get_keyboardType()
		{
			return (return (::UnityEngine::TouchScreenKeyboardType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_KEYBOARDTYPE_OFFSET))(nullptr);
		}

		::System::Void set_keyboardType(::UnityEngine::TouchScreenKeyboardType* arg)
		{
			((::System::Void(*)(::UnityEngine::TouchScreenKeyboardType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_KEYBOARDTYPE_OFFSET))(arg, nullptr);
		}

		CharacterValidation* get_characterValidation()
		{
			return (return (CharacterValidation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CHARACTERVALIDATION_OFFSET))(nullptr);
		}

		::System::Void set_characterValidation(CharacterValidation* arg)
		{
			((::System::Void(*)(CharacterValidation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_CHARACTERVALIDATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_readOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_READONLY_OFFSET))(nullptr);
		}

		::System::Void set_readOnly(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_READONLY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_multiLine()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_MULTILINE_OFFSET))(nullptr);
		}

		::System::Char get_asteriskChar()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_ASTERISKCHAR_OFFSET))(nullptr);
		}

		::System::Void set_asteriskChar(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_ASTERISKCHAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_wasCanceled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_WASCANCELED_OFFSET))(nullptr);
		}

		::System::Void ClampPos(int32_t&* arg)
		{
			((::System::Void(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_CLAMPPOS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_caretPositionInternal()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CARETPOSITIONINTERNAL_OFFSET))(nullptr);
		}

		::System::Void set_caretPositionInternal(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_CARETPOSITIONINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_caretSelectPositionInternal()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CARETSELECTPOSITIONINTERNAL_OFFSET))(nullptr);
		}

		::System::Void set_caretSelectPositionInternal(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_CARETSELECTPOSITIONINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_hasSelection()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_HASSELECTION_OFFSET))(nullptr);
		}

		::System::Int32 get_caretPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CARETPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_caretPosition(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_CARETPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_selectionAnchorPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_SELECTIONANCHORPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_selectionAnchorPosition(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_SELECTIONANCHORPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_selectionFocusPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_SELECTIONFOCUSPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_selectionFocusPosition(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_SELECTIONFOCUSPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CaretBlink()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_CARETBLINK_OFFSET))(nullptr);
		}

		::System::Void SetCaretVisible()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SETCARETVISIBLE_OFFSET))(nullptr);
		}

		::System::Void SetCaretActive()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SETCARETACTIVE_OFFSET))(nullptr);
		}

		::System::Void UpdateCaretMaterial()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_UPDATECARETMATERIAL_OFFSET))(nullptr);
		}

		::System::Void OnFocus()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONFOCUS_OFFSET))(nullptr);
		}

		::System::Void SelectAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SELECTALL_OFFSET))(nullptr);
		}

		::System::Void MoveTextEnd(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_MOVETEXTEND_OFFSET))(arg, nullptr);
		}

		::System::Void MoveTextStart(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_MOVETEXTSTART_OFFSET))(arg, nullptr);
		}

		::System::String* get_clipboard()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_CLIPBOARD_OFFSET))(nullptr);
		}

		::System::Void set_clipboard(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SET_CLIPBOARD_OFFSET))(str, nullptr);
		}

		::System::Boolean TouchScreenKeyboardShouldBeUsed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_TOUCHSCREENKEYBOARDSHOULDBEUSED_OFFSET))(nullptr);
		}

		::System::Boolean InPlaceEditing()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_INPLACEEDITING_OFFSET))(nullptr);
		}

		::System::Boolean InPlaceEditingChanged()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_INPLACEEDITINGCHANGED_OFFSET))(nullptr);
		}

		::System::Void UpdateCaretFromKeyboard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_UPDATECARETFROMKEYBOARD_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_LATEUPDATE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* ScreenToLocal(::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SCREENTOLOCAL_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetUnclampedCharacterLineFromPosition(::UnityEngine::Vector2* arg, ::UnityEngine::TextGenerator* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Vector2*, ::UnityEngine::TextGenerator*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GETUNCLAMPEDCHARACTERLINEFROMPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetCharacterIndexFromPosition(::UnityEngine::Vector2* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GETCHARACTERINDEXFROMPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean MayDrag(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_MAYDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONBEGINDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONDRAG_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* MouseDragOutsideRect(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_MOUSEDRAGOUTSIDERECT_OFFSET))(arg, nullptr);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONENDDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONPOINTERDOWN_OFFSET))(arg, nullptr);
		}

		EditState* KeyPressed(::UnityEngine::Event* arg)
		{
			return (return (EditState*(*)(::UnityEngine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_KEYPRESSED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValidChar(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ISVALIDCHAR_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessEvent(::UnityEngine::Event* arg)
		{
			((::System::Void(*)(::UnityEngine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_PROCESSEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONUPDATESELECTED_OFFSET))(arg, nullptr);
		}

		::System::String* GetSelectedString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GETSELECTEDSTRING_OFFSET))(nullptr);
		}

		::System::Int32 FindtNextWordBegin()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_FINDTNEXTWORDBEGIN_OFFSET))(nullptr);
		}

		::System::Void MoveRight(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_MOVERIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 FindtPrevWordBegin()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_FINDTPREVWORDBEGIN_OFFSET))(nullptr);
		}

		::System::Void MoveLeft(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_MOVELEFT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 DetermineCharacterLine(::System::Int32 arg, ::UnityEngine::TextGenerator* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::UnityEngine::TextGenerator*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_DETERMINECHARACTERLINE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 LineUpCharacterPosition(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_LINEUPCHARACTERPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 LineDownCharacterPosition(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_LINEDOWNCHARACTERPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void MoveDown(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_MOVEDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void MoveDown(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_MOVEDOWN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void MoveUp(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_MOVEUP_OFFSET))(arg, nullptr);
		}

		::System::Void MoveUp(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_MOVEUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Delete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_DELETE_OFFSET))(nullptr);
		}

		::System::Void ForwardSpace()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_FORWARDSPACE_OFFSET))(nullptr);
		}

		::System::Void Backspace()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_BACKSPACE_OFFSET))(nullptr);
		}

		::System::Void Insert(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_INSERT_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateTouchKeyboardFromEditChanges()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_UPDATETOUCHKEYBOARDFROMEDITCHANGES_OFFSET))(nullptr);
		}

		::System::Void SendOnValueChangedAndUpdateLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SENDONVALUECHANGEDANDUPDATELABEL_OFFSET))(nullptr);
		}

		::System::Void SendOnValueChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SENDONVALUECHANGED_OFFSET))(nullptr);
		}

		::System::Void SendOnEndEdit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SENDONENDEDIT_OFFSET))(nullptr);
		}

		::System::Void SendOnSubmit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SENDONSUBMIT_OFFSET))(nullptr);
		}

		::System::Void Append(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_APPEND_OFFSET))(str, nullptr);
		}

		::System::Void Append(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_APPEND_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_UPDATELABEL_OFFSET))(nullptr);
		}

		::System::Boolean IsSelectionVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ISSELECTIONVISIBLE_OFFSET))(nullptr);
		}

		::System::Int32 GetLineStartPosition(::UnityEngine::TextGenerator* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::TextGenerator*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GETLINESTARTPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetLineEndPosition(::UnityEngine::TextGenerator* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::TextGenerator*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GETLINEENDPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetDrawRangeToContainCaretPosition(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SETDRAWRANGETOCONTAINCARETPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void ForceLabelUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_FORCELABELUPDATE_OFFSET))(nullptr);
		}

		::System::Void MarkGeometryAsDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_MARKGEOMETRYASDIRTY_OFFSET))(nullptr);
		}

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::CanvasUpdate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_REBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void LayoutComplete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_LAYOUTCOMPLETE_OFFSET))(nullptr);
		}

		::System::Void GraphicUpdateComplete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GRAPHICUPDATECOMPLETE_OFFSET))(nullptr);
		}

		::System::Void UpdateGeometry()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_UPDATEGEOMETRY_OFFSET))(nullptr);
		}

		::System::Void AssignPositioningIfNeeded()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ASSIGNPOSITIONINGIFNEEDED_OFFSET))(nullptr);
		}

		::System::Void OnFillVBO(::UnityEngine::Mesh* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONFILLVBO_OFFSET))(arg, nullptr);
		}

		::System::Void GenerateCaret(::UnityEngine::UI::VertexHelper* arg, ::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GENERATECARET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CreateCursorVerts()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_CREATECURSORVERTS_OFFSET))(nullptr);
		}

		::System::Void GenerateHighlight(::UnityEngine::UI::VertexHelper* arg, ::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GENERATEHIGHLIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Char Validate(::System::String* str, ::System::Int32 arg, ::System::Char arg)
		{
			return (return (::System::Char(*)(::System::String*, ::System::Int32, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_VALIDATE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void ActivateInputField()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ACTIVATEINPUTFIELD_OFFSET))(nullptr);
		}

		::System::Void ActivateInputFieldInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ACTIVATEINPUTFIELDINTERNAL_OFFSET))(nullptr);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONSELECT_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONPOINTERCLICK_OFFSET))(arg, nullptr);
		}

		::System::Void DeactivateInputField()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_DEACTIVATEINPUTFIELD_OFFSET))(nullptr);
		}

		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONDESELECT_OFFSET))(arg, nullptr);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ONSUBMIT_OFFSET))(arg, nullptr);
		}

		::System::Void EnforceContentType()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ENFORCECONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void EnforceTextHOverflow()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ENFORCETEXTHOVERFLOW_OFFSET))(nullptr);
		}

		::System::Void SetToCustomIfContentTypeIsNot(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SETTOCUSTOMIFCONTENTTYPEISNOT_OFFSET))(arg, nullptr);
		}

		::System::Void SetToCustom()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SETTOCUSTOM_OFFSET))(nullptr);
		}

		::System::Void DoStateTransition(SelectionState* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(SelectionState*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_DOSTATETRANSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(nullptr);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(nullptr);
		}

		::System::Single get_minWidth()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_MINWIDTH_OFFSET))(nullptr);
		}

		::System::Single get_preferredWidth()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_PREFERREDWIDTH_OFFSET))(nullptr);
		}

		::System::Single get_flexibleWidth()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_FLEXIBLEWIDTH_OFFSET))(nullptr);
		}

		::System::Single get_minHeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_MINHEIGHT_OFFSET))(nullptr);
		}

		::System::Single get_preferredHeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_PREFERREDHEIGHT_OFFSET))(nullptr);
		}

		::System::Single get_flexibleHeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_FLEXIBLEHEIGHT_OFFSET))(nullptr);
		}

		::System::Int32 get_layoutPriority()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_GET_LAYOUTPRIORITY_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_.CCTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* UnityEngine.UI.ICanvasElement.get_transform()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_UNITYENGINE.UI.ICANVASELEMENT.GET_TRANSFORM_OFFSET))(nullptr);
		}

	};
}

