#pragma once
#include "unitysdk.h"

class CraftFilterOption;
namespace FlatData { class Tag; }
class CraftFilterOptionWrapper;
namespace MX::Data::Excel { class ItemExcel; }
namespace FlatData { class ItemCategory; }

#define CRAFTFILTEROPTIONWRAPPER_GET_SUBCATEGORYSTRING_OFFSET UNITYSDK_OFFSET(0x1FCDC60)
#define CRAFTFILTEROPTIONWRAPPER_GET_ISMATERIALSUBCATEGORY_OFFSET UNITYSDK_OFFSET(0x1FCDD00)
#define CRAFTFILTEROPTIONWRAPPER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FCDD10)
#define CRAFTFILTEROPTIONWRAPPER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FCDD20)
#define CRAFTFILTEROPTIONWRAPPER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FCDD40)
#define CRAFTFILTEROPTIONWRAPPER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FCDDC0)
#define CRAFTFILTEROPTIONWRAPPER_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1FCDE30)
#define CRAFTFILTEROPTIONWRAPPER_AREENUMNAMESEQUAL_OFFSET UNITYSDK_OFFSET(0x1FCDFF0)

	inline static constexpr unsigned int CraftFilterOptionWrapper_TypeDefinitionIndex = 2998;

	class CraftFilterOptionWrapper : public Il2CppObject
	{
	public:
		CraftFilterOption* Category; // 0x10
		::FlatData::Tag* SubCategory; // 0x14

		::System::String* get_SubCategoryString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTFILTEROPTIONWRAPPER_GET_SUBCATEGORYSTRING_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMaterialSubCategory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTFILTEROPTIONWRAPPER_GET_ISMATERIALSUBCATEGORY_OFFSET))(nullptr);
		}

		::System::Boolean Equals(CraftFilterOption* arg)
		{
			return ((::System::Boolean(*)(CraftFilterOption*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTFILTEROPTIONWRAPPER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(CraftFilterOptionWrapper* arg)
		{
			return ((::System::Boolean(*)(CraftFilterOptionWrapper*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTFILTEROPTIONWRAPPER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTFILTEROPTIONWRAPPER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTFILTEROPTIONWRAPPER_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean IsMatch(::MX::Data::Excel::ItemExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::ItemExcel*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTFILTEROPTIONWRAPPER_ISMATCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean AreEnumNamesEqual(::FlatData::ItemCategory* arg, CraftFilterOption* arg2)
		{
			return ((::System::Boolean(*)(::FlatData::ItemCategory*, CraftFilterOption*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTFILTEROPTIONWRAPPER_AREENUMNAMESEQUAL_OFFSET))(arg, arg2, nullptr);
		}

	};

