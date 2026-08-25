#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_PRODUCTSELECTSAVEDATA_FINDSAVEDCOMPONENTID_OFFSET UNITYSDK_OFFSET(0x1D21280)
#define MX_SAVEDATA_PRODUCTSELECTSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D21390)
#define MX_SAVEDATA_PRODUCTSELECTSAVEDATA_SAVE_OFFSET UNITYSDK_OFFSET(0x1D21450)
#define MX_SAVEDATA_PRODUCTSELECTSAVEDATA_GET_CACHE_OFFSET UNITYSDK_OFFSET(0x1D21670)
#define MX_SAVEDATA_PRODUCTSELECTSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D21680)
#define MX_SAVEDATA_PRODUCTSELECTSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D21700)
#define MX_SAVEDATA_PRODUCTSELECTSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D21B50)
#define MX_SAVEDATA_PRODUCTSELECTSAVEDATA_SET_CACHE_OFFSET UNITYSDK_OFFSET(0x1D22060)

namespace MX::SaveData
{
	inline static constexpr unsigned int ProductSelectSaveData_TypeDefinitionIndex = 19992;

	class ProductSelectSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* dic; // 0x10
		ProductSelectionGroupSaveData* _cache_k__BackingField; // 0x18

		::System::Boolean FindSavedComponentId(::System::Int64 arg, ::System::Int32 arg, int64_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int32, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_PRODUCTSELECTSAVEDATA_FINDSAVEDCOMPONENTID_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_PRODUCTSELECTSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Void Save(::System::Int64 arg, ::System::Int32 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_PRODUCTSELECTSAVEDATA_SAVE_OFFSET))(arg, arg, arg, nullptr);
		}

		ProductSelectionGroupSaveData* get_cache()
		{
			return (return (ProductSelectionGroupSaveData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_PRODUCTSELECTSAVEDATA_GET_CACHE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_PRODUCTSELECTSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_PRODUCTSELECTSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_PRODUCTSELECTSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void set_cache(ProductSelectionGroupSaveData* arg)
		{
			((::System::Void(*)(ProductSelectionGroupSaveData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_PRODUCTSELECTSAVEDATA_SET_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

