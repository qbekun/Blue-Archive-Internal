#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class FieldWorldMapButtonType; }
namespace MXField::Shared::Condition { class ConditionElement; }
namespace MXField::Shared::Condition { class IConditionChecker; }
namespace FlatData { class FieldWorldMapZoneExcel; }

#define MXFIELD_SHARED_DATA_FIELDWORLDMAPZONEINFO_GET_NEWTAGDISPLAY_OFFSET UNITYSDK_OFFSET(0xE80A40)
#define MXFIELD_SHARED_DATA_FIELDWORLDMAPZONEINFO_GETNAME_OFFSET UNITYSDK_OFFSET(0xE80A50)
#define MXFIELD_SHARED_DATA_FIELDWORLDMAPZONEINFO_GET_OPENCONDITION_OFFSET UNITYSDK_OFFSET(0xE80AF0)
#define MXFIELD_SHARED_DATA_FIELDWORLDMAPZONEINFO_GET_NAMELOCALIZEHASH_OFFSET UNITYSDK_OFFSET(0xE80B00)
#define MXFIELD_SHARED_DATA_FIELDWORLDMAPZONEINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xE80B10)
#define MXFIELD_SHARED_DATA_FIELDWORLDMAPZONEINFO_GET_BUTTONTYPE_OFFSET UNITYSDK_OFFSET(0xE80B20)
#define MXFIELD_SHARED_DATA_FIELDWORLDMAPZONEINFO_ISCLEAR_OFFSET UNITYSDK_OFFSET(0xE80B30)
#define MXFIELD_SHARED_DATA_FIELDWORLDMAPZONEINFO_ISOPEN_OFFSET UNITYSDK_OFFSET(0xE80C30)
#define MXFIELD_SHARED_DATA_FIELDWORLDMAPZONEINFO_GET_SCENEID_OFFSET UNITYSDK_OFFSET(0xE80CF0)
#define MXFIELD_SHARED_DATA_FIELDWORLDMAPZONEINFO_GET_CLOSECONDITION_OFFSET UNITYSDK_OFFSET(0xE80D00)
#define MXFIELD_SHARED_DATA_FIELDWORLDMAPZONEINFO_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xE80CA0)
#define MXFIELD_SHARED_DATA_FIELDWORLDMAPZONEINFO_GET_INTERACTIONID_OFFSET UNITYSDK_OFFSET(0xE80D10)
#define MXFIELD_SHARED_DATA_FIELDWORLDMAPZONEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xE80D20)
#define MXFIELD_SHARED_DATA_FIELDWORLDMAPZONEINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0xE80E90)
#define MXFIELD_SHARED_DATA_FIELDWORLDMAPZONEINFO_GET_DATEID_OFFSET UNITYSDK_OFFSET(0xE80EA0)

namespace MXField::Shared::Data
{
	inline static constexpr unsigned int FieldWorldMapZoneInfo_TypeDefinitionIndex = 10615;

	class FieldWorldMapZoneInfo : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::Int64 _GroupId_k__BackingField; // 0x18
		::System::Int64 _DateId_k__BackingField; // 0x20
		::System::Int64 _SceneId_k__BackingField; // 0x28
		::System::Int64 _InteractionId_k__BackingField; // 0x30
		::FlatData::FieldWorldMapButtonType* _ButtonType_k__BackingField; // 0x38
		::MXField::Shared::Condition::ConditionElement* _OpenCondition_k__BackingField; // 0x40
		::MXField::Shared::Condition::ConditionElement* _CloseCondition_k__BackingField; // 0x48
		::System::UInt32 _NameLocalizeHash_k__BackingField; // 0x50
		::System::Boolean _NewTagDisplay_k__BackingField; // 0x54

		::System::Boolean get_NewTagDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDWORLDMAPZONEINFO_GET_NEWTAGDISPLAY_OFFSET))(nullptr);
		}

		::System::String* GetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDWORLDMAPZONEINFO_GETNAME_OFFSET))(nullptr);
		}

		::MXField::Shared::Condition::ConditionElement* get_OpenCondition()
		{
			return ((::MXField::Shared::Condition::ConditionElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDWORLDMAPZONEINFO_GET_OPENCONDITION_OFFSET))(nullptr);
		}

		::System::UInt32 get_NameLocalizeHash()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDWORLDMAPZONEINFO_GET_NAMELOCALIZEHASH_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDWORLDMAPZONEINFO_GET_GROUPID_OFFSET))(nullptr);
		}

		::FlatData::FieldWorldMapButtonType* get_ButtonType()
		{
			return ((::FlatData::FieldWorldMapButtonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDWORLDMAPZONEINFO_GET_BUTTONTYPE_OFFSET))(nullptr);
		}

		::System::Boolean IsClear(::MXField::Shared::Condition::IConditionChecker* arg)
		{
			return ((::System::Boolean(*)(::MXField::Shared::Condition::IConditionChecker*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDWORLDMAPZONEINFO_ISCLEAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsOpen(::MXField::Shared::Condition::IConditionChecker* arg)
		{
			return ((::System::Boolean(*)(::MXField::Shared::Condition::IConditionChecker*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDWORLDMAPZONEINFO_ISOPEN_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SceneId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDWORLDMAPZONEINFO_GET_SCENEID_OFFSET))(nullptr);
		}

		::MXField::Shared::Condition::ConditionElement* get_CloseCondition()
		{
			return ((::MXField::Shared::Condition::ConditionElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDWORLDMAPZONEINFO_GET_CLOSECONDITION_OFFSET))(nullptr);
		}

		::System::Boolean IsLocked(::MXField::Shared::Condition::IConditionChecker* arg)
		{
			return ((::System::Boolean(*)(::MXField::Shared::Condition::IConditionChecker*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDWORLDMAPZONEINFO_ISLOCKED_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_InteractionId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDWORLDMAPZONEINFO_GET_INTERACTIONID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::FlatData::FieldWorldMapZoneExcel* arg)
		{
			((::System::Void(*)(::FlatData::FieldWorldMapZoneExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDWORLDMAPZONEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDWORLDMAPZONEINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_DateId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDWORLDMAPZONEINFO_GET_DATEID_OFFSET))(nullptr);
		}

	};
}

