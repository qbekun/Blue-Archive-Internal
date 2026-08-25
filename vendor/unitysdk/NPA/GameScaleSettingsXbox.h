#pragma once
#include "../unitysdk.h"

#define NPA_GAMESCALESETTINGSXBOX_GET_ADVANCEDUSERMODEL_OFFSET UNITYSDK_OFFSET(0x9BE5D20)
#define NPA_GAMESCALESETTINGSXBOX_GET_TITLEID_OFFSET UNITYSDK_OFFSET(0x9BE5D30)
#define NPA_GAMESCALESETTINGSXBOX_GET_STOREID_OFFSET UNITYSDK_OFFSET(0x9BE5D40)
#define NPA_GAMESCALESETTINGSXBOX_GET_GAMERTAGCOMPONENT_OFFSET UNITYSDK_OFFSET(0x9BE5D50)
#define NPA_GAMESCALESETTINGSXBOX_GET_STOREPRODUCTCACHINGPOLICY_OFFSET UNITYSDK_OFFSET(0x9BE5D60)
#define NPA_GAMESCALESETTINGSXBOX_SETFROMGAMECONFIG_OFFSET UNITYSDK_OFFSET(0x9BE5D70)
#define NPA_GAMESCALESETTINGSXBOX_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BE5DB0)

namespace NPA
{
	inline static constexpr unsigned int GameScaleSettingsXbox_TypeDefinitionIndex = 25755;

	class GameScaleSettingsXbox : public ResultSet
	{
	public:
		::System::Boolean advancedUserModel; // 0x18
		::System::String* titleId; // 0x20
		::System::String* storeId; // 0x28
		::System::Int32 gamertagComponent; // 0x30
		::System::Int32 storeProductCachingPolicy; // 0x34

		::System::Boolean get_AdvancedUserModel()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMESCALESETTINGSXBOX_GET_ADVANCEDUSERMODEL_OFFSET))(nullptr);
		}

		::System::String* get_TitleId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMESCALESETTINGSXBOX_GET_TITLEID_OFFSET))(nullptr);
		}

		::System::String* get_StoreId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMESCALESETTINGSXBOX_GET_STOREID_OFFSET))(nullptr);
		}

		::System::Int32 get_GamertagComponent()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMESCALESETTINGSXBOX_GET_GAMERTAGCOMPONENT_OFFSET))(nullptr);
		}

		::System::Int32 get_StoreProductCachingPolicy()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMESCALESETTINGSXBOX_GET_STOREPRODUCTCACHINGPOLICY_OFFSET))(nullptr);
		}

		::System::Void SetFromGameConfig(::System::Boolean arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMESCALESETTINGSXBOX_SETFROMGAMECONFIG_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMESCALESETTINGSXBOX_.CTOR_OFFSET))(nullptr);
		}

	};
}

