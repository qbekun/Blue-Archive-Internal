#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class ItemDataAsset; }
namespace MXUnderCover { class SkillDataAsset; }
class UCPersonalityType;

#define MXUNDERCOVER_ITEMCONTAINERASSET_APPLYITEMASSETDELETED_OFFSET UNITYSDK_OFFSET(0xDA6D40)
#define MXUNDERCOVER_ITEMCONTAINERASSET_REMOVEITEMASSET_OFFSET UNITYSDK_OFFSET(0xDA6F30)
#define MXUNDERCOVER_ITEMCONTAINERASSET_FINDITEMDATA_OFFSET UNITYSDK_OFFSET(0xDA6F90)
#define MXUNDERCOVER_ITEMCONTAINERASSET_ADDITEMASSET_OFFSET UNITYSDK_OFFSET(0xDA70C0)
#define MXUNDERCOVER_ITEMCONTAINERASSET_ADDSKILLASSET_OFFSET UNITYSDK_OFFSET(0xDA7160)
#define MXUNDERCOVER_ITEMCONTAINERASSET_FINDSKILLDATASBYPERSONALITYOWNERTYPE_OFFSET UNITYSDK_OFFSET(0xDA7200)
#define MXUNDERCOVER_ITEMCONTAINERASSET_GETITEMS_OFFSET UNITYSDK_OFFSET(0xDA72D0)
#define MXUNDERCOVER_ITEMCONTAINERASSET_SETNULLITEMASSET_OFFSET UNITYSDK_OFFSET(0xDA72E0)
#define MXUNDERCOVER_ITEMCONTAINERASSET_FINDSKILLDATASBYOWNERTYPEINCLUDEALL_OFFSET UNITYSDK_OFFSET(0xDA7350)
#define MXUNDERCOVER_ITEMCONTAINERASSET_REMOVESKILLASSET_OFFSET UNITYSDK_OFFSET(0xDA7420)
#define MXUNDERCOVER_ITEMCONTAINERASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xDA7470)
#define MXUNDERCOVER_ITEMCONTAINERASSET_FINDSKILLDATA_OFFSET UNITYSDK_OFFSET(0xDA7540)
#define MXUNDERCOVER_ITEMCONTAINERASSET_REMOVEALLSKILLNULLELEMENT_OFFSET UNITYSDK_OFFSET(0xDA6E10)

namespace MXUnderCover
{
	inline static constexpr unsigned int ItemContainerAsset_TypeDefinitionIndex = 9867;

	class ItemContainerAsset : public Il2CppObject
	{
	public:
		Il2CppObject* items; // 0x18
		Il2CppObject* stageSkillDatas; // 0x20

		::System::Void ApplyItemAssetDeleted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ITEMCONTAINERASSET_APPLYITEMASSETDELETED_OFFSET))(nullptr);
		}

		::System::Void RemoveItemAsset(::MXUnderCover::ItemDataAsset* arg)
		{
			((::System::Void(*)(::MXUnderCover::ItemDataAsset*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ITEMCONTAINERASSET_REMOVEITEMASSET_OFFSET))(arg, nullptr);
		}

		::System::Boolean FindItemData(::System::String* str, ::MXUnderCover::ItemDataAsset&* arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::MXUnderCover::ItemDataAsset&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ITEMCONTAINERASSET_FINDITEMDATA_OFFSET))(str, arg, nullptr);
		}

		::System::Void AddItemAsset(::MXUnderCover::ItemDataAsset* arg)
		{
			((::System::Void(*)(::MXUnderCover::ItemDataAsset*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ITEMCONTAINERASSET_ADDITEMASSET_OFFSET))(arg, nullptr);
		}

		::System::Void AddSkillAsset(::MXUnderCover::SkillDataAsset* arg)
		{
			((::System::Void(*)(::MXUnderCover::SkillDataAsset*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ITEMCONTAINERASSET_ADDSKILLASSET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindSkillDatasByPersonalityOwnerType(UCPersonalityType* arg)
		{
			return ((Il2CppObject*(*)(UCPersonalityType*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ITEMCONTAINERASSET_FINDSKILLDATASBYPERSONALITYOWNERTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetItems()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ITEMCONTAINERASSET_GETITEMS_OFFSET))(nullptr);
		}

		::System::Void SetNullItemAsset(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ITEMCONTAINERASSET_SETNULLITEMASSET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindSkillDatasByOwnerTypeIncludeAll(UCPersonalityType* arg)
		{
			return ((Il2CppObject*(*)(UCPersonalityType*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ITEMCONTAINERASSET_FINDSKILLDATASBYOWNERTYPEINCLUDEALL_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveSkillAsset(::MXUnderCover::SkillDataAsset* arg)
		{
			((::System::Void(*)(::MXUnderCover::SkillDataAsset*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ITEMCONTAINERASSET_REMOVESKILLASSET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ITEMCONTAINERASSET_.CTOR_OFFSET))(nullptr);
		}

		::MXUnderCover::SkillDataAsset* FindSkillData(::MXUnderCover::ItemDataAsset* arg)
		{
			return ((::MXUnderCover::SkillDataAsset*(*)(::MXUnderCover::ItemDataAsset*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ITEMCONTAINERASSET_FINDSKILLDATA_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveAllSkillNullElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ITEMCONTAINERASSET_REMOVEALLSKILLNULLELEMENT_OFFSET))(nullptr);
		}

	};
}

