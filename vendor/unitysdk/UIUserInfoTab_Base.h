#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class DetailedAccountInfoDB; }
namespace MX::GameLogic::DBModel { class AccountAttachmentDB; }

#define UIUSERINFOTAB_BASE_SETDATA_OFFSET UNITYSDK_OFFSET(0x257DC70)
#define UIUSERINFOTAB_BASE_SETMYDATA_OFFSET UNITYSDK_OFFSET(0x257DC80)
#define UIUSERINFOTAB_BASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x257D420)

	inline static constexpr unsigned int UIUserInfoTab_Base_TypeDefinitionIndex = 6202;

	class UIUserInfoTab_Base : public Il2CppObject
	{
	public:
		::System::Void SetData(::MX::GameLogic::DBModel::DetailedAccountInfoDB* arg, ::MX::GameLogic::DBModel::AccountAttachmentDB* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::DetailedAccountInfoDB*, ::MX::GameLogic::DBModel::AccountAttachmentDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFOTAB_BASE_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetMyData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFOTAB_BASE_SETMYDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINFOTAB_BASE_.CTOR_OFFSET))(nullptr);
		}

	};

