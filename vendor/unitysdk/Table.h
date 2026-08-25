#pragma once
#include "unitysdk.h"

#define TABLE_ONITEMREMOVED_OFFSET UNITYSDK_OFFSET(0x9FB1DC0)
#define TABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB1E40)
#define TABLE_GET_VISIBLECOLUMNS_OFFSET UNITYSDK_OFFSET(0x9FB1E90)
#define TABLE_ONITEMADDED_OFFSET UNITYSDK_OFFSET(0x9FB20D0)
#define TABLE_SETCOLUMNVISIBILITY_OFFSET UNITYSDK_OFFSET(0x9FB2150)
#define TABLE_GETCOLUMNVISIBILITY_OFFSET UNITYSDK_OFFSET(0x9FB2190)

	inline static constexpr unsigned int Table_TypeDefinitionIndex = 33948;

	class Table : public Il2CppObject
	{
	public:
		::System::Boolean isReadOnly; // 0x50
		::Il2CppArray<::System::Object*>* m_Header; // 0x58

		::System::Void OnItemRemoved(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TABLE_ONITEMREMOVED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TABLE_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_VisibleColumns()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TABLE_GET_VISIBLECOLUMNS_OFFSET))(nullptr);
		}

		::System::Void OnItemAdded(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TABLE_ONITEMADDED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetColumnVisibility(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TABLE_SETCOLUMNVISIBILITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean GetColumnVisibility(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TABLE_GETCOLUMNVISIBILITY_OFFSET))(arg, nullptr);
		}

	};

