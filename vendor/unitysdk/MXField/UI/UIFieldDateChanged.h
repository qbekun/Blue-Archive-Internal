#pragma once
#include "../../unitysdk.h"

class UILabel;
class UITweener;
namespace MXField::Shared::Data { class FieldDateInfo; }

#define MXFIELD_UI_UIFIELDDATECHANGED_ONOPENED_OFFSET UNITYSDK_OFFSET(0xE85F00)
#define MXFIELD_UI_UIFIELDDATECHANGED_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE86010)
#define MXFIELD_UI_UIFIELDDATECHANGED_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xE860C0)
#define MXFIELD_UI_UIFIELDDATECHANGED_CODIRECTING_OFFSET UNITYSDK_OFFSET(0xE85FA0)
#define MXFIELD_UI_UIFIELDDATECHANGED_.CTOR_OFFSET UNITYSDK_OFFSET(0xE86140)
#define MXFIELD_UI_UIFIELDDATECHANGED_GET_DATEID_OFFSET UNITYSDK_OFFSET(0xE861B0)
#define MXFIELD_UI_UIFIELDDATECHANGED_SET_DATEID_OFFSET UNITYSDK_OFFSET(0xE861C0)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldDateChanged_TypeDefinitionIndex = 10647;

	class UIFieldDateChanged : public Il2CppObject
	{
	public:
		UILabel* dateLabel; // 0xE8
		UITweener* tweener; // 0xF0
		::System::Int64 _DateId_k__BackingField; // 0xF8

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDATECHANGED_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MXField::Shared::Data::FieldDateInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldDateInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDATECHANGED_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDATECHANGED_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoDirecting()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDATECHANGED_CODIRECTING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDATECHANGED_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_DateId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDATECHANGED_GET_DATEID_OFFSET))(nullptr);
		}

		::System::Void set_DateId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDDATECHANGED_SET_DATEID_OFFSET))(arg, nullptr);
		}

	};
}

