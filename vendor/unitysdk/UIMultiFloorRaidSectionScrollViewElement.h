#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Animation; }
class MXButton;
class UILabel;
namespace UnityEngine { class Coroutine; }
class MultiFloorRaidSectionEntity;

#define UIMULTIFLOORRAIDSECTIONSCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x26A71C0)
#define UIMULTIFLOORRAIDSECTIONSCROLLVIEWELEMENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x26A7200)
#define UIMULTIFLOORRAIDSECTIONSCROLLVIEWELEMENT_SETUI_OFFSET UNITYSDK_OFFSET(0x26A7240)
#define UIMULTIFLOORRAIDSECTIONSCROLLVIEWELEMENT_GETUNLOCKANIMATIONLENGTH_OFFSET UNITYSDK_OFFSET(0x26A70E0)
#define UIMULTIFLOORRAIDSECTIONSCROLLVIEWELEMENT_ONCLICKSELECT_OFFSET UNITYSDK_OFFSET(0x26A74E0)
#define UIMULTIFLOORRAIDSECTIONSCROLLVIEWELEMENT_WAIT_OFFSET UNITYSDK_OFFSET(0x26A7590)
#define UIMULTIFLOORRAIDSECTIONSCROLLVIEWELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x26A7620)
#define UIMULTIFLOORRAIDSECTIONSCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x26A7770)

	inline static constexpr unsigned int UIMultiFloorRaidSectionScrollViewElement_TypeDefinitionIndex = 6862;

	class UIMultiFloorRaidSectionScrollViewElement : public ::System::Xml::XPath::XPathExpression
	{
	public:
		::UnityEngine::GameObject* EnableObject; // 0x28
		::UnityEngine::GameObject* DisableObject; // 0x30
		::UnityEngine::Animation* UnlockAnimation; // 0x38
		::Il2CppArray<::System::Object*>* BossPortrait; // 0x40
		::Il2CppArray<::System::Object*>* FloorRangeLabel; // 0x48
		::Il2CppArray<::System::Object*>* SectionDescriptionLabel; // 0x50
		MXButton* SelectButton; // 0x58
		UILabel* OpenConditionLabel; // 0x60
		::UnityEngine::Coroutine* waitCoroutine; // 0x68
		::System::Int32 sectionIndex; // 0x70

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDSECTIONSCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDSECTIONSCROLLVIEWELEMENT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetUI(MultiFloorRaidSectionEntity* arg)
		{
			((::System::Void(*)(MultiFloorRaidSectionEntity*, ::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDSECTIONSCROLLVIEWELEMENT_SETUI_OFFSET))(arg, nullptr);
		}

		::System::Single GetUnlockAnimationLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDSECTIONSCROLLVIEWELEMENT_GETUNLOCKANIMATIONLENGTH_OFFSET))(nullptr);
		}

		::System::Void OnClickSelect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDSECTIONSCROLLVIEWELEMENT_ONCLICKSELECT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Wait()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDSECTIONSCROLLVIEWELEMENT_WAIT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDSECTIONSCROLLVIEWELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDSECTIONSCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

	};

