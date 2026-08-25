#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UISprite;
namespace FlatData { class ContentType; }

#define RAIDREWARDSUBTABCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x278A3D0)
#define RAIDREWARDSUBTABCONTROLLER_SET_LIMITEDTABENABLE_OFFSET UNITYSDK_OFFSET(0x278A560)
#define RAIDREWARDSUBTABCONTROLLER_GET_CURRENTRAIDTYPE_OFFSET UNITYSDK_OFFSET(0x278A570)
#define RAIDREWARDSUBTABCONTROLLER_GET_LIMITEDTABENABLE_OFFSET UNITYSDK_OFFSET(0x278A580)
#define RAIDREWARDSUBTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x278A590)
#define RAIDREWARDSUBTABCONTROLLER_SET_CURRENTRAIDTYPE_OFFSET UNITYSDK_OFFSET(0x278A5E0)
#define RAIDREWARDSUBTABCONTROLLER_SETLIMITEDTAB_OFFSET UNITYSDK_OFFSET(0x278A410)

	inline static constexpr unsigned int RaidRewardSubTabController_TypeDefinitionIndex = 7413;

	class RaidRewardSubTabController : public ::MS::Internal::Xml::XPath::BooleanFunctions
	{
	public:
		::UnityEngine::GameObject* limitedTab; // 0x58
		UISprite* tabLineSprite; // 0x60
		::Il2CppArray<::System::Object*>* tabBgList; // 0x68
		::System::Int32 tabLineHeightDefault; // 0x70
		::System::Boolean _LimitedTabEnable_k__BackingField; // 0x74
		::FlatData::ContentType* _CurrentRaidType_k__BackingField; // 0x78

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDREWARDSUBTABCONTROLLER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void set_LimitedTabEnable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RAIDREWARDSUBTABCONTROLLER_SET_LIMITEDTABENABLE_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentType* get_CurrentRaidType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDREWARDSUBTABCONTROLLER_GET_CURRENTRAIDTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_LimitedTabEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDREWARDSUBTABCONTROLLER_GET_LIMITEDTABENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDREWARDSUBTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CurrentRaidType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDREWARDSUBTABCONTROLLER_SET_CURRENTRAIDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void SetLimitedTab()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDREWARDSUBTABCONTROLLER_SETLIMITEDTAB_OFFSET))(nullptr);
		}

	};

