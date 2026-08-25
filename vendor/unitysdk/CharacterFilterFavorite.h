#pragma once
#include "unitysdk.h"

class CharacterObject;
class CollectionUnitObjectBase;

#define CHARACTERFILTERFAVORITE_INITALLLIST_OFFSET UNITYSDK_OFFSET(0x1FB6FC0)
#define CHARACTERFILTERFAVORITE_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FB7070)
#define CHARACTERFILTERFAVORITE_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FB7100)
#define CHARACTERFILTERFAVORITE_CHECKMAXANDFILL_OFFSET UNITYSDK_OFFSET(0x1FB7190)
#define CHARACTERFILTERFAVORITE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FB4DD0)

	inline static constexpr unsigned int CharacterFilterFavorite_TypeDefinitionIndex = 2921;

	class CharacterFilterFavorite : public ::MX::Logic::Actions::DyingAction
	{
	public:
		::System::Void InitAllList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERFAVORITE_INITALLLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainedByFilter(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERFAVORITE_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainedByFilter(CollectionUnitObjectBase* arg)
		{
			return ((::System::Boolean(*)(CollectionUnitObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERFAVORITE_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void CheckMaxAndFill(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERFAVORITE_CHECKMAXANDFILL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERFAVORITE_.CTOR_OFFSET))(nullptr);
		}

	};

