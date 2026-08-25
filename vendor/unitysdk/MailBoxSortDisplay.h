#pragma once
#include "unitysdk.h"

class SortingRule;
class MXButton;
namespace UnityEngine { class GameObject; }
class UILabel;
class UISprite;

#define MAILBOXSORTDISPLAY_GET_ISSORTBYDATEDESC_OFFSET UNITYSDK_OFFSET(0x2685010)
#define MAILBOXSORTDISPLAY_GET_SORTINGRULE_OFFSET UNITYSDK_OFFSET(0x2685020)
#define MAILBOXSORTDISPLAY_ONCLICKORDER_OFFSET UNITYSDK_OFFSET(0x2685030)
#define MAILBOXSORTDISPLAY_AWAKE_OFFSET UNITYSDK_OFFSET(0x26850C0)
#define MAILBOXSORTDISPLAY_SET_ISSORTBYDATEDESC_OFFSET UNITYSDK_OFFSET(0x26852D0)
#define MAILBOXSORTDISPLAY_ONCLICKSORT_OFFSET UNITYSDK_OFFSET(0x26852E0)
#define MAILBOXSORTDISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x2685380)
#define MAILBOXSORTDISPLAY_SETREADMAILTAB_OFFSET UNITYSDK_OFFSET(0x2685390)
#define MAILBOXSORTDISPLAY_REFRESH_OFFSET UNITYSDK_OFFSET(0x26853F0)
#define MAILBOXSORTDISPLAY_SET_SORTINGRULE_OFFSET UNITYSDK_OFFSET(0x2685730)

	inline static constexpr unsigned int MailBoxSortDisplay_TypeDefinitionIndex = 6759;

	class MailBoxSortDisplay : public Il2CppObject
	{
	public:
		SortingRule* _SortingRule_k__BackingField; // 0x18
		::System::Boolean _IsSortByDateDesc_k__BackingField; // 0x1C
		MXButton* sortButton; // 0x20
		::UnityEngine::GameObject* sortButtonOffLabel; // 0x28
		MXButton* orderButton; // 0x30
		UILabel* sortLabel; // 0x38
		UILabel* orderLabel; // 0x40
		UISprite* arrowImage; // 0x48

		::System::Boolean get_IsSortByDateDesc()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILBOXSORTDISPLAY_GET_ISSORTBYDATEDESC_OFFSET))(nullptr);
		}

		SortingRule* get_SortingRule()
		{
			return ((SortingRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILBOXSORTDISPLAY_GET_SORTINGRULE_OFFSET))(nullptr);
		}

		::System::Void OnClickOrder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILBOXSORTDISPLAY_ONCLICKORDER_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILBOXSORTDISPLAY_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_IsSortByDateDesc(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MAILBOXSORTDISPLAY_SET_ISSORTBYDATEDESC_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickSort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILBOXSORTDISPLAY_ONCLICKSORT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILBOXSORTDISPLAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetReadMailTab(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MAILBOXSORTDISPLAY_SETREADMAILTAB_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAILBOXSORTDISPLAY_REFRESH_OFFSET))(nullptr);
		}

		::System::Void set_SortingRule(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + MAILBOXSORTDISPLAY_SET_SORTINGRULE_OFFSET))(arg, nullptr);
		}

	};

