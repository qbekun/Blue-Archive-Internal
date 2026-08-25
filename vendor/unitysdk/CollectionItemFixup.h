#pragma once
#include "unitysdk.h"

#define COLLECTIONITEMFIXUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x99EA2B0)
#define COLLECTIONITEMFIXUP_GET_COLLECTION_OFFSET UNITYSDK_OFFSET(0x99EC4C0)
#define COLLECTIONITEMFIXUP_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x99EC4D0)
#define COLLECTIONITEMFIXUP_GET_ID_OFFSET UNITYSDK_OFFSET(0x99EC4E0)

	inline static constexpr unsigned int CollectionItemFixup_TypeDefinitionIndex = 27910;

	class CollectionItemFixup : public Il2CppObject
	{
	public:
		::System::Array* list; // 0x10
		::System::Int32 index; // 0x18
		::System::String* id; // 0x20

		::System::Void .ctor(::System::Array* arg, ::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONITEMFIXUP_.CTOR_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Array* get_Collection()
		{
			return (return (::System::Array*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONITEMFIXUP_GET_COLLECTION_OFFSET))(nullptr);
		}

		::System::Int32 get_Index()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONITEMFIXUP_GET_INDEX_OFFSET))(nullptr);
		}

		::System::String* get_Id()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONITEMFIXUP_GET_ID_OFFSET))(nullptr);
		}

	};

