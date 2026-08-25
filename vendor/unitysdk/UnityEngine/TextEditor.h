#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class TouchScreenKeyboard; }
namespace UnityEngine { class GUIStyle; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class GUIContent; }
namespace UnityEngine { class Rect; }
namespace UnityEngine { class Event; }

#define UNITYENGINE_TEXTEDITOR_GET_TEXT_OFFSET UNITYSDK_OFFSET(0xA28A160)
#define UNITYENGINE_TEXTEDITOR_SET_TEXT_OFFSET UNITYSDK_OFFSET(0xA28A180)
#define UNITYENGINE_TEXTEDITOR_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xA28A2F0)
#define UNITYENGINE_TEXTEDITOR_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xA28A300)
#define UNITYENGINE_TEXTEDITOR_GET_LOCALPOSITION_OFFSET UNITYSDK_OFFSET(0xA28A890)
#define UNITYENGINE_TEXTEDITOR_GET_CURSORINDEX_OFFSET UNITYSDK_OFFSET(0xA28A8A0)
#define UNITYENGINE_TEXTEDITOR_SET_CURSORINDEX_OFFSET UNITYSDK_OFFSET(0xA28A8B0)
#define UNITYENGINE_TEXTEDITOR_GET_SELECTINDEX_OFFSET UNITYSDK_OFFSET(0xA28A940)
#define UNITYENGINE_TEXTEDITOR_SET_SELECTINDEX_OFFSET UNITYSDK_OFFSET(0xA28A950)
#define UNITYENGINE_TEXTEDITOR_CLEARCURSORPOS_OFFSET UNITYSDK_OFFSET(0xA28A9E0)
#define UNITYENGINE_TEXTEDITOR_GET_ALTCURSORPOSITION_OFFSET UNITYSDK_OFFSET(0xA28A9F0)
#define UNITYENGINE_TEXTEDITOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA28AA00)
#define UNITYENGINE_TEXTEDITOR_ONFOCUS_OFFSET UNITYSDK_OFFSET(0xA28AB80)
#define UNITYENGINE_TEXTEDITOR_ONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0xA28ACA0)
#define UNITYENGINE_TEXTEDITOR_GRABGRAPHICALCURSORPOS_OFFSET UNITYSDK_OFFSET(0xA28ACF0)
#define UNITYENGINE_TEXTEDITOR_HANDLEKEYEVENT_OFFSET UNITYSDK_OFFSET(0xA28AE20)
#define UNITYENGINE_TEXTEDITOR_DELETELINEBACK_OFFSET UNITYSDK_OFFSET(0xA28D700)
#define UNITYENGINE_TEXTEDITOR_DELETEWORDBACK_OFFSET UNITYSDK_OFFSET(0xA28D910)
#define UNITYENGINE_TEXTEDITOR_DELETEWORDFORWARD_OFFSET UNITYSDK_OFFSET(0xA28DA50)
#define UNITYENGINE_TEXTEDITOR_DELETE_OFFSET UNITYSDK_OFFSET(0xA28DC50)
#define UNITYENGINE_TEXTEDITOR_CANPASTE_OFFSET UNITYSDK_OFFSET(0xA28DD80)
#define UNITYENGINE_TEXTEDITOR_BACKSPACE_OFFSET UNITYSDK_OFFSET(0xA28DDC0)
#define UNITYENGINE_TEXTEDITOR_SELECTALL_OFFSET UNITYSDK_OFFSET(0xA28AC50)
#define UNITYENGINE_TEXTEDITOR_SELECTNONE_OFFSET UNITYSDK_OFFSET(0xA28DF00)
#define UNITYENGINE_TEXTEDITOR_GET_HASSELECTION_OFFSET UNITYSDK_OFFSET(0xA28D7D0)
#define UNITYENGINE_TEXTEDITOR_GET_SELECTEDTEXT_OFFSET UNITYSDK_OFFSET(0xA28DF30)
#define UNITYENGINE_TEXTEDITOR_DELETESELECTION_OFFSET UNITYSDK_OFFSET(0xA28D7E0)
#define UNITYENGINE_TEXTEDITOR_REPLACESELECTION_OFFSET UNITYSDK_OFFSET(0xA28DFB0)
#define UNITYENGINE_TEXTEDITOR_INSERT_OFFSET UNITYSDK_OFFSET(0xA28E030)
#define UNITYENGINE_TEXTEDITOR_MOVESELECTIONTOALTCURSOR_OFFSET UNITYSDK_OFFSET(0xA28E090)
#define UNITYENGINE_TEXTEDITOR_MOVERIGHT_OFFSET UNITYSDK_OFFSET(0xA28E150)
#define UNITYENGINE_TEXTEDITOR_MOVELEFT_OFFSET UNITYSDK_OFFSET(0xA28E1E0)
#define UNITYENGINE_TEXTEDITOR_MOVEUP_OFFSET UNITYSDK_OFFSET(0xA28E230)
#define UNITYENGINE_TEXTEDITOR_MOVEDOWN_OFFSET UNITYSDK_OFFSET(0xA28E310)
#define UNITYENGINE_TEXTEDITOR_MOVELINESTART_OFFSET UNITYSDK_OFFSET(0xA28E430)
#define UNITYENGINE_TEXTEDITOR_MOVELINEEND_OFFSET UNITYSDK_OFFSET(0xA28E520)
#define UNITYENGINE_TEXTEDITOR_MOVEGRAPHICALLINESTART_OFFSET UNITYSDK_OFFSET(0xA28E5A0)
#define UNITYENGINE_TEXTEDITOR_MOVEGRAPHICALLINEEND_OFFSET UNITYSDK_OFFSET(0xA28E750)
#define UNITYENGINE_TEXTEDITOR_MOVETEXTSTART_OFFSET UNITYSDK_OFFSET(0xA28E930)
#define UNITYENGINE_TEXTEDITOR_MOVETEXTEND_OFFSET UNITYSDK_OFFSET(0xA28E9C0)
#define UNITYENGINE_TEXTEDITOR_INDEXOFENDOFLINE_OFFSET UNITYSDK_OFFSET(0xA28EA00)
#define UNITYENGINE_TEXTEDITOR_MOVEPARAGRAPHFORWARD_OFFSET UNITYSDK_OFFSET(0xA28EA60)
#define UNITYENGINE_TEXTEDITOR_MOVEPARAGRAPHBACKWARD_OFFSET UNITYSDK_OFFSET(0xA28EB00)
#define UNITYENGINE_TEXTEDITOR_MOVECURSORTOPOSITION_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA28EC10)
#define UNITYENGINE_TEXTEDITOR_MOVEALTCURSORTOPOSITION_OFFSET UNITYSDK_OFFSET(0xA28ECE0)
#define UNITYENGINE_TEXTEDITOR_SELECTTOPOSITION_OFFSET UNITYSDK_OFFSET(0xA28EDB0)
#define UNITYENGINE_TEXTEDITOR_SELECTLEFT_OFFSET UNITYSDK_OFFSET(0xA28F250)
#define UNITYENGINE_TEXTEDITOR_SELECTRIGHT_OFFSET UNITYSDK_OFFSET(0xA28F2A0)
#define UNITYENGINE_TEXTEDITOR_SELECTUP_OFFSET UNITYSDK_OFFSET(0xA28F2F0)
#define UNITYENGINE_TEXTEDITOR_SELECTDOWN_OFFSET UNITYSDK_OFFSET(0xA28F3A0)
#define UNITYENGINE_TEXTEDITOR_SELECTTEXTEND_OFFSET UNITYSDK_OFFSET(0xA28F470)
#define UNITYENGINE_TEXTEDITOR_SELECTTEXTSTART_OFFSET UNITYSDK_OFFSET(0xA28F4A0)
#define UNITYENGINE_TEXTEDITOR_MOUSEDRAGSELECTSWHOLEWORDS_OFFSET UNITYSDK_OFFSET(0xA28F4B0)
#define UNITYENGINE_TEXTEDITOR_DBLCLICKSNAP_OFFSET UNITYSDK_OFFSET(0xA28F4C0)
#define UNITYENGINE_TEXTEDITOR_GETGRAPHICALLINESTART_OFFSET UNITYSDK_OFFSET(0xA28E5F0)
#define UNITYENGINE_TEXTEDITOR_GETGRAPHICALLINEEND_OFFSET UNITYSDK_OFFSET(0xA28E7A0)
#define UNITYENGINE_TEXTEDITOR_FINDNEXTSEPERATOR_OFFSET UNITYSDK_OFFSET(0xA28F4D0)
#define UNITYENGINE_TEXTEDITOR_FINDPREVSEPERATOR_OFFSET UNITYSDK_OFFSET(0xA28F640)
#define UNITYENGINE_TEXTEDITOR_MOVEWORDRIGHT_OFFSET UNITYSDK_OFFSET(0xA28F6F0)
#define UNITYENGINE_TEXTEDITOR_MOVETOSTARTOFNEXTWORD_OFFSET UNITYSDK_OFFSET(0xA28F760)
#define UNITYENGINE_TEXTEDITOR_MOVETOENDOFPREVIOUSWORD_OFFSET UNITYSDK_OFFSET(0xA28F7B0)
#define UNITYENGINE_TEXTEDITOR_SELECTTOSTARTOFNEXTWORD_OFFSET UNITYSDK_OFFSET(0xA28F840)
#define UNITYENGINE_TEXTEDITOR_SELECTTOENDOFPREVIOUSWORD_OFFSET UNITYSDK_OFFSET(0xA28F870)
#define UNITYENGINE_TEXTEDITOR_CLASSIFYCHAR_OFFSET UNITYSDK_OFFSET(0xA28F560)
#define UNITYENGINE_TEXTEDITOR_FINDSTARTOFNEXTWORD_OFFSET UNITYSDK_OFFSET(0xA28DAC0)
#define UNITYENGINE_TEXTEDITOR_FINDENDOFPREVIOUSWORD_OFFSET UNITYSDK_OFFSET(0xA28D9A0)
#define UNITYENGINE_TEXTEDITOR_MOVEWORDLEFT_OFFSET UNITYSDK_OFFSET(0xA28F8A0)
#define UNITYENGINE_TEXTEDITOR_SELECTWORDRIGHT_OFFSET UNITYSDK_OFFSET(0xA28F900)
#define UNITYENGINE_TEXTEDITOR_SELECTWORDLEFT_OFFSET UNITYSDK_OFFSET(0xA28FA10)
#define UNITYENGINE_TEXTEDITOR_EXPANDSELECTGRAPHICALLINESTART_OFFSET UNITYSDK_OFFSET(0xA28FB10)
#define UNITYENGINE_TEXTEDITOR_EXPANDSELECTGRAPHICALLINEEND_OFFSET UNITYSDK_OFFSET(0xA28FB70)
#define UNITYENGINE_TEXTEDITOR_SELECTGRAPHICALLINESTART_OFFSET UNITYSDK_OFFSET(0xA28FBD0)
#define UNITYENGINE_TEXTEDITOR_SELECTGRAPHICALLINEEND_OFFSET UNITYSDK_OFFSET(0xA28FC00)
#define UNITYENGINE_TEXTEDITOR_SELECTPARAGRAPHFORWARD_OFFSET UNITYSDK_OFFSET(0xA28FC30)
#define UNITYENGINE_TEXTEDITOR_SELECTPARAGRAPHBACKWARD_OFFSET UNITYSDK_OFFSET(0xA28FCC0)
#define UNITYENGINE_TEXTEDITOR_SELECTCURRENTWORD_OFFSET UNITYSDK_OFFSET(0xA28FDC0)
#define UNITYENGINE_TEXTEDITOR_FINDENDOFCLASSIFICATION_OFFSET UNITYSDK_OFFSET(0xA28F100)
#define UNITYENGINE_TEXTEDITOR_SELECTCURRENTPARAGRAPH_OFFSET UNITYSDK_OFFSET(0xA28FE20)
#define UNITYENGINE_TEXTEDITOR_UPDATESCROLLOFFSET_OFFSET UNITYSDK_OFFSET(0xA28A390)
#define UNITYENGINE_TEXTEDITOR_PERFORMOPERATION_OFFSET UNITYSDK_OFFSET(0xA28D190)
#define UNITYENGINE_TEXTEDITOR_SAVEBACKUP_OFFSET UNITYSDK_OFFSET(0xA290070)
#define UNITYENGINE_TEXTEDITOR_CUT_OFFSET UNITYSDK_OFFSET(0xA28FED0)
#define UNITYENGINE_TEXTEDITOR_COPY_OFFSET UNITYSDK_OFFSET(0xA28FF00)
#define UNITYENGINE_TEXTEDITOR_REPLACENEWLINESWITHSPACES_OFFSET UNITYSDK_OFFSET(0xA2900B0)
#define UNITYENGINE_TEXTEDITOR_PASTE_OFFSET UNITYSDK_OFFSET(0xA28FFE0)
#define UNITYENGINE_TEXTEDITOR_MAPKEY_OFFSET UNITYSDK_OFFSET(0xA290140)
#define UNITYENGINE_TEXTEDITOR_INITKEYACTIONS_OFFSET UNITYSDK_OFFSET(0xA28AFA0)
#define UNITYENGINE_TEXTEDITOR_DETECTFOCUSCHANGE_OFFSET UNITYSDK_OFFSET(0xA28E1C0)
#define UNITYENGINE_TEXTEDITOR_ONDETECTFOCUSCHANGE_OFFSET UNITYSDK_OFFSET(0xA2901C0)
#define UNITYENGINE_TEXTEDITOR_ONCURSORINDEXCHANGE_OFFSET UNITYSDK_OFFSET(0xA290290)
#define UNITYENGINE_TEXTEDITOR_ONSELECTINDEXCHANGE_OFFSET UNITYSDK_OFFSET(0xA2902A0)
#define UNITYENGINE_TEXTEDITOR_CLAMPTEXTINDEX_OFFSET UNITYSDK_OFFSET(0xA2902B0)
#define UNITYENGINE_TEXTEDITOR_ENSUREVALIDCODEPOINTINDEX_OFFSET UNITYSDK_OFFSET(0xA28A290)
#define UNITYENGINE_TEXTEDITOR_ISVALIDCODEPOINTINDEX_OFFSET UNITYSDK_OFFSET(0xA2902F0)
#define UNITYENGINE_TEXTEDITOR_PREVIOUSCODEPOINTINDEX_OFFSET UNITYSDK_OFFSET(0xA28DE60)
#define UNITYENGINE_TEXTEDITOR_NEXTCODEPOINTINDEX_OFFSET UNITYSDK_OFFSET(0xA28DCD0)

namespace UnityEngine
{
	inline static constexpr unsigned int TextEditor_TypeDefinitionIndex = 36562;

	class TextEditor : public Il2CppObject
	{
	public:
		::UnityEngine::TouchScreenKeyboard* keyboardOnScreen; // 0x10
		::System::Int32 controlID; // 0x18
		::UnityEngine::GUIStyle* style; // 0x20
		::System::Boolean multiline; // 0x28
		::System::Boolean hasHorizontalCursorPos; // 0x29
		::System::Boolean isPasswordField; // 0x2A
		::System::Boolean m_HasFocus; // 0x2B
		::UnityEngine::Vector2* scrollOffset; // 0x2C
		::UnityEngine::GUIContent* m_Content; // 0x38
		::UnityEngine::Rect* m_Position; // 0x40
		::System::Int32 m_CursorIndex; // 0x50
		::System::Int32 m_SelectIndex; // 0x54
		::System::Boolean m_RevealCursor; // 0x58
		::UnityEngine::Vector2* graphicalCursorPos; // 0x5C
		::UnityEngine::Vector2* graphicalSelectCursorPos; // 0x64
		::System::Boolean m_MouseDragSelectsWholeWords; // 0x6C
		::System::Int32 m_DblClickInitPos; // 0x70
		DblClickSnapping* m_DblClickSnap; // 0x74
		::System::Boolean m_bJustSelected; // 0x75
		::System::Int32 m_iAltCursorPos; // 0x78
		::System::String* oldText; // 0x80
		::System::Int32 oldPos; // 0x88
		::System::Int32 oldSelectPos; // 0x8C
		Il2CppObject* s_Keyactions; // 0x0

		::System::String* get_text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Void set_text(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SET_TEXT_OFFSET))(str, nullptr);
		}

		::UnityEngine::Rect* get_position()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_position(::UnityEngine::Rect* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rect* get_localPosition()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_GET_LOCALPOSITION_OFFSET))(nullptr);
		}

		::System::Int32 get_cursorIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_GET_CURSORINDEX_OFFSET))(nullptr);
		}

		::System::Void set_cursorIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SET_CURSORINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_selectIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_GET_SELECTINDEX_OFFSET))(nullptr);
		}

		::System::Void set_selectIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SET_SELECTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void ClearCursorPos()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_CLEARCURSORPOS_OFFSET))(nullptr);
		}

		::System::Int32 get_altCursorPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_GET_ALTCURSORPOSITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnFocus()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_ONFOCUS_OFFSET))(nullptr);
		}

		::System::Void OnLostFocus()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_ONLOSTFOCUS_OFFSET))(nullptr);
		}

		::System::Void GrabGraphicalCursorPos()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_GRABGRAPHICALCURSORPOS_OFFSET))(nullptr);
		}

		::System::Boolean HandleKeyEvent(::UnityEngine::Event* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Event*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_HANDLEKEYEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean DeleteLineBack()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_DELETELINEBACK_OFFSET))(nullptr);
		}

		::System::Boolean DeleteWordBack()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_DELETEWORDBACK_OFFSET))(nullptr);
		}

		::System::Boolean DeleteWordForward()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_DELETEWORDFORWARD_OFFSET))(nullptr);
		}

		::System::Boolean Delete()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_DELETE_OFFSET))(nullptr);
		}

		::System::Boolean CanPaste()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_CANPASTE_OFFSET))(nullptr);
		}

		::System::Boolean Backspace()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_BACKSPACE_OFFSET))(nullptr);
		}

		::System::Void SelectAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTALL_OFFSET))(nullptr);
		}

		::System::Void SelectNone()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTNONE_OFFSET))(nullptr);
		}

		::System::Boolean get_hasSelection()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_GET_HASSELECTION_OFFSET))(nullptr);
		}

		::System::String* get_SelectedText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_GET_SELECTEDTEXT_OFFSET))(nullptr);
		}

		::System::Boolean DeleteSelection()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_DELETESELECTION_OFFSET))(nullptr);
		}

		::System::Void ReplaceSelection(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_REPLACESELECTION_OFFSET))(str, nullptr);
		}

		::System::Void Insert(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_INSERT_OFFSET))(arg, nullptr);
		}

		::System::Void MoveSelectionToAltCursor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVESELECTIONTOALTCURSOR_OFFSET))(nullptr);
		}

		::System::Void MoveRight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVERIGHT_OFFSET))(nullptr);
		}

		::System::Void MoveLeft()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVELEFT_OFFSET))(nullptr);
		}

		::System::Void MoveUp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVEUP_OFFSET))(nullptr);
		}

		::System::Void MoveDown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVEDOWN_OFFSET))(nullptr);
		}

		::System::Void MoveLineStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVELINESTART_OFFSET))(nullptr);
		}

		::System::Void MoveLineEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVELINEEND_OFFSET))(nullptr);
		}

		::System::Void MoveGraphicalLineStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVEGRAPHICALLINESTART_OFFSET))(nullptr);
		}

		::System::Void MoveGraphicalLineEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVEGRAPHICALLINEEND_OFFSET))(nullptr);
		}

		::System::Void MoveTextStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVETEXTSTART_OFFSET))(nullptr);
		}

		::System::Void MoveTextEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVETEXTEND_OFFSET))(nullptr);
		}

		::System::Int32 IndexOfEndOfLine(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_INDEXOFENDOFLINE_OFFSET))(arg, nullptr);
		}

		::System::Void MoveParagraphForward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVEPARAGRAPHFORWARD_OFFSET))(nullptr);
		}

		::System::Void MoveParagraphBackward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVEPARAGRAPHBACKWARD_OFFSET))(nullptr);
		}

		::System::Void MoveCursorToPosition_Internal(::UnityEngine::Vector2* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVECURSORTOPOSITION_INTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void MoveAltCursorToPosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVEALTCURSORTOPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void SelectToPosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTTOPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void SelectLeft()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTLEFT_OFFSET))(nullptr);
		}

		::System::Void SelectRight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTRIGHT_OFFSET))(nullptr);
		}

		::System::Void SelectUp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTUP_OFFSET))(nullptr);
		}

		::System::Void SelectDown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTDOWN_OFFSET))(nullptr);
		}

		::System::Void SelectTextEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTTEXTEND_OFFSET))(nullptr);
		}

		::System::Void SelectTextStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTTEXTSTART_OFFSET))(nullptr);
		}

		::System::Void MouseDragSelectsWholeWords(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOUSEDRAGSELECTSWHOLEWORDS_OFFSET))(arg, nullptr);
		}

		::System::Void DblClickSnap(DblClickSnapping* arg)
		{
			((::System::Void(*)(DblClickSnapping*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_DBLCLICKSNAP_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetGraphicalLineStart(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_GETGRAPHICALLINESTART_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetGraphicalLineEnd(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_GETGRAPHICALLINEEND_OFFSET))(arg, nullptr);
		}

		::System::Int32 FindNextSeperator(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_FINDNEXTSEPERATOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 FindPrevSeperator(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_FINDPREVSEPERATOR_OFFSET))(arg, nullptr);
		}

		::System::Void MoveWordRight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVEWORDRIGHT_OFFSET))(nullptr);
		}

		::System::Void MoveToStartOfNextWord()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVETOSTARTOFNEXTWORD_OFFSET))(nullptr);
		}

		::System::Void MoveToEndOfPreviousWord()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVETOENDOFPREVIOUSWORD_OFFSET))(nullptr);
		}

		::System::Void SelectToStartOfNextWord()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTTOSTARTOFNEXTWORD_OFFSET))(nullptr);
		}

		::System::Void SelectToEndOfPreviousWord()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTTOENDOFPREVIOUSWORD_OFFSET))(nullptr);
		}

		CharacterType* ClassifyChar(::System::Int32 arg)
		{
			return (return (CharacterType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_CLASSIFYCHAR_OFFSET))(arg, nullptr);
		}

		::System::Int32 FindStartOfNextWord(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_FINDSTARTOFNEXTWORD_OFFSET))(arg, nullptr);
		}

		::System::Int32 FindEndOfPreviousWord(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_FINDENDOFPREVIOUSWORD_OFFSET))(arg, nullptr);
		}

		::System::Void MoveWordLeft()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MOVEWORDLEFT_OFFSET))(nullptr);
		}

		::System::Void SelectWordRight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTWORDRIGHT_OFFSET))(nullptr);
		}

		::System::Void SelectWordLeft()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTWORDLEFT_OFFSET))(nullptr);
		}

		::System::Void ExpandSelectGraphicalLineStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_EXPANDSELECTGRAPHICALLINESTART_OFFSET))(nullptr);
		}

		::System::Void ExpandSelectGraphicalLineEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_EXPANDSELECTGRAPHICALLINEEND_OFFSET))(nullptr);
		}

		::System::Void SelectGraphicalLineStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTGRAPHICALLINESTART_OFFSET))(nullptr);
		}

		::System::Void SelectGraphicalLineEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTGRAPHICALLINEEND_OFFSET))(nullptr);
		}

		::System::Void SelectParagraphForward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTPARAGRAPHFORWARD_OFFSET))(nullptr);
		}

		::System::Void SelectParagraphBackward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTPARAGRAPHBACKWARD_OFFSET))(nullptr);
		}

		::System::Void SelectCurrentWord()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTCURRENTWORD_OFFSET))(nullptr);
		}

		::System::Int32 FindEndOfClassification(::System::Int32 arg, Direction* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, Direction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_FINDENDOFCLASSIFICATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SelectCurrentParagraph()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SELECTCURRENTPARAGRAPH_OFFSET))(nullptr);
		}

		::System::Void UpdateScrollOffset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_UPDATESCROLLOFFSET_OFFSET))(nullptr);
		}

		::System::Boolean PerformOperation(TextEditOp* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(TextEditOp*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_PERFORMOPERATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SaveBackup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_SAVEBACKUP_OFFSET))(nullptr);
		}

		::System::Boolean Cut()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_CUT_OFFSET))(nullptr);
		}

		::System::Void Copy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_COPY_OFFSET))(nullptr);
		}

		::System::String* ReplaceNewlinesWithSpaces(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_REPLACENEWLINESWITHSPACES_OFFSET))(str, nullptr);
		}

		::System::Boolean Paste()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_PASTE_OFFSET))(nullptr);
		}

		::System::Void MapKey(::System::String* str, TextEditOp* arg)
		{
			((::System::Void(*)(::System::String*, TextEditOp*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_MAPKEY_OFFSET))(str, arg, nullptr);
		}

		::System::Void InitKeyActions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_INITKEYACTIONS_OFFSET))(nullptr);
		}

		::System::Void DetectFocusChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_DETECTFOCUSCHANGE_OFFSET))(nullptr);
		}

		::System::Void OnDetectFocusChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_ONDETECTFOCUSCHANGE_OFFSET))(nullptr);
		}

		::System::Void OnCursorIndexChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_ONCURSORINDEXCHANGE_OFFSET))(nullptr);
		}

		::System::Void OnSelectIndexChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_ONSELECTINDEXCHANGE_OFFSET))(nullptr);
		}

		::System::Void ClampTextIndex(int32_t&* arg)
		{
			((::System::Void(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_CLAMPTEXTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void EnsureValidCodePointIndex(int32_t&* arg)
		{
			((::System::Void(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_ENSUREVALIDCODEPOINTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValidCodePointIndex(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_ISVALIDCODEPOINTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 PreviousCodePointIndex(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_PREVIOUSCODEPOINTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 NextCodePointIndex(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTEDITOR_NEXTCODEPOINTINDEX_OFFSET))(arg, nullptr);
		}

	};
}

