#pragma once
#include "unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UINONEQUIPMENTLIST_1D_HANDLENONEQUIPMENTCARDSELECTEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x26B8E90)
#define UINONEQUIPMENTLIST_1D_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x26B9080)
#define UINONEQUIPMENTLIST_1D_SETUI_OFFSET UNITYSDK_OFFSET(0x26B9200)
#define UINONEQUIPMENTLIST_1D_ONENABLE_OFFSET UNITYSDK_OFFSET(0x26B92F0)
#define UINONEQUIPMENTLIST_1D_.CTOR_OFFSET UNITYSDK_OFFSET(0x26B93F0)
#define UINONEQUIPMENTLIST_1D_GETDATALIST_OFFSET UNITYSDK_OFFSET(0x26B9430)

	inline static constexpr unsigned int UINonEquipmentList_1D_TypeDefinitionIndex = 6910;

	class UINonEquipmentList_1D : public ::UnityEngine::InputSystem::LowLevel::RequestSyncCommand
	{
	public:
		::System::Boolean HandleNonEquipmentCardSelectedMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTLIST_1D_HANDLENONEQUIPMENTCARDSELECTEDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTLIST_1D_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTLIST_1D_SETUI_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTLIST_1D_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTLIST_1D_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetDataList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UINONEQUIPMENTLIST_1D_GETDATALIST_OFFSET))(nullptr);
		}

	};

