#pragma once
#include "unitysdk.h"

namespace FlatData { class ItemCategory; }
namespace FlatData { class Tag; }
class ItemCategoryWrapper;
namespace MX::Data::Excel { class ItemExcel; }

#define ITEMCATEGORYWRAPPER_GET_SUBCATEGORYSTRING_OFFSET UNITYSDK_OFFSET(0x1FCD4E0)
#define ITEMCATEGORYWRAPPER_GET_ISMATERIALSUBCATEGORY_OFFSET UNITYSDK_OFFSET(0x1FCD580)
#define ITEMCATEGORYWRAPPER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FCD590)
#define ITEMCATEGORYWRAPPER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FCD5B0)
#define ITEMCATEGORYWRAPPER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FCD630)
#define ITEMCATEGORYWRAPPER_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1FCD6A0)

	inline static constexpr unsigned int ItemCategoryWrapper_TypeDefinitionIndex = 2992;

	class ItemCategoryWrapper : public Il2CppObject
	{
	public:
		::FlatData::ItemCategory* Category; // 0x10
		::FlatData::Tag* SubCategory; // 0x14

		::System::String* get_SubCategoryString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMCATEGORYWRAPPER_GET_SUBCATEGORYSTRING_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMaterialSubCategory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMCATEGORYWRAPPER_GET_ISMATERIALSUBCATEGORY_OFFSET))(nullptr);
		}

		::System::Boolean Equals(ItemCategoryWrapper* arg)
		{
			return ((::System::Boolean(*)(ItemCategoryWrapper*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMCATEGORYWRAPPER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMCATEGORYWRAPPER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMCATEGORYWRAPPER_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean IsMatch(::MX::Data::Excel::ItemExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::ItemExcel*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMCATEGORYWRAPPER_ISMATCH_OFFSET))(arg, nullptr);
		}

	};

