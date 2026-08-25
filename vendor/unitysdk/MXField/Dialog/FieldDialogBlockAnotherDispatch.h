#pragma once
#include "../../unitysdk.h"

#define MXFIELD_DIALOG_FIELDDIALOGBLOCKANOTHERDISPATCH_GET_BLOCK_OFFSET UNITYSDK_OFFSET(0xECDFD0)
#define MXFIELD_DIALOG_FIELDDIALOGBLOCKANOTHERDISPATCH_.CTOR_OFFSET UNITYSDK_OFFSET(0xECDFE0)
#define MXFIELD_DIALOG_FIELDDIALOGBLOCKANOTHERDISPATCH_GET_TARGETS_OFFSET UNITYSDK_OFFSET(0xECE020)

namespace MXField::Dialog
{
	inline static constexpr unsigned int FieldDialogBlockAnotherDispatch_TypeDefinitionIndex = 10923;

	class FieldDialogBlockAnotherDispatch : public Il2CppObject
	{
	public:
		::System::Boolean _Block_k__BackingField; // 0x18
		Il2CppObject* _Targets_k__BackingField; // 0x20

		::System::Boolean get_Block()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBLOCKANOTHERDISPATCH_GET_BLOCK_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Boolean arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Object*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBLOCKANOTHERDISPATCH_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* get_Targets()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIALOG_FIELDDIALOGBLOCKANOTHERDISPATCH_GET_TARGETS_OFFSET))(nullptr);
		}

	};
}

