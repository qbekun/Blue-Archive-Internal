#pragma once
#include "unitysdk.h"

class UIGachaItem;

#define BEFOREHANDGACHARESULTHELPER_REFRESHSTARGRID_OFFSET UNITYSDK_OFFSET(0xA6BEB0)
#define BEFOREHANDGACHARESULTHELPER_GETPICKUPLIST_OFFSET UNITYSDK_OFFSET(0xA6BFE0)
#define BEFOREHANDGACHARESULTHELPER_GETNEWCHARACTERLIST_OFFSET UNITYSDK_OFFSET(0xA6C140)

	inline static constexpr unsigned int BeforehandGachaResultHelper_TypeDefinitionIndex = 7845;

	class BeforehandGachaResultHelper : public Il2CppObject
	{
	public:
		::System::Void RefreshStarGrid(UIGachaItem* arg)
		{
			((::System::Void(*)(UIGachaItem*, ::PVOID))((::PBYTE)hIl2Cpp + BEFOREHANDGACHARESULTHELPER_REFRESHSTARGRID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetPickupList(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BEFOREHANDGACHARESULTHELPER_GETPICKUPLIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetNewCharacterList(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BEFOREHANDGACHARESULTHELPER_GETNEWCHARACTERLIST_OFFSET))(arg, nullptr);
		}

	};

