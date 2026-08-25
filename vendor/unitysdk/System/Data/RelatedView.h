#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_RELATEDVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x976C970)
#define SYSTEM_DATA_RELATEDVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x976CAD0)
#define SYSTEM_DATA_RELATEDVIEW_GETPARENTVALUES_OFFSET UNITYSDK_OFFSET(0x976CC20)
#define SYSTEM_DATA_RELATEDVIEW_INVOKE_OFFSET UNITYSDK_OFFSET(0x976CCC0)
#define SYSTEM_DATA_RELATEDVIEW_GETFILTER_OFFSET UNITYSDK_OFFSET(0x976CE40)
#define SYSTEM_DATA_RELATEDVIEW_ADDNEW_OFFSET UNITYSDK_OFFSET(0x976CE50)
#define SYSTEM_DATA_RELATEDVIEW_SETINDEX_OFFSET UNITYSDK_OFFSET(0x976CEB0)

namespace System::Data
{
	inline static constexpr unsigned int RelatedView_TypeDefinitionIndex = 32288;

	class RelatedView : public Il2CppObject
	{
	public:
		Il2CppObject* _parentKey; // 0xD0
		::System::Data::DataKey* _childKey; // 0xE0
		::System::Data::DataRowView* _parentRowView; // 0xE8
		::Il2CppArray<::System::Object*>* _filterValues; // 0xF0

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RELATEDVIEW_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Data::DataRowView* arg, ::System::Data::DataKey* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Data::DataRowView*, ::System::Data::DataKey*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RELATEDVIEW_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetParentValues()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RELATEDVIEW_GETPARENTVALUES_OFFSET))(nullptr);
		}

		::System::Boolean Invoke(::System::Data::DataRow* arg, ::System::Data::DataRowVersion* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::DataRow*, ::System::Data::DataRowVersion*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RELATEDVIEW_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Data::IFilter* GetFilter()
		{
			return (return (::System::Data::IFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RELATEDVIEW_GETFILTER_OFFSET))(nullptr);
		}

		::System::Data::DataRowView* AddNew()
		{
			return (return (::System::Data::DataRowView*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RELATEDVIEW_ADDNEW_OFFSET))(nullptr);
		}

		::System::Void SetIndex(::System::String* str, ::System::Data::DataViewRowState* arg, ::System::Data::IFilter* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Data::DataViewRowState*, ::System::Data::IFilter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RELATEDVIEW_SETINDEX_OFFSET))(str, arg, arg, nullptr);
		}

	};
}

