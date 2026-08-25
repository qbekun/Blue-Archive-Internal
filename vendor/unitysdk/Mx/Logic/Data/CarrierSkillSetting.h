#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_CARRIERSKILLSETTING_SHOULDSERIALIZEEXSKILLSETTINGS_OFFSET UNITYSDK_OFFSET(0x11E4F90)
#define MX_LOGIC_DATA_CARRIERSKILLSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x11E4FE0)
#define MX_LOGIC_DATA_CARRIERSKILLSETTING_SHOULDSERIALIZEEXTRAPASSIVESKILLSETTINGS_OFFSET UNITYSDK_OFFSET(0x11E5100)
#define MX_LOGIC_DATA_CARRIERSKILLSETTING_SHOULDSERIALIZEPASSIVESKILLSETTINGS_OFFSET UNITYSDK_OFFSET(0x11E5150)
#define MX_LOGIC_DATA_CARRIERSKILLSETTING_SHOULDSERIALIZEHIDDENPASSIVESKILLSETTINGS_OFFSET UNITYSDK_OFFSET(0x11E51A0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CarrierSkillSetting_TypeDefinitionIndex = 13450;

	class CarrierSkillSetting : public Il2CppObject
	{
	public:
		::System::Int64 CarrierSkillListGroupId; // 0x10
		Il2CppObject* ExSkillSettings; // 0x18
		Il2CppObject* PassiveSkillSettings; // 0x20
		Il2CppObject* ExtraPassiveSkillSettings; // 0x28
		Il2CppObject* HiddenPassiveSkillSettings; // 0x30

		::System::Boolean ShouldSerializeExSkillSettings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CARRIERSKILLSETTING_SHOULDSERIALIZEEXSKILLSETTINGS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CARRIERSKILLSETTING_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeExtraPassiveSKillSettings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CARRIERSKILLSETTING_SHOULDSERIALIZEEXTRAPASSIVESKILLSETTINGS_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializePassiveSkillSettings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CARRIERSKILLSETTING_SHOULDSERIALIZEPASSIVESKILLSETTINGS_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeHiddenPassiveSkillSettings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CARRIERSKILLSETTING_SHOULDSERIALIZEHIDDENPASSIVESKILLSETTINGS_OFFSET))(nullptr);
		}

	};
}

