#pragma once
#include "unitysdk.h"

class UIInput;
class MXButton;
class UIPopup_Input_CommentMode;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIPOPUP_INPUT_COMMENT_ONCLICKCONFIRMBUTTON_OFFSET UNITYSDK_OFFSET(0x2782DE0)
#define UIPOPUP_INPUT_COMMENT_SET_COMMENTMODE_OFFSET UNITYSDK_OFFSET(0x27837C0)
#define UIPOPUP_INPUT_COMMENT_GET_COMMENTMODE_OFFSET UNITYSDK_OFFSET(0x27837D0)
#define UIPOPUP_INPUT_COMMENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x27837E0)
#define UIPOPUP_INPUT_COMMENT_HANDLEACCOUNTSETREPRESENTCHARACTERIDANDCOMMENTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2783B50)
#define UIPOPUP_INPUT_COMMENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2783C20)
#define UIPOPUP_INPUT_COMMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2783D80)
#define UIPOPUP_INPUT_COMMENT_CHECKPROHIBITEDWORDMESSAGE_OFFSET UNITYSDK_OFFSET(0x27835D0)
#define UIPOPUP_INPUT_COMMENT_SETCOMMENTMODE_OFFSET UNITYSDK_OFFSET(0x2781F10)

	inline static constexpr unsigned int UIPopup_Input_Comment_TypeDefinitionIndex = 7389;

	class UIPopup_Input_Comment : public Il2CppObject
	{
	public:
		UIInput* input; // 0x18
		MXButton* confirmButton; // 0x20
		UIPopup_Input_CommentMode* _CommentMode_k__BackingField; // 0x28

		::System::Void OnClickConfirmButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_COMMENT_ONCLICKCONFIRMBUTTON_OFFSET))(nullptr);
		}

		::System::Void set_CommentMode(UIPopup_Input_CommentMode* arg)
		{
			((::System::Void(*)(UIPopup_Input_CommentMode*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_COMMENT_SET_COMMENTMODE_OFFSET))(arg, nullptr);
		}

		UIPopup_Input_CommentMode* get_CommentMode()
		{
			return ((UIPopup_Input_CommentMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_COMMENT_GET_COMMENTMODE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_COMMENT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleAccountSetRepresentCharacterIdAndCommentResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_COMMENT_HANDLEACCOUNTSETREPRESENTCHARACTERIDANDCOMMENTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_COMMENT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_COMMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean CheckProhibitedWordMessage(::System::String* str, ::System::String* str2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_COMMENT_CHECKPROHIBITEDWORDMESSAGE_OFFSET))(str, str2, nullptr);
		}

		::System::Void SetCommentMode(UIPopup_Input_CommentMode* arg, ::System::String* str)
		{
			((::System::Void(*)(UIPopup_Input_CommentMode*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_COMMENT_SETCOMMENTMODE_OFFSET))(arg, str, nullptr);
		}

	};

