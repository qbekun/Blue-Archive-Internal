#pragma once
#include "unitysdk.h"

class MXButton;
class CafeRankStatDisplay;
class UILabel;
namespace UnityEngine { class GameObject; }
namespace Assets::_MX::Program::Scripts::Network { class TaskState; }

#define UICAFERANKUPPOPUP_SET_RECIPEINGREDIENTID_OFFSET UNITYSDK_OFFSET(0x2285880)
#define UICAFERANKUPPOPUP_GET_INGREDIENTSLOTS_OFFSET UNITYSDK_OFFSET(0x2285890)
#define UICAFERANKUPPOPUP_GET_RECIPEINGREDIENTID_OFFSET UNITYSDK_OFFSET(0x2285940)
#define UICAFERANKUPPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2285950)
#define UICAFERANKUPPOPUP_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x2285960)
#define UICAFERANKUPPOPUP__ONCLICKRANKUP_B__18_0_OFFSET UNITYSDK_OFFSET(0x2285990)
#define UICAFERANKUPPOPUP_REFRESH_OFFSET UNITYSDK_OFFSET(0x22859A0)
#define UICAFERANKUPPOPUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2286170)
#define UICAFERANKUPPOPUP_ONCLICKRANKUP_OFFSET UNITYSDK_OFFSET(0x2286390)

	inline static constexpr unsigned int UICafeRankUpPopup_TypeDefinitionIndex = 4675;

	class UICafeRankUpPopup : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0x18
		CafeRankStatDisplay* from; // 0x20
		CafeRankStatDisplay* to; // 0x28
		UILabel* goldLabel; // 0x30
		MXButton* rankupButton; // 0x38
		::UnityEngine::GameObject* rankupButton_Disable; // 0x40
		UILabel* NotEnoughLabel; // 0x48
		Il2CppObject* ingredientSlots; // 0x50
		::System::Int64 _RecipeIngredientId_k__BackingField; // 0x58

		::System::Void set_RecipeIngredientId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICAFERANKUPPOPUP_SET_RECIPEINGREDIENTID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_IngredientSlots()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFERANKUPPOPUP_GET_INGREDIENTSLOTS_OFFSET))(nullptr);
		}

		::System::Int64 get_RecipeIngredientId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFERANKUPPOPUP_GET_RECIPEINGREDIENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFERANKUPPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFERANKUPPOPUP_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void _OnClickRankUp_b__18_0(::Assets::_MX::Program::Scripts::Network::TaskState* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::TaskState*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFERANKUPPOPUP__ONCLICKRANKUP_B__18_0_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFERANKUPPOPUP_REFRESH_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFERANKUPPOPUP_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickRankUp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFERANKUPPOPUP_ONCLICKRANKUP_OFFSET))(nullptr);
		}

	};

