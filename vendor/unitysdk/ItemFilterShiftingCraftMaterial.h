#pragma once
#include "unitysdk.h"

class AssetObjectBase;

#define ITEMFILTERSHIFTINGCRAFTMATERIAL_INITALLLIST_OFFSET UNITYSDK_OFFSET(0x1FCF050)
#define ITEMFILTERSHIFTINGCRAFTMATERIAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FCC580)
#define ITEMFILTERSHIFTINGCRAFTMATERIAL_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FCF120)

	inline static constexpr unsigned int ItemFilterShiftingCraftMaterial_TypeDefinitionIndex = 3004;

	class ItemFilterShiftingCraftMaterial : public ::MX::Logic::Actions::FearedAction
	{
	public:
		::System::Void InitAllList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERSHIFTINGCRAFTMATERIAL_INITALLLIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERSHIFTINGCRAFTMATERIAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ContainedByFilter(AssetObjectBase* arg)
		{
			return ((::System::Boolean(*)(AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMFILTERSHIFTINGCRAFTMATERIAL_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

	};

