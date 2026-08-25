#pragma once
#include "../../unitysdk.h"

namespace FlatData { class Nation; }
namespace FlatData { class CVCollectionType; }
namespace FlatData { class DialogCategory; }
namespace FlatData { class DialogType; }
namespace FlatData { class Language; }
namespace FlatData { class DialogCondition; }

#define MX_DATA_CHARACTERDIALOGINFOBASE_DURATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_CHARACTERDIALOGINFOBASE_GET_ANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_CHARACTERDIALOGINFOBASE_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_CHARACTERDIALOGINFOBASE_GET_CVCOLLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_CHARACTERDIALOGINFOBASE_GET_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_CHARACTERDIALOGINFOBASE_GET_DIALOGTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_CHARACTERDIALOGINFOBASE_GET_COLLECTIONVISIBLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_CHARACTERDIALOGINFOBASE_LOCALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_CHARACTERDIALOGINFOBASE_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_CHARACTERDIALOGINFOBASE_GET_COSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_CHARACTERDIALOGINFOBASE_GET_LOCALIZECVGROUP_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_CHARACTERDIALOGINFOBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1837500)
#define MX_DATA_CHARACTERDIALOGINFOBASE_GET_VOICEIDS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_CHARACTERDIALOGINFOBASE_GET_ACTIONNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_CHARACTERDIALOGINFOBASE_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_CHARACTERDIALOGINFOBASE_GET_DIALOGCONDITION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Data
{
	inline static constexpr unsigned int CharacterDialogInfoBase_TypeDefinitionIndex = 15747;

	class CharacterDialogInfoBase : public Il2CppObject
	{
	public:
		::System::Int64 Duration(::FlatData::Nation* arg)
		{
			return (return (::System::Int64(*)(::FlatData::Nation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFOBASE_DURATION_OFFSET))(arg, nullptr);
		}

		::System::String* get_AnimationName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFOBASE_GET_ANIMATIONNAME_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFOBASE_GET_GROUPID_OFFSET))(nullptr);
		}

		::FlatData::CVCollectionType* get_CVCollectionType()
		{
			return (return (::FlatData::CVCollectionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFOBASE_GET_CVCOLLECTIONTYPE_OFFSET))(nullptr);
		}

		::FlatData::DialogCategory* get_DialogCategory()
		{
			return (return (::FlatData::DialogCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFOBASE_GET_DIALOGCATEGORY_OFFSET))(nullptr);
		}

		::FlatData::DialogType* get_DialogType()
		{
			return (return (::FlatData::DialogType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFOBASE_GET_DIALOGTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_CollectionVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFOBASE_GET_COLLECTIONVISIBLE_OFFSET))(nullptr);
		}

		::System::String* Localize(::FlatData::Language* arg)
		{
			return (return (::System::String*(*)(::FlatData::Language*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFOBASE_LOCALIZE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFOBASE_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Int64 get_CostumeUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFOBASE_GET_COSTUMEUNIQUEID_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeCVGroup()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFOBASE_GET_LOCALIZECVGROUP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFOBASE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_VoiceIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFOBASE_GET_VOICEIDS_OFFSET))(nullptr);
		}

		::System::String* get_ActionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFOBASE_GET_ACTIONNAME_OFFSET))(nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFOBASE_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::FlatData::DialogCondition* get_DialogCondition()
		{
			return (return (::FlatData::DialogCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CHARACTERDIALOGINFOBASE_GET_DIALOGCONDITION_OFFSET))(nullptr);
		}

	};
}

