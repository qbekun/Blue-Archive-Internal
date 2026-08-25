#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_LINQ_IJENUMERABLE`1_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int IJEnumerable`1_TypeDefinitionIndex = 32010;

	class IJEnumerable`1 : public Il2CppObject
	{
	public:
		Il2CppObject* get_Item(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_IJENUMERABLE`1_GET_ITEM_OFFSET))(arg, nullptr);
		}

	};
}

