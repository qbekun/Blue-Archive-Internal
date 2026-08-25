#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UISprite;
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }

#define UICHARACTERGIFTMATCHLISTPOPULATORUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0x22C0C90)
#define UICHARACTERGIFTMATCHLISTPOPULATORUNIT_GET_SHOULDSHOWSUBJECT_OFFSET UNITYSDK_OFFSET(0x22C2970)
#define UICHARACTERGIFTMATCHLISTPOPULATORUNIT_GET_UNITHEIGHT_NOSUBJECT_OFFSET UNITYSDK_OFFSET(0x22C2980)
#define UICHARACTERGIFTMATCHLISTPOPULATORUNIT_SETPARCELCARDSCONTAINER_OFFSET UNITYSDK_OFFSET(0x22C28B0)
#define UICHARACTERGIFTMATCHLISTPOPULATORUNIT_SETSUBJECT_OFFSET UNITYSDK_OFFSET(0x22C24F0)
#define UICHARACTERGIFTMATCHLISTPOPULATORUNIT_GET_UNITHEIGHT_WITHSUBJECT_OFFSET UNITYSDK_OFFSET(0x22C2990)
#define UICHARACTERGIFTMATCHLISTPOPULATORUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x22C29A0)
#define UICHARACTERGIFTMATCHLISTPOPULATORUNIT_SETWIDGETHEIGHT_OFFSET UNITYSDK_OFFSET(0x22C2920)
#define UICHARACTERGIFTMATCHLISTPOPULATORUNIT_SETPARCELCARDS_OFFSET UNITYSDK_OFFSET(0x22C25C0)
#define UICHARACTERGIFTMATCHLISTPOPULATORUNIT_GET_NUMPARCELCARDS_OFFSET UNITYSDK_OFFSET(0x22C1BA0)
#define UICHARACTERGIFTMATCHLISTPOPULATORUNIT_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x22C29D0)
#define UICHARACTERGIFTMATCHLISTPOPULATORUNIT_SET_SHOULDSHOWSUBJECT_OFFSET UNITYSDK_OFFSET(0x22C2A60)

	inline static constexpr unsigned int UICharacterGiftMatchListPopulatorUnit_TypeDefinitionIndex = 4798;

	class UICharacterGiftMatchListPopulatorUnit : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* subject; // 0x50
		UISprite* subjectIcon; // 0x58
		::UnityEngine::Transform* parcelCardsContainer; // 0x60
		::UnityEngine::Vector3* containerPosition_NoSubject; // 0x68
		::UnityEngine::Vector3* containerPosition_WithSubject; // 0x74
		::Il2CppArray<::System::Object*>* parcelCards; // 0x80
		::System::Int32 unitHeight_NoSubject; // 0x88
		::System::Int32 unitHeight_WithSubject; // 0x8C
		::System::Boolean _ShouldShowSubject_k__BackingField; // 0x90
		::System::Int32 MaxSpriteIndex; // 0x0

		::System::Void SetData(Il2CppObject* arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGIFTMATCHLISTPOPULATORUNIT_SETDATA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean get_ShouldShowSubject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGIFTMATCHLISTPOPULATORUNIT_GET_SHOULDSHOWSUBJECT_OFFSET))(nullptr);
		}

		::System::Int32 get_UnitHeight_NoSubject()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGIFTMATCHLISTPOPULATORUNIT_GET_UNITHEIGHT_NOSUBJECT_OFFSET))(nullptr);
		}

		::System::Void SetParcelCardsContainer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGIFTMATCHLISTPOPULATORUNIT_SETPARCELCARDSCONTAINER_OFFSET))(nullptr);
		}

		::System::Void SetSubject(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGIFTMATCHLISTPOPULATORUNIT_SETSUBJECT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_UnitHeight_WithSubject()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGIFTMATCHLISTPOPULATORUNIT_GET_UNITHEIGHT_WITHSUBJECT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGIFTMATCHLISTPOPULATORUNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetWidgetHeight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGIFTMATCHLISTPOPULATORUNIT_SETWIDGETHEIGHT_OFFSET))(nullptr);
		}

		::System::Void SetParcelCards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGIFTMATCHLISTPOPULATORUNIT_SETPARCELCARDS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_NumParcelCards()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGIFTMATCHLISTPOPULATORUNIT_GET_NUMPARCELCARDS_OFFSET))(nullptr);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGIFTMATCHLISTPOPULATORUNIT_ISVISIBLE_OFFSET))(nullptr);
		}

		::System::Void set_ShouldShowSubject(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERGIFTMATCHLISTPOPULATORUNIT_SET_SHOULDSHOWSUBJECT_OFFSET))(arg, nullptr);
		}

	};

