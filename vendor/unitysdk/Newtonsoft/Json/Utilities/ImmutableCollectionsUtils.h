#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_UTILITIES_IMMUTABLECOLLECTIONSUTILS_TRYBUILDIMMUTABLEFORARRAYCONTRACT_OFFSET UNITYSDK_OFFSET(0x94AB4B0)
#define NEWTONSOFT_JSON_UTILITIES_IMMUTABLECOLLECTIONSUTILS_TRYBUILDIMMUTABLEFORDICTIONARYCONTRACT_OFFSET UNITYSDK_OFFSET(0x94AB9A0)
#define NEWTONSOFT_JSON_UTILITIES_IMMUTABLECOLLECTIONSUTILS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x94ABF10)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ImmutableCollectionsUtils_TypeDefinitionIndex = 31864;

	class ImmutableCollectionsUtils : public Il2CppObject
	{
	public:
		::System::String* ImmutableListGenericInterfaceTypeName; // 0x0
		::System::String* ImmutableQueueGenericInterfaceTypeName; // 0x0
		::System::String* ImmutableStackGenericInterfaceTypeName; // 0x0
		::System::String* ImmutableSetGenericInterfaceTypeName; // 0x0
		::System::String* ImmutableArrayTypeName; // 0x0
		::System::String* ImmutableArrayGenericTypeName; // 0x0
		::System::String* ImmutableListTypeName; // 0x0
		::System::String* ImmutableListGenericTypeName; // 0x0
		::System::String* ImmutableQueueTypeName; // 0x0
		::System::String* ImmutableQueueGenericTypeName; // 0x0
		::System::String* ImmutableStackTypeName; // 0x0
		::System::String* ImmutableStackGenericTypeName; // 0x0
		::System::String* ImmutableSortedSetTypeName; // 0x0
		::System::String* ImmutableSortedSetGenericTypeName; // 0x0
		::System::String* ImmutableHashSetTypeName; // 0x0
		::System::String* ImmutableHashSetGenericTypeName; // 0x0
		Il2CppObject* ArrayContractImmutableCollectionDefinitions; // 0x0
		::System::String* ImmutableDictionaryGenericInterfaceTypeName; // 0x0
		::System::String* ImmutableDictionaryTypeName; // 0x0
		::System::String* ImmutableDictionaryGenericTypeName; // 0x0
		::System::String* ImmutableSortedDictionaryTypeName; // 0x0
		::System::String* ImmutableSortedDictionaryGenericTypeName; // 0x0
		Il2CppObject* DictionaryContractImmutableCollectionDefinitions; // 0x8

		::System::Boolean TryBuildImmutableForArrayContract(::System::Type* arg, ::System::Type* arg, ::System::Type&* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Type*, ::System::Type&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_IMMUTABLECOLLECTIONSUTILS_TRYBUILDIMMUTABLEFORARRAYCONTRACT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryBuildImmutableForDictionaryContract(::System::Type* arg, ::System::Type* arg, ::System::Type* arg, ::System::Type&* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Type*, ::System::Type*, ::System::Type&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_IMMUTABLECOLLECTIONSUTILS_TRYBUILDIMMUTABLEFORDICTIONARYCONTRACT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_IMMUTABLECOLLECTIONSUTILS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

