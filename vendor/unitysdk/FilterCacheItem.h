#pragma once
#include "unitysdk.h"

#define FILTERCACHEITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B73280)
#define FILTERCACHEITEM_ISVALID_OFFSET UNITYSDK_OFFSET(0x9B72B40)

	inline static constexpr unsigned int FilterCacheItem_TypeDefinitionIndex = 29518;

	class FilterCacheItem : public Il2CppObject
	{
	public:
		::System::ComponentModel::Design::ITypeDescriptorFilterService* _filterService; // 0x10
		::System::Collections::ICollection* FilteredMembers; // 0x18

		::System::Void .ctor(::System::ComponentModel::Design::ITypeDescriptorFilterService* arg, ::System::Collections::ICollection* arg)
		{
			((::System::Void(*)(::System::ComponentModel::Design::ITypeDescriptorFilterService*, ::System::Collections::ICollection*, ::PVOID))((::PBYTE)hIl2Cpp + FILTERCACHEITEM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsValid(::System::ComponentModel::Design::ITypeDescriptorFilterService* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::Design::ITypeDescriptorFilterService*, ::PVOID))((::PBYTE)hIl2Cpp + FILTERCACHEITEM_ISVALID_OFFSET))(arg, nullptr);
		}

	};

