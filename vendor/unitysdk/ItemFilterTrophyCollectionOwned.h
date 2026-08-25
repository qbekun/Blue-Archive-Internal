#pragma once
#include "unitysdk.h"

#define ITEMFILTERTROPHYCOLLECTIONOWNED_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FCF540)
#define ITEMFILTERTROPHYCOLLECTIONOWNED_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FCC640)
#define ITEMFILTERTROPHYCOLLECTIONOWNED_CHECKMAXANDFILL_OFFSET UNITYSDK_OFFSET(0x1FCF650)
#define ITEMFILTERTROPHYCOLLECTIONOWNED_INITALLLIST_OFFSET UNITYSDK_OFFSET(0x1FCF660)

	inline static constexpr unsigned int ItemFilterTrophyCollectionOwned_TypeDefinitionIndex = 3005;

	class ItemFilterTrophyCollectionOwned : public ::MX::Logic::Actions::DyingAction
	{
	public:
		::System::Boolean ContainedByFilter(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERTROPHYCOLLECTIONOWNED_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERTROPHYCOLLECTIONOWNED_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CheckMaxAndFill(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERTROPHYCOLLECTIONOWNED_CHECKMAXANDFILL_OFFSET))(arg, nullptr);
		}

		::System::Void InitAllList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERTROPHYCOLLECTIONOWNED_INITALLLIST_OFFSET))(arg, nullptr);
		}

	};

