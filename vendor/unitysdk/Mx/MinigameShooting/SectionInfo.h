#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace MX::MinigameShooting { class GroupInfo; }

#define MX_MINIGAMESHOOTING_SECTIONINFO_SET_GROUPDATA_OFFSET UNITYSDK_OFFSET(0x146B0A0)
#define MX_MINIGAMESHOOTING_SECTIONINFO_SET_POS_OFFSET UNITYSDK_OFFSET(0x146B0B0)
#define MX_MINIGAMESHOOTING_SECTIONINFO_GET_POS_OFFSET UNITYSDK_OFFSET(0x146B0C0)
#define MX_MINIGAMESHOOTING_SECTIONINFO_SET_GROUPINDEX_OFFSET UNITYSDK_OFFSET(0x146B0E0)
#define MX_MINIGAMESHOOTING_SECTIONINFO_SET_CAMERABOTTOM_OFFSET UNITYSDK_OFFSET(0x146B0F0)
#define MX_MINIGAMESHOOTING_SECTIONINFO_GET_CAMERATOP_OFFSET UNITYSDK_OFFSET(0x146B100)
#define MX_MINIGAMESHOOTING_SECTIONINFO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x146B110)
#define MX_MINIGAMESHOOTING_SECTIONINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x146BAA0)
#define MX_MINIGAMESHOOTING_SECTIONINFO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x146BAB0)
#define MX_MINIGAMESHOOTING_SECTIONINFO_GET_GROUPDATA_OFFSET UNITYSDK_OFFSET(0x146BAC0)
#define MX_MINIGAMESHOOTING_SECTIONINFO_PICKGROUPID_OFFSET UNITYSDK_OFFSET(0x146BAD0)
#define MX_MINIGAMESHOOTING_SECTIONINFO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x146BF90)
#define MX_MINIGAMESHOOTING_SECTIONINFO_SET_CAMERATOP_OFFSET UNITYSDK_OFFSET(0x146CD40)
#define MX_MINIGAMESHOOTING_SECTIONINFO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x146CD50)
#define MX_MINIGAMESHOOTING_SECTIONINFO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x146D010)
#define MX_MINIGAMESHOOTING_SECTIONINFO_GET_CAMERABOTTOM_OFFSET UNITYSDK_OFFSET(0x146D020)
#define MX_MINIGAMESHOOTING_SECTIONINFO_GET_SELECTEDGROUP_OFFSET UNITYSDK_OFFSET(0x146D030)
#define MX_MINIGAMESHOOTING_SECTIONINFO_GET_GROUPINDEX_OFFSET UNITYSDK_OFFSET(0x146D080)
#define MX_MINIGAMESHOOTING_SECTIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x146CCC0)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int SectionInfo_TypeDefinitionIndex = 15118;

	class SectionInfo : public Il2CppObject
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Single _CameraTop_k__BackingField; // 0x18
		::System::Single _CameraBottom_k__BackingField; // 0x1C
		::UnityEngine::Vector3* _Pos_k__BackingField; // 0x20
		Il2CppObject* _GroupData_k__BackingField; // 0x30
		::System::Int32 _GroupIndex_k__BackingField; // 0x38

		::System::Void set_GroupData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTIONINFO_SET_GROUPDATA_OFFSET))(arg, nullptr);
		}

		::System::Void set_Pos(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTIONINFO_SET_POS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_Pos()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTIONINFO_GET_POS_OFFSET))(nullptr);
		}

		::System::Void set_GroupIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTIONINFO_SET_GROUPINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_CameraBottom(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTIONINFO_SET_CAMERABOTTOM_OFFSET))(arg, nullptr);
		}

		::System::Single get_CameraTop()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTIONINFO_GET_CAMERATOP_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::MinigameShooting::SectionInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::MinigameShooting::SectionInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTIONINFO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTIONINFO_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTIONINFO_SET_NAME_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_GroupData()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTIONINFO_GET_GROUPDATA_OFFSET))(nullptr);
		}

		Il2CppObject* PickGroupId(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTIONINFO_PICKGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::MinigameShooting::SectionInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::MinigameShooting::SectionInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTIONINFO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_CameraTop(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTIONINFO_SET_CAMERATOP_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTIONINFO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTIONINFO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Single get_CameraBottom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTIONINFO_GET_CAMERABOTTOM_OFFSET))(nullptr);
		}

		::MX::MinigameShooting::GroupInfo* get_SelectedGroup()
		{
			return ((::MX::MinigameShooting::GroupInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTIONINFO_GET_SELECTEDGROUP_OFFSET))(nullptr);
		}

		::System::Int32 get_GroupIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTIONINFO_GET_GROUPINDEX_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SECTIONINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

