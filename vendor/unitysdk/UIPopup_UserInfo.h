#pragma once
#include "unitysdk.h"

class UIUserInfoTabController;
namespace MX::NetworkProtocol { class FriendGetFriendDetailedInfoResponse; }

#define UIPOPUP_USERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x257CC80)
#define UIPOPUP_USERINFO_SETVALUES_OFFSET UNITYSDK_OFFSET(0x257CC90)
#define UIPOPUP_USERINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x257CDE0)
#define UIPOPUP_USERINFO_SETMYDATA_OFFSET UNITYSDK_OFFSET(0x257CE00)
#define UIPOPUP_USERINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x257CEC0)

	inline static constexpr unsigned int UIPopup_UserInfo_TypeDefinitionIndex = 6196;

	class UIPopup_UserInfo : public Il2CppObject
	{
	public:
		UIUserInfoTabController* tabController; // 0xD8
		Il2CppObject* tabs; // 0xE0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_USERINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetValues()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_USERINFO_SETVALUES_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_USERINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetMyData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_USERINFO_SETMYDATA_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::NetworkProtocol::FriendGetFriendDetailedInfoResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::FriendGetFriendDetailedInfoResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_USERINFO_SETDATA_OFFSET))(arg, nullptr);
		}

	};

