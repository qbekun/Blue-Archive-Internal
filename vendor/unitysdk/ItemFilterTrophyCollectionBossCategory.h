#pragma once
#include "unitysdk.h"

#define ITEMFILTERTROPHYCOLLECTIONBOSSCATEGORY_INITALLLIST_OFFSET UNITYSDK_OFFSET(0x1FCF710)
#define ITEMFILTERTROPHYCOLLECTIONBOSSCATEGORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FCC600)
#define ITEMFILTERTROPHYCOLLECTIONBOSSCATEGORY_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FCF7E0)

	inline static constexpr unsigned int ItemFilterTrophyCollectionBossCategory_TypeDefinitionIndex = 3006;

	class ItemFilterTrophyCollectionBossCategory : public ::MX::Logic::Actions::GroggyAction
	{
	public:
		::System::Void InitAllList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERTROPHYCOLLECTIONBOSSCATEGORY_INITALLLIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERTROPHYCOLLECTIONBOSSCATEGORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ContainedByFilter(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERTROPHYCOLLECTIONBOSSCATEGORY_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

	};

