#pragma once
#include "unitysdk.h"

class CafeFurnituresInfo_FurnitureList;
class CafeFurnituresInfo_SetGroupList;
class CafeSetGroupFurnituresPopup;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define CAFEFURNITURESINFOTAB_HANDLESHOWCAFESETGROUPFURNITURESMESSAGE_OFFSET UNITYSDK_OFFSET(0x225E130)
#define CAFEFURNITURESINFOTAB_HANDLECAFEINFOSYNCMESSAGE_OFFSET UNITYSDK_OFFSET(0x225E1F0)
#define CAFEFURNITURESINFOTAB_REFRESH_OFFSET UNITYSDK_OFFSET(0x225E230)
#define CAFEFURNITURESINFOTAB_.CTOR_OFFSET UNITYSDK_OFFSET(0x225ED20)
#define CAFEFURNITURESINFOTAB_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x225ED30)
#define CAFEFURNITURESINFOTAB_ONENABLE_OFFSET UNITYSDK_OFFSET(0x225EF30)

	inline static constexpr unsigned int CafeFurnituresInfoTab_TypeDefinitionIndex = 4563;

	class CafeFurnituresInfoTab : public Il2CppObject
	{
	public:
		CafeFurnituresInfo_FurnitureList* furnitureList; // 0x18
		CafeFurnituresInfo_SetGroupList* setGroupList; // 0x20
		CafeSetGroupFurnituresPopup* setDetailPopup; // 0x28

		::System::Boolean HandleShowCafeSetGroupFurnituresMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURESINFOTAB_HANDLESHOWCAFESETGROUPFURNITURESMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleCafeInfoSyncMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURESINFOTAB_HANDLECAFEINFOSYNCMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURESINFOTAB_REFRESH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURESINFOTAB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURESINFOTAB_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURESINFOTAB_ONENABLE_OFFSET))(nullptr);
		}

	};

