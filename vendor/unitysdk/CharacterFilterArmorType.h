#pragma once
#include "unitysdk.h"

class CharacterObject;
class CollectionUnitObjectBase;

#define CHARACTERFILTERARMORTYPE_INITALLLIST_OFFSET UNITYSDK_OFFSET(0x1FB75B0)
#define CHARACTERFILTERARMORTYPE_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FB7830)
#define CHARACTERFILTERARMORTYPE_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FB78C0)
#define CHARACTERFILTERARMORTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FB4CD0)

	inline static constexpr unsigned int CharacterFilterArmorType_TypeDefinitionIndex = 2925;

	class CharacterFilterArmorType : public ::MX::Logic::Actions::SeekTargetAction
	{
	public:
		::System::Void InitAllList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERARMORTYPE_INITALLLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainedByFilter(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERARMORTYPE_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainedByFilter(CollectionUnitObjectBase* arg)
		{
			return ((::System::Boolean(*)(CollectionUnitObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERARMORTYPE_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERARMORTYPE_.CTOR_OFFSET))(nullptr);
		}

	};

