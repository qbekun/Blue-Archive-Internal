#pragma once
#include "../../unitysdk.h"

#define MXFIELD_DIALOG_FIELDDIALOGSTARTDISPATCH_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xECDF70)
#define MXFIELD_DIALOG_FIELDDIALOGSTARTDISPATCH_GET_ONFINISHED_OFFSET UNITYSDK_OFFSET(0xECDF80)
#define MXFIELD_DIALOG_FIELDDIALOGSTARTDISPATCH_.CTOR_OFFSET UNITYSDK_OFFSET(0xECDF90)

namespace MXField::Dialog
{
	inline static constexpr unsigned int FieldDialogStartDispatch_TypeDefinitionIndex = 10922;

	class FieldDialogStartDispatch : public Il2CppObject
	{
	public:
		::System::Int64 _GroupId_k__BackingField; // 0x18
		::System::Action* _OnFinished_k__BackingField; // 0x20

		::System::Int64 get_GroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGSTARTDISPATCH_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Action* get_OnFinished()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGSTARTDISPATCH_GET_ONFINISHED_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int64 arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::System::Object*, ::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGSTARTDISPATCH_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

