#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::Data { class FieldDialogNode; }

#define MXFIELD_SHARED_DATA_FIELDDIALOGINFO_ADDNODE_OFFSET UNITYSDK_OFFSET(0xE75870)
#define MXFIELD_SHARED_DATA_FIELDDIALOGINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xE75A90)
#define MXFIELD_SHARED_DATA_FIELDDIALOGINFO_GET_HIDEUI_OFFSET UNITYSDK_OFFSET(0xE75AA0)
#define MXFIELD_SHARED_DATA_FIELDDIALOGINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xE75AB0)
#define MXFIELD_SHARED_DATA_FIELDDIALOGINFO_GET_ISINTERACTIONDIALOG_OFFSET UNITYSDK_OFFSET(0xE75BA0)
#define MXFIELD_SHARED_DATA_FIELDDIALOGINFO_GET_TARGETCOUNT_OFFSET UNITYSDK_OFFSET(0xE75BB0)

namespace MXField::Shared::Data
{
	inline static constexpr unsigned int FieldDialogInfo_TypeDefinitionIndex = 10563;

	class FieldDialogInfo : public Il2CppObject
	{
	public:
		Il2CppObject* targetIndices; // 0x10
		Il2CppObject* DialogNodes; // 0x18
		::System::Int64 _GroupId_k__BackingField; // 0x20
		::System::Boolean _IsInteractionDialog_k__BackingField; // 0x28
		::System::Boolean _HideUI_k__BackingField; // 0x29

		::System::Void AddNode(::MXField::Shared::Data::FieldDialogNode* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldDialogNode*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDIALOGINFO_ADDNODE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDIALOGINFO_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Boolean get_HideUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDIALOGINFO_GET_HIDEUI_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDIALOGINFO_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean get_IsInteractionDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDIALOGINFO_GET_ISINTERACTIONDIALOG_OFFSET))(nullptr);
		}

		::System::Int32 get_TargetCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_DATA_FIELDDIALOGINFO_GET_TARGETCOUNT_OFFSET))(nullptr);
		}

	};
}

