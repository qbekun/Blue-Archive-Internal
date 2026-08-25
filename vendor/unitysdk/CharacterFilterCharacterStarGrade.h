#pragma once
#include "unitysdk.h"

class CharacterObject;
class CollectionUnitObjectBase;

#define CHARACTERFILTERCHARACTERSTARGRADE_INITALLLIST_OFFSET UNITYSDK_OFFSET(0x1FB71A0)
#define CHARACTERFILTERCHARACTERSTARGRADE_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FB72A0)
#define CHARACTERFILTERCHARACTERSTARGRADE_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FB7330)
#define CHARACTERFILTERCHARACTERSTARGRADE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FB4D50)

	inline static constexpr unsigned int CharacterFilterCharacterStarGrade_TypeDefinitionIndex = 2922;

	class CharacterFilterCharacterStarGrade : public ::MX::Logic::Actions::HeroAction
	{
	public:
		::System::Void InitAllList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERCHARACTERSTARGRADE_INITALLLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainedByFilter(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERCHARACTERSTARGRADE_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainedByFilter(CollectionUnitObjectBase* arg)
		{
			return ((::System::Boolean(*)(CollectionUnitObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERCHARACTERSTARGRADE_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERCHARACTERSTARGRADE_.CTOR_OFFSET))(nullptr);
		}

	};

