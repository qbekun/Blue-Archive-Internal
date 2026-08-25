#pragma once
#include "unitysdk.h"

class CharacterFilterArmorType;
class CharacterFilterBulletType;
class CharacterFilterCharacterStarGrade;
class CharacterFilterWeaponStarGrade;
class CharacterFilterFavorite;
class CharacterFilterSchool;
class CharacterFilterTacticRange;
class CharacterFilterTacticRole;
class CharacterFilterWeaponType;
class CharacterFilterMemorial;
class CharacterFilterGear;
class CharacterFilterObscuration;
class CharacterFilter;
class CharacterObject;
class CollectionUnitObjectBase;

#define CHARACTERFILTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FB47D0)
#define CHARACTERFILTER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1FB47E0)
#define CHARACTERFILTER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FB4830)
#define CHARACTERFILTER_LOADCHARACTERCOLLECTIONFILTER_OFFSET UNITYSDK_OFFSET(0x1FB4FD0)
#define CHARACTERFILTER_LOADMEMORIALFILTER_OFFSET UNITYSDK_OFFSET(0x1FB5270)
#define CHARACTERFILTER_LOADACCOUNTSTUDENTFILTER_OFFSET UNITYSDK_OFFSET(0x1FB53C0)
#define CHARACTERFILTER_LOADCHARACTERIDCARDFILTER_OFFSET UNITYSDK_OFFSET(0x1FB54E0)
#define CHARACTERFILTER_RESETCHARACTERCOLLECTIONFILTER_OFFSET UNITYSDK_OFFSET(0x1FB5600)
#define CHARACTERFILTER_RESETMEMORIALFILTER_OFFSET UNITYSDK_OFFSET(0x1FB57B0)
#define CHARACTERFILTER_RESETACCOUNTSTUDENTFILTER_OFFSET UNITYSDK_OFFSET(0x1FB5840)
#define CHARACTERFILTER_SAVECHARACTERCOLLECTIONFILTER_OFFSET UNITYSDK_OFFSET(0x1FB58B0)
#define CHARACTERFILTER_SAVEMEMORIALFILTER_OFFSET UNITYSDK_OFFSET(0x1FB5EF0)
#define CHARACTERFILTER_SAVEACCOUNTSTUDENTFILTER_OFFSET UNITYSDK_OFFSET(0x1FB6160)
#define CHARACTERFILTER_SAVECHARACTERIDCARDFILTER_OFFSET UNITYSDK_OFFSET(0x1FB6350)
#define CHARACTERFILTER_CHARACTERCOLLECTIONFILTER_OFFSET UNITYSDK_OFFSET(0x1FB6540)
#define CHARACTERFILTER_CHARACTERMEMORIALFILTER_OFFSET UNITYSDK_OFFSET(0x1FB6700)
#define CHARACTERFILTER_UIACCOUNTSTUDENTFILTER_OFFSET UNITYSDK_OFFSET(0x1FB6780)
#define CHARACTERFILTER_CHARACTERCOLLECTIONFILTERON_OFFSET UNITYSDK_OFFSET(0x1FB67E0)
#define CHARACTERFILTER_CHARACTERMEMORIALFILTERON_OFFSET UNITYSDK_OFFSET(0x1FB69E0)
#define CHARACTERFILTER_UIACCOUNTSTUDENTFILTERON_OFFSET UNITYSDK_OFFSET(0x1FB6A80)
#define CHARACTERFILTER_FILTER_OFFSET UNITYSDK_OFFSET(0x1FB6B00)
#define CHARACTERFILTER_FILTER_OFFSET UNITYSDK_OFFSET(0x1FB6B90)
#define CHARACTERFILTER_RESTORE_OFFSET UNITYSDK_OFFSET(0x1FB6D50)
#define CHARACTERFILTER__FILTER_B__37_0_OFFSET UNITYSDK_OFFSET(0x1FB6F20)

	inline static constexpr unsigned int CharacterFilter_TypeDefinitionIndex = 2918;

	class CharacterFilter : public Il2CppObject
	{
	public:
		CharacterFilterArmorType* ArmorFilter; // 0x10
		CharacterFilterBulletType* BulletFilter; // 0x18
		CharacterFilterCharacterStarGrade* CharacterStarGradeFilter; // 0x20
		CharacterFilterWeaponStarGrade* CharacterWeaponStarGradeFilter; // 0x28
		CharacterFilterFavorite* FavoriteFilter; // 0x30
		CharacterFilterSchool* SchoolFilter; // 0x38
		CharacterFilterTacticRange* TacticRangeFilter; // 0x40
		CharacterFilterTacticRole* TacticRoleFilter; // 0x48
		CharacterFilterWeaponType* WeaponTypeFilter; // 0x50
		CharacterFilterMemorial* MemorialFilter; // 0x58
		CharacterFilterGear* GearFilter; // 0x60
		CharacterFilterObscuration* ObscurationFilter; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTER_.CTOR_OFFSET))(nullptr);
		}

		CharacterFilter* get_Instance()
		{
			return ((CharacterFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void LoadCharacterCollectionFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTER_LOADCHARACTERCOLLECTIONFILTER_OFFSET))(nullptr);
		}

		::System::Void LoadMemorialFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTER_LOADMEMORIALFILTER_OFFSET))(nullptr);
		}

		::System::Void LoadAccountStudentFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTER_LOADACCOUNTSTUDENTFILTER_OFFSET))(nullptr);
		}

		::System::Void LoadCharacterIdCardFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTER_LOADCHARACTERIDCARDFILTER_OFFSET))(nullptr);
		}

		::System::Void ResetCharacterCollectionFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTER_RESETCHARACTERCOLLECTIONFILTER_OFFSET))(nullptr);
		}

		::System::Void ResetMemorialFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTER_RESETMEMORIALFILTER_OFFSET))(nullptr);
		}

		::System::Void ResetAccountStudentFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTER_RESETACCOUNTSTUDENTFILTER_OFFSET))(nullptr);
		}

		::System::Void SaveCharacterCollectionFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTER_SAVECHARACTERCOLLECTIONFILTER_OFFSET))(nullptr);
		}

		::System::Void SaveMemorialFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTER_SAVEMEMORIALFILTER_OFFSET))(nullptr);
		}

		::System::Void SaveAccountStudentFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTER_SAVEACCOUNTSTUDENTFILTER_OFFSET))(nullptr);
		}

		::System::Void SaveCharacterIdCardFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTER_SAVECHARACTERIDCARDFILTER_OFFSET))(nullptr);
		}

		::System::Boolean CharacterCollectionFilter(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTER_CHARACTERCOLLECTIONFILTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean CharacterMemorialFilter(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTER_CHARACTERMEMORIALFILTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean UIAccountStudentFilter(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTER_UIACCOUNTSTUDENTFILTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean CharacterCollectionFilterOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTER_CHARACTERCOLLECTIONFILTERON_OFFSET))(nullptr);
		}

		::System::Boolean CharacterMemorialFilterOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTER_CHARACTERMEMORIALFILTERON_OFFSET))(nullptr);
		}

		::System::Boolean UIAccountStudentFilterOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTER_UIACCOUNTSTUDENTFILTERON_OFFSET))(nullptr);
		}

		Il2CppObject* Filter(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTER_FILTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean Filter(CollectionUnitObjectBase* arg)
		{
			return ((::System::Boolean(*)(CollectionUnitObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTER_FILTER_OFFSET))(arg, nullptr);
		}

		::System::Void Restore()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTER_RESTORE_OFFSET))(nullptr);
		}

		::System::Boolean _Filter_b__37_0(CollectionUnitObjectBase* arg)
		{
			return ((::System::Boolean(*)(CollectionUnitObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERFILTER__FILTER_B__37_0_OFFSET))(arg, nullptr);
		}

	};

