#pragma once
#include "unitysdk.h"

class UISprite;
class MXButton;
class UILabel;
namespace UnityEngine { class Color; }
class CharacterObject;

#define COMBATSTYLECHANGEBUTTON_SET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x24D61E0)
#define COMBATSTYLECHANGEBUTTON_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x24D61F0)
#define COMBATSTYLECHANGEBUTTON_GET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x24D6280)
#define COMBATSTYLECHANGEBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x24D6290)
#define COMBATSTYLECHANGEBUTTON_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0x24D62F0)
#define COMBATSTYLECHANGEBUTTON_CHECKVISIBLE_OFFSET UNITYSDK_OFFSET(0x24D63A0)
#define COMBATSTYLECHANGEBUTTON_ONCLICKTHIS_OFFSET UNITYSDK_OFFSET(0x24D6D60)
#define COMBATSTYLECHANGEBUTTON_SET_ONCLICK_OFFSET UNITYSDK_OFFSET(0x24D7070)
#define COMBATSTYLECHANGEBUTTON_CODISABLEBUTTON_OFFSET UNITYSDK_OFFSET(0x24D7000)
#define COMBATSTYLECHANGEBUTTON_CLEAR_OFFSET UNITYSDK_OFFSET(0x24D70A0)
#define COMBATSTYLECHANGEBUTTON_GET_ISPLAYINGANIMATIONBUTTON_OFFSET UNITYSDK_OFFSET(0x24D6240)
#define COMBATSTYLECHANGEBUTTON_SETDATA_OFFSET UNITYSDK_OFFSET(0x24D7130)
#define COMBATSTYLECHANGEBUTTON_START_OFFSET UNITYSDK_OFFSET(0x24D72A0)
#define COMBATSTYLECHANGEBUTTON_GET_ONCLICK_OFFSET UNITYSDK_OFFSET(0x24D73C0)
#define COMBATSTYLECHANGEBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0x24D73D0)
#define COMBATSTYLECHANGEBUTTON_ONENABLE_OFFSET UNITYSDK_OFFSET(0x24D7430)
#define COMBATSTYLECHANGEBUTTON_RESETDISABLEBUTTON_OFFSET UNITYSDK_OFFSET(0x24D7250)
#define COMBATSTYLECHANGEBUTTON_GET_INDEXLABELFORMAT_OFFSET UNITYSDK_OFFSET(0x24D6F50)

	inline static constexpr unsigned int CombatStyleChangeButton_TypeDefinitionIndex = 5961;

	class CombatStyleChangeButton : public Il2CppObject
	{
	public:
		UISprite* sprite; // 0x18
		MXButton* button; // 0x20
		UILabel* indexLabel; // 0x28
		::UnityEngine::Color* inactiveColor; // 0x30
		::UnityEngine::Color* originalColor; // 0x40
		CharacterObject* _Character_k__BackingField; // 0x50
		Il2CppObject* _OnClick_k__BackingField; // 0x58
		::System::String* _indexLabelFormat; // 0x60

		::System::Void set_Character(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLECHANGEBUTTON_SET_CHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLECHANGEBUTTON_ONDISABLE_OFFSET))(nullptr);
		}

		CharacterObject* get_Character()
		{
			return ((CharacterObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLECHANGEBUTTON_GET_CHARACTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLECHANGEBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetVisible(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLECHANGEBUTTON_SETVISIBLE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckVisible(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLECHANGEBUTTON_CHECKVISIBLE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickThis()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLECHANGEBUTTON_ONCLICKTHIS_OFFSET))(nullptr);
		}

		::System::Void set_OnClick(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLECHANGEBUTTON_SET_ONCLICK_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoDisableButton()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLECHANGEBUTTON_CODISABLEBUTTON_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLECHANGEBUTTON_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPlayingAnimationButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLECHANGEBUTTON_GET_ISPLAYINGANIMATIONBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetData(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLECHANGEBUTTON_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLECHANGEBUTTON_START_OFFSET))(nullptr);
		}

		Il2CppObject* get_OnClick()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLECHANGEBUTTON_GET_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLECHANGEBUTTON_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLECHANGEBUTTON_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void ResetDisableButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLECHANGEBUTTON_RESETDISABLEBUTTON_OFFSET))(nullptr);
		}

		::System::String* get_indexLabelFormat()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLECHANGEBUTTON_GET_INDEXLABELFORMAT_OFFSET))(nullptr);
		}

	};

