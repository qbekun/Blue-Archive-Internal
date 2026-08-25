#pragma once
#include "unitysdk.h"

class UILabel;
class UIProgressBar;
class Style;
namespace UnityEngine { class Vector2; }

#define UITEXTLIST_GET_PARAGRAPHS_OFFSET UNITYSDK_OFFSET(0x2440A30)
#define UITEXTLIST_GET_PARAGRAPHCOUNT_OFFSET UNITYSDK_OFFSET(0x2440B80)
#define UITEXTLIST_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2440BA0)
#define UITEXTLIST_GET_SCROLLVALUE_OFFSET UNITYSDK_OFFSET(0x2440C40)
#define UITEXTLIST_SET_SCROLLVALUE_OFFSET UNITYSDK_OFFSET(0x2440C50)
#define UITEXTLIST_GET_LINEHEIGHT_OFFSET UNITYSDK_OFFSET(0x2441170)
#define UITEXTLIST_GET_SCROLLHEIGHT_OFFSET UNITYSDK_OFFSET(0x2441200)
#define UITEXTLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x2441330)
#define UITEXTLIST_START_OFFSET UNITYSDK_OFFSET(0x2441390)
#define UITEXTLIST_UPDATE_OFFSET UNITYSDK_OFFSET(0x2441530)
#define UITEXTLIST_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x24418B0)
#define UITEXTLIST_ONDRAG_OFFSET UNITYSDK_OFFSET(0x2441990)
#define UITEXTLIST_ONSCROLLBAR_OFFSET UNITYSDK_OFFSET(0x2441A70)
#define UITEXTLIST_ADD_OFFSET UNITYSDK_OFFSET(0x2441AD0)
#define UITEXTLIST_ADD_OFFSET UNITYSDK_OFFSET(0x2441AE0)
#define UITEXTLIST_REBUILD_OFFSET UNITYSDK_OFFSET(0x2441580)
#define UITEXTLIST_UPDATEVISIBLETEXT_OFFSET UNITYSDK_OFFSET(0x2440D50)
#define UITEXTLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x2441BE0)
#define UITEXTLIST_.CCTOR_OFFSET UNITYSDK_OFFSET(0x2441C60)

	inline static constexpr unsigned int UITextList_TypeDefinitionIndex = 266;

	class UITextList : public Il2CppObject
	{
	public:
		UILabel* textLabel; // 0x18
		UIProgressBar* scrollBar; // 0x20
		Style* style; // 0x28
		::System::Int32 paragraphHistory; // 0x2C
		::Il2CppArray<::System::Object*>* mSeparator; // 0x30
		::System::Single mScroll; // 0x38
		::System::Int32 mTotalLines; // 0x3C
		::System::Int32 mLastWidth; // 0x40
		::System::Int32 mLastHeight; // 0x44
		Il2CppObject* mParagraphs; // 0x48
		Il2CppObject* mHistory; // 0x0

		Il2CppObject* get_paragraphs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTLIST_GET_PARAGRAPHS_OFFSET))(nullptr);
		}

		::System::Int32 get_paragraphCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTLIST_GET_PARAGRAPHCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_isValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTLIST_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Single get_scrollValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTLIST_GET_SCROLLVALUE_OFFSET))(nullptr);
		}

		::System::Void set_scrollValue(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UITEXTLIST_SET_SCROLLVALUE_OFFSET))(arg, nullptr);
		}

		::System::Single get_lineHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTLIST_GET_LINEHEIGHT_OFFSET))(nullptr);
		}

		::System::Int32 get_scrollHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTLIST_GET_SCROLLHEIGHT_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTLIST_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTLIST_START_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTLIST_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnScroll(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UITEXTLIST_ONSCROLL_OFFSET))(arg, nullptr);
		}

		::System::Void OnDrag(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UITEXTLIST_ONDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void OnScrollBar()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTLIST_ONSCROLLBAR_OFFSET))(nullptr);
		}

		::System::Void Add(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UITEXTLIST_ADD_OFFSET))(str, nullptr);
		}

		::System::Void Add(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITEXTLIST_ADD_OFFSET))(str, arg, nullptr);
		}

		::System::Void Rebuild()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTLIST_REBUILD_OFFSET))(nullptr);
		}

		::System::Void UpdateVisibleText()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTLIST_UPDATEVISIBLETEXT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITEXTLIST_.CCTOR_OFFSET))(nullptr);
		}

	};

