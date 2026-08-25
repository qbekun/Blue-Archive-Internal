#pragma once
#include "unitysdk.h"

class UIScrollView;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::GameLogic::DBModel { class DetailedAccountInfoDB; }
namespace MX::GameLogic::DBModel { class AccountAttachmentDB; }

#define UIUSERINFOTAB_ASSIST_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x257D000)
#define UIUSERINFOTAB_ASSIST_ALIGNSCROLLVIEWONCLICKPARCEL_OFFSET UNITYSDK_OFFSET(0x257D180)
#define UIUSERINFOTAB_ASSIST_SETDATA_OFFSET UNITYSDK_OFFSET(0x257D210)
#define UIUSERINFOTAB_ASSIST_SETMYDATA_OFFSET UNITYSDK_OFFSET(0x257D2F0)
#define UIUSERINFOTAB_ASSIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x257D410)
#define UIUSERINFOTAB_ASSIST_ONENABLE_OFFSET UNITYSDK_OFFSET(0x257D430)
#define UIUSERINFOTAB_ASSIST_AWAKE_OFFSET UNITYSDK_OFFSET(0x257D450)

	inline static constexpr unsigned int UIUserInfoTab_Assist_TypeDefinitionIndex = 6201;

	class UIUserInfoTab_Assist : public Il2CppObject
	{
	public:
		UIScrollView* scrollView; // 0x18
		Il2CppObject* assistCharactersList; // 0x20

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFOTAB_ASSIST_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Boolean AlignScrollViewOnClickParcel(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFOTAB_ASSIST_ALIGNSCROLLVIEWONCLICKPARCEL_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::DetailedAccountInfoDB* arg, ::MX::GameLogic::DBModel::AccountAttachmentDB* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::DetailedAccountInfoDB*, ::MX::GameLogic::DBModel::AccountAttachmentDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFOTAB_ASSIST_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetMyData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFOTAB_ASSIST_SETMYDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFOTAB_ASSIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFOTAB_ASSIST_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFOTAB_ASSIST_AWAKE_OFFSET))(nullptr);
		}

	};

