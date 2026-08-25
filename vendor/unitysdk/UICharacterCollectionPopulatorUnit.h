#pragma once
#include "unitysdk.h"

class UIWidget;
class UILabel;
class UICharacterCollectionPopulator;
class SortingRule;

#define UICHARACTERCOLLECTIONPOPULATORUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0x22B63B0)
#define UICHARACTERCOLLECTIONPOPULATORUNIT_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x22B6BF0)
#define UICHARACTERCOLLECTIONPOPULATORUNIT_SETDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x22B85D0)
#define UICHARACTERCOLLECTIONPOPULATORUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x22B8EA0)
#define UICHARACTERCOLLECTIONPOPULATORUNIT_GET_PORTRAITHEIGHT_OFFSET UNITYSDK_OFFSET(0x22B8EB0)
#define UICHARACTERCOLLECTIONPOPULATORUNIT_GET_SUBJECTHEIGHT_OFFSET UNITYSDK_OFFSET(0x22B8EC0)
#define UICHARACTERCOLLECTIONPOPULATORUNIT_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x22B8ED0)
#define UICHARACTERCOLLECTIONPOPULATORUNIT_GET_NUMUNITSPERROW_OFFSET UNITYSDK_OFFSET(0x22B6B50)
#define UICHARACTERCOLLECTIONPOPULATORUNIT_SETSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x22B6620)

	inline static constexpr unsigned int UICharacterCollectionPopulatorUnit_TypeDefinitionIndex = 4780;

	class UICharacterCollectionPopulatorUnit : public Il2CppObject
	{
	public:
		UIWidget* descriptionObject; // 0x50
		UILabel* descriptionLabel; // 0x58
		::Il2CppArray<::System::Object*>* units; // 0x60
		::System::Int32 subjectHeight; // 0x68
		::System::Int32 portraitHeight; // 0x6C
		::System::Boolean shouldShowSubject; // 0x70

		::System::Void SetData(UICharacterCollectionPopulator* arg, Il2CppObject* arg2, ::System::Int32 arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(UICharacterCollectionPopulator*, Il2CppObject*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATORUNIT_SETDATA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int32 get_Height()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATORUNIT_GET_HEIGHT_OFFSET))(nullptr);
		}

		::System::Void SetDescription(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATORUNIT_SETDESCRIPTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATORUNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_PortraitHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATORUNIT_GET_PORTRAITHEIGHT_OFFSET))(nullptr);
		}

		::System::Int32 get_SubjectHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATORUNIT_GET_SUBJECTHEIGHT_OFFSET))(nullptr);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATORUNIT_ISVISIBLE_OFFSET))(nullptr);
		}

		::System::Int32 get_NumUnitsPerRow()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATORUNIT_GET_NUMUNITSPERROW_OFFSET))(nullptr);
		}

		::System::Void SetSortingRule(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERCOLLECTIONPOPULATORUNIT_SETSORTINGRULE_OFFSET))(arg, nullptr);
		}

	};

