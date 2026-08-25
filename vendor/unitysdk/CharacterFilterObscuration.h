#pragma once
#include "unitysdk.h"

class CharacterObject;
class CollectionUnitObjectBase;
class CharacterObscurationFilterType;

#define CHARACTERFILTEROBSCURATION_INITALLLIST_OFFSET UNITYSDK_OFFSET(0x1FB9810)
#define CHARACTERFILTEROBSCURATION_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FB9920)
#define CHARACTERFILTEROBSCURATION_CONTAINEDBYFILTER_OFFSET UNITYSDK_OFFSET(0x1FB9AB0)
#define CHARACTERFILTEROBSCURATION_CHECKMAXANDFILL_OFFSET UNITYSDK_OFFSET(0x1FB9C60)
#define CHARACTERFILTEROBSCURATION_GETCHARACTEROBSCURATIONFILTERTYPE_OFFSET UNITYSDK_OFFSET(0x1FB99B0)
#define CHARACTERFILTEROBSCURATION_GETCHARACTEROBSCURATIONFILTERTYPE_OFFSET UNITYSDK_OFFSET(0x1FB9B40)
#define CHARACTERFILTEROBSCURATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FB4F90)

	inline static constexpr unsigned int CharacterFilterObscuration_TypeDefinitionIndex = 2939;

	class CharacterFilterObscuration : public ::MX::Logic::Actions::IActiveSkill
	{
	public:
		::System::Void InitAllList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTEROBSCURATION_INITALLLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainedByFilter(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTEROBSCURATION_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainedByFilter(CollectionUnitObjectBase* arg)
		{
			return ((::System::Boolean(*)(CollectionUnitObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTEROBSCURATION_CONTAINEDBYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void CheckMaxAndFill(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTEROBSCURATION_CHECKMAXANDFILL_OFFSET))(arg, nullptr);
		}

		CharacterObscurationFilterType* GetCharacterObscurationFilterType(CharacterObject* arg)
		{
			return ((CharacterObscurationFilterType*(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTEROBSCURATION_GETCHARACTEROBSCURATIONFILTERTYPE_OFFSET))(arg, nullptr);
		}

		CharacterObscurationFilterType* GetCharacterObscurationFilterType(CollectionUnitObjectBase* arg)
		{
			return ((CharacterObscurationFilterType*(*)(CollectionUnitObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTEROBSCURATION_GETCHARACTEROBSCURATIONFILTERTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTEROBSCURATION_.CTOR_OFFSET))(nullptr);
		}

	};

