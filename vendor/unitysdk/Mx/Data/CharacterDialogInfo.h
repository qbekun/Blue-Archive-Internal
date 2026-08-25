#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class CharacterDialogExcel; }
namespace FlatData { class DialogType; }
namespace FlatData { class DialogCondition; }
namespace FlatData { class Language; }
namespace FlatData { class CVCollectionType; }
namespace FlatData { class Anniversary; }
namespace FlatData { class DialogCategory; }
namespace FlatData { class Nation; }

#define MX_DATA_CHARACTERDIALOGINFO_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1837EB0)
#define MX_DATA_CHARACTERDIALOGINFO_GET_DIALOGTYPE_OFFSET UNITYSDK_OFFSET(0x1837EC0)
#define MX_DATA_CHARACTERDIALOGINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1837ED0)
#define MX_DATA_CHARACTERDIALOGINFO_GET_UNLOCKEQUIPWEAPON_OFFSET UNITYSDK_OFFSET(0x1837F00)
#define MX_DATA_CHARACTERDIALOGINFO_GET_ACTIONNAME_OFFSET UNITYSDK_OFFSET(0x1837F10)
#define MX_DATA_CHARACTERDIALOGINFO_GET_POSX_OFFSET UNITYSDK_OFFSET(0x1837F20)
#define MX_DATA_CHARACTERDIALOGINFO_GET_POSY_OFFSET UNITYSDK_OFFSET(0x1837F30)
#define MX_DATA_CHARACTERDIALOGINFO_GET_COLLECTIONVISIBLE_OFFSET UNITYSDK_OFFSET(0x1837F40)
#define MX_DATA_CHARACTERDIALOGINFO_GET_DIALOGCONDITION_OFFSET UNITYSDK_OFFSET(0x1837F50)
#define MX_DATA_CHARACTERDIALOGINFO_LOCALIZE_OFFSET UNITYSDK_OFFSET(0x1837F60)
#define MX_DATA_CHARACTERDIALOGINFO_GET_VOICEIDS_OFFSET UNITYSDK_OFFSET(0x1837FA0)
#define MX_DATA_CHARACTERDIALOGINFO_GET_COSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1838070)
#define MX_DATA_CHARACTERDIALOGINFO_GET_ISTEEN_OFFSET UNITYSDK_OFFSET(0x1838080)
#define MX_DATA_CHARACTERDIALOGINFO_GET_UNLOCKFAVORRANK_OFFSET UNITYSDK_OFFSET(0x1838090)
#define MX_DATA_CHARACTERDIALOGINFO_GET_ANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x18380A0)
#define MX_DATA_CHARACTERDIALOGINFO_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x18380B0)
#define MX_DATA_CHARACTERDIALOGINFO_GET_CVCOLLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x18380C0)
#define MX_DATA_CHARACTERDIALOGINFO_GET_APPLYPOSITION_OFFSET UNITYSDK_OFFSET(0x18380D0)
#define MX_DATA_CHARACTERDIALOGINFO_GET_ANNIVERSARY_OFFSET UNITYSDK_OFFSET(0x18380E0)
#define MX_DATA_CHARACTERDIALOGINFO_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x18380F0)
#define MX_DATA_CHARACTERDIALOGINFO_GET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x1838100)
#define MX_DATA_CHARACTERDIALOGINFO_GET_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1838110)
#define MX_DATA_CHARACTERDIALOGINFO_DURATION_OFFSET UNITYSDK_OFFSET(0x1838120)
#define MX_DATA_CHARACTERDIALOGINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1838140)
#define MX_DATA_CHARACTERDIALOGINFO_GET_LOCALIZECVGROUP_OFFSET UNITYSDK_OFFSET(0x1838150)

namespace MX::Data
{
	inline static constexpr unsigned int CharacterDialogInfo_TypeDefinitionIndex = 15746;

	class CharacterDialogInfo : public Il2CppObject
	{
	public:
		::MX::Data::Excel::CharacterDialogExcel* Excel; // 0x10

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFO_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::FlatData::DialogType* get_DialogType()
		{
			return (return (::FlatData::DialogType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFO_GET_DIALOGTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::CharacterDialogExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterDialogExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UnlockEquipWeapon()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFO_GET_UNLOCKEQUIPWEAPON_OFFSET))(nullptr);
		}

		::System::String* get_ActionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFO_GET_ACTIONNAME_OFFSET))(nullptr);
		}

		::System::Single get_PosX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFO_GET_POSX_OFFSET))(nullptr);
		}

		::System::Single get_PosY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFO_GET_POSY_OFFSET))(nullptr);
		}

		::System::Boolean get_CollectionVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFO_GET_COLLECTIONVISIBLE_OFFSET))(nullptr);
		}

		::FlatData::DialogCondition* get_DialogCondition()
		{
			return (return (::FlatData::DialogCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFO_GET_DIALOGCONDITION_OFFSET))(nullptr);
		}

		::System::String* Localize(::FlatData::Language* arg)
		{
			return (return (::System::String*(*)(::FlatData::Language*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFO_LOCALIZE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_VoiceIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFO_GET_VOICEIDS_OFFSET))(nullptr);
		}

		::System::Int64 get_CostumeUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFO_GET_COSTUMEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsTeen()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFO_GET_ISTEEN_OFFSET))(nullptr);
		}

		::System::Int64 get_UnlockFavorRank()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFO_GET_UNLOCKFAVORRANK_OFFSET))(nullptr);
		}

		::System::String* get_AnimationName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFO_GET_ANIMATIONNAME_OFFSET))(nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFO_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::FlatData::CVCollectionType* get_CVCollectionType()
		{
			return (return (::FlatData::CVCollectionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFO_GET_CVCOLLECTIONTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyPosition()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFO_GET_APPLYPOSITION_OFFSET))(nullptr);
		}

		::FlatData::Anniversary* get_Anniversary()
		{
			return (return (::FlatData::Anniversary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFO_GET_ANNIVERSARY_OFFSET))(nullptr);
		}

		::System::String* get_EndDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFO_GET_ENDDATE_OFFSET))(nullptr);
		}

		::System::String* get_StartDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFO_GET_STARTDATE_OFFSET))(nullptr);
		}

		::FlatData::DialogCategory* get_DialogCategory()
		{
			return (return (::FlatData::DialogCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFO_GET_DIALOGCATEGORY_OFFSET))(nullptr);
		}

		::System::Int64 Duration(::FlatData::Nation* arg)
		{
			return (return (::System::Int64(*)(::FlatData::Nation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFO_DURATION_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFO_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeCVGroup()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFO_GET_LOCALIZECVGROUP_OFFSET))(nullptr);
		}

	};
}

