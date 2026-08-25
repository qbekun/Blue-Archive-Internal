#pragma once
#include "unitysdk.h"

class CharacterObject;
class CollectionUnitObjectBase;
class CharacterMemorialFilterType;

#define CHARACTERFILTERMEMORIAL_INITALLLIST_OFFSET UNITYSDK_OFFSET(0x1FB8F30)
#define CHARACTERFILTERMEMORIAL_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FB9040)
#define CHARACTERFILTERMEMORIAL_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FB9320)
#define CHARACTERFILTERMEMORIAL_CHECKMAXANDFILL_OFFSET UNITYSDK_OFFSET(0x1FB9330)
#define CHARACTERFILTERMEMORIAL_GETCHARACTERMEMORIALTYPE_OFFSET UNITYSDK_OFFSET(0x1FB90D0)
#define CHARACTERFILTERMEMORIAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FB4F10)

	inline static constexpr unsigned int CharacterFilterMemorial_TypeDefinitionIndex = 2937;

	class CharacterFilterMemorial : public ::MX::Logic::Actions::RetreatAction
	{
	public:
		::System::Void InitAllList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERMEMORIAL_INITALLLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainedByFilter(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERMEMORIAL_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainedByFilter(CollectionUnitObjectBase* arg)
		{
			return ((::System::Boolean(*)(CollectionUnitObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERMEMORIAL_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void CheckMaxAndFill(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERMEMORIAL_CHECKMAXANDFILL_OFFSET))(arg, nullptr);
		}

		CharacterMemorialFilterType* GetCharacterMemorialType(CharacterObject* arg)
		{
			return ((CharacterMemorialFilterType*(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERMEMORIAL_GETCHARACTERMEMORIALTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTERMEMORIAL_.CTOR_OFFSET))(nullptr);
		}

	};

