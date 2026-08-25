#pragma once
#include "unitysdk.h"

class MXButton;
class ClanJoinFilterTabController;
class MXToggle;
class ClanJoinFilter;

#define CLANFILTERPOPUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x23319B0)
#define CLANFILTERPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2331C90)
#define CLANFILTERPOPUP_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x2331CA0)
#define CLANFILTERPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x2331CF0)
#define CLANFILTERPOPUP_OPENCLANFILTERPOPUP_OFFSET UNITYSDK_OFFSET(0x2332080)
#define CLANFILTERPOPUP_ONSELECTALL_OFFSET UNITYSDK_OFFSET(0x2332430)
#define CLANFILTERPOPUP_ONJOINFILTERCHANGED_OFFSET UNITYSDK_OFFSET(0x2332B40)
#define CLANFILTERPOPUP_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0x2332BA0)
#define CLANFILTERPOPUP_GETCURRENTENUMFLAG_OFFSET UNITYSDK_OFFSET(0x23329C0)

	inline static constexpr unsigned int ClanFilterPopup_TypeDefinitionIndex = 4949;

	class ClanFilterPopup : public Il2CppObject
	{
	public:
		MXButton* okButton; // 0x18
		MXButton* cancelButton; // 0x20
		MXButton* closeButton; // 0x28
		ClanJoinFilterTabController* joinFilterTab; // 0x30
		MXToggle* allSelectToggle; // 0x38
		Il2CppObject* onClanJoinFilter; // 0x40

		::System::Void Initialize(ClanJoinFilter* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(ClanJoinFilter*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CLANFILTERPOPUP_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANFILTERPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANFILTERPOPUP_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANFILTERPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OpenClanFilterPopup(ClanJoinFilter* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(ClanJoinFilter*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CLANFILTERPOPUP_OPENCLANFILTERPOPUP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnSelectAll(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CLANFILTERPOPUP_ONSELECTALL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnJoinFilterChanged(::System::Boolean arg, ClanJoinFilter* arg2)
		{
			((::System::Void(*)(::System::Boolean, ClanJoinFilter*, ::PVOID))((::PBYTE)hIl2Cpp + CLANFILTERPOPUP_ONJOINFILTERCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickOK()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANFILTERPOPUP_ONCLICKOK_OFFSET))(nullptr);
		}

		ClanJoinFilter* GetCurrentEnumFlag()
		{
			return ((ClanJoinFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANFILTERPOPUP_GETCURRENTENUMFLAG_OFFSET))(nullptr);
		}

	};

