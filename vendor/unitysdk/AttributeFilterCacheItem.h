#pragma once
#include "unitysdk.h"

#define ATTRIBUTEFILTERCACHEITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B72AF0)
#define ATTRIBUTEFILTERCACHEITEM_ISVALID_OFFSET UNITYSDK_OFFSET(0x9B72A90)

	inline static constexpr unsigned int AttributeFilterCacheItem_TypeDefinitionIndex = 29517;

	class AttributeFilterCacheItem : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _filter; // 0x10
		::System::Collections::ICollection* FilteredMembers; // 0x18

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Collections::ICollection* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Collections::ICollection*, ::PVOID))((::PBYTE)hIl2Cpp + ATTRIBUTEFILTERCACHEITEM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsValid(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ATTRIBUTEFILTERCACHEITEM_ISVALID_OFFSET))(arg, nullptr);
		}

	};

