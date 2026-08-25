#pragma once
#include "unitysdk.h"

#define COLLECTIONFIXUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x99EC350)
#define COLLECTIONFIXUP_GET_CALLBACK_OFFSET UNITYSDK_OFFSET(0x99EC3B0)
#define COLLECTIONFIXUP_GET_COLLECTION_OFFSET UNITYSDK_OFFSET(0x99EC3C0)
#define COLLECTIONFIXUP_GET_ID_OFFSET UNITYSDK_OFFSET(0x99EC3D0)
#define COLLECTIONFIXUP_GET_COLLECTIONITEMS_OFFSET UNITYSDK_OFFSET(0x99EC3E0)
#define COLLECTIONFIXUP_SET_COLLECTIONITEMS_OFFSET UNITYSDK_OFFSET(0x99EC3F0)

	inline static constexpr unsigned int CollectionFixup_TypeDefinitionIndex = 27908;

	class CollectionFixup : public Il2CppObject
	{
	public:
		::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* callback; // 0x10
		::System::Object* collection; // 0x18
		::System::Object* collectionItems; // 0x20
		::System::String* id; // 0x28

		::System::Void .ctor(::System::Object* arg, ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONFIXUP_.CTOR_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* get_Callback()
		{
			return (return (::System::Xml::Serialization::XmlSerializationCollectionFixupCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONFIXUP_GET_CALLBACK_OFFSET))(nullptr);
		}

		::System::Object* get_Collection()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONFIXUP_GET_COLLECTION_OFFSET))(nullptr);
		}

		::System::Object* get_Id()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONFIXUP_GET_ID_OFFSET))(nullptr);
		}

		::System::Object* get_CollectionItems()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONFIXUP_GET_COLLECTIONITEMS_OFFSET))(nullptr);
		}

		::System::Void set_CollectionItems(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONFIXUP_SET_COLLECTIONITEMS_OFFSET))(arg, nullptr);
		}

	};

