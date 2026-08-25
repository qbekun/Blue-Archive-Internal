#pragma once
#include "unitysdk.h"

class UICafeTravelSocialListTabController;
class UICafeTravelSocialListScrollView;
namespace UnityEngine { class GameObject; }
class SocialList;

#define UIPOPUP_CAFETRAVELSOCIALLIST_GETSOCIALLIST_OFFSET UNITYSDK_OFFSET(0x226D320)
#define UIPOPUP_CAFETRAVELSOCIALLIST_ONOPENED_OFFSET UNITYSDK_OFFSET(0x226E5A0)
#define UIPOPUP_CAFETRAVELSOCIALLIST__SOCIALLISTHASITEMS_G__VALIDCLANMEMBERCOUNT|9_1_OFFSET UNITYSDK_OFFSET(0x226E6F0)
#define UIPOPUP_CAFETRAVELSOCIALLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x226EA40)
#define UIPOPUP_CAFETRAVELSOCIALLIST__SOCIALLISTHASITEMS_G__ISVALIDCLANMEMBER|9_0_OFFSET UNITYSDK_OFFSET(0x226EAC0)
#define UIPOPUP_CAFETRAVELSOCIALLIST_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0x226EC70)
#define UIPOPUP_CAFETRAVELSOCIALLIST_SOCIALLISTHASITEMS_OFFSET UNITYSDK_OFFSET(0x226ECE0)
#define UIPOPUP_CAFETRAVELSOCIALLIST_REFRESHSCROLLITEMS_OFFSET UNITYSDK_OFFSET(0x226EDE0)
#define UIPOPUP_CAFETRAVELSOCIALLIST_SHOWNODATAINFO_OFFSET UNITYSDK_OFFSET(0x226EEC0)

	inline static constexpr unsigned int UIPopup_CafeTravelSocialList_TypeDefinitionIndex = 4624;

	class UIPopup_CafeTravelSocialList : public Il2CppObject
	{
	public:
		UICafeTravelSocialListTabController* socialListTypeTab; // 0xD8
		UICafeTravelSocialListScrollView* scrollView; // 0xE0
		::UnityEngine::GameObject* noDataInfo; // 0xE8
		Il2CppObject* cachedSocialListDic; // 0xF0

		Il2CppObject* GetSocialList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFETRAVELSOCIALLIST_GETSOCIALLIST_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFETRAVELSOCIALLIST_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Int32 _SocialListHasItems_g__ValidClanMemberCount|9_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFETRAVELSOCIALLIST__SOCIALLISTHASITEMS_G__VALIDCLANMEMBERCOUNT|9_1_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFETRAVELSOCIALLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _SocialListHasItems_g__IsValidClanMember|9_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFETRAVELSOCIALLIST__SOCIALLISTHASITEMS_G__ISVALIDCLANMEMBER|9_0_OFFSET))(nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, SocialList* arg2)
		{
			((::System::Void(*)(::System::Boolean, SocialList*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFETRAVELSOCIALLIST_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean SocialListHasItems()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFETRAVELSOCIALLIST_SOCIALLISTHASITEMS_OFFSET))(nullptr);
		}

		::System::Void RefreshScrollItems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFETRAVELSOCIALLIST_REFRESHSCROLLITEMS_OFFSET))(nullptr);
		}

		::System::Void ShowNoDataInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CAFETRAVELSOCIALLIST_SHOWNODATAINFO_OFFSET))(nullptr);
		}

	};

