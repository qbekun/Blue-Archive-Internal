#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class FieldDialogType; }
namespace FlatData { class CharacterDialogFieldExcel; }

#define MXFIELD_SHARED_DATA_FIELDDIALOGNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE75BF0)
#define MXFIELD_SHARED_DATA_FIELDDIALOGNODE_GET_MOTIONNAME_OFFSET UNITYSDK_OFFSET(0xE75DA0)
#define MXFIELD_SHARED_DATA_FIELDDIALOGNODE_GET_TEXT_OFFSET UNITYSDK_OFFSET(0xE75DB0)
#define MXFIELD_SHARED_DATA_FIELDDIALOGNODE_GET_DIALOGTYPE_OFFSET UNITYSDK_OFFSET(0xE75DC0)
#define MXFIELD_SHARED_DATA_FIELDDIALOGNODE_GET_TARGETINDEX_OFFSET UNITYSDK_OFFSET(0xE75DD0)
#define MXFIELD_SHARED_DATA_FIELDDIALOGNODE_GET_PHASE_OFFSET UNITYSDK_OFFSET(0xE75DE0)
#define MXFIELD_SHARED_DATA_FIELDDIALOGNODE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xE75DF0)

namespace MXField::Shared::Data
{
	inline static constexpr unsigned int FieldDialogNode_TypeDefinitionIndex = 10564;

	class FieldDialogNode : public Il2CppObject
	{
	public:
		::FlatData::FieldDialogType* _DialogType_k__BackingField; // 0x10
		::System::Int64 _Duration_k__BackingField; // 0x18
		::System::String* _Text_k__BackingField; // 0x20
		::System::Int64 _Phase_k__BackingField; // 0x28
		::System::Int32 _TargetIndex_k__BackingField; // 0x30
		::System::String* _MotionName_k__BackingField; // 0x38

		::System::Void .ctor(::FlatData::CharacterDialogFieldExcel* arg)
		{
			((::System::Void(*)(::FlatData::CharacterDialogFieldExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDIALOGNODE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_MotionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDIALOGNODE_GET_MOTIONNAME_OFFSET))(nullptr);
		}

		::System::String* get_Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDIALOGNODE_GET_TEXT_OFFSET))(nullptr);
		}

		::FlatData::FieldDialogType* get_DialogType()
		{
			return ((::FlatData::FieldDialogType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDIALOGNODE_GET_DIALOGTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_TargetIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDIALOGNODE_GET_TARGETINDEX_OFFSET))(nullptr);
		}

		::System::Int64 get_Phase()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDIALOGNODE_GET_PHASE_OFFSET))(nullptr);
		}

		::System::Int64 get_Duration()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDIALOGNODE_GET_DURATION_OFFSET))(nullptr);
		}

	};
}

