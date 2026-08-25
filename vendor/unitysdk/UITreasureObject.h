#pragma once
#include "unitysdk.h"

class UITexture;
namespace UnityEngine { class Transform; }
class MXButton;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Animation; }
namespace MX::GameLogic::DBModel { class EventContentTreasureCell; }
namespace MX::GameLogic::DBModel { class EventContentTreasureObject; }

#define UITREASUREOBJECT_ONCLICKBUTTON_OFFSET UNITYSDK_OFFSET(0x24CEA20)
#define UITREASUREOBJECT_SELECTON_OFFSET UNITYSDK_OFFSET(0x24CEAB0)
#define UITREASUREOBJECT_SET_TREASURECELL_OFFSET UNITYSDK_OFFSET(0x24CEAF0)
#define UITREASUREOBJECT_SETTREASURETEXTURE_OFFSET UNITYSDK_OFFSET(0x24CEB00)
#define UITREASUREOBJECT_COVERON_OFFSET UNITYSDK_OFFSET(0x24CED40)
#define UITREASUREOBJECT_GET_TREASURECELL_OFFSET UNITYSDK_OFFSET(0x24CED80)
#define UITREASUREOBJECT_CO_FLIPANIMATION_OFFSET UNITYSDK_OFFSET(0x24CED90)
#define UITREASUREOBJECT_TREASURETEXTUREDISABLE_OFFSET UNITYSDK_OFFSET(0x24CEE40)
#define UITREASUREOBJECT_GET_COVER_OFFSET UNITYSDK_OFFSET(0x24CEEB0)
#define UITREASUREOBJECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x24CEEE0)
#define UITREASUREOBJECT_SETDATA_OFFSET UNITYSDK_OFFSET(0x24CEF70)
#define UITREASUREOBJECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x24CEF80)
#define UITREASUREOBJECT_RESETTREASUREOBJECT_OFFSET UNITYSDK_OFFSET(0x24CF0A0)
#define UITREASUREOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x24CF320)

	inline static constexpr unsigned int UITreasureObject_TypeDefinitionIndex = 5939;

	class UITreasureObject : public Il2CppObject
	{
	public:
		UITexture* treasureNormalTexture; // 0x18
		::UnityEngine::Transform* treasureNormalTransform; // 0x20
		UITexture* treasureDisableTexture; // 0x28
		::UnityEngine::Transform* treasureDisableTransform; // 0x30
		MXButton* treasureObjectButton; // 0x38
		::UnityEngine::GameObject* selectRoot; // 0x40
		::UnityEngine::Animation* coverOpenAnimation; // 0x48
		::MX::GameLogic::DBModel::EventContentTreasureCell* _TreasureCell_k__BackingField; // 0x50
		Il2CppObject* cellSelected; // 0x58

		::System::Void OnClickButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITREASUREOBJECT_ONCLICKBUTTON_OFFSET))(nullptr);
		}

		::System::Void SelectOn(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITREASUREOBJECT_SELECTON_OFFSET))(arg, nullptr);
		}

		::System::Void set_TreasureCell(::MX::GameLogic::DBModel::EventContentTreasureCell* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentTreasureCell*, ::PVOID))((::PBYTE)hIl2Cpp + UITREASUREOBJECT_SET_TREASURECELL_OFFSET))(arg, nullptr);
		}

		::System::Void SetTreasureTexture(::MX::GameLogic::DBModel::EventContentTreasureObject* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentTreasureObject*, ::PVOID))((::PBYTE)hIl2Cpp + UITREASUREOBJECT_SETTREASURETEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Void CoverOn(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITREASUREOBJECT_COVERON_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::EventContentTreasureCell* get_TreasureCell()
		{
			return ((::MX::GameLogic::DBModel::EventContentTreasureCell*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITREASUREOBJECT_GET_TREASURECELL_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_FlipAnimation(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UITREASUREOBJECT_CO_FLIPANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void TreasureTextureDisable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITREASUREOBJECT_TREASURETEXTUREDISABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Cover()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UITREASUREOBJECT_GET_COVER_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Int32 arg, ::System::Int32 arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UITREASUREOBJECT_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::EventContentTreasureObject* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentTreasureObject*, ::PVOID))((::PBYTE)hIl2Cpp + UITREASUREOBJECT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITREASUREOBJECT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void ResetTreasureObject()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITREASUREOBJECT_RESETTREASUREOBJECT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITREASUREOBJECT_.CTOR_OFFSET))(nullptr);
		}

	};

