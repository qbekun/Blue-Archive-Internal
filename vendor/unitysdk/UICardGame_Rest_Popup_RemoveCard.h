#pragma once
#include "unitysdk.h"

class UICardGame_Rest_Deck_ScrollViewController;
class UIGrid;
class UILabel;
class MXButton;
namespace MX::Data::Excel { class MinigameCCGLevelStageExcel; }
class MinigameCCGObject;

#define UICARDGAME_REST_POPUP_REMOVECARD_.CTOR_OFFSET UNITYSDK_OFFSET(0xA51080)
#define UICARDGAME_REST_POPUP_REMOVECARD_ONCLICKREMOVE_OFFSET UNITYSDK_OFFSET(0xA51110)
#define UICARDGAME_REST_POPUP_REMOVECARD_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0xA51440)
#define UICARDGAME_REST_POPUP_REMOVECARD_GET_CANSELECTEDCOUNT_OFFSET UNITYSDK_OFFSET(0xA51500)
#define UICARDGAME_REST_POPUP_REMOVECARD__RESETSCROLL_B__18_1_OFFSET UNITYSDK_OFFSET(0xA51510)
#define UICARDGAME_REST_POPUP_REMOVECARD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA51560)
#define UICARDGAME_REST_POPUP_REMOVECARD_TOGGLECARDSELECTION_OFFSET UNITYSDK_OFFSET(0xA51A60)
#define UICARDGAME_REST_POPUP_REMOVECARD_GET_SELECTEDDBIDS_OFFSET UNITYSDK_OFFSET(0xA51B00)
#define UICARDGAME_REST_POPUP_REMOVECARD__ONCLICKREMOVE_B__20_3_OFFSET UNITYSDK_OFFSET(0xA51B10)
#define UICARDGAME_REST_POPUP_REMOVECARD_RESETSCROLL_OFFSET UNITYSDK_OFFSET(0xA515F0)
#define UICARDGAME_REST_POPUP_REMOVECARD_GET_CCGOBJECT_OFFSET UNITYSDK_OFFSET(0xA51B90)
#define UICARDGAME_REST_POPUP_REMOVECARD_SETTITLELABEL_OFFSET UNITYSDK_OFFSET(0xA519A0)
#define UICARDGAME_REST_POPUP_REMOVECARD_AWAKE_OFFSET UNITYSDK_OFFSET(0xA51C10)
#define UICARDGAME_REST_POPUP_REMOVECARD__ONCLICKREMOVE_G__CO_REMOVEDIRECTING|20_0_OFFSET UNITYSDK_OFFSET(0xA513D0)

	inline static constexpr unsigned int UICardGame_Rest_Popup_RemoveCard_TypeDefinitionIndex = 479;

	class UICardGame_Rest_Popup_RemoveCard : public Il2CppObject
	{
	public:
		UICardGame_Rest_Deck_ScrollViewController* scrollViewController; // 0xD8
		UIGrid* grid; // 0xE0
		UILabel* titleLabel; // 0xE8
		MXButton* removeBtn; // 0xF0
		MXButton* closeBtn; // 0xF8
		Il2CppObject* selectedDBIds; // 0x100
		::System::Int32 lowElementCount; // 0x108
		::System::Int32 canSelectedCount; // 0x10C
		Il2CppObject* callback; // 0x110

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_REST_POPUP_REMOVECARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickRemove()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_REST_POPUP_REMOVECARD_ONCLICKREMOVE_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_REST_POPUP_REMOVECARD_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Int32 get_CanSelectedCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_REST_POPUP_REMOVECARD_GET_CANSELECTEDCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 _ResetScroll_b__18_1(Il2CppObject* arg)
		{
			return ((::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_REST_POPUP_REMOVECARD__RESETSCROLL_B__18_1_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::Data::Excel::MinigameCCGLevelStageExcel* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::MinigameCCGLevelStageExcel*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_REST_POPUP_REMOVECARD_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ToggleCardSelection(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_REST_POPUP_REMOVECARD_TOGGLECARDSELECTION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SelectedDBIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_REST_POPUP_REMOVECARD_GET_SELECTEDDBIDS_OFFSET))(nullptr);
		}

		::System::Void _OnClickRemove_b__20_3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_REST_POPUP_REMOVECARD__ONCLICKREMOVE_B__20_3_OFFSET))(nullptr);
		}

		::System::Void ResetScroll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_REST_POPUP_REMOVECARD_RESETSCROLL_OFFSET))(nullptr);
		}

		MinigameCCGObject* get_ccgObject()
		{
			return ((MinigameCCGObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_REST_POPUP_REMOVECARD_GET_CCGOBJECT_OFFSET))(nullptr);
		}

		::System::Void SetTitleLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_REST_POPUP_REMOVECARD_SETTITLELABEL_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_REST_POPUP_REMOVECARD_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _OnClickRemove_g__co_RemoveDirecting|20_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_REST_POPUP_REMOVECARD__ONCLICKREMOVE_G__CO_REMOVEDIRECTING|20_0_OFFSET))(nullptr);
		}

	};

