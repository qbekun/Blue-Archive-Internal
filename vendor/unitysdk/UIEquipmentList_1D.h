#pragma once
#include "unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIEQUIPMENTLIST_1D_HANDLEEQUIPMENTCARDSELECTEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x241B340)
#define UIEQUIPMENTLIST_1D_ONENABLE_OFFSET UNITYSDK_OFFSET(0x241B530)
#define UIEQUIPMENTLIST_1D_GETDATALIST_OFFSET UNITYSDK_OFFSET(0x241B630)
#define UIEQUIPMENTLIST_1D_.CTOR_OFFSET UNITYSDK_OFFSET(0x241B6F0)
#define UIEQUIPMENTLIST_1D_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x241B730)

	inline static constexpr unsigned int UIEquipmentList_1D_TypeDefinitionIndex = 5485;

	class UIEquipmentList_1D : public ::UnityEngine::InputSystem::LowLevel::RequestResetCommand
	{
	public:
		::System::Boolean HandleEquipmentCardSelectedMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTLIST_1D_HANDLEEQUIPMENTCARDSELECTEDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTLIST_1D_ONENABLE_OFFSET))(nullptr);
		}

		Il2CppObject* GetDataList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTLIST_1D_GETDATALIST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTLIST_1D_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTLIST_1D_ONDISABLE_OFFSET))(nullptr);
		}

	};

