#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_BASEDBSCHEMA_SET_ROWID_OFFSET UNITYSDK_OFFSET(0x19852A0)
#define MX_DATA_EXCEL_BASEDBSCHEMA_SET_BYTES_OFFSET UNITYSDK_OFFSET(0x19852B0)
#define MX_DATA_EXCEL_BASEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19852C0)
#define MX_DATA_EXCEL_BASEDBSCHEMA_GET_BYTES_OFFSET UNITYSDK_OFFSET(0x19852D0)
#define MX_DATA_EXCEL_BASEDBSCHEMA_GET_ROWID_OFFSET UNITYSDK_OFFSET(0x19852E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BaseDBSchema_TypeDefinitionIndex = 16536;

	class BaseDBSchema : public Il2CppObject
	{
	public:
		::System::Int32 _RowId_k__BackingField; // 0x10
		::Il2CppArray<::System::Object*>* _Bytes_k__BackingField; // 0x18

		::System::Void set_RowId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASEDBSCHEMA_SET_ROWID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Bytes(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASEDBSCHEMA_SET_BYTES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Bytes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASEDBSCHEMA_GET_BYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_RowId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BASEDBSCHEMA_GET_ROWID_OFFSET))(nullptr);
		}

	};
}

