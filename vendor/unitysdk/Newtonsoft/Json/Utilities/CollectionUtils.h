#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_ISNULLOREMPTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_ISDICTIONARYTYPE_OFFSET UNITYSDK_OFFSET(0x949CA60)
#define NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_RESOLVEENUMERABLECOLLECTIONCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x949CD20)
#define NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_RESOLVEENUMERABLECOLLECTIONCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x949CE30)
#define NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_ADDDISTINCT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_ADDDISTINCT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_CONTAINSVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_ADDRANGEDISTINCT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_INDEXOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_CONTAINS_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_INDEXOFREFERENCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_FASTREVERSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_GETDIMENSIONS_OFFSET UNITYSDK_OFFSET(0x949D170)
#define NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_COPYFROMJAGGEDTOMULTIDIMENSIONALARRAY_OFFSET UNITYSDK_OFFSET(0x949D450)
#define NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_JAGGEDARRAYGETVALUE_OFFSET UNITYSDK_OFFSET(0x949D6F0)
#define NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_TOMULTIDIMENSIONALARRAY_OFFSET UNITYSDK_OFFSET(0x949D890)
#define NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_ARRAYEMPTY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int CollectionUtils_TypeDefinitionIndex = 31813;

	class CollectionUtils : public Il2CppObject
	{
	public:
		::System::Boolean IsNullOrEmpty(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_ISNULLOREMPTY_OFFSET))(arg, nullptr);
		}

		::System::Void AddRange(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_ADDRANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsDictionaryType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_ISDICTIONARYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Reflection::ConstructorInfo* ResolveEnumerableCollectionConstructor(::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Reflection::ConstructorInfo*(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_RESOLVEENUMERABLECOLLECTIONCONSTRUCTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Reflection::ConstructorInfo* ResolveEnumerableCollectionConstructor(::System::Type* arg, ::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Reflection::ConstructorInfo*(*)(::System::Type*, ::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_RESOLVEENUMERABLECOLLECTIONCONSTRUCTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean AddDistinct(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_ADDDISTINCT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean AddDistinct(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_ADDDISTINCT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean ContainsValue(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_CONTAINSVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean AddRangeDistinct(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_ADDRANGEDISTINCT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 IndexOf(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_INDEXOF_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Contains(Il2CppObject* arg, Il2CppObject* arg, ::System::Collections::IEqualityComparer* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::System::Collections::IEqualityComparer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_CONTAINS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 IndexOfReference(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_INDEXOFREFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FastReverse(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_FASTREVERSE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetDimensions(::System::Collections::IList* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Collections::IList*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_GETDIMENSIONS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CopyFromJaggedToMultidimensionalArray(::System::Collections::IList* arg, ::System::Array* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Collections::IList*, ::System::Array*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_COPYFROMJAGGEDTOMULTIDIMENSIONALARRAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* JaggedArrayGetValue(::System::Collections::IList* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::System::Collections::IList*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_JAGGEDARRAYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Array* ToMultidimensionalArray(::System::Collections::IList* arg, ::System::Type* arg, ::System::Int32 arg)
		{
			return (return (::System::Array*(*)(::System::Collections::IList*, ::System::Type*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_TOMULTIDIMENSIONALARRAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ArrayEmpty()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_ARRAYEMPTY_OFFSET))(nullptr);
		}

	};
}

