#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_LINQ_EXTENSIONS_ANCESTORS_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_EXTENSIONS_ANCESTORSANDSELF_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_EXTENSIONS_DESCENDANTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_EXTENSIONS_DESCENDANTSANDSELF_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_EXTENSIONS_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x94F5760)
#define NEWTONSOFT_JSON_LINQ_EXTENSIONS_VALUES_OFFSET UNITYSDK_OFFSET(0x94F58B0)
#define NEWTONSOFT_JSON_LINQ_EXTENSIONS_VALUES_OFFSET UNITYSDK_OFFSET(0x94F5970)
#define NEWTONSOFT_JSON_LINQ_EXTENSIONS_VALUES_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_EXTENSIONS_VALUES_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_EXTENSIONS_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_EXTENSIONS_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_EXTENSIONS_VALUES_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_EXTENSIONS_CHILDREN_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_EXTENSIONS_CHILDREN_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_EXTENSIONS_CONVERT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_EXTENSIONS_CONVERT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_EXTENSIONS_ASJENUMERABLE_OFFSET UNITYSDK_OFFSET(0x94F5930)
#define NEWTONSOFT_JSON_LINQ_EXTENSIONS_ASJENUMERABLE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int Extensions_TypeDefinitionIndex = 32009;

	class Extensions : public Il2CppObject
	{
	public:
		Il2CppObject* Ancestors(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_EXTENSIONS_ANCESTORS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* AncestorsAndSelf(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_EXTENSIONS_ANCESTORSANDSELF_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Descendants(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_EXTENSIONS_DESCENDANTS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* DescendantsAndSelf(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_EXTENSIONS_DESCENDANTSANDSELF_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Properties(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_EXTENSIONS_PROPERTIES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Values(Il2CppObject* arg, ::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_EXTENSIONS_VALUES_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Values(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_EXTENSIONS_VALUES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Values(Il2CppObject* arg, ::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_EXTENSIONS_VALUES_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Values(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_EXTENSIONS_VALUES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Value(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_EXTENSIONS_VALUE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Value(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_EXTENSIONS_VALUE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Values(Il2CppObject* arg, ::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_EXTENSIONS_VALUES_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Children(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_EXTENSIONS_CHILDREN_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Children(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_EXTENSIONS_CHILDREN_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Convert(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_EXTENSIONS_CONVERT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Convert(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_EXTENSIONS_CONVERT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* AsJEnumerable(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_EXTENSIONS_ASJENUMERABLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* AsJEnumerable(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_EXTENSIONS_ASJENUMERABLE_OFFSET))(arg, nullptr);
		}

	};
}

