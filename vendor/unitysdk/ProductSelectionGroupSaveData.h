#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class ProductSelectExcel; }

#define PRODUCTSELECTIONGROUPSAVEDATA_ADD_OFFSET UNITYSDK_OFFSET(0x1D21610)
#define PRODUCTSELECTIONGROUPSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D21590)
#define PRODUCTSELECTIONGROUPSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D21960)
#define PRODUCTSELECTIONGROUPSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D21DD0)

	inline static constexpr unsigned int ProductSelectionGroupSaveData_TypeDefinitionIndex = 19991;

	class ProductSelectionGroupSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* ProductSelectionGroupDic; // 0x10

		::System::Void Add(::System::Int32 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + PRODUCTSELECTIONGROUPSAVEDATA_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PRODUCTSELECTIONGROUPSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PRODUCTSELECTIONGROUPSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Validate(::MX::Data::Excel::ProductSelectExcel* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::ProductSelectExcel*, ::PVOID))((::PBYTE)hIl2Cpp + PRODUCTSELECTIONGROUPSAVEDATA_VALIDATE_OFFSET))(arg, nullptr);
		}

	};

