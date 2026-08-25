#pragma once
#include "unitysdk.h"

class CharacterObject;
class CollectionUnitObjectBase;
class CharacterGearFilterType;

#define CHARACTERFILTERGEAR_INITALLLIST_OFFSET UNITYSDK_OFFSET(0x1FB9380)
#define CHARACTERFILTERGEAR_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FB9490)
#define CHARACTERFILTERGEAR_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FB9610)
#define CHARACTERFILTERGEAR_CHECKMAXANDFILL_OFFSET UNITYSDK_OFFSET(0x1FB9800)
#define CHARACTERFILTERGEAR_GETCHARACTERGEARTYPE_OFFSET UNITYSDK_OFFSET(0x1FB9520)
#define CHARACTERFILTERGEAR_GETCHARACTERGEARTYPE_OFFSET UNITYSDK_OFFSET(0x1FB96A0)
#define CHARACTERFILTERGEAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FB4F50)

	inline static constexpr unsigned int CharacterFilterGear_TypeDefinitionIndex = 2938;

	class CharacterFilterGear : public ::MX::Logic::Actions::ReleaseFormConversionAction
	{
	public:
		::System::Void InitAllList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERGEAR_INITALLLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainedByFilter(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERGEAR_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainedByFilter(CollectionUnitObjectBase* arg)
		{
			return ((::System::Boolean(*)(CollectionUnitObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERGEAR_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void CheckMaxAndFill(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERGEAR_CHECKMAXANDFILL_OFFSET))(arg, nullptr);
		}

		CharacterGearFilterType* GetCharacterGearType(CharacterObject* arg)
		{
			return ((CharacterGearFilterType*(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERGEAR_GETCHARACTERGEARTYPE_OFFSET))(arg, nullptr);
		}

		CharacterGearFilterType* GetCharacterGearType(CollectionUnitObjectBase* arg)
		{
			return ((CharacterGearFilterType*(*)(CollectionUnitObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERGEAR_GETCHARACTERGEARTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERGEAR_.CTOR_OFFSET))(nullptr);
		}

	};

