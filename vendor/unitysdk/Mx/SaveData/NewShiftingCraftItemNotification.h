#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_NEWSHIFTINGCRAFTITEMNOTIFICATION_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CF1AA0)
#define MX_SAVEDATA_NEWSHIFTINGCRAFTITEMNOTIFICATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF1AB0)
#define MX_SAVEDATA_NEWSHIFTINGCRAFTITEMNOTIFICATION_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF1AC0)
#define MX_SAVEDATA_NEWSHIFTINGCRAFTITEMNOTIFICATION_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CF1B20)

namespace MX::SaveData
{
	inline static constexpr unsigned int NewShiftingCraftItemNotification_TypeDefinitionIndex = 19895;

	class NewShiftingCraftItemNotification : public Il2CppObject
	{
	public:
		::System::Int32 NotificationId; // 0x10

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_NEWSHIFTINGCRAFTITEMNOTIFICATION_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_NEWSHIFTINGCRAFTITEMNOTIFICATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_NEWSHIFTINGCRAFTITEMNOTIFICATION_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_NEWSHIFTINGCRAFTITEMNOTIFICATION_VALIDATE_OFFSET))(nullptr);
		}

	};
}

