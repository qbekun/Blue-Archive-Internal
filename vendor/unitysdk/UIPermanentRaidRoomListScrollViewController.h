#pragma once
#include "unitysdk.h"

#define UIPERMANENTRAIDROOMLISTSCROLLVIEWCONTROLLER_REFRESHITEMS_OFFSET UNITYSDK_OFFSET(0x26F9AD0)
#define UIPERMANENTRAIDROOMLISTSCROLLVIEWCONTROLLER_GET_HASMULTIPLEBOSSGROUPS_OFFSET UNITYSDK_OFFSET(0x26F9E80)
#define UIPERMANENTRAIDROOMLISTSCROLLVIEWCONTROLLER_SETRAIDBOSSGROUP_OFFSET UNITYSDK_OFFSET(0x26F9ED0)
#define UIPERMANENTRAIDROOMLISTSCROLLVIEWCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26F9EF0)

	inline static constexpr unsigned int UIPermanentRaidRoomListScrollViewController_TypeDefinitionIndex = 7043;

	class UIPermanentRaidRoomListScrollViewController : public ::System::Xml::XmlDocument
	{
	public:
		Il2CppObject* _raidBossGroups; // 0x90

		::System::Void RefreshItems(::System::Int32 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDROOMLISTSCROLLVIEWCONTROLLER_REFRESHITEMS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_HasMultipleBossGroups()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDROOMLISTSCROLLVIEWCONTROLLER_GET_HASMULTIPLEBOSSGROUPS_OFFSET))(nullptr);
		}

		::System::Void SetRaidBossGroup(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDROOMLISTSCROLLVIEWCONTROLLER_SETRAIDBOSSGROUP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDROOMLISTSCROLLVIEWCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

