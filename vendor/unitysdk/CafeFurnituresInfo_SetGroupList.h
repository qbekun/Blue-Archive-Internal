#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define CAFEFURNITURESINFO_SETGROUPLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x225FA50)
#define CAFEFURNITURESINFO_SETGROUPLIST_ONENABLE_OFFSET UNITYSDK_OFFSET(0x225FA60)
#define CAFEFURNITURESINFO_SETGROUPLIST_REFRESHLIST_OFFSET UNITYSDK_OFFSET(0x225E510)

	inline static constexpr unsigned int CafeFurnituresInfo_SetGroupList_TypeDefinitionIndex = 4571;

	class CafeFurnituresInfo_SetGroupList : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* noSetGroup; // 0x18
		Il2CppObject* setList; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURESINFO_SETGROUPLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURESINFO_SETGROUPLIST_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void RefreshList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURESINFO_SETGROUPLIST_REFRESHLIST_OFFSET))(nullptr);
		}

	};

